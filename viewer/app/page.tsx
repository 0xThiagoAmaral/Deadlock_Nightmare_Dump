"use client";

import React, { useEffect, useState, useRef } from 'react';
import { Canvas, useFrame } from '@react-three/fiber';
import { OrbitControls, PerspectiveCamera, Stars, Text, Box } from '@react-three/drei';
import * as THREE from 'three';
import { Terminal, Shield, Activity, Code, Radar as RadarIcon } from 'lucide-react';

// --- Estado Global (Simples) ---
interface Entity {
  index: number;
  health: number;
  team: number;
  pos: [number, number, number];
  hero_id?: number;
}

// --- Componentes 3D ---
const EntityCapsule = ({ entity, isSelected, onSelect }: { entity: Entity, isSelected: bool, onSelect: () => void }) => {
  const color = entity.team === 2 ? "#ff0044" : "#00ffcc"; // Vermelho (Inimigo) vs Cyan (Aliado)
  
  return (
    <group position={[entity.pos[0] / 100, entity.pos[2] / 100, -entity.pos[1] / 100]} onClick={onSelect}>
      <mesh>
        <capsuleGeometry args={[0.5, 1.5, 4, 8]} />
        <meshBasicMaterial color={color} wireframe />
      </mesh>
      {isSelected && (
        <mesh scale={[1.2, 1.2, 1.2]}>
          <capsuleGeometry args={[0.5, 1.5, 4, 8]} />
          <meshBasicMaterial color="white" wireframe transparent opacity={0.3} />
        </mesh>
      )}
      <Text position={[0, 2, 0]} fontSize={0.3} color="white">
        {`HP: ${entity.health}`}
      </Text>
    </group>
  );
};

export default function NightmareStudio() {
  const [entities, setEntities] = useState<Entity[]>([]);
  const [selectedEntity, setSelectedEntity] = useState<Entity | null>(null);
  const [wsStatus, setWsStatus] = useState<'disconnected' | 'connecting' | 'connected'>('connecting');

  useEffect(() => {
    const ws = new WebSocket('ws://127.0.0.1:8080');

    ws.onopen = () => setWsStatus('connected');
    ws.onclose = () => setWsStatus('disconnected');
    ws.onmessage = (event) => {
      const data = JSON.parse(event.data);
      if (data.type === 'live_data') {
        setEntities(data.entities);
      }
    };

    return () => ws.close();
  }, []);

  return (
    <main className="flex h-screen w-screen bg-[#050505] text-white overflow-hidden font-mono">
      {/* Sidebar - Radar 3D */}
      <div className="flex-1 relative border-r border-[#1a1a1a]">
        <div className="absolute top-4 left-4 z-10 flex items-center gap-2 bg-black/60 p-2 rounded border border-purple-500/30 backdrop-blur-md">
          <RadarIcon className="text-purple-400 animate-pulse" />
          <span className="text-xs uppercase tracking-widest">Live 3D Radar</span>
          <div className={`w-2 h-2 rounded-full ${wsStatus === 'connected' ? 'bg-green-500' : 'bg-red-500'}`} />
        </div>

        <Canvas>
          <PerspectiveCamera makeDefault position={[50, 50, 50]} />
          <OrbitControls makeDefault />
          <Stars radius={100} depth={50} count={5000} factor={4} saturation={0} fade speed={1} />
          <gridHelper args={[200, 50, "#222", "#111"]} rotation={[0, 0, 0]} />
          <ambientLight intensity={0.5} />
          
          {entities.map(ent => (
            <EntityCapsule 
              key={ent.index} 
              entity={ent} 
              isSelected={selectedEntity?.index === ent.index}
              onSelect={() => setSelectedEntity(ent)}
            />
          ))}
        </Canvas>
      </div>

      {/* Control Panel */}
      <div className="w-[400px] flex flex-col border-l border-[#1a1a1a] bg-[#080808]">
        {/* Header */}
        <div className="p-6 border-b border-[#1a1a1a] bg-gradient-to-r from-purple-900/10 to-red-900/10">
          <h1 className="text-2xl font-black italic tracking-tighter text-transparent bg-clip-text bg-gradient-to-r from-purple-400 to-red-500">
            NIGHTMARE STUDIO
          </h1>
          <p className="text-[10px] text-gray-500 mt-1 uppercase tracking-widest">Advanced S2 Cheat Dev Suite</p>
        </div>

        {/* Entity Inspector */}
        <div className="flex-1 p-6 overflow-y-auto space-y-6">
          <section>
            <div className="flex items-center gap-2 mb-4 text-purple-400">
              <Shield size={16} />
              <h2 className="text-xs uppercase font-bold tracking-widest">Entity Inspector</h2>
            </div>
            
            {selectedEntity ? (
              <div className="bg-[#111] p-4 rounded border border-purple-500/20 space-y-3 shadow-2xl shadow-purple-900/10">
                <div className="flex justify-between text-xs">
                  <span className="text-gray-500">Index</span>
                  <span>{selectedEntity.index}</span>
                </div>
                <div className="flex justify-between text-xs">
                  <span className="text-gray-500">Health</span>
                  <span className="text-green-400 font-bold">{selectedEntity.health} HP</span>
                </div>
                <div className="flex justify-between text-xs">
                  <span className="text-gray-500">Team</span>
                  <span>{selectedEntity.team}</span>
                </div>
                <div className="flex justify-between text-xs">
                  <span className="text-gray-500">Hero ID</span>
                  <span className="text-purple-400 font-bold">{selectedEntity.hero_id || "Unknown"}</span>
                </div>
              </div>
            ) : (
              <div className="text-center py-10 border border-dashed border-gray-800 rounded text-gray-600 text-xs italic">
                Select an entity in the 3D Radar to inspect
              </div>
            )}
          </section>

          <section>
            <div className="flex items-center gap-2 mb-4 text-red-400">
              <Code size={16} />
              <h2 className="text-xs uppercase font-bold tracking-widest">Code Generator (C++)</h2>
            </div>
            
            {selectedEntity && (
              <div className="relative group">
                <div className="absolute -inset-0.5 bg-gradient-to-r from-purple-600 to-red-600 rounded blur opacity-20 group-hover:opacity-40 transition duration-1000"></div>
                <pre className="relative bg-black p-4 rounded text-[11px] text-gray-300 border border-gray-800 overflow-x-auto">
                  <code>{`// Read Entity HP
uint32_t hp = mem.Read<uint32_t>(ent_ptr + 0x354);

// Read Position
Vector3 pos = mem.Read<Vector3>(ent_ptr + 0x1090);

// Hero ID Check
if (mem.Read<uint32_t>(ent_ptr + 0x600) == ${selectedEntity.hero_id}) {
    // Logic for hero...
}`}</code>
                </pre>
              </div>
            )}
          </section>
        </div>

        {/* Footer Stats */}
        <div className="p-4 border-t border-[#1a1a1a] flex justify-between items-center text-[10px] text-gray-600">
          <div className="flex items-center gap-2">
            <Activity size={12} className="text-green-500" />
            <span>Entities Active: {entities.length}</span>
          </div>
          <span>v2.0 (Industrial)</span>
        </div>
      </div>
    </main>
  );
}
