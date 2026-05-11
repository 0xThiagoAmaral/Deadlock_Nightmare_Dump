use tokio::net::TcpListener;
use tokio_tungstenite::accept_async;
use futures_util::{StreamExt, SinkExt};
use serde_json::json;
use std::sync::Arc;
use tokio::sync::Mutex;
use std::time::Duration;

use crate::mem::Process;

pub async fn start_live_bridge(proc: Arc<Process>, client_base: usize) {
    let addr = "127.0.0.1:8080";
    let listener = TcpListener::bind(&addr).await.expect("Failed to bind");
    println!("[+] Nightmare Studio Bridge ativa em ws://{}", addr);

    while let Ok((stream, _)) = listener.accept().await {
        let proc = Arc::clone(&proc);
        tokio::spawn(async move {
            let mut ws_stream = accept_async(stream).await.expect("Error during ws handshake");
            println!("[*] Cliente conectado ao Nightmare Studio");

            // Loop de leitura de memoria (Broadcast 60 FPS aprox)
            let mut interval = tokio::time::interval(Duration::from_millis(16));
            loop {
                interval.tick().await;

                // Aqui extraímos os dados vivos
                // dwEntityList: 0x31b3138
                let entity_list: usize = proc.read(client_base + 0x31b3138);
                let mut entities = Vec::new();

                for i in 0..128 { // Primeiros 128 slots
                    let entry_ptr: usize = proc.read(entity_list + (i * 0x78));
                    if entry_ptr == 0 { continue; }

                    let pawn_ptr: usize = proc.read(entry_ptr);
                    if pawn_ptr == 0 { continue; }

                    let health: i32 = proc.read(pawn_ptr + 0x354);
                    let team: i32 = proc.read(pawn_ptr + 0x3f3);
                    let pos: [f32; 3] = proc.read(pawn_ptr + 0x1090); // m_vOldOrigin
                    let hero_id: u32 = proc.read(pawn_ptr + 0x600); // m_HeroID

                    entities.push(json!({
                        "index": i,
                        "health": health,
                        "team": team,
                        "pos": pos,
                        "hero_id": hero_id
                    }));
                }

                let packet = json!({
                    "type": "live_data",
                    "entities": entities
                });

                if ws_stream.send(tokio_tungstenite::tungstenite::Message::Text(packet.to_string())).await.is_err() {
                    break;
                }
            }
            println!("[!] Cliente desconectado");
        });
    }
}
