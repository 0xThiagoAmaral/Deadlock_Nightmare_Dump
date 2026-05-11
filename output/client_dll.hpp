// Generated via Nightmare Oracle
#pragma once
#include <cstddef>

namespace deadlock_dumper {
  namespace client_dll {
    namespace AbilityResource_t {
      constexpr std::ptrdiff_t m_flCurrentValue = 0x8;
      constexpr std::ptrdiff_t m_flPrevRegenRate = 0xc;
      constexpr std::ptrdiff_t m_flMaxValue = 0x10;
      constexpr std::ptrdiff_t m_flLatchTime = 0x14;
      constexpr std::ptrdiff_t m_flLatchValue = 0x18;
    }
    namespace AbilityUpgradeState_t {
      constexpr std::ptrdiff_t m_ItemID = 0x30;
      constexpr std::ptrdiff_t m_nUpgradeInfo = 0x34;
    }
    namespace ActiveModelConfig_t {
      constexpr std::ptrdiff_t m_Handle = 0x30;
      constexpr std::ptrdiff_t m_Name = 0x38;
      constexpr std::ptrdiff_t m_AssociatedEntities = 0x40;
      constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58;
    }
    namespace AirheartLockOnTarget_t {
      constexpr std::ptrdiff_t m_hTarget = 0x30;
      constexpr std::ptrdiff_t m_nMarks = 0x34;
    }
    namespace CAI_BaseNPCVData {
      constexpr std::ptrdiff_t m_sModelName = 0x28;
      constexpr std::ptrdiff_t m_hFootstepSounds = 0x108;
      constexpr std::ptrdiff_t m_vecNavLinkMovementNames = 0x110;
      constexpr std::ptrdiff_t m_flAimConeAngle = 0x128;
      constexpr std::ptrdiff_t m_nMaxHealth = 0x130;
      constexpr std::ptrdiff_t m_vecIntrinsicModifiers = 0x138;
      constexpr std::ptrdiff_t m_statusEffectMap = 0x150;
      constexpr std::ptrdiff_t m_vecAttachments = 0x158;
      constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x170;
      constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x180;
      constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x190;
      constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x1a0;
      constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x1b0;
      constexpr std::ptrdiff_t m_nMaxAdditionalAmmoBalancingShots = 0x1c0;
      constexpr std::ptrdiff_t m_bTakesDamage = 0x1d0;
      constexpr std::ptrdiff_t m_strDamagedEffect = 0x1d8;
      constexpr std::ptrdiff_t m_bLightsFiresWhenDamaged = 0x2b8;
      constexpr std::ptrdiff_t m_nRagdollHealth = 0x2bc;
      constexpr std::ptrdiff_t m_flImpactEnergyScale = 0x2c0;
      constexpr std::ptrdiff_t m_bAllowNonZUpMovement = 0x2c4;
      constexpr std::ptrdiff_t m_bUseDynamicCollisionHull = 0x2c5;
      constexpr std::ptrdiff_t m_bRequestCapsuleCollision = 0x2c6;
      constexpr std::ptrdiff_t m_flCapsuleRadiusOverride = 0x2c8;
      constexpr std::ptrdiff_t m_flCapsuleHeightOverride = 0x2cc;
      constexpr std::ptrdiff_t m_vecActionDesiredShared = 0x2d0;
      constexpr std::ptrdiff_t m_sPlayerKilledNpcSound = 0x2e8;
      constexpr std::ptrdiff_t m_sCustomDeathHandshake = 0x2f8;
      constexpr std::ptrdiff_t m_sDefaultMovementSettings = 0x300;
      constexpr std::ptrdiff_t m_mappedMovementSettings = 0x308;
      constexpr std::ptrdiff_t m_bEnableCodeDrivenAnimgraphMovement = 0x320;
      constexpr std::ptrdiff_t m_bEnableAnimgraphTagDrivenStrafing = 0x321;
      constexpr std::ptrdiff_t m_flMassOverride = 0x324;
      constexpr std::ptrdiff_t m_flThreatTemperature = 0x328;
      constexpr std::ptrdiff_t m_flFlashpoint = 0x32c;
    }
    namespace CAI_CitadelNPCVData {
      constexpr std::ptrdiff_t m_mapBoundAbilities = 0x330;
      constexpr std::ptrdiff_t m_flSightRangePlayers = 0x358;
      constexpr std::ptrdiff_t m_flSightRangeNPCs = 0x35c;
      constexpr std::ptrdiff_t m_MeleeAnimName = 0x360;
      constexpr std::ptrdiff_t m_flMeleeAttemptRange = 0x368;
      constexpr std::ptrdiff_t m_flMeleeHitRange = 0x36c;
      constexpr std::ptrdiff_t m_MeleeAttackPoints = 0x370;
      constexpr std::ptrdiff_t m_flMaxHealthBarDrawDistance = 0x388;
      constexpr std::ptrdiff_t m_flWalkSpeed = 0x38c;
      constexpr std::ptrdiff_t m_flRunSpeed = 0x390;
      constexpr std::ptrdiff_t m_flTurnRate = 0x394;
      constexpr std::ptrdiff_t m_flAcceleration = 0x398;
      constexpr std::ptrdiff_t m_flStepHeight = 0x39c;
      constexpr std::ptrdiff_t m_flJumpAnticipationTime = 0x3a0;
      constexpr std::ptrdiff_t m_BeamStartSound = 0x3a8;
      constexpr std::ptrdiff_t m_BeamStopSound = 0x3b8;
      constexpr std::ptrdiff_t m_BeamPointStartLoopSound = 0x3c8;
      constexpr std::ptrdiff_t m_BeamPointEndLoopSound = 0x3d8;
      constexpr std::ptrdiff_t m_BeamPointClosestLoopSound = 0x3e8;
      constexpr std::ptrdiff_t m_strAmbientLoopSound = 0x3f8;
      constexpr std::ptrdiff_t m_DeathSound = 0x408;
      constexpr std::ptrdiff_t m_strLastHitSound = 0x418;
      constexpr std::ptrdiff_t m_bPlayLastHitSound = 0x428;
      constexpr std::ptrdiff_t m_flLastHitSoundWindowTime = 0x42c;
      constexpr std::ptrdiff_t m_MeleeHitSound = 0x430;
      constexpr std::ptrdiff_t m_MeleeHitPlayerSound = 0x440;
      constexpr std::ptrdiff_t m_sAmberModelName = 0x450;
      constexpr std::ptrdiff_t m_sSapphireModelName = 0x530;
      constexpr std::ptrdiff_t m_sDefaultMaterialGroupName = 0x610;
      constexpr std::ptrdiff_t m_sEnemyMaterialGroupName = 0x618;
      constexpr std::ptrdiff_t m_sTeam1MaterialGroupName = 0x620;
      constexpr std::ptrdiff_t m_sTeam2MaterialGroupName = 0x628;
      constexpr std::ptrdiff_t m_MeleeSwingParticle = 0x630;
      constexpr std::ptrdiff_t m_MeleeActivateParticle = 0x710;
      constexpr std::ptrdiff_t m_flModelScale = 0x7f0;
      constexpr std::ptrdiff_t m_DeathParticle = 0x7f8;
      constexpr std::ptrdiff_t m_JumpParticle = 0x8d8;
      constexpr std::ptrdiff_t m_flOutlineRange = 0x9b8;
      constexpr std::ptrdiff_t m_flOutlineWidth = 0x9bc;
      constexpr std::ptrdiff_t m_bOutlineThroughWalls = 0x9c0;
      constexpr std::ptrdiff_t m_bOutlineWhenVisible = 0x9c1;
      constexpr std::ptrdiff_t m_bSuppressOtherOutlinesWhenVisible = 0x9c2;
      constexpr std::ptrdiff_t m_HealthBarParticle = 0x9c8;
      constexpr std::ptrdiff_t m_sHealthBarAttachment = 0xaa8;
      constexpr std::ptrdiff_t m_HealthBarColorFriend = 0xab0;
      constexpr std::ptrdiff_t m_HealthBarColorEnemy = 0xab4;
      constexpr std::ptrdiff_t m_HealthBarColorTeam1 = 0xab8;
      constexpr std::ptrdiff_t m_HealthBarColorTeam2 = 0xabc;
      constexpr std::ptrdiff_t m_HealthBarColorTeamNeutral = 0xac0;
      constexpr std::ptrdiff_t m_flMeleeTargetRadius = 0xac4;
      constexpr std::ptrdiff_t m_flHealthBarOffset = 0xac8;
      constexpr std::ptrdiff_t m_bSpawnBreakablesOnDeath = 0xacc;
      constexpr std::ptrdiff_t m_flBreakableForceScale = 0xad0;
      constexpr std::ptrdiff_t m_flPhysicsImpulseMultiplier = 0xad4;
      constexpr std::ptrdiff_t m_flBeamWeaponWidth = 0xad8;
      constexpr std::ptrdiff_t m_flBeamTurnRate = 0xadc;
      constexpr std::ptrdiff_t m_BeamWeaponParticle = 0xae0;
      constexpr std::ptrdiff_t m_WeaponInfo = 0xbc0;
    }
    namespace CAI_NPC_NecroSkeleVData {
      constexpr std::ptrdiff_t m_flMeleeDuration = 0x1338;
      constexpr std::ptrdiff_t m_flMeleeFireDelay = 0x133c;
      constexpr std::ptrdiff_t m_flNonPlayerDamageResist = 0x1340;
      constexpr std::ptrdiff_t m_ExplodeModifier = 0x1348;
      constexpr std::ptrdiff_t m_DamageSlowModifier = 0x1358;
      constexpr std::ptrdiff_t m_flHeroLockRange = 0x1368;
      constexpr std::ptrdiff_t m_flHeroLockBreakRange = 0x136c;
      constexpr std::ptrdiff_t m_vecTargettingTiers = 0x1370;
    }
    namespace CAI_NPC_TrooperVData {
      constexpr std::ptrdiff_t m_TrooperType = 0x1338;
      constexpr std::ptrdiff_t m_flNearDeathDuration = 0x133c;
      constexpr std::ptrdiff_t m_flFlySpeed = 0x1340;
      constexpr std::ptrdiff_t m_flFlyHeight = 0x1344;
      constexpr std::ptrdiff_t m_flMeleeDamage = 0x1348;
      constexpr std::ptrdiff_t m_flMeleeDuration = 0x134c;
      constexpr std::ptrdiff_t m_flMeleeChargeRange = 0x1350;
      constexpr std::ptrdiff_t m_flHealthBarOffsetDucking = 0x1354;
      constexpr std::ptrdiff_t m_VSPlayer = 0x1358;
      constexpr std::ptrdiff_t m_VSTrooper = 0x136c;
      constexpr std::ptrdiff_t m_VSGuardian = 0x1380;
      constexpr std::ptrdiff_t m_VSWalker = 0x1394;
      constexpr std::ptrdiff_t m_VSWatcher = 0x13a8;
      constexpr std::ptrdiff_t m_VSShrine = 0x13bc;
      constexpr std::ptrdiff_t m_VSPatron = 0x13d0;
      constexpr std::ptrdiff_t m_VSPatronPhase2 = 0x13e4;
      constexpr std::ptrdiff_t m_flDPSPctGrowthPerMinute = 0x13f8;
      constexpr std::ptrdiff_t m_bBossWeaponEnabled = 0x13fc;
      constexpr std::ptrdiff_t m_BossWeapon = 0x1400;
      constexpr std::ptrdiff_t m_BossAttackParticle = 0x1b78;
      constexpr std::ptrdiff_t m_LastHitParticle = 0x1c58;
      constexpr std::ptrdiff_t m_TargetingLaserParticle = 0x1d38;
      constexpr std::ptrdiff_t m_TargetingEyeFlashParticle = 0x1e18;
      constexpr std::ptrdiff_t m_sZiplineContainerBreakFromDamageParticle = 0x1ef8;
      constexpr std::ptrdiff_t m_sZiplineContainerBreakFromLandingParticle = 0x1fd8;
      constexpr std::ptrdiff_t m_MedicHealActiveParticle = 0x20b8;
      constexpr std::ptrdiff_t m_HeadHealthChangeAmberParticle = 0x2198;
      constexpr std::ptrdiff_t m_HeadHealthChangeSapphireParticle = 0x2278;
      constexpr std::ptrdiff_t m_sPlayerLastHitSound = 0x2358;
      constexpr std::ptrdiff_t m_sCelebrationSound = 0x2368;
      constexpr std::ptrdiff_t m_sZiplineContainerBreakSound = 0x2378;
      constexpr std::ptrdiff_t m_NearDeathModifier = 0x2388;
      constexpr std::ptrdiff_t m_ShrinesDownBuffModifier = 0x2398;
      constexpr std::ptrdiff_t m_NpcOutOfCombatRegenModifier = 0x23a8;
    }
    namespace CAbilityAstroRifleVData {
      constexpr std::ptrdiff_t m_SelfModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1838;
    }
    namespace CAbilityBloodShardsVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1828;
    }
    namespace CAbilityBouncePadVData {
      constexpr std::ptrdiff_t m_BounceModifier = 0x1818;
      constexpr std::ptrdiff_t m_AllyBounceModifier = 0x1828;
      constexpr std::ptrdiff_t m_SpeedOnLandModifier = 0x1838;
      constexpr std::ptrdiff_t m_NoBounceModifier = 0x1848;
    }
    namespace CAbilityBullChargeVData {
      constexpr std::ptrdiff_t m_cameraSequenceImpact = 0x1818;
      constexpr std::ptrdiff_t m_ModifierTossAirControlLockout = 0x18a0;
      constexpr std::ptrdiff_t m_ModifierWeaponPowerIncrease = 0x18b0;
      constexpr std::ptrdiff_t m_ModifierChargeDragEnemy = 0x18c0;
      constexpr std::ptrdiff_t m_ModifierBullCharging = 0x18d0;
      constexpr std::ptrdiff_t m_SlowModifier = 0x18e0;
      constexpr std::ptrdiff_t m_WallImpactParticle = 0x18f0;
      constexpr std::ptrdiff_t m_strWallSlamSound = 0x19d0;
      constexpr std::ptrdiff_t m_strHitEnemySound = 0x19e0;
      constexpr std::ptrdiff_t m_flWallStunLookAheadDist = 0x19f0;
      constexpr std::ptrdiff_t m_flEndChargeVelocityScale = 0x19f4;
    }
    namespace CAbilityCadenceAnthemVData {
      constexpr std::ptrdiff_t m_AnthemAOEModifier = 0x1818;
    }
    namespace CAbilityCadenceCrescendoVData {
      constexpr std::ptrdiff_t m_CrescendoAOEModifier = 0x1818;
    }
    namespace CAbilityCadenceGrandFinaleVData {
      constexpr std::ptrdiff_t m_StageModel = 0x1818;
      constexpr std::ptrdiff_t m_flStageModelHeight = 0x18f8;
      constexpr std::ptrdiff_t m_flStageModelWidth = 0x18fc;
      constexpr std::ptrdiff_t m_flStageModelLength = 0x1900;
      constexpr std::ptrdiff_t m_flStageModelScale = 0x1904;
      constexpr std::ptrdiff_t m_GrandFinaleAOEModifier = 0x1908;
    }
    namespace CAbilityCadenceLullabyVData {
      constexpr std::ptrdiff_t m_SleepAOEModifier = 0x1818;
    }
    namespace CAbilityCadencePrimaryWeaponVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x19c0;
    }
    namespace CAbilityCadenceSilenceContraptionsVData {
      constexpr std::ptrdiff_t m_SilenceContraptionsModifier = 0x18a0;
    }
    namespace CAbilityCardTossVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_SummonedCard = 0x18f8;
      constexpr std::ptrdiff_t m_ClubCardTrail = 0x19d8;
      constexpr std::ptrdiff_t m_DiamondCardTrail = 0x1ab8;
      constexpr std::ptrdiff_t m_HeartCardTrail = 0x1b98;
      constexpr std::ptrdiff_t m_SpadeCardTrail = 0x1c78;
      constexpr std::ptrdiff_t m_JokerCardTrail = 0x1d58;
      constexpr std::ptrdiff_t m_strCardSummonSound = 0x1e38;
      constexpr std::ptrdiff_t m_strCardCastSound = 0x1e48;
      constexpr std::ptrdiff_t m_ClubModifier = 0x1e58;
      constexpr std::ptrdiff_t m_DiamondModifier = 0x1e68;
      constexpr std::ptrdiff_t m_flSummonedCardStartSideOffset = 0x1e78;
      constexpr std::ptrdiff_t m_flSummonedCardSideOffsetStep = 0x1e7c;
      constexpr std::ptrdiff_t m_flSummonedCardForwardOffset = 0x1e80;
      constexpr std::ptrdiff_t m_flSummonedCardVerticalOffset = 0x1e84;
      constexpr std::ptrdiff_t m_flSpadeWeight = 0x1e88;
      constexpr std::ptrdiff_t m_flClubWeight = 0x1e8c;
      constexpr std::ptrdiff_t m_flHeartWeight = 0x1e90;
      constexpr std::ptrdiff_t m_flDiamondWeight = 0x1e94;
      constexpr std::ptrdiff_t m_flJokerWeight = 0x1e98;
      constexpr std::ptrdiff_t m_flImprovedJokerWeight = 0x1e9c;
      constexpr std::ptrdiff_t m_vDefaultCardColor = 0x1ea0;
      constexpr std::ptrdiff_t m_vNextCardColor = 0x1eac;
      constexpr std::ptrdiff_t m_strNewCardActionName = 0x1eb8;
    }
    namespace CAbilityChargedShotVData {
      constexpr std::ptrdiff_t m_ChannelParticle = 0x1818;
      constexpr std::ptrdiff_t m_ChannelStartParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ShootParticle = 0x19d8;
    }
    namespace CAbilityChargedTackleVData {
      constexpr std::ptrdiff_t m_ChargePreviewParticle = 0x1818;
      constexpr std::ptrdiff_t m_ChargePrepareModifier = 0x18f8;
      constexpr std::ptrdiff_t m_ChargeActiveModifier = 0x1908;
      constexpr std::ptrdiff_t m_DragModifier = 0x1918;
      constexpr std::ptrdiff_t m_strHitSound = 0x1928;
    }
    namespace CAbilityChronoSwapVData {
      constexpr std::ptrdiff_t m_MultiSwapEffect = 0x1818;
      constexpr std::ptrdiff_t m_BubbleMoveModifier = 0x18f8;
      constexpr std::ptrdiff_t m_ShieldModifier = 0x1908;
    }
    namespace CAbilityCrackshotVData {
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplosionVictimParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ReadyParticle = 0x19d8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1ab8;
      constexpr std::ptrdiff_t m_CrackshotImmuneModifier = 0x1ac8;
      constexpr std::ptrdiff_t m_HeadShotVictimSound = 0x1ad8;
      constexpr std::ptrdiff_t m_HeadShotConfirmationSound = 0x1ae8;
      constexpr std::ptrdiff_t m_ReadySound = 0x1af8;
    }
    namespace CAbilityCrowdControlVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_SlowModifier = 0x18f8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1908;
    }
    namespace CAbilityDashVData {
      constexpr std::ptrdiff_t m_DashParticle = 0x1818;
      constexpr std::ptrdiff_t m_DownDashParticle = 0x18f8;
      constexpr std::ptrdiff_t m_WallJumpParticle = 0x19d8;
      constexpr std::ptrdiff_t m_strArriveSound = 0x1ab8;
      constexpr std::ptrdiff_t m_strStaminaDrainedSound = 0x1ac8;
      constexpr std::ptrdiff_t m_cameraSequenceGroundDashActivate = 0x1ad8;
      constexpr std::ptrdiff_t m_cameraSequenceAirDashActivate = 0x1b60;
      constexpr std::ptrdiff_t m_flMaxAngDiff = 0x1be8;
      constexpr std::ptrdiff_t m_flSlideCancelBlockerWindow = 0x1bec;
      constexpr std::ptrdiff_t m_flSlideLockoutTime = 0x1bf0;
      constexpr std::ptrdiff_t m_flGroundDashAirbornDrag = 0x1bf4;
      constexpr std::ptrdiff_t m_flGroundDashAirbornSpeedClamp = 0x1bf8;
      constexpr std::ptrdiff_t m_strGroundDashSound = 0x1c00;
      constexpr std::ptrdiff_t m_flAirDashEndVelocityScale = 0x1c10;
      constexpr std::ptrdiff_t m_flAirDashAccPct = 0x1c14;
      constexpr std::ptrdiff_t m_flDuringDrag = 0x1c18;
      constexpr std::ptrdiff_t m_flAirSpeedForMaxDrag = 0x1c1c;
      constexpr std::ptrdiff_t m_flAirSpeedForMinDrag = 0x1c20;
      constexpr std::ptrdiff_t m_flPostMaxDrag = 0x1c24;
      constexpr std::ptrdiff_t m_flPostDragDuration = 0x1c28;
      constexpr std::ptrdiff_t m_flDownwardAirDashSpeed = 0x1c2c;
      constexpr std::ptrdiff_t m_strAirDashSound = 0x1c30;
    }
    namespace CAbilityDistruptiveChargeVData {
      constexpr std::ptrdiff_t m_Particle = 0x1818;
      constexpr std::ptrdiff_t m_BuffModifier = 0x18f8;
    }
    namespace CAbilityDustStormVData {
      constexpr std::ptrdiff_t m_DustStormAura = 0x1818;
      constexpr std::ptrdiff_t m_GrenadeTrailModifier = 0x1828;
    }
    namespace CAbilityEmpowerBulletVData {
      constexpr std::ptrdiff_t m_EmpowerBulletModifier = 0x1818;
    }
    namespace CAbilityExplosiveBarrelVData {
      constexpr std::ptrdiff_t m_BarrelExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_MirvExplodeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_BarrelArmedParticle = 0x19d8;
      constexpr std::ptrdiff_t m_BarrelReadyToExplodeParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1b98;
      constexpr std::ptrdiff_t m_strMirvExplodeSound = 0x1ba8;
      constexpr std::ptrdiff_t m_strRiccochetSound = 0x1bb8;
      constexpr std::ptrdiff_t m_strBarrelSoundLp = 0x1bc8;
      constexpr std::ptrdiff_t m_strBarrelLaunchSound = 0x1bd8;
      constexpr std::ptrdiff_t m_strBarrelMeleedSound = 0x1be8;
      constexpr std::ptrdiff_t m_strBarrelArmedSound = 0x1bf8;
    }
    namespace CAbilityFealtyVData {
      constexpr std::ptrdiff_t m_TargetModifier = 0x1818;
    }
    namespace CAbilityGangActivityCancelVData {
      constexpr std::ptrdiff_t m_AbilitySwap = 0x1818;
    }
    namespace CAbilityGangActivityVData {
      constexpr std::ptrdiff_t m_AbilitySwap = 0x1818;
    }
    namespace CAbilityGarbageVData {
      constexpr std::ptrdiff_t m_GarbageAuraModifier = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1828;
      constexpr std::ptrdiff_t m_flAirSpeedMax = 0x1908;
      constexpr std::ptrdiff_t m_flFallSpeedMax = 0x190c;
      constexpr std::ptrdiff_t m_flAirDrag = 0x1910;
      constexpr std::ptrdiff_t m_flMaxMovespeed = 0x1914;
    }
    namespace CAbilityGenericPerson1VData {
    }
    namespace CAbilityGenericPerson2VData {
    }
    namespace CAbilityGenericPerson3VData {
    }
    namespace CAbilityGenericPerson4VData {
    }
    namespace CAbilityGooGrenadeVData {
      constexpr std::ptrdiff_t m_GooGrenadeImpactModifier = 0x1818;
      constexpr std::ptrdiff_t m_GooGrenadePuddleAuraModifier = 0x1828;
      constexpr std::ptrdiff_t m_GooGrenadePuddleAuraFriendlyModifier = 0x1838;
      constexpr std::ptrdiff_t m_GooGrenadeSkipParticle = 0x1848;
      constexpr std::ptrdiff_t m_GooGrenadeExplodeParticle = 0x1928;
      constexpr std::ptrdiff_t m_GrenadeHitSound = 0x1a08;
      constexpr std::ptrdiff_t m_flMinRestitution = 0x1a18;
      constexpr std::ptrdiff_t m_flMaxRestitution = 0x1a1c;
    }
    namespace CAbilityGuidedArrowVData {
      constexpr std::ptrdiff_t m_cameraCancelledTransitionBacktoArcher = 0x1818;
      constexpr std::ptrdiff_t m_cameraExplodedTransitionBackToArcher = 0x18a0;
      constexpr std::ptrdiff_t m_flCameraHoldAtExplosion = 0x1928;
      constexpr std::ptrdiff_t m_flFadeIn = 0x192c;
      constexpr std::ptrdiff_t m_flFadeHoldTime = 0x1930;
      constexpr std::ptrdiff_t m_flFadeOut = 0x1934;
      constexpr std::ptrdiff_t m_SpectatingProjectileParticle = 0x1938;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1a18;
      constexpr std::ptrdiff_t m_GuidedArrowChannelParticle = 0x1af8;
      constexpr std::ptrdiff_t m_ProjectileModel = 0x1bd8;
      constexpr std::ptrdiff_t m_ArrowOffsetX = 0x1cb8;
      constexpr std::ptrdiff_t m_ArrowCameraDistance = 0x1cbc;
      constexpr std::ptrdiff_t m_ArrowCameraHeightOffset = 0x1cc0;
      constexpr std::ptrdiff_t m_ArrowInitialPitch = 0x1cc4;
      constexpr std::ptrdiff_t m_GuidingModifier = 0x1cc8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1cd8;
      constexpr std::ptrdiff_t m_KillCheckModifier = 0x1ce8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1cf8;
      constexpr std::ptrdiff_t m_flTrackAmount = 0x1d08;
      constexpr std::ptrdiff_t m_flSpeedAccel = 0x1d0c;
      constexpr std::ptrdiff_t m_flSpeedDeccel = 0x1d10;
      constexpr std::ptrdiff_t m_flBaseProjectileSpeed = 0x1d14;
      constexpr std::ptrdiff_t m_flMaxProjectileSpeed = 0x1d18;
      constexpr std::ptrdiff_t m_flArrowModelTurnSpringStrength = 0x1d1c;
      constexpr std::ptrdiff_t m_flKillCheckWindow = 0x1d20;
      constexpr std::ptrdiff_t m_flWorldCollideGraceWindow = 0x1d24;
    }
    namespace CAbilityHatTrickVData {
      constexpr std::ptrdiff_t m_SpectatingProjectileParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x18f8;
      constexpr std::ptrdiff_t m_HatTrickChannelParticle = 0x19d8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1ab8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1ac8;
    }
    namespace CAbilityHighAlertVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
    }
    namespace CAbilityHoldMelee_VData {
      constexpr std::ptrdiff_t m_mapAttacks = 0x1848;
      constexpr std::ptrdiff_t m_flLightMeleeAnimChainTime = 0x1870;
      constexpr std::ptrdiff_t m_flMinDashTime = 0x1874;
      constexpr std::ptrdiff_t m_bUseCasterFacing = 0x1878;
      constexpr std::ptrdiff_t m_AirMeleeUpScale = 0x187c;
      constexpr std::ptrdiff_t m_HeavyTurnSpeedCurve = 0x1890;
      constexpr std::ptrdiff_t m_flCameraMaxTurnRate = 0x18d0;
      constexpr std::ptrdiff_t m_flHeavyMeleeMaxTurnRate = 0x18d4;
      constexpr std::ptrdiff_t m_HoldBeginEffect = 0x18d8;
      constexpr std::ptrdiff_t m_SuccessfulParryParticle = 0x19b8;
      constexpr std::ptrdiff_t m_ParryActivateParticle = 0x1a98;
      constexpr std::ptrdiff_t m_cameraSequenceHoldStart = 0x1b78;
      constexpr std::ptrdiff_t m_cameraSequenceHitImpact = 0x1c00;
      constexpr std::ptrdiff_t m_strHoldBegin = 0x1c88;
      constexpr std::ptrdiff_t m_strSuccessfulParrySound = 0x1c98;
    }
    namespace CAbilityHookVData {
      constexpr std::ptrdiff_t m_SelfModifier = 0x1818;
      constexpr std::ptrdiff_t m_TargetModifier = 0x1828;
      constexpr std::ptrdiff_t m_BulletAmpModifier = 0x1838;
      constexpr std::ptrdiff_t m_HookOutParticle = 0x1848;
      constexpr std::ptrdiff_t m_PrecastHookParticle = 0x1928;
      constexpr std::ptrdiff_t m_HookRetrieveParticle = 0x1a08;
      constexpr std::ptrdiff_t m_HookServerImpactParticle = 0x1ae8;
      constexpr std::ptrdiff_t m_strHookSuccessSound = 0x1bc8;
      constexpr std::ptrdiff_t m_strHookNPCSound = 0x1bd8;
      constexpr std::ptrdiff_t m_strHookAllySound = 0x1be8;
      constexpr std::ptrdiff_t m_strHookImpactGeoSound = 0x1bf8;
      constexpr std::ptrdiff_t m_flTrooperHitRadius = 0x1c08;
      constexpr std::ptrdiff_t m_flFriendlyHookIgnoreRange = 0x1c0c;
    }
    namespace CAbilityHornetChainVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x18f8;
      constexpr std::ptrdiff_t m_ChainModifier = 0x1908;
      constexpr std::ptrdiff_t m_DisarmModifier = 0x1918;
    }
    namespace CAbilityHornetLeapVData {
      constexpr std::ptrdiff_t m_flChannelingAirDrag = 0x1818;
      constexpr std::ptrdiff_t m_flChannelingMaxFallSpeed = 0x181c;
      constexpr std::ptrdiff_t m_flVerticalMoveSpeedPercent = 0x1820;
      constexpr std::ptrdiff_t m_flAirDrag = 0x1824;
      constexpr std::ptrdiff_t m_flAirAcceleration = 0x1828;
      constexpr std::ptrdiff_t m_flLaunchAirDrag = 0x182c;
      constexpr std::ptrdiff_t m_flLaunchTime = 0x1830;
      constexpr std::ptrdiff_t m_flMoveSpeedAboveBaseScale = 0x1834;
      constexpr std::ptrdiff_t m_LeapModifier = 0x1838;
      constexpr std::ptrdiff_t m_KillCheckModifier = 0x1848;
      constexpr std::ptrdiff_t m_DustParticle = 0x1858;
      constexpr std::ptrdiff_t m_TrailParticle = 0x1938;
      constexpr std::ptrdiff_t m_CastParticle = 0x1a18;
    }
    namespace CAbilityHornetSnipeVData {
      constexpr std::ptrdiff_t m_AssassinateShotParticle = 0x1818;
      constexpr std::ptrdiff_t m_AssassinateShotParticleOwnerOnly = 0x18f8;
      constexpr std::ptrdiff_t m_LaserSightParticle = 0x19d8;
      constexpr std::ptrdiff_t m_LaserSightParticleOwnerOnly = 0x1ab8;
      constexpr std::ptrdiff_t m_SnipeModifier = 0x1b98;
      constexpr std::ptrdiff_t m_GlowEnemyModifier = 0x1ba8;
      constexpr std::ptrdiff_t m_KillCheckModifier = 0x1bb8;
      constexpr std::ptrdiff_t m_strSnipeImpactSound = 0x1bc8;
      constexpr std::ptrdiff_t m_strZoomIn = 0x1bd8;
      constexpr std::ptrdiff_t m_strZoomOut = 0x1be8;
      constexpr std::ptrdiff_t m_strFullyChargedSound = 0x1bf8;
      constexpr std::ptrdiff_t m_flMinScopeTimeToShoot = 0x1c08;
      constexpr std::ptrdiff_t m_flFadeToBlackTime = 0x1c0c;
      constexpr std::ptrdiff_t m_flFoVChangeTime = 0x1c10;
      constexpr std::ptrdiff_t m_ScopeFoV = 0x1c18;
      constexpr std::ptrdiff_t m_flKillCheckDuration = 0x1c30;
    }
    namespace CAbilityHornetStingVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_HitParticle = 0x1828;
      constexpr std::ptrdiff_t m_RicochetTracerParticle = 0x1908;
    }
    namespace CAbilityImmobilizeTrapVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_PreviewRingParticle = 0x18f8;
      constexpr std::ptrdiff_t m_TrapHighlightParticle = 0x19d8;
      constexpr std::ptrdiff_t m_ArmedParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_strTripSound = 0x1b98;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1ba8;
      constexpr std::ptrdiff_t m_strExpiredSound = 0x1bb8;
      constexpr std::ptrdiff_t m_strImmobilizeTargetSound = 0x1bc8;
      constexpr std::ptrdiff_t m_strArmingSound = 0x1bd8;
      constexpr std::ptrdiff_t m_GlitchModifier = 0x1be8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1bf8;
    }
    namespace CAbilityIntimidateVData {
      constexpr std::ptrdiff_t m_EnemyModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_AoEPlayerParticle = 0x1838;
      constexpr std::ptrdiff_t m_AoEParticle = 0x1918;
    }
    namespace CAbilityJumpVData {
      constexpr std::ptrdiff_t m_flShootingLockoutAfterJump = 0x1818;
      constexpr std::ptrdiff_t m_flShootingInaccuracyPercentageAfterJump = 0x181c;
      constexpr std::ptrdiff_t m_flShootingInaccuracyDurationAfterJump = 0x1820;
      constexpr std::ptrdiff_t m_DashJumpParticle = 0x1828;
      constexpr std::ptrdiff_t m_AirJumpParticle = 0x1908;
      constexpr std::ptrdiff_t m_WallJumpParticle = 0x19e8;
      constexpr std::ptrdiff_t m_GroundJumpExecutedSound = 0x1ac8;
      constexpr std::ptrdiff_t m_AirJumpSound = 0x1ad8;
      constexpr std::ptrdiff_t m_flMantleRefundWindow = 0x1ae8;
      constexpr std::ptrdiff_t m_flZiplineRefundWindow = 0x1aec;
      constexpr std::ptrdiff_t m_flLateJumpGraceWindow = 0x1af0;
      constexpr std::ptrdiff_t m_flMaxSpeedDelta = 0x1af4;
      constexpr std::ptrdiff_t m_strDashJumpSound = 0x1af8;
      constexpr std::ptrdiff_t m_flDashJumpStartTime = 0x1b08;
      constexpr std::ptrdiff_t m_flDashJumpEndTime = 0x1b0c;
      constexpr std::ptrdiff_t m_flDashJumpDistanceInMeters = 0x1b10;
      constexpr std::ptrdiff_t m_flDashJumpVerticalSpeed = 0x1b18;
      constexpr std::ptrdiff_t m_flDashJumpMissMaxSpeed = 0x1b1c;
      constexpr std::ptrdiff_t m_flDashJumpMantleDisableTime = 0x1b20;
      constexpr std::ptrdiff_t m_flDashJumpExtraAirControlTime = 0x1b24;
      constexpr std::ptrdiff_t m_flDashJumpExtraAirControlPercent = 0x1b28;
      constexpr std::ptrdiff_t m_WallJumpExecutedSound = 0x1b30;
      constexpr std::ptrdiff_t m_CornerBoostExecutedSound = 0x1b40;
      constexpr std::ptrdiff_t m_flCollidedWallMaxDist = 0x1b50;
      constexpr std::ptrdiff_t m_flRemapSpeedToWallJumpVelocityDist = 0x1b54;
      constexpr std::ptrdiff_t m_flWallJumpFullPowerRechargeTime = 0x1b64;
      constexpr std::ptrdiff_t m_flWallJumpPowerMin = 0x1b68;
      constexpr std::ptrdiff_t m_flWallJumpPowerBias = 0x1b6c;
      constexpr std::ptrdiff_t m_flWallJumpUpSpeed = 0x1b70;
      constexpr std::ptrdiff_t m_flWallJumpMaxLateralSpeed = 0x1b74;
      constexpr std::ptrdiff_t m_WallJumpLateralSpeedFalloffVsAlongSpeed = 0x1b78;
      constexpr std::ptrdiff_t m_flWallJumpMinOutSpeed = 0x1bb8;
      constexpr std::ptrdiff_t m_flWallJumpMaxOutSpeed = 0x1bbc;
      constexpr std::ptrdiff_t m_flWallJumpLateralInputSuppressTime = 0x1bc0;
      constexpr std::ptrdiff_t m_flWallJumpReturnToWallBonusAccel = 0x1bc4;
      constexpr std::ptrdiff_t m_flSlowedSlideJumpFactor = 0x1bc8;
    }
    namespace CAbilityKobunVData {
      constexpr std::ptrdiff_t m_vSummonFollowOffset = 0x1818;
      constexpr std::ptrdiff_t m_CloneModifier = 0x1828;
    }
    namespace CAbilityLashDownStrikeVData {
      constexpr std::ptrdiff_t m_TargetPreviewParticle = 0x1818;
      constexpr std::ptrdiff_t m_strGroundCastAnimGraphParam = 0x18f8;
      constexpr std::ptrdiff_t m_strAirCastAnimGraphParam = 0x1900;
      constexpr std::ptrdiff_t m_StompParticle = 0x1908;
      constexpr std::ptrdiff_t m_StompLineParticle = 0x19e8;
      constexpr std::ptrdiff_t m_StompLineObstructedParticle = 0x1ac8;
      constexpr std::ptrdiff_t m_StompImpactParticle = 0x1ba8;
      constexpr std::ptrdiff_t m_StompExplosionSound = 0x1c88;
      constexpr std::ptrdiff_t m_StompEnemyImpactSound = 0x1c98;
      constexpr std::ptrdiff_t m_strFallCollideImpactSound = 0x1ca8;
      constexpr std::ptrdiff_t m_DownStrikeModifier = 0x1cb8;
      constexpr std::ptrdiff_t m_ImpactModifier = 0x1cc8;
      constexpr std::ptrdiff_t m_DragModifier = 0x1cd8;
      constexpr std::ptrdiff_t m_flHeightUILingerTime = 0x1ce8;
      constexpr std::ptrdiff_t m_flDamageFrustumHalfWidth = 0x1cec;
      constexpr std::ptrdiff_t m_flDamageFrustumAngle = 0x1cf0;
      constexpr std::ptrdiff_t m_flDamageWaveSpeed = 0x1cf4;
      constexpr std::ptrdiff_t m_flDamageTraceProbeDamageRadius = 0x1cf8;
      constexpr std::ptrdiff_t m_flDamageTraceProbeWorldRadius = 0x1cfc;
      constexpr std::ptrdiff_t m_flDamageTraceProbeStepUpHeight = 0x1d00;
      constexpr std::ptrdiff_t m_flDamageTraceProbeStepDownHeight = 0x1d04;
      constexpr std::ptrdiff_t m_flDamageTraceProbeDropDownRate = 0x1d08;
      constexpr std::ptrdiff_t m_flInitialDamageRadiusInMeters = 0x1d0c;
      constexpr std::ptrdiff_t m_nGroundCrackGap = 0x1d10;
      constexpr std::ptrdiff_t m_flGroupLengthTolerance = 0x1d14;
      constexpr std::ptrdiff_t m_flDamageEffectScaleMin = 0x1d18;
      constexpr std::ptrdiff_t m_flDamageEffectScaleMax = 0x1d1c;
      constexpr std::ptrdiff_t m_flTrackAmount = 0x1d20;
      constexpr std::ptrdiff_t m_flCollideRadius = 0x1d24;
      constexpr std::ptrdiff_t m_flMaxTurnAmount = 0x1d28;
    }
    namespace CAbilityLashFlogVData {
      constexpr std::ptrdiff_t m_FlogParticle = 0x1818;
      constexpr std::ptrdiff_t m_FlogLifeLeachParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x19d8;
      constexpr std::ptrdiff_t m_FlogDebuffModifier = 0x19e8;
    }
    namespace CAbilityLashUltimateVData {
      constexpr std::ptrdiff_t m_TargetPreviewParticle = 0x1838;
      constexpr std::ptrdiff_t m_LaunchParticle = 0x1918;
      constexpr std::ptrdiff_t m_UltimateCastParticle = 0x19f8;
      constexpr std::ptrdiff_t m_UltimateCastEnemyParticle = 0x1ad8;
      constexpr std::ptrdiff_t m_AllyIndicatorParticle = 0x1bb8;
      constexpr std::ptrdiff_t m_strThrowEnemyAnimGraphParam = 0x1c98;
      constexpr std::ptrdiff_t m_GrappleEnemyModifier = 0x1ca0;
      constexpr std::ptrdiff_t m_GrabSound = 0x1cb0;
      constexpr std::ptrdiff_t m_MissSound = 0x1cc0;
      constexpr std::ptrdiff_t m_ThrowSound = 0x1cd0;
      constexpr std::ptrdiff_t m_flAirSpeedMax = 0x1ce0;
      constexpr std::ptrdiff_t m_flFallSpeedMax = 0x1ce4;
      constexpr std::ptrdiff_t m_flAirDrag = 0x1ce8;
      constexpr std::ptrdiff_t m_flMaxPitchRangeScale = 0x1cec;
      constexpr std::ptrdiff_t m_flThrowAnimTossPoint = 0x1cf0;
    }
    namespace CAbilityLashVData {
      constexpr std::ptrdiff_t m_LashParticle = 0x1818;
      constexpr std::ptrdiff_t m_BuffModifier = 0x18f8;
      constexpr std::ptrdiff_t m_AirControlModifier = 0x1908;
      constexpr std::ptrdiff_t m_strVictimCastSound = 0x1918;
    }
    namespace CAbilityLightningBallVData {
      constexpr std::ptrdiff_t m_ZapModifier = 0x1818;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1828;
      constexpr std::ptrdiff_t m_strHitSound = 0x1838;
      constexpr std::ptrdiff_t m_strProjectileLoopingSound = 0x1848;
      constexpr std::ptrdiff_t m_ZapParticle = 0x1858;
      constexpr std::ptrdiff_t m_flHitSpeed = 0x1938;
      constexpr std::ptrdiff_t m_flNonHeroHitSpeed = 0x193c;
    }
    namespace CAbilityLockDownVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x18f8;
    }
    namespace CAbilityMantleVData {
      constexpr std::ptrdiff_t m_vecMantleTypes = 0x1818;
      constexpr std::ptrdiff_t m_flMantleSlowOnHitDuration = 0x1830;
      constexpr std::ptrdiff_t m_MantleSlowOnHitModifier = 0x1838;
    }
    namespace CAbilityMedicHealVData {
      constexpr std::ptrdiff_t m_HealBeamParticle = 0x1818;
      constexpr std::ptrdiff_t m_HealTargetParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strHealCastSound = 0x19d8;
    }
    namespace CAbilityMeleeParryVData {
      constexpr std::ptrdiff_t m_flWhiffDuration = 0x1818;
      constexpr std::ptrdiff_t m_flMovementRestrictionTime = 0x181c;
      constexpr std::ptrdiff_t m_flActiveTime = 0x1820;
      constexpr std::ptrdiff_t m_flParryEndVisualTime = 0x1824;
      constexpr std::ptrdiff_t m_flSuccessActiveTime = 0x1828;
      constexpr std::ptrdiff_t m_flMashProtectTime = 0x182c;
      constexpr std::ptrdiff_t m_flBossVictimNoMeleeTime = 0x1830;
      constexpr std::ptrdiff_t m_flBossVictimCalmTime = 0x1834;
      constexpr std::ptrdiff_t m_SuccessfulParryParticle = 0x1838;
      constexpr std::ptrdiff_t m_SuccessfulAbilityParryParticle = 0x1918;
      constexpr std::ptrdiff_t m_ActiveParryParticle = 0x19f8;
      constexpr std::ptrdiff_t m_strSuccessfulParrySound = 0x1ad8;
      constexpr std::ptrdiff_t m_ParryActiveModifier = 0x1ae8;
      constexpr std::ptrdiff_t m_ParryVictimModifier = 0x1af8;
      constexpr std::ptrdiff_t m_ParryCooldownModifier = 0x1b08;
      constexpr std::ptrdiff_t m_ParryEndVisualModifier = 0x1b18;
      constexpr std::ptrdiff_t m_ParryBossVictimNoMeleeModifier = 0x1b28;
      constexpr std::ptrdiff_t m_ParryBossVictimCalmModifier = 0x1b38;
    }
    namespace CAbilityMeleeVData {
      constexpr std::ptrdiff_t m_flMeleeInputBufferTime = 0x1818;
      constexpr std::ptrdiff_t m_flCollisionDistance = 0x181c;
      constexpr std::ptrdiff_t m_flHeavyAttackRequiredHoldTime = 0x1820;
      constexpr std::ptrdiff_t m_flLightAttackMaxHoldTime = 0x1824;
      constexpr std::ptrdiff_t m_flSideDashDodgeDist = 0x1828;
      constexpr std::ptrdiff_t m_flBackDashDodgeDist = 0x182c;
      constexpr std::ptrdiff_t m_MeleeDamageFlags = 0x1830;
      constexpr std::ptrdiff_t m_strEffectsAttachName = 0x1838;
      constexpr std::ptrdiff_t m_flChargeAnimDelayTime = 0x1840;
    }
    namespace CAbilityNikumanVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_NikumanModifier = 0x18f8;
    }
    namespace CAbilityPerchedPredatorVData {
      constexpr std::ptrdiff_t m_ExplodeBaseParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeFriendlyParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ExplodeEnemyParticle = 0x19d8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1ab8;
      constexpr std::ptrdiff_t m_ModifierDragEnemy = 0x1ac8;
      constexpr std::ptrdiff_t m_flOnHitDetonateTimer = 0x1ad8;
      constexpr std::ptrdiff_t m_flTraceTravelRadius = 0x1adc;
    }
    namespace CAbilityPowerJumpVData {
      constexpr std::ptrdiff_t m_JumpParticle = 0x1818;
      constexpr std::ptrdiff_t m_InAirModifier = 0x18f8;
      constexpr std::ptrdiff_t m_PowerJumpModifier = 0x1908;
    }
    namespace CAbilityPowerSlashVData {
      constexpr std::ptrdiff_t m_flAirDrag = 0x1820;
      constexpr std::ptrdiff_t m_flMaxPowerPadding = 0x1824;
      constexpr std::ptrdiff_t m_flEffectGroundTrace = 0x1828;
      constexpr std::ptrdiff_t m_flWhizbyMaxRange = 0x182c;
      constexpr std::ptrdiff_t m_flStartPosTestCapsuleLength = 0x1830;
      constexpr std::ptrdiff_t m_flCoverLOSBackDist = 0x1834;
      constexpr std::ptrdiff_t m_vecLongEffectOffset = 0x1838;
      constexpr std::ptrdiff_t m_vecPlayerLeftOffset = 0x1844;
      constexpr std::ptrdiff_t m_PowerSlashParticle = 0x1848;
      constexpr std::ptrdiff_t m_PowerSlashFullParticle = 0x1928;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1a08;
      constexpr std::ptrdiff_t m_CastParticle = 0x1ae8;
      constexpr std::ptrdiff_t m_PowerUpParticle = 0x1bc8;
      constexpr std::ptrdiff_t m_strStartSound = 0x1ca8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x1cb8;
      constexpr std::ptrdiff_t m_strPowerUp1Sounds = 0x1cc8;
      constexpr std::ptrdiff_t m_strPowerUp2Sounds = 0x1cd8;
      constexpr std::ptrdiff_t m_strPowerUp3Sounds = 0x1ce8;
      constexpr std::ptrdiff_t m_strWhizbySound = 0x1cf8;
      constexpr std::ptrdiff_t m_strSlashSound = 0x1d08;
      constexpr std::ptrdiff_t m_strSlashFullSound = 0x1d18;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1d28;
      constexpr std::ptrdiff_t m_UnstoppableWhileCastingModifier = 0x1d38;
    }
    namespace CAbilityPowerSurgeVData {
      constexpr std::ptrdiff_t m_ChainParticle = 0x1818;
      constexpr std::ptrdiff_t m_CastHitParticle = 0x18f8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x19d8;
      constexpr std::ptrdiff_t m_ChainModifier = 0x19e8;
    }
    namespace CAbilityPsychicLiftVData {
      constexpr std::ptrdiff_t m_LiftModifier = 0x1818;
      constexpr std::ptrdiff_t m_TargetParticle = 0x1828;
      constexpr std::ptrdiff_t m_AoEPreviewParticle = 0x1908;
      constexpr std::ptrdiff_t m_DirectionalBeamParticle = 0x19e8;
      constexpr std::ptrdiff_t m_TargetCastSound = 0x1ac8;
      constexpr std::ptrdiff_t m_HitConfirmSound = 0x1ad8;
    }
    namespace CAbilityPunkgoatBlastedVData {
      constexpr std::ptrdiff_t m_BlastedModifier = 0x1818;
      constexpr std::ptrdiff_t m_BlastedPassiveModifier = 0x1828;
      constexpr std::ptrdiff_t m_ShredModifier = 0x1838;
      constexpr std::ptrdiff_t m_HealthModifier = 0x1848;
      constexpr std::ptrdiff_t m_HealthDisplayModifier = 0x1858;
      constexpr std::ptrdiff_t m_MeleeReloadFX = 0x1868;
      constexpr std::ptrdiff_t m_strMeleeReloadSoundLight = 0x1948;
      constexpr std::ptrdiff_t m_strMeleeReloadSoundHeavy = 0x1958;
    }
    namespace CAbilityPunkgoatGoatFlipVData {
      constexpr std::ptrdiff_t m_ChargingSpeedCurve = 0x1818;
      constexpr std::ptrdiff_t m_GoingUpSpeedCurve = 0x1858;
      constexpr std::ptrdiff_t m_flGroundBreakOffAngle = 0x1898;
      constexpr std::ptrdiff_t m_Charging = 0x18a0;
      constexpr std::ptrdiff_t m_GoatGoingUp = 0x18b0;
      constexpr std::ptrdiff_t m_DamageBuff = 0x18c0;
      constexpr std::ptrdiff_t m_EmpowerMelee = 0x18d0;
      constexpr std::ptrdiff_t m_LingeringAirControl = 0x18e0;
      constexpr std::ptrdiff_t m_flDelayBeforeCasterRegainsControlAfterFlip = 0x18f0;
    }
    namespace CAbilityPunkgoatTetherVData {
      constexpr std::ptrdiff_t m_FireRateSlowModifier = 0x1818;
      constexpr std::ptrdiff_t m_TetheredModifier = 0x1828;
      constexpr std::ptrdiff_t m_PullModifier = 0x1838;
      constexpr std::ptrdiff_t m_WaitingToPullModifier = 0x1848;
      constexpr std::ptrdiff_t m_UnstoppableModifier = 0x1858;
      constexpr std::ptrdiff_t m_RopeParticle = 0x1868;
      constexpr std::ptrdiff_t m_strPullSound = 0x1948;
      constexpr std::ptrdiff_t m_strTimerSound = 0x1958;
    }
    namespace CAbilityPunkgoatUltVData {
      constexpr std::ptrdiff_t m_DiminishingSlowModifier = 0x1818;
      constexpr std::ptrdiff_t m_FireRateModifier = 0x1828;
      constexpr std::ptrdiff_t m_VulnerableModifier = 0x1838;
      constexpr std::ptrdiff_t m_GroundAuraModifier = 0x1848;
      constexpr std::ptrdiff_t m_PullToGroundModifier = 0x1858;
      constexpr std::ptrdiff_t m_BatChargingEffect = 0x1868;
      constexpr std::ptrdiff_t m_GroundParticle = 0x1948;
      constexpr std::ptrdiff_t m_strHangSound = 0x1a28;
      constexpr std::ptrdiff_t m_strDiveSound = 0x1a38;
      constexpr std::ptrdiff_t m_TimeToReachGroundByHeight = 0x1a48;
      constexpr std::ptrdiff_t m_GoUpSpeedCurve = 0x1a88;
      constexpr std::ptrdiff_t m_flGoUpDuration = 0x1ac8;
      constexpr std::ptrdiff_t m_flGoDownVelocityDampRate = 0x1acc;
    }
    namespace CAbilityRapidFireVData {
    }
    namespace CAbilityRestorativeGooVData {
      constexpr std::ptrdiff_t m_RestorativeGooParticle = 0x1818;
      constexpr std::ptrdiff_t m_RestorativeGooSelfParticle = 0x18f8;
      constexpr std::ptrdiff_t m_RestorativeGooModifier = 0x19d8;
      constexpr std::ptrdiff_t m_SelfCubeModelSwapModifier = 0x19e8;
    }
    namespace CAbilityRiotProtocolVData {
      constexpr std::ptrdiff_t m_ChargeUpParticle = 0x1818;
      constexpr std::ptrdiff_t m_CastParticle = 0x18f8;
      constexpr std::ptrdiff_t m_WardenBuffModifier = 0x19d8;
    }
    namespace CAbilityRocketLauncherVData {
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1818;
    }
    namespace CAbilityRollingFireBallVData {
      constexpr std::ptrdiff_t m_flBallLifetime = 0x1818;
      constexpr std::ptrdiff_t m_flBallStepUpHeight = 0x181c;
      constexpr std::ptrdiff_t m_flBallDistAboveGround = 0x1820;
      constexpr std::ptrdiff_t m_flBallFloatDownRate = 0x1824;
      constexpr std::ptrdiff_t m_flBallSpeed = 0x1828;
      constexpr std::ptrdiff_t m_flBallTraceRadius = 0x182c;
    }
    namespace CAbilityShivDashVData {
      constexpr std::ptrdiff_t m_DashModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_DashImpactEffect = 0x1838;
      constexpr std::ptrdiff_t m_DashSwingEffect = 0x1918;
      constexpr std::ptrdiff_t m_DashLineEffect = 0x19f8;
      constexpr std::ptrdiff_t m_strDashStartEcho = 0x1ad8;
      constexpr std::ptrdiff_t m_strDashHitEnemy = 0x1ae8;
      constexpr std::ptrdiff_t m_flEchoDelay = 0x1af8;
    }
    namespace CAbilityShivDeferDamageVData {
      constexpr std::ptrdiff_t m_ActiveCastParticle = 0x1818;
      constexpr std::ptrdiff_t m_flDeferredDamageApplicationInterval = 0x18f8;
    }
    namespace CAbilitySleepBombVData {
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1818;
      constexpr std::ptrdiff_t m_AuraModifier = 0x18f8;
    }
    namespace CAbilitySleepDaggerVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_SleepModifier = 0x18f8;
    }
    namespace CAbilitySlideVData {
      constexpr std::ptrdiff_t m_flMinAngleToConsiderASlope = 0x1818;
      constexpr std::ptrdiff_t m_flSlideMaxSlopeMaxAccSpeed = 0x181c;
      constexpr std::ptrdiff_t m_flSlideMinSlopeMaxAccSpeed = 0x1820;
      constexpr std::ptrdiff_t m_flButtonPressWindow = 0x1824;
      constexpr std::ptrdiff_t m_flTurnSpeed = 0x1828;
      constexpr std::ptrdiff_t m_flSlideMinSlopeAcceleration = 0x182c;
      constexpr std::ptrdiff_t m_flSlideMaxSlopeAcceleration = 0x1830;
      constexpr std::ptrdiff_t m_flTurnMinAngDiff = 0x1834;
      constexpr std::ptrdiff_t m_flTurnMaxAngDiff = 0x1838;
      constexpr std::ptrdiff_t m_flLandedFlatGroundFrictionGraceTime = 0x183c;
      constexpr std::ptrdiff_t m_flFlatGroundFrictionGraceTime = 0x1840;
      constexpr std::ptrdiff_t m_flFrictionFlatGroundGrace = 0x1844;
      constexpr std::ptrdiff_t m_flFrictionFlatGround = 0x1848;
      constexpr std::ptrdiff_t m_flFrictionMinSlope = 0x184c;
      constexpr std::ptrdiff_t m_flFrictionMaxSlope = 0x1850;
      constexpr std::ptrdiff_t m_flFrictionUphillMinSlope = 0x1854;
      constexpr std::ptrdiff_t m_flFrictionUphillMaxSlope = 0x1858;
      constexpr std::ptrdiff_t m_flLandingSlopeScaleBias = 0x185c;
      constexpr std::ptrdiff_t m_flBoostMinTriggerSpeed = 0x1860;
      constexpr std::ptrdiff_t m_flBoostMaxTriggerSpeed = 0x1864;
      constexpr std::ptrdiff_t m_flBoostMinSpeed = 0x1868;
      constexpr std::ptrdiff_t m_flBoostMaxSpeed = 0x186c;
      constexpr std::ptrdiff_t m_flMinActivationSpeed = 0x1870;
      constexpr std::ptrdiff_t m_flMinSustainSpeed = 0x1874;
      constexpr std::ptrdiff_t m_flSprintBoostSpeed = 0x1878;
      constexpr std::ptrdiff_t m_flDashSlideStartTime = 0x187c;
      constexpr std::ptrdiff_t m_flDashSlideSpeed = 0x1880;
      constexpr std::ptrdiff_t m_flDashSlideFailSpeed = 0x1884;
      constexpr std::ptrdiff_t m_strDashSlideActivate = 0x1888;
      constexpr std::ptrdiff_t m_flDashSlideFrictionTime = 0x1898;
      constexpr std::ptrdiff_t m_flDashSlideFriction = 0x189c;
      constexpr std::ptrdiff_t m_flDashMinActivationSpeed = 0x18a0;
      constexpr std::ptrdiff_t m_flAccMinSlopeDeg = 0x18a4;
      constexpr std::ptrdiff_t m_flAccMaxSlopeDeg = 0x18a8;
      constexpr std::ptrdiff_t m_flAccMinSlopeScale = 0x18ac;
      constexpr std::ptrdiff_t m_flSlideProbeForwardOffset = 0x18b0;
      constexpr std::ptrdiff_t m_flSlideActivationProbeForwardOffset = 0x18b4;
      constexpr std::ptrdiff_t m_flMaxDistanceBetweenProbeSamples = 0x18b8;
      constexpr std::ptrdiff_t m_flInitialSlideUseForwardProbeTime = 0x18bc;
      constexpr std::ptrdiff_t m_flCurrentSlopeSampleDistance = 0x18c0;
      constexpr std::ptrdiff_t m_flSampleVelDiffStdDevScaleCutoff = 0x18c4;
      constexpr std::ptrdiff_t m_flSlopeFacingAngleToActivate = 0x18c8;
      constexpr std::ptrdiff_t m_flAirDragAfterJump = 0x18cc;
      constexpr std::ptrdiff_t m_flAirDragAfterJumpTime = 0x18d0;
      constexpr std::ptrdiff_t m_flAirDragMaxAngle = 0x18d4;
      constexpr std::ptrdiff_t m_flAirDragResetTime = 0x18d8;
      constexpr std::ptrdiff_t m_flLateSlideJumpWindow = 0x18dc;
      constexpr std::ptrdiff_t m_SlideEffectRemap = 0x18e0;
      constexpr std::ptrdiff_t m_GetupSpeedCurve = 0x18f0;
      constexpr std::ptrdiff_t m_flGetupBusyDuration = 0x1930;
      constexpr std::ptrdiff_t m_flSlidingRecoilReduction = 0x1934;
      constexpr std::ptrdiff_t m_cameraSequenceStartSliding = 0x1938;
      constexpr std::ptrdiff_t m_cameraSequenceEndSliding = 0x19c0;
      constexpr std::ptrdiff_t m_SlideParticle = 0x1a48;
      constexpr std::ptrdiff_t m_strStartSound = 0x1b28;
      constexpr std::ptrdiff_t m_strLoopingSound = 0x1b38;
      constexpr std::ptrdiff_t m_strStopSound = 0x1b48;
    }
    namespace CAbilitySpiderShieldVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
    }
    namespace CAbilitySprintVData {
      constexpr std::ptrdiff_t m_SprintParticle = 0x1818;
      constexpr std::ptrdiff_t m_strSprintSound = 0x18f8;
      constexpr std::ptrdiff_t m_flSprintAccMS = 0x1908;
    }
    namespace CAbilityStackingDamageVData {
      constexpr std::ptrdiff_t m_StackingModifier = 0x1818;
    }
    namespace CAbilityStickyBombVData {
      constexpr std::ptrdiff_t m_BombAttachedModifier = 0x1818;
      constexpr std::ptrdiff_t m_SelfBuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_KillCheckModifier = 0x1838;
      constexpr std::ptrdiff_t m_CastBombParticle = 0x1848;
      constexpr std::ptrdiff_t m_flPostRangeGravityScale = 0x1928;
      constexpr std::ptrdiff_t m_flAllyCollideRadius = 0x192c;
      constexpr std::ptrdiff_t m_flBombDragStartRange = 0x1930;
      constexpr std::ptrdiff_t m_flBombDragStartValue = 0x1934;
      constexpr std::ptrdiff_t m_flBombDragEndValue = 0x1938;
      constexpr std::ptrdiff_t m_flAllyTargetRangeMult = 0x193c;
      constexpr std::ptrdiff_t m_flHookTargetOnlyWindow = 0x1940;
    }
    namespace CAbilityStompVData {
      constexpr std::ptrdiff_t m_StompParticle = 0x1818;
      constexpr std::ptrdiff_t m_strStompExplosionSound = 0x18f8;
      constexpr std::ptrdiff_t m_strCastDelayLocalPlayerSound = 0x1908;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1918;
      constexpr std::ptrdiff_t m_BulletResistModifier = 0x1928;
    }
    namespace CAbilityStormCloudVData {
      constexpr std::ptrdiff_t m_AoEPreviewParticle = 0x1818;
      constexpr std::ptrdiff_t m_StormCloudModifier = 0x18f8;
      constexpr std::ptrdiff_t m_LightningStrikeAOEModifier = 0x1908;
      constexpr std::ptrdiff_t m_strLightningStrikeCast = 0x1918;
      constexpr std::ptrdiff_t m_flOscillateFrequency = 0x1928;
      constexpr std::ptrdiff_t m_flOscillateSpeed = 0x192c;
      constexpr std::ptrdiff_t m_flOscillateSpeedStart = 0x1930;
      constexpr std::ptrdiff_t m_flOscillateStartOffset = 0x1934;
      constexpr std::ptrdiff_t m_flAirDrag = 0x1938;
      constexpr std::ptrdiff_t m_flFlightAirDrag = 0x193c;
      constexpr std::ptrdiff_t m_flVerticalMoveSpeedPercent = 0x1940;
      constexpr std::ptrdiff_t m_flAirAcceleration = 0x1944;
    }
    namespace CAbilitySummonGangsterVData {
    }
    namespace CAbilityTargetPracticeVData {
      constexpr std::ptrdiff_t m_TargetPracticeSelfModifier = 0x1818;
      constexpr std::ptrdiff_t m_TargetPracticeEnemyModifier = 0x1828;
    }
    namespace CAbilityTargetdummy1VData {
    }
    namespace CAbilityTargetdummy2VData {
    }
    namespace CAbilityTargetdummy3VData {
    }
    namespace CAbilityTargetdummy4VData {
    }
    namespace CAbilityTeleportToGangsterVData {
    }
    namespace CAbilityThumper1VData {
    }
    namespace CAbilityThumper2VData {
      constexpr std::ptrdiff_t m_StompParticle = 0x1818;
      constexpr std::ptrdiff_t m_strStompExplosionSound = 0x18f8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1908;
      constexpr std::ptrdiff_t m_BarbedWireAuraModifier = 0x1918;
    }
    namespace CAbilityThumper3VData {
      constexpr std::ptrdiff_t m_DroneModifier = 0x1818;
    }
    namespace CAbilityThumper4VData {
      constexpr std::ptrdiff_t m_PullAOEModifier = 0x1818;
    }
    namespace CAbilityTokamakBreachVData {
      constexpr std::ptrdiff_t m_AllySmokeAOEModifier = 0x1818;
      constexpr std::ptrdiff_t m_EnemySmokeAOEModifier = 0x1828;
      constexpr std::ptrdiff_t m_PurgeParticle = 0x1838;
    }
    namespace CAbilityTokamakHeatSinksInherentVData {
      constexpr std::ptrdiff_t m_HotTracerParticle = 0x1818;
      constexpr std::ptrdiff_t m_HotWeaponFxParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strHotWeaponShootSound = 0x19d8;
      constexpr std::ptrdiff_t m_strOverheatRed = 0x19e8;
      constexpr std::ptrdiff_t m_strOverheatFull = 0x19f8;
    }
    namespace CAbilityTokamakHeatSinksVData {
      constexpr std::ptrdiff_t m_HeatDotModifier = 0x1818;
    }
    namespace CAbilityTokamakHotShotVData {
      constexpr std::ptrdiff_t m_LaserModifier = 0x1818;
      constexpr std::ptrdiff_t m_strLaserStartSound = 0x1828;
      constexpr std::ptrdiff_t m_strLaserEndSound = 0x1838;
      constexpr std::ptrdiff_t m_strLaserLoopSound = 0x1848;
      constexpr std::ptrdiff_t m_strLaserHitSound = 0x1858;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x1868;
      constexpr std::ptrdiff_t m_BeamParticle = 0x1948;
      constexpr std::ptrdiff_t m_HitParticle = 0x1a28;
      constexpr std::ptrdiff_t m_GroundParticle = 0x1b08;
    }
    namespace CAbilityTokamakRadianceVData {
      constexpr std::ptrdiff_t m_RadianceModifier = 0x1818;
    }
    namespace CAbilityTrappersBoloVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_TrapModifier = 0x18f8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1908;
    }
    namespace CAbilityUppercutVData {
      constexpr std::ptrdiff_t m_UppercutAttackData = 0x1848;
      constexpr std::ptrdiff_t m_UppercutModifier = 0x1d70;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1d80;
      constexpr std::ptrdiff_t m_ClipModifier = 0x1d90;
      constexpr std::ptrdiff_t m_flMaxPitchUp = 0x1da0;
      constexpr std::ptrdiff_t m_flDamageTriggerTime = 0x1da4;
    }
    namespace CAbilityVacuumVData {
      constexpr std::ptrdiff_t m_VacuumAuraModifier = 0x1818;
      constexpr std::ptrdiff_t m_flAirSpeedMax = 0x1828;
      constexpr std::ptrdiff_t m_flFallSpeedMax = 0x182c;
      constexpr std::ptrdiff_t m_flAirDrag = 0x1830;
      constexpr std::ptrdiff_t m_flMaxMovespeed = 0x1834;
    }
    namespace CAbilityVandalOverflowVData {
      constexpr std::ptrdiff_t m_LiftModifier = 0x1818;
      constexpr std::ptrdiff_t m_TargetParticle = 0x1828;
      constexpr std::ptrdiff_t m_TargetCastSound = 0x1908;
    }
    namespace CAbilityVandalSurgeVData {
      constexpr std::ptrdiff_t m_LiftModifier = 0x1818;
      constexpr std::ptrdiff_t m_TargetParticle = 0x1828;
      constexpr std::ptrdiff_t m_TargetCastSound = 0x1908;
    }
    namespace CAbilityViscousBowlingVData {
      constexpr std::ptrdiff_t m_TransformStartFx = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeFX = 0x18f8;
      constexpr std::ptrdiff_t m_WallImpactFx = 0x19d8;
      constexpr std::ptrdiff_t m_BallTrailFx = 0x1ab8;
      constexpr std::ptrdiff_t m_GroundImpactParticle = 0x1b98;
      constexpr std::ptrdiff_t m_JumpParticle = 0x1c78;
      constexpr std::ptrdiff_t m_DirectionParticle = 0x1d58;
      constexpr std::ptrdiff_t m_strPopGraphParamter = 0x1e38;
      constexpr std::ptrdiff_t m_BallJumpSound = 0x1e40;
      constexpr std::ptrdiff_t m_EnterBallSound = 0x1e50;
      constexpr std::ptrdiff_t m_BallLoopSound = 0x1e60;
      constexpr std::ptrdiff_t m_ExitBallSound = 0x1e70;
      constexpr std::ptrdiff_t m_WallImpactSound = 0x1e80;
      constexpr std::ptrdiff_t m_PlayerImpactSound = 0x1e90;
      constexpr std::ptrdiff_t m_ImpactModifier = 0x1ea0;
      constexpr std::ptrdiff_t m_DamagePreventionModifier = 0x1eb0;
      constexpr std::ptrdiff_t m_RollingModifier = 0x1ec0;
      constexpr std::ptrdiff_t m_flTransformToBallTime = 0x1ed0;
      constexpr std::ptrdiff_t m_flTransformFromBallTime = 0x1ed4;
      constexpr std::ptrdiff_t m_flAirTurnRatio = 0x1ed8;
      constexpr std::ptrdiff_t m_flWallTurnRatioMax = 0x1edc;
      constexpr std::ptrdiff_t m_flWallTurnRatioMin = 0x1ee0;
      constexpr std::ptrdiff_t m_flTurnRatio = 0x1ee4;
      constexpr std::ptrdiff_t m_flDefaultBallSpeed = 0x1ee8;
      constexpr std::ptrdiff_t m_flFastBallSpeed = 0x1eec;
      constexpr std::ptrdiff_t m_flSpeedAccel = 0x1ef0;
      constexpr std::ptrdiff_t m_flSpeedDeccel = 0x1ef4;
      constexpr std::ptrdiff_t m_flElasticity = 0x1ef8;
      constexpr std::ptrdiff_t m_flWallCheckGroundOffset = 0x1efc;
      constexpr std::ptrdiff_t m_flWallPauseTime = 0x1f00;
      constexpr std::ptrdiff_t m_flWallAngleMin = 0x1f04;
    }
    namespace CAbilityWreckerSalvageVData {
      constexpr std::ptrdiff_t m_SalvageEnemyModifier = 0x1818;
      constexpr std::ptrdiff_t m_StunEnemyModifier = 0x1828;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1838;
    }
    namespace CAbilityWreckerScrapBlastVData {
      constexpr std::ptrdiff_t m_SprayParticle = 0x1818;
      constexpr std::ptrdiff_t m_ChannelStartParticle = 0x18f8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x19d8;
    }
    namespace CAbilityWreckerTeleportVData {
      constexpr std::ptrdiff_t m_SpectatingProjectileParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ChannelParticle = 0x19d8;
      constexpr std::ptrdiff_t m_CastParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_ArrowOffsetX = 0x1b98;
      constexpr std::ptrdiff_t m_ArrowCameraDistance = 0x1b9c;
      constexpr std::ptrdiff_t m_ArrowCameraHeightOffset = 0x1ba0;
      constexpr std::ptrdiff_t m_ArrowInitialPitch = 0x1ba4;
      constexpr std::ptrdiff_t m_GuidingModifier = 0x1ba8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1bb8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1bc8;
      constexpr std::ptrdiff_t m_flTrackAmount = 0x1bd8;
      constexpr std::ptrdiff_t m_flSpeedAccel = 0x1bdc;
      constexpr std::ptrdiff_t m_flSpeedDeccel = 0x1be0;
      constexpr std::ptrdiff_t m_flBaseProjectileSpeed = 0x1be4;
      constexpr std::ptrdiff_t m_flMaxProjectileSpeed = 0x1be8;
    }
    namespace CAbilityWreckerUltimateVData {
      constexpr std::ptrdiff_t m_BeamParticle = 0x1818;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ActiveModifier = 0x19d8;
    }
    namespace CAbilityWreckingBallVData {
      constexpr std::ptrdiff_t m_SummonParticle = 0x1818;
      constexpr std::ptrdiff_t m_SummonReadyParticle = 0x18f8;
      constexpr std::ptrdiff_t m_SummonParticleAttachment = 0x19d8;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x19e0;
      constexpr std::ptrdiff_t m_AutoThrowModifier = 0x1ac0;
      constexpr std::ptrdiff_t m_HoldingBallLoop = 0x1ad0;
    }
    namespace CAbility_Drifter_BloodBlast {
      constexpr std::ptrdiff_t m_SandEffect = 0x19d8;
      constexpr std::ptrdiff_t m_vecHitTargets = 0x19e0;
    }
    namespace CAbility_Drifter_BloodBlast_VData {
      constexpr std::ptrdiff_t m_TargetModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_AreaParticle = 0x1838;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x1918;
      constexpr std::ptrdiff_t m_TargetDamageParticle = 0x19f8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x1ad8;
      constexpr std::ptrdiff_t m_strPointBlankSweetenerSound = 0x1ae8;
    }
    namespace CAbility_Drifter_Darkness {
    }
    namespace CAbility_Drifter_Darkness_VData {
      constexpr std::ptrdiff_t m_CasterModifier = 0x1818;
      constexpr std::ptrdiff_t m_TargetModifier = 0x1828;
      constexpr std::ptrdiff_t m_TargetRevealModifier = 0x1838;
      constexpr std::ptrdiff_t m_OutOfCombatSprintCamera = 0x1848;
      constexpr std::ptrdiff_t m_CastParticle = 0x1858;
      constexpr std::ptrdiff_t m_CastDelayParticle = 0x1938;
      constexpr std::ptrdiff_t m_HitConfirmSound = 0x1a18;
    }
    namespace CAbility_Drifter_ShadowMark {
      constexpr std::ptrdiff_t m_hTeleportTarget = 0x11d8;
      constexpr std::ptrdiff_t m_bTeleported = 0x11dc;
      constexpr std::ptrdiff_t m_qPostTeleportAngles = 0x11e0;
      constexpr std::ptrdiff_t m_flExpireTime = 0x11f0;
      constexpr std::ptrdiff_t m_flTeleportedTime = 0x11f4;
    }
    namespace CAbility_Drifter_ShadowMark_VData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x18f8;
      constexpr std::ptrdiff_t m_TargetModifier = 0x19d8;
      constexpr std::ptrdiff_t m_TargetTeleportModifier = 0x19e8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x19f8;
      constexpr std::ptrdiff_t m_PostTeleportModifier = 0x1a08;
      constexpr std::ptrdiff_t m_strHitHeroSound = 0x1a18;
      constexpr std::ptrdiff_t m_strHitNPCSound = 0x1a28;
      constexpr std::ptrdiff_t m_cameraSequenceTeleport = 0x1a38;
    }
    namespace CAbility_Drifter_StalkersMark_Teleport {
    }
    namespace CAbility_Drifter_StalkersMark_Teleport_VData {
      constexpr std::ptrdiff_t m_strCastStartSound = 0x1838;
    }
    namespace CAbility_Fathom_LurkersAmbush {
      constexpr std::ptrdiff_t m_hRegenModifier = 0x1658;
      constexpr std::ptrdiff_t m_hInvisModifier = 0x1670;
      constexpr std::ptrdiff_t m_bIsVisibleOnMinimap = 0x1688;
      constexpr std::ptrdiff_t m_flStoppedMovingStartTime = 0x168c;
      constexpr std::ptrdiff_t m_vLastPos = 0x1690;
      constexpr std::ptrdiff_t m_flDebuffDuration = 0x169c;
      constexpr std::ptrdiff_t m_flChannelTimeStarted = 0x16a0;
      constexpr std::ptrdiff_t m_bWasLatchedWhenCast = 0x16a4;
      constexpr std::ptrdiff_t m_ChargeUpParticle = 0x16a8;
    }
    namespace CAbility_Fathom_LurkersAmbush_VData {
      constexpr std::ptrdiff_t m_ChargeUpParticle = 0x1818;
      constexpr std::ptrdiff_t m_InvisModifier = 0x18f8;
      constexpr std::ptrdiff_t m_RegenModifier = 0x1908;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1918;
      constexpr std::ptrdiff_t m_strSwapStarted = 0x1928;
    }
    namespace CAbility_Fathom_ReefdwellerHarpoon {
      constexpr std::ptrdiff_t m_bHitTarget = 0x11d8;
      constexpr std::ptrdiff_t m_vPrevPos = 0x11dc;
      constexpr std::ptrdiff_t m_bBulletFlying = 0x11e8;
      constexpr std::ptrdiff_t m_bHasLatchedOnce = 0x11e9;
      constexpr std::ptrdiff_t m_bLatched = 0x11ea;
      constexpr std::ptrdiff_t m_vHarpoonTarget = 0x11ec;
      constexpr std::ptrdiff_t m_flLatchedYaw = 0x11f8;
      constexpr std::ptrdiff_t m_flCloseEnoughStartTime = 0x11fc;
      constexpr std::ptrdiff_t m_flStuckStartTime = 0x1200;
      constexpr std::ptrdiff_t m_flReelStartTime = 0x1204;
    }
    namespace CAbility_Fathom_ReefdwellerHarpoon_VData {
      constexpr std::ptrdiff_t m_DetachBuff = 0x1818;
      constexpr std::ptrdiff_t m_strSwapStarted = 0x1828;
      constexpr std::ptrdiff_t m_cameraSequenceFlying = 0x1838;
      constexpr std::ptrdiff_t m_flAirSpeedMax = 0x18c0;
      constexpr std::ptrdiff_t m_flFallSpeedMax = 0x18c4;
      constexpr std::ptrdiff_t m_flAirDrag = 0x18c8;
      constexpr std::ptrdiff_t m_flInitialSlowSpeed = 0x18cc;
      constexpr std::ptrdiff_t m_flInitialSpeedBias = 0x18d0;
      constexpr std::ptrdiff_t m_flMaxSurfacePitch = 0x18d4;
    }
    namespace CAbility_Fencer_Lunge {
      constexpr std::ptrdiff_t m_nCurrentLungeState = 0x11dc;
      constexpr std::ptrdiff_t m_flStateStartTime = 0x11e0;
      constexpr std::ptrdiff_t m_vDashStartPos = 0x11e4;
      constexpr std::ptrdiff_t m_vDashDirection = 0x11f0;
      constexpr std::ptrdiff_t m_vLookDirection = 0x11fc;
      constexpr std::ptrdiff_t m_vStrikeDirection = 0x1208;
      constexpr std::ptrdiff_t m_bStartedInAir = 0x1214;
      constexpr std::ptrdiff_t m_iRemainingCasts = 0x1215;
      constexpr std::ptrdiff_t m_RecastEndTime = 0x1218;
      constexpr std::ptrdiff_t m_eLungeDirection = 0x121c;
      constexpr std::ptrdiff_t m_flHeldTime = 0x1220;
      constexpr std::ptrdiff_t m_vecHitEnemies = 0x1228;
      constexpr std::ptrdiff_t m_vLastPosition = 0x1240;
      constexpr std::ptrdiff_t m_flStuckTime = 0x124c;
      constexpr std::ptrdiff_t m_nGlintParticleIndex = 0x1254;
      constexpr std::ptrdiff_t m_flLastOuterCircleProgress = 0x14dc;
      constexpr std::ptrdiff_t m_nPowerLevel = 0x14e8;
    }
    namespace CAbility_Fencer_Lunge_VData {
      constexpr std::ptrdiff_t m_DashImpactEffect = 0x1818;
      constexpr std::ptrdiff_t m_DashSwingEffect = 0x18f8;
      constexpr std::ptrdiff_t m_DashTrailEffect = 0x19d8;
      constexpr std::ptrdiff_t m_SwordChargeEffect = 0x1ab8;
      constexpr std::ptrdiff_t m_SlashSwingEffect = 0x1b98;
      constexpr std::ptrdiff_t m_StackProcParticle = 0x1c78;
      constexpr std::ptrdiff_t m_GlintParticle = 0x1d58;
      constexpr std::ptrdiff_t m_PerfectImpactParticle = 0x1e38;
      constexpr std::ptrdiff_t m_vecLongEffectOffset = 0x1f18;
      constexpr std::ptrdiff_t m_vecPlayerLeftOffset = 0x1f24;
      constexpr std::ptrdiff_t m_DashBuffModifier = 0x1f28;
      constexpr std::ptrdiff_t m_flAirSpeedMax = 0x1f38;
      constexpr std::ptrdiff_t m_flAirDrag = 0x1f3c;
      constexpr std::ptrdiff_t m_flFallSpeedMax = 0x1f40;
      constexpr std::ptrdiff_t m_flDashTurnRateMax = 0x1f44;
      constexpr std::ptrdiff_t m_flMaxPowerPadding = 0x1f48;
      constexpr std::ptrdiff_t m_flEffectGroundTrace = 0x1f4c;
      constexpr std::ptrdiff_t m_flWhizbyMaxRange = 0x1f50;
      constexpr std::ptrdiff_t m_flStartPosTestCapsuleLength = 0x1f54;
      constexpr std::ptrdiff_t m_flCoverLOSBackDist = 0x1f58;
      constexpr std::ptrdiff_t m_flAttackDuration = 0x1f5c;
      constexpr std::ptrdiff_t m_flPostAttackDuration = 0x1f60;
      constexpr std::ptrdiff_t m_flMinGlintTime = 0x1f64;
      constexpr std::ptrdiff_t m_strDashStart = 0x1f68;
      constexpr std::ptrdiff_t m_strSlashStart = 0x1f78;
      constexpr std::ptrdiff_t m_strSlashImpactSound = 0x1f88;
      constexpr std::ptrdiff_t m_strChargeSound = 0x1f98;
      constexpr std::ptrdiff_t m_strChargeGlintSound = 0x1fa8;
      constexpr std::ptrdiff_t m_strMaxHoldSweetener = 0x1fb8;
      constexpr std::ptrdiff_t m_strPerfectDamageHitSound = 0x1fc8;
      constexpr std::ptrdiff_t m_cameraSequencePreRelease = 0x1fd8;
      constexpr std::ptrdiff_t m_cameraSequenceSlash = 0x2060;
    }
    namespace CAbility_Fencer_Ultimate {
      constexpr std::ptrdiff_t m_vStartPosition = 0x11d8;
      constexpr std::ptrdiff_t m_vDashDirection = 0x11e4;
      constexpr std::ptrdiff_t m_vecLastPosition = 0x11f0;
      constexpr std::ptrdiff_t m_eUltState = 0x11fc;
      constexpr std::ptrdiff_t m_flStateStartTime = 0x1200;
      constexpr std::ptrdiff_t m_bHitSomeone = 0x1204;
      constexpr std::ptrdiff_t m_vecHitEnemies = 0x1208;
      constexpr std::ptrdiff_t m_vecHitHeroes = 0x1220;
      constexpr std::ptrdiff_t m_flStuckTime = 0x1238;
      constexpr std::ptrdiff_t m_UltHoldVFX = 0x123c;
      constexpr std::ptrdiff_t m_DirPreviewVFX = 0x1240;
    }
    namespace CAbility_Fencer_Ultimate_VData {
      constexpr std::ptrdiff_t m_flHoldingDuration = 0x1818;
      constexpr std::ptrdiff_t m_flSweepingDuration = 0x181c;
      constexpr std::ptrdiff_t m_flDamageTimeOffsetFromCamera = 0x1820;
      constexpr std::ptrdiff_t m_flNonHeroDamageDelay = 0x1824;
      constexpr std::ptrdiff_t m_flMaxVeerDistanceAllowed = 0x1828;
      constexpr std::ptrdiff_t m_flMinCameraSweepSpeed = 0x182c;
      constexpr std::ptrdiff_t m_CasterModifier = 0x1830;
      constexpr std::ptrdiff_t m_CasterArrivalModifier = 0x1840;
      constexpr std::ptrdiff_t m_TargetModifier = 0x1850;
      constexpr std::ptrdiff_t m_TargetNonHeroModifier = 0x1860;
      constexpr std::ptrdiff_t m_TargetPreviewParticle = 0x1870;
      constexpr std::ptrdiff_t m_DashImpactEffect = 0x1950;
      constexpr std::ptrdiff_t m_DashSwingEffect = 0x1a30;
      constexpr std::ptrdiff_t m_DashLineEffect = 0x1b10;
      constexpr std::ptrdiff_t m_UltHoldEffect = 0x1bf0;
      constexpr std::ptrdiff_t m_DirPreviewEffect = 0x1cd0;
      constexpr std::ptrdiff_t m_strDashHitEnemy = 0x1db0;
    }
    namespace CAbility_Mirage_SandPhantom {
      constexpr std::ptrdiff_t m_bHasVictims = 0x11d8;
      constexpr std::ptrdiff_t m_vecVictimModifiers = 0x11e0;
    }
    namespace CAbility_Mirage_SandPhantom_VData {
    }
    namespace CAbility_Mirage_Teleport_VData {
      constexpr std::ptrdiff_t m_InterruptNotificationModifier = 0x1818;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_preTeleportParticle = 0x1838;
      constexpr std::ptrdiff_t m_TeleportStartParticle = 0x1918;
      constexpr std::ptrdiff_t m_TeleportEndParticle = 0x19f8;
      constexpr std::ptrdiff_t m_strArriveSound = 0x1ad8;
      constexpr std::ptrdiff_t m_strDepartSound = 0x1ae8;
      constexpr std::ptrdiff_t m_strChannelDestinationSound = 0x1af8;
      constexpr std::ptrdiff_t m_flObjectiveOffset = 0x1b08;
    }
    namespace CAbility_Mirage_Tornado {
      constexpr std::ptrdiff_t m_RecastWindowEnd = 0x11dc;
      constexpr std::ptrdiff_t m_anglesCharging = 0x1660;
      constexpr std::ptrdiff_t m_flChargeStartTime = 0x166c;
    }
    namespace CAbility_Mirage_Tornado_VData {
      constexpr std::ptrdiff_t m_TornadoCastParticle = 0x1818;
      constexpr std::ptrdiff_t m_PurgeCastParticle = 0x18f8;
      constexpr std::ptrdiff_t m_WhirlwindEvasionModifier = 0x19d8;
      constexpr std::ptrdiff_t m_TornadoAura = 0x19e8;
      constexpr std::ptrdiff_t m_GrenadeTrailModifier = 0x19f8;
      constexpr std::ptrdiff_t m_cameraSequenceTravelingInTornado = 0x1a08;
      constexpr std::ptrdiff_t m_PurgeSound = 0x1a90;
    }
    namespace CAbility_Operative_Revelation {
    }
    namespace CAbility_Operative_Revelation_VData {
      constexpr std::ptrdiff_t m_CasterModifier = 0x1818;
    }
    namespace CAbility_Operative_UmbrellaManeuver {
      constexpr std::ptrdiff_t m_ChannelParticle = 0x11d8;
    }
    namespace CAbility_Operative_UmbrellaManeuver_VData {
      constexpr std::ptrdiff_t m_AirHangModifier = 0x1818;
      constexpr std::ptrdiff_t m_LaunchParticle = 0x1828;
      constexpr std::ptrdiff_t m_ChannelParticle = 0x1908;
      constexpr std::ptrdiff_t m_ChannelStartParticle = 0x19e8;
      constexpr std::ptrdiff_t m_ShootParticle = 0x1ac8;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1ba8;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x1c88;
    }
    namespace CAbility_Rutger_CheatDeath {
    }
    namespace CAbility_Rutger_CheatDeath_VData {
      constexpr std::ptrdiff_t m_ModifierCheatDeathActivated = 0x1818;
    }
    namespace CAbility_Rutger_ForceField {
    }
    namespace CAbility_Rutger_ForceField_VData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x1818;
      constexpr std::ptrdiff_t m_VictimPushModifier = 0x1828;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1838;
      constexpr std::ptrdiff_t m_strDomeCreated = 0x1848;
      constexpr std::ptrdiff_t m_strChargeUpSound = 0x1858;
      constexpr std::ptrdiff_t m_strPushAndDamage = 0x1868;
      constexpr std::ptrdiff_t m_ChronoSphereChargeParticle = 0x1878;
    }
    namespace CAbility_Rutger_RocketLauncher {
    }
    namespace CAbility_Rutger_RocketLauncher_VData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_ShootParticle = 0x18f8;
    }
    namespace CAbility_Synth_Affliction {
      constexpr std::ptrdiff_t m_hAOEParticle = 0x13d8;
    }
    namespace CAbility_Synth_Affliction_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_AoEParticle = 0x1828;
      constexpr std::ptrdiff_t m_CastParticle = 0x1908;
      constexpr std::ptrdiff_t m_strHitSound = 0x19e8;
    }
    namespace CAbility_Synth_Barrage {
      constexpr std::ptrdiff_t m_nProjectilesScheduled = 0x1758;
      constexpr std::ptrdiff_t m_ChannelParticle = 0x175c;
      constexpr std::ptrdiff_t m_flNextShootTime = 0x1760;
    }
    namespace CAbility_Synth_Barrage_VData {
      constexpr std::ptrdiff_t m_BarrageCasterModifier = 0x1818;
      constexpr std::ptrdiff_t m_AmpModifier = 0x1828;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1838;
      constexpr std::ptrdiff_t m_ShootParticle = 0x1848;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1928;
      constexpr std::ptrdiff_t m_ChannelParticle = 0x1a08;
      constexpr std::ptrdiff_t m_strProjectileLaunchSound = 0x1ae8;
      constexpr std::ptrdiff_t m_flAttackInterval = 0x1af8;
    }
    namespace CAbility_Synth_PlasmaFlux {
      constexpr std::ptrdiff_t m_bTeleported = 0x1200;
      constexpr std::ptrdiff_t m_flProjectileLaunchTime = 0x1204;
      constexpr std::ptrdiff_t m_flProjectileExpireTime = 0x1208;
      constexpr std::ptrdiff_t m_hActiveProjectile = 0x120c;
    }
    namespace CAbility_Synth_PlasmaFlux_Trigger {
    }
    namespace CAbility_Synth_PlasmaFlux_VData {
      constexpr std::ptrdiff_t m_WeaponDamageBonusModifier = 0x1818;
      constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x1828;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1908;
      constexpr std::ptrdiff_t m_strCasterLoopingSound = 0x19e8;
      constexpr std::ptrdiff_t m_strProjectileExpireSound = 0x19f8;
      constexpr std::ptrdiff_t m_strImpactSound = 0x1a08;
      constexpr std::ptrdiff_t m_strTimerSound = 0x1a18;
      constexpr std::ptrdiff_t m_strArrivedSound = 0x1a28;
      constexpr std::ptrdiff_t m_cameraSequenceTeleport = 0x1a38;
    }
    namespace CAbility_Synth_Pulse {
    }
    namespace CAbility_Synth_Pulse_VData {
      constexpr std::ptrdiff_t m_EscapeModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_AoEParticle = 0x1838;
      constexpr std::ptrdiff_t m_EffectParticle = 0x1918;
      constexpr std::ptrdiff_t m_ChannelParticle = 0x19f8;
      constexpr std::ptrdiff_t m_HitParticle = 0x1ad8;
      constexpr std::ptrdiff_t m_RadiusParticle = 0x1bb8;
      constexpr std::ptrdiff_t m_strExpireSound = 0x1c98;
      constexpr std::ptrdiff_t m_cameraSequenceInSatchel = 0x1ca8;
    }
    namespace CAbility_Werewolf_Frenzy {
      constexpr std::ptrdiff_t m_SandEffect = 0x15d8;
      constexpr std::ptrdiff_t m_vecHitTargets = 0x15e0;
    }
    namespace CAbility_Werewolf_FrenzyVData {
      constexpr std::ptrdiff_t m_TargetModifier = 0x1818;
      constexpr std::ptrdiff_t m_AreaParticle = 0x1828;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x1908;
      constexpr std::ptrdiff_t m_TargetDamageParticle = 0x19e8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x1ac8;
      constexpr std::ptrdiff_t m_strPointBlankSweetenerSound = 0x1ad8;
    }
    namespace CAccoladeDefinition {
      constexpr std::ptrdiff_t m_unAccoladeID = 0x0;
      constexpr std::ptrdiff_t m_sTrackedStatName = 0x10;
      constexpr std::ptrdiff_t m_sFlavorName = 0x20;
      constexpr std::ptrdiff_t m_sDescription = 0x30;
      constexpr std::ptrdiff_t m_eThresholdType = 0x40;
      constexpr std::ptrdiff_t m_vecThresholds = 0x48;
      constexpr std::ptrdiff_t m_vecEnabledGameModes = 0x60;
    }
    namespace CAnimGraphNetworkedVariables {
      constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8;
      constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20;
      constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38;
      constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50;
      constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68;
      constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80;
      constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98;
      constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xb0;
      constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xc8;
      constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xe0;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xf8;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1a0;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1b8;
      constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1d0;
      constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1e8;
      constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1ec;
      constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1f0;
      constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1f4;
    }
    namespace CAttributeContainer {
      constexpr std::ptrdiff_t m_Item = 0x68;
    }
    namespace CAttributeList {
      constexpr std::ptrdiff_t m_Attributes = 0x8;
      constexpr std::ptrdiff_t m_pManager = 0x70;
    }
    namespace CAttributeManager {
      constexpr std::ptrdiff_t m_Providers = 0x8;
      constexpr std::ptrdiff_t m_Receivers = 0x20;
      constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x38;
      constexpr std::ptrdiff_t m_hOuter = 0x3c;
      constexpr std::ptrdiff_t m_bPreventLoopback = 0x40;
      constexpr std::ptrdiff_t m_ProviderType = 0x44;
      constexpr std::ptrdiff_t m_CachedResults = 0x48;
    }
    namespace CAttributeManager__cached_attribute_float_t {
      constexpr std::ptrdiff_t flIn = 0x0;
      constexpr std::ptrdiff_t iAttribHook = 0x8;
      constexpr std::ptrdiff_t flOut = 0x10;
    }
    namespace CBaseAnimGraph {
      constexpr std::ptrdiff_t m_graphControllerManager = 0x9a0;
      constexpr std::ptrdiff_t m_pMainGraphController = 0xa50;
      constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xa58;
      constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xa5a;
      constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xa68;
      constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xa6c;
      constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xa70;
      constexpr std::ptrdiff_t m_nAnimGraphUpdateId = 0xa7c;
      constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xa80;
      constexpr std::ptrdiff_t m_vecForce = 0xa84;
      constexpr std::ptrdiff_t m_nForceBone = 0xa90;
      constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xa98;
      constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xaa0;
      constexpr std::ptrdiff_t m_pRagdollControl = 0xab0;
      constexpr std::ptrdiff_t m_RagdollPose = 0xab8;
      constexpr std::ptrdiff_t m_bRagdollEnabled = 0xb00;
      constexpr std::ptrdiff_t m_bRagdollClientSide = 0xb01;
      constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xb10;
      constexpr std::ptrdiff_t m_bodyGroupModifiers = 0xc18;
    }
    namespace CBaseAnimGraph__ModifierHandleVector_t {
      constexpr std::ptrdiff_t m_ModifierHandles = 0x0;
    }
    namespace CBaseAnimGraphController {
      constexpr std::ptrdiff_t m_nAnimationAlgorithm = 0x18;
      constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x20;
      constexpr std::ptrdiff_t m_pAnimGraphInstance = 0x14b0;
      constexpr std::ptrdiff_t m_nNextExternalGraphHandle = 0x1510;
      constexpr std::ptrdiff_t m_vecSecondarySkeletonNames = 0x1518;
      constexpr std::ptrdiff_t m_vecSecondarySkeletons = 0x1530;
      constexpr std::ptrdiff_t m_nSecondarySkeletonMasterCount = 0x1548;
      constexpr std::ptrdiff_t m_flSoundSyncTime = 0x1550;
      constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x1554;
      constexpr std::ptrdiff_t m_hSequence = 0x15a8;
      constexpr std::ptrdiff_t m_flSeqStartTime = 0x15ac;
      constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x15b0;
      constexpr std::ptrdiff_t m_nAnimLoopMode = 0x15b4;
      constexpr std::ptrdiff_t m_flPlaybackRate = 0x15b8;
      constexpr std::ptrdiff_t m_nNotifyState = 0x15c4;
      constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x15c5;
      constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x15c6;
      constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x15c7;
      constexpr std::ptrdiff_t m_bSequenceFinished = 0x15c8;
      constexpr std::ptrdiff_t m_nPrevAnimUpdateTick = 0x15cc;
      constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x1868;
      constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x1870;
      constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x1888;
      constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x188c;
      constexpr std::ptrdiff_t m_nServerGraphInstanceIteration = 0x1890;
      constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x1894;
      constexpr std::ptrdiff_t m_primaryGraphId = 0x1898;
      constexpr std::ptrdiff_t m_vecExternalGraphIds = 0x18a0;
      constexpr std::ptrdiff_t m_vecExternalClipIds = 0x18b8;
      constexpr std::ptrdiff_t m_sAnimGraph2Identifier = 0x18d0;
      constexpr std::ptrdiff_t m_vecExternalGraphs = 0x1af8;
      constexpr std::ptrdiff_t m_nPrevAnimationAlgorithm = 0x1b31;
    }
    namespace CBaseDashCastAbilityVData {
      constexpr std::ptrdiff_t m_AbilityToTrigger = 0x1818;
      constexpr std::ptrdiff_t m_flDashCastTriggerRadius = 0x1828;
      constexpr std::ptrdiff_t m_flDashSpeed = 0x182c;
      constexpr std::ptrdiff_t m_bSnapToZeroSpeedOnEnd = 0x1830;
      constexpr std::ptrdiff_t m_bUseCurveToDefineSpeed = 0x1831;
      constexpr std::ptrdiff_t m_MovementSpeedCurve = 0x1838;
      constexpr std::ptrdiff_t m_flMovementSpeedCurveAvgSpeed = 0x1878;
      constexpr std::ptrdiff_t m_strTargetHitSound = 0x1880;
      constexpr std::ptrdiff_t m_strMissSound = 0x1890;
    }
    namespace CBaseFilter {
      constexpr std::ptrdiff_t m_bNegated = 0x5f0;
      constexpr std::ptrdiff_t m_OnPass = 0x5f8;
      constexpr std::ptrdiff_t m_OnFail = 0x610;
    }
    namespace CBaseLockonAbilityVData {
      constexpr std::ptrdiff_t m_TargetModifier = 0x1818;
      constexpr std::ptrdiff_t m_strApplyLockonStack = 0x1828;
    }
    namespace CBaseModifier {
      constexpr std::ptrdiff_t m_nSerialNumber = 0x28;
      constexpr std::ptrdiff_t m_flLastAppliedTime = 0x2c;
      constexpr std::ptrdiff_t m_flCreationTime = 0x30;
      constexpr std::ptrdiff_t m_flDuration = 0x34;
      constexpr std::ptrdiff_t m_hCaster = 0x38;
      constexpr std::ptrdiff_t m_hAbility = 0x3c;
      constexpr std::ptrdiff_t m_hAuraProvider = 0x40;
      constexpr std::ptrdiff_t m_bInAuraRange = 0x58;
      constexpr std::ptrdiff_t m_nAbilitySubclassID = 0x5c;
      constexpr std::ptrdiff_t m_iAttributes = 0x60;
      constexpr std::ptrdiff_t m_iTeam = 0x61;
      constexpr std::ptrdiff_t m_iStackCount = 0x62;
      constexpr std::ptrdiff_t m_iMaxStackCount = 0x64;
      constexpr std::ptrdiff_t m_pVecStackDecayTimes = 0x68;
      constexpr std::ptrdiff_t m_eDestroyReason = 0x70;
      constexpr std::ptrdiff_t m_bDisabled = 0x71;
      constexpr std::ptrdiff_t m_bSuppressSendModifier = 0x72;
      constexpr std::ptrdiff_t m_flThinkInterval = 0x74;
      constexpr std::ptrdiff_t m_flThinkIntervalStartTime = 0x78;
      constexpr std::ptrdiff_t m_flTimeScale = 0x7c;
      constexpr std::ptrdiff_t m_pVecTrackedObjects = 0x80;
      constexpr std::ptrdiff_t m_hModifierListHandle = 0x88;
    }
    namespace CBaseModifierAura {
      constexpr std::ptrdiff_t m_hAuraUnits = 0xc0;
      constexpr std::ptrdiff_t m_hOldAuraUnits = 0xd8;
      constexpr std::ptrdiff_t m_flOverrideRadius = 0xf0;
    }
    namespace CBasePlayerController {
      constexpr std::ptrdiff_t m_CommandContext = 0x5f8;
      constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x6b0;
      constexpr std::ptrdiff_t m_nTickBase = 0x6b8;
      constexpr std::ptrdiff_t m_hPawn = 0x6bc;
      constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x6c0;
      constexpr std::ptrdiff_t m_hPredictedPawn = 0x6c4;
      constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x6c8;
      constexpr std::ptrdiff_t m_hSplitOwner = 0x6cc;
      constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x6d0;
      constexpr std::ptrdiff_t m_bIsHLTV = 0x6e8;
      constexpr std::ptrdiff_t m_iConnected = 0x6ec;
      constexpr std::ptrdiff_t m_iszPlayerName = 0x6f0;
      constexpr std::ptrdiff_t m_steamID = 0x778;
      constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x780;
      constexpr std::ptrdiff_t m_bNoClipEnabled = 0x781;
      constexpr std::ptrdiff_t m_iDesiredFOV = 0x784;
    }
    namespace CBasePlayerControllerAPI {
    }
    namespace CBasePlayerVData {
      constexpr std::ptrdiff_t m_sModelName = 0x28;
      constexpr std::ptrdiff_t m_vecIntrinsicModifiers = 0x108;
      constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x120;
      constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x130;
      constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x140;
      constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x150;
      constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x160;
      constexpr std::ptrdiff_t m_flHoldBreathTime = 0x170;
      constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x174;
      constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x178;
      constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x17c;
      constexpr std::ptrdiff_t m_nWaterSpeed = 0x180;
      constexpr std::ptrdiff_t m_flUseRange = 0x184;
      constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x188;
      constexpr std::ptrdiff_t m_flCrouchTime = 0x18c;
    }
    namespace CBasePlayerWeaponVData {
      constexpr std::ptrdiff_t m_szClassName = 0x10;
      constexpr std::ptrdiff_t m_szWorldModel = 0x18;
      constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0xf8;
      constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1d8;
      constexpr std::ptrdiff_t m_bAllowFlipping = 0x1d9;
      constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1e0;
      constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x200;
      constexpr std::ptrdiff_t m_szMuzzleFlashParticleConfig = 0x2e0;
      constexpr std::ptrdiff_t m_szBarrelSmokeParticle = 0x2e8;
      constexpr std::ptrdiff_t m_nMuzzleSmokeShotThreshold = 0x3c8;
      constexpr std::ptrdiff_t m_flMuzzleSmokeTimeout = 0x3cc;
      constexpr std::ptrdiff_t m_flMuzzleSmokeDecrementRate = 0x3d0;
      constexpr std::ptrdiff_t m_bGenerateMuzzleLight = 0x3d4;
      constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x3d5;
      constexpr std::ptrdiff_t m_vecIntrinsicModifiers = 0x3d8;
      constexpr std::ptrdiff_t m_iFlags = 0x3f0;
      constexpr std::ptrdiff_t m_iWeight = 0x3f4;
      constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x3f8;
      constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x3f9;
      constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x3fa;
      constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x3fb;
      constexpr std::ptrdiff_t m_iMaxClip1 = 0x3fc;
      constexpr std::ptrdiff_t m_iMaxClip2 = 0x400;
      constexpr std::ptrdiff_t m_iDefaultClip1 = 0x404;
      constexpr std::ptrdiff_t m_iDefaultClip2 = 0x408;
      constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x40c;
      constexpr std::ptrdiff_t m_bTreatAsSingleClip = 0x40d;
      constexpr std::ptrdiff_t m_bKeepLoadedAmmo = 0x40e;
      constexpr std::ptrdiff_t m_iRumbleEffect = 0x410;
      constexpr std::ptrdiff_t m_flDropSpeed = 0x414;
      constexpr std::ptrdiff_t m_iSlot = 0x418;
      constexpr std::ptrdiff_t m_iPosition = 0x41c;
      constexpr std::ptrdiff_t m_aShootSounds = 0x420;
    }
    namespace CBaseProp {
      constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xca0;
      constexpr std::ptrdiff_t m_iShapeType = 0xca4;
      constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xca8;
      constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xcb0;
    }
    namespace CBasePulseGraphInstance {
    }
    namespace CBaseTrackedStatsEntity {
      constexpr std::ptrdiff_t m_vecTrackedStats = 0x5f0;
    }
    namespace CBaseTriggerAPI {
    }
    namespace CBaseTriggerAbilityVData {
      constexpr std::ptrdiff_t m_AbilityToTrigger = 0x1818;
      constexpr std::ptrdiff_t m_flMinCancelTime = 0x1828;
      constexpr std::ptrdiff_t m_eHintFeatureToMarkUsedOnTrigger = 0x182c;
      constexpr std::ptrdiff_t bTriggerOnDeselect = 0x1830;
    }
    namespace CBodyComponent {
      constexpr std::ptrdiff_t m_pSceneNode = 0x8;
      constexpr std::ptrdiff_t __m_pChainEntity = 0x48;
    }
    namespace CBodyComponentBaseAnimGraph {
      constexpr std::ptrdiff_t m_animationController = 0x4d0;
    }
    namespace CBodyComponentBaseModelEntity {
    }
    namespace CBodyComponentPoint {
      constexpr std::ptrdiff_t m_sceneNode = 0x80;
    }
    namespace CBodyComponentSkeletonInstance {
      constexpr std::ptrdiff_t m_skeletonInstance = 0x80;
    }
    namespace CBuoyancyHelper {
      constexpr std::ptrdiff_t m_pController = 0x8;
      constexpr std::ptrdiff_t m_nFluidType = 0x18;
      constexpr std::ptrdiff_t m_flFluidDensity = 0x1c;
      constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20;
      constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24;
      constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28;
      constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2c;
      constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30;
      constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48;
      constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60;
      constexpr std::ptrdiff_t m_vecWheelDrag = 0x78;
    }
    namespace CChoreoComponent {
      constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
      constexpr std::ptrdiff_t m_hOwner = 0x30;
      constexpr std::ptrdiff_t m_nNextSceneEventId = 0x68;
      constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0x6c;
    }
    namespace CChoreoInfoTarget {
    }
    namespace CCitadelAbilityBeam_t {
      constexpr std::ptrdiff_t m_nActivateTime = 0x8;
      constexpr std::ptrdiff_t m_angBeamAngles = 0x10;
      constexpr std::ptrdiff_t m_vBeamAimPos = 0xa0;
      constexpr std::ptrdiff_t m_bNeedsBeamReset = 0x130;
      constexpr std::ptrdiff_t m_hShooter = 0x134;
      constexpr std::ptrdiff_t m_hPlayerShooter = 0x138;
      constexpr std::ptrdiff_t m_bEnforceLOSToShootPosition = 0x10c8;
    }
    namespace CCitadelAbilityChargedBombVData {
      constexpr std::ptrdiff_t m_ChargeBombModifier = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1828;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1908;
      constexpr std::ptrdiff_t m_flChargeForMaxDamage = 0x1918;
      constexpr std::ptrdiff_t m_flMinDamagePercent = 0x191c;
    }
    namespace CCitadelAbilityComponent {
      constexpr std::ptrdiff_t m_vecAbilities = 0x68;
      constexpr std::ptrdiff_t m_vecThinkableAbilities = 0x80;
      constexpr std::ptrdiff_t m_arPendingAsyncAbilityReservationSlots = 0x98;
      constexpr std::ptrdiff_t m_arPendingAsyncAbilityReservationAbilityIDs = 0xb0;
      constexpr std::ptrdiff_t m_hSelectedAbility = 0xc8;
      constexpr std::ptrdiff_t m_hChannellingAbility = 0xcc;
      constexpr std::ptrdiff_t m_hCastDelayingAbility = 0xd0;
      constexpr std::ptrdiff_t m_hPreviouslySelectedAbility = 0xd4;
      constexpr std::ptrdiff_t m_bPreviousAbilityQueued = 0xd8;
      constexpr std::ptrdiff_t m_flTimeScale = 0xdc;
      constexpr std::ptrdiff_t m_flParticleTimeScale = 0xe0;
      constexpr std::ptrdiff_t m_bInInterruptState = 0xe4;
      constexpr std::ptrdiff_t m_ResourceStamina = 0xe8;
      constexpr std::ptrdiff_t m_ResourceAbility = 0x108;
      constexpr std::ptrdiff_t m_vecConsumedComponents = 0x128;
      constexpr std::ptrdiff_t m_nExecuteAbilityMask = 0x1d8;
      constexpr std::ptrdiff_t m_bSelectedEffectsStarted = 0x1e0;
    }
    namespace CCitadelAbilityDruidAbility04 {
    }
    namespace CCitadelAbilityDruidBasePlant {
    }
    namespace CCitadelAbilityDruidBasePlantVData {
    }
    namespace CCitadelAbilityDruidHelicopterSeeds {
    }
    namespace CCitadelAbilityDruidHelicopterSeedsVData {
    }
    namespace CCitadelAbilityDruidLeechSeed {
    }
    namespace CCitadelAbilityDruidLeechSeedVData {
      constexpr std::ptrdiff_t m_LeechModifier = 0x1818;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1828;
    }
    namespace CCitadelAbilityDruidPlantBranchWall {
    }
    namespace CCitadelAbilityDruidPlantBranchWallVData {
      constexpr std::ptrdiff_t m_BranchWallModel = 0x1818;
    }
    namespace CCitadelAbilityDruidPlantHealingTree {
    }
    namespace CCitadelAbilityDruidPlantHealingTreeVData {
      constexpr std::ptrdiff_t m_HealingTreeModel = 0x1818;
      constexpr std::ptrdiff_t m_HealingFruitModel = 0x18f8;
      constexpr std::ptrdiff_t m_FruitGlowParticle = 0x19d8;
      constexpr std::ptrdiff_t m_FruitPickupParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_HealingAuraModifier = 0x1b98;
      constexpr std::ptrdiff_t m_HealingFruitModifier = 0x1ba8;
    }
    namespace CCitadelAbilityDruidPlantInvisBush {
    }
    namespace CCitadelAbilityDruidPlantInvisBushVData {
      constexpr std::ptrdiff_t m_InvisBushModel = 0x1818;
      constexpr std::ptrdiff_t m_InvisAreaModifier = 0x18f8;
    }
    namespace CCitadelAbilityDruidPlantSomething {
    }
    namespace CCitadelAbilityDruidPlantSomethingVData {
    }
    namespace CCitadelAbilityDruidSprout {
    }
    namespace CCitadelAbilityFlyingStrikeVData {
      constexpr std::ptrdiff_t m_flJumpFallSpeedMax = 0x1820;
      constexpr std::ptrdiff_t m_flJumpAirDrag = 0x1824;
      constexpr std::ptrdiff_t m_flJumpAirSpeedMax = 0x1828;
      constexpr std::ptrdiff_t m_flOnCancelVerticalSpeedBonus = 0x182c;
      constexpr std::ptrdiff_t m_flFlyingCloseEnoughToTarget = 0x1830;
      constexpr std::ptrdiff_t m_curveSpeedScale = 0x1838;
      constexpr std::ptrdiff_t m_flAnimToStrikePointTime = 0x1878;
      constexpr std::ptrdiff_t m_flAnimToStrikeArrivalBias = 0x187c;
      constexpr std::ptrdiff_t m_flGrappleShotFloatTime = 0x1880;
      constexpr std::ptrdiff_t m_flGrappleShotDelayToFlyOnHit = 0x1884;
      constexpr std::ptrdiff_t m_flGrappleSpeed = 0x1888;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1890;
      constexpr std::ptrdiff_t m_GrappleTargetModifier = 0x18a0;
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b0;
      constexpr std::ptrdiff_t m_LeapParticle = 0x18c0;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x19a0;
      constexpr std::ptrdiff_t m_SlashParticle = 0x1a80;
      constexpr std::ptrdiff_t m_BulletGrappleTracerParticle = 0x1b60;
      constexpr std::ptrdiff_t m_EnemyGrappleParticle = 0x1c40;
      constexpr std::ptrdiff_t m_strDamageTarget = 0x1d20;
      constexpr std::ptrdiff_t m_strStartFlyingToTarget = 0x1d30;
      constexpr std::ptrdiff_t m_strStartAttack = 0x1d40;
      constexpr std::ptrdiff_t m_strGrappleHitTarget = 0x1d50;
      constexpr std::ptrdiff_t m_strGrappleHitWorld = 0x1d60;
      constexpr std::ptrdiff_t m_strGrappleHitNothing = 0x1d70;
      constexpr std::ptrdiff_t m_strGrappleLoop = 0x1d80;
      constexpr std::ptrdiff_t m_strFlyingLoop = 0x1d90;
      constexpr std::ptrdiff_t m_cameraSequenceFlying = 0x1da0;
      constexpr std::ptrdiff_t m_cameraSequenceAttacking = 0x1e28;
    }
    namespace CCitadelAbilityHealingSlashVData {
      constexpr std::ptrdiff_t m_flEffectSize = 0x1820;
      constexpr std::ptrdiff_t m_flMaxAttackAngle = 0x1824;
      constexpr std::ptrdiff_t m_remapAngleToTime = 0x1828;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1838;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1848;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1858;
      constexpr std::ptrdiff_t m_HealingSlashParticle = 0x1938;
      constexpr std::ptrdiff_t m_HealingSlashSwordGlow = 0x1a18;
      constexpr std::ptrdiff_t m_CastParticle = 0x1af8;
      constexpr std::ptrdiff_t m_strDamageTarget = 0x1bd8;
    }
    namespace CCitadelAbilityIncendiaryProjectileVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1828;
    }
    namespace CCitadelAbilityTangoTetherVData {
      constexpr std::ptrdiff_t m_TetherModifier = 0x1818;
      constexpr std::ptrdiff_t m_GrappleTargetModifier = 0x1828;
      constexpr std::ptrdiff_t m_BulletGrappleTracerParticle = 0x1838;
      constexpr std::ptrdiff_t m_EnemyGrappleParticle = 0x1918;
      constexpr std::ptrdiff_t m_strDamageTarget = 0x19f8;
      constexpr std::ptrdiff_t m_strGrappleHitTarget = 0x1a08;
      constexpr std::ptrdiff_t m_strGrappleHitWorld = 0x1a18;
      constexpr std::ptrdiff_t m_strGrappleHitNothing = 0x1a28;
    }
    namespace CCitadelAnimatingModelEntity {
    }
    namespace CCitadelAutoScaledTime {
      constexpr std::ptrdiff_t m_flTime = 0x8;
    }
    namespace CCitadelBaseAbilityServerOnly {
    }
    namespace CCitadelBaseDashCastAbility {
      constexpr std::ptrdiff_t m_hAbilityToTrigger = 0x11d8;
      constexpr std::ptrdiff_t m_flDashCastStartTime = 0x11dc;
      constexpr std::ptrdiff_t m_vDashCastDir = 0x11e0;
    }
    namespace CCitadelBaseLockonAbility {
      constexpr std::ptrdiff_t m_vecLockonTargets = 0x14d8;
      constexpr std::ptrdiff_t m_LockOnStartTime = 0x1540;
      constexpr std::ptrdiff_t m_nTargetingLightEffect = 0x1548;
    }
    namespace CCitadelBaseMusicOBB {
    }
    namespace CCitadelBaseShivAbility {
    }
    namespace CCitadelBaseTriggerAbility {
      constexpr std::ptrdiff_t m_hAbilityToTrigger = 0x11d8;
      constexpr std::ptrdiff_t m_SwappedToTime = 0x11dc;
    }
    namespace CCitadelBaseYamatoAbility {
      constexpr std::ptrdiff_t m_flCachedCastTime = 0x11d8;
      constexpr std::ptrdiff_t m_bIsShadowFormCast = 0x11dc;
    }
    namespace CCitadelBulletRedirectVolume {
    }
    namespace CCitadelBulletRedirectVolumeVData {
      constexpr std::ptrdiff_t m_RedirectParticle = 0x28;
    }
    namespace CCitadelBulletTimeWarp {
      constexpr std::ptrdiff_t m_flBulletTimeScale = 0x9a0;
      constexpr std::ptrdiff_t m_flProjectileTimeScale = 0x9a4;
      constexpr std::ptrdiff_t m_flExpireTime = 0x9a8;
      constexpr std::ptrdiff_t m_flStopDuration = 0x9ac;
      constexpr std::ptrdiff_t m_flBulletTimeScaleFriendly = 0x9b0;
      constexpr std::ptrdiff_t m_flBonusBulletBaseDamageFriendly = 0x9b4;
    }
    namespace CCitadelBulletTimeWarpVData {
      constexpr std::ptrdiff_t m_TimeWallHitParticle = 0x28;
      constexpr std::ptrdiff_t m_TimeWallHitTimerParticle = 0x108;
    }
    namespace CCitadelCatapultTrigger {
      constexpr std::ptrdiff_t m_vLaunchTarget = 0xa74;
      constexpr std::ptrdiff_t m_flLaunchSpeed = 0xa80;
      constexpr std::ptrdiff_t m_nameTarget = 0xa88;
    }
    namespace CCitadelControlPointTrigger {
      constexpr std::ptrdiff_t m_flInitialRadius = 0xa70;
      constexpr std::ptrdiff_t m_flEndRadius = 0xa74;
      constexpr std::ptrdiff_t m_flProgress = 0xa78;
      constexpr std::ptrdiff_t m_flCaptureTime = 0xa7c;
      constexpr std::ptrdiff_t m_hUnlockPrereq = 0xa80;
      constexpr std::ptrdiff_t m_bAvailable = 0xa84;
      constexpr std::ptrdiff_t m_bIsBeingCaptured = 0xa85;
      constexpr std::ptrdiff_t m_bIsBeingBlocked = 0xa86;
      constexpr std::ptrdiff_t m_flLastTouchedTime = 0xa90;
      constexpr std::ptrdiff_t m_vecBeamTarget = 0xa94;
      constexpr std::ptrdiff_t m_vecBeamStart = 0xaa0;
      constexpr std::ptrdiff_t m_nFXProgressBeam = 0xaac;
      constexpr std::ptrdiff_t m_strUnlockPrereq = 0xab0;
      constexpr std::ptrdiff_t m_strBeamStart = 0xab8;
      constexpr std::ptrdiff_t m_strBeamTarget = 0xac0;
    }
    namespace CCitadelDruidInvisAura {
    }
    namespace CCitadelDruidInvisAuraVData {
    }
    namespace CCitadelFamiliarClonePlayerPawn {
      constexpr std::ptrdiff_t m_hFamiliar = 0x1990;
    }
    namespace CCitadelFamiliarClone_MovementServices {
    }
    namespace CCitadelHeroComponent {
      constexpr std::ptrdiff_t m_spawnedHero = 0x18;
      constexpr std::ptrdiff_t m_loadingHero = 0x28;
      constexpr std::ptrdiff_t m_nNoSpawnHeroID = 0x38;
    }
    namespace CCitadelHeroLoader {
      constexpr std::ptrdiff_t m_hero = 0x5f0;
      constexpr std::ptrdiff_t m_nLoadSeq = 0x5f8;
      constexpr std::ptrdiff_t m_hOwner = 0x5fc;
    }
    namespace CCitadelHideoutInteractableProp {
      constexpr std::ptrdiff_t m_OnStartTouch = 0xee8;
      constexpr std::ptrdiff_t m_OnStartTouchAll = 0xf00;
      constexpr std::ptrdiff_t m_OnEndTouch = 0xf18;
      constexpr std::ptrdiff_t m_OnEndTouchAll = 0xf30;
      constexpr std::ptrdiff_t m_OnInteracted = 0xf48;
      constexpr std::ptrdiff_t m_strInteractLocString = 0xf60;
      constexpr std::ptrdiff_t m_eInteractStyle = 0xf68;
      constexpr std::ptrdiff_t m_eHideoutAction = 0xf6c;
      constexpr std::ptrdiff_t m_flInteractDistance = 0xf70;
      constexpr std::ptrdiff_t m_strWorldPanelEntity = 0xf78;
      constexpr std::ptrdiff_t m_strOpacityCurveString = 0xf80;
    }
    namespace CCitadelHideoutInteractableTrigger {
      constexpr std::ptrdiff_t m_OnInteracted = 0xa78;
      constexpr std::ptrdiff_t m_strInteractLocString = 0xa90;
      constexpr std::ptrdiff_t m_eHideoutAction = 0xa98;
    }
    namespace CCitadelHideoutTeleportTrigger {
      constexpr std::ptrdiff_t m_strDestLandmark = 0xab0;
      constexpr std::ptrdiff_t m_strDestMap = 0xab8;
      constexpr std::ptrdiff_t m_strDestLocString = 0xac0;
      constexpr std::ptrdiff_t m_OnHideoutTeleport = 0xac8;
      constexpr std::ptrdiff_t m_strPropModel = 0xae0;
    }
    namespace CCitadelInWorldEventTimer {
      constexpr std::ptrdiff_t m_hTrackedEntity = 0xbf0;
      constexpr std::ptrdiff_t m_nTrackedEntity = 0xbf4;
    }
    namespace CCitadelItemMetal {
    }
    namespace CCitadelItemPickupIdol {
    }
    namespace CCitadelItemPickupRejuv {
      constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0xce8;
      constexpr std::ptrdiff_t m_bPickedUp = 0xed0;
    }
    namespace CCitadelItemPickupRejuvHeroTest {
    }
    namespace CCitadelItemPickupRejuvHeroTestInfoSpawn {
    }
    namespace CCitadelItemPickupRejuvHeroTestVData {
    }
    namespace CCitadelItemPickupRejuvVData {
      constexpr std::ptrdiff_t m_AbilityProjectile = 0x28;
      constexpr std::ptrdiff_t m_flMaxDistForHeal = 0x38;
      constexpr std::ptrdiff_t m_flPhysicsRadius = 0x3c;
      constexpr std::ptrdiff_t m_RebirthModifier = 0x40;
      constexpr std::ptrdiff_t m_PunchPickupModifier = 0x50;
      constexpr std::ptrdiff_t m_IsFrozenParticle = 0x60;
    }
    namespace CCitadelItemPunchableNeutralGold {
    }
    namespace CCitadelItemPunchableNeutralGoldVData {
      constexpr std::ptrdiff_t m_flGroundOffset = 0x28;
      constexpr std::ptrdiff_t m_flSpinRate = 0x2c;
      constexpr std::ptrdiff_t m_flBobHeight = 0x30;
      constexpr std::ptrdiff_t m_flBobFrequency = 0x34;
      constexpr std::ptrdiff_t m_flSpinSpeed = 0x38;
      constexpr std::ptrdiff_t m_PunchPickupModifier = 0x40;
    }
    namespace CCitadelLootTable {
    }
    namespace CCitadelLootTableBase {
    }
    namespace CCitadelLootTableVData {
      constexpr std::ptrdiff_t m_vecEntries = 0x30;
    }
    namespace CCitadelMatchmakingStatusInfo {
      constexpr std::ptrdiff_t m_OnStartMatchmaking = 0x5f0;
      constexpr std::ptrdiff_t m_OnStopMatchmaking = 0x608;
    }
    namespace CCitadelModelEntity {
    }
    namespace CCitadelModifer_Viscous_Goo_Aura_VData {
    }
    namespace CCitadelModifier {
      constexpr std::ptrdiff_t m_flEffectiveness = 0xa0;
    }
    namespace CCitadelModifierAerialAssaultVData {
      constexpr std::ptrdiff_t m_FireRateModifier = 0x750;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x760;
      constexpr std::ptrdiff_t m_TracerParticle = 0x840;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x920;
      constexpr std::ptrdiff_t m_flAirDrag = 0x930;
      constexpr std::ptrdiff_t m_flAirSpeed = 0x934;
      constexpr std::ptrdiff_t m_flFallSpeed = 0x938;
    }
    namespace CCitadelModifierAerialAssaultWatcherVData {
      constexpr std::ptrdiff_t m_AssaultModifier = 0x750;
    }
    namespace CCitadelModifierApexWatcherVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
    }
    namespace CCitadelModifierAura {
    }
    namespace CCitadelModifierAuraVData {
      constexpr std::ptrdiff_t m_iAuraSearchType = 0x790;
      constexpr std::ptrdiff_t m_iAuraSearchFlags = 0x794;
      constexpr std::ptrdiff_t m_eLosCheck = 0x798;
      constexpr std::ptrdiff_t m_flModifierProvidedByAuraDuration = 0x79c;
      constexpr std::ptrdiff_t m_bRemoveProvidedModifierOnAuraRemoval = 0x7a0;
    }
    namespace CCitadelModifierAura_Cone {
    }
    namespace CCitadelModifierAura_ConeVData {
      constexpr std::ptrdiff_t m_flAuraTargetingConeHalfWidth = 0x7a8;
      constexpr std::ptrdiff_t m_flAuraTargetingConeAngle = 0x7ac;
    }
    namespace CCitadelModifierAura_Default {
    }
    namespace CCitadelModifierCadenceGunSpikesVData {
      constexpr std::ptrdiff_t m_strSmallIconCssClassMax = 0x750;
    }
    namespace CCitadelModifierChronoPulseGrenadePulseAreaVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_SlowModifier = 0x760;
      constexpr std::ptrdiff_t m_PreviewRingParticle = 0x770;
      constexpr std::ptrdiff_t m_AreaEffect = 0x850;
      constexpr std::ptrdiff_t m_strArmingSound = 0x930;
      constexpr std::ptrdiff_t m_strArmedSound = 0x940;
      constexpr std::ptrdiff_t m_strHitSound = 0x950;
    }
    namespace CCitadelModifierDruidInvis {
      constexpr std::ptrdiff_t m_flCurrentObscureLevel = 0xc0;
      constexpr std::ptrdiff_t m_nInvisModifierID = 0xc4;
      constexpr std::ptrdiff_t m_AmbientParticles = 0xc8;
    }
    namespace CCitadelModifierDruidInvisVData {
      constexpr std::ptrdiff_t m_flHideDuration = 0x750;
      constexpr std::ptrdiff_t m_flRevealDuration = 0x754;
    }
    namespace CCitadelModifierDruidLeechSeed {
      constexpr std::ptrdiff_t m_nDamagePulsesDone = 0xc0;
    }
    namespace CCitadelModifierDruidLeechSeedVData {
    }
    namespace CCitadelModifierDustStormAuraApplyVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
    }
    namespace CCitadelModifierIdolReturnTimerVData {
      constexpr std::ptrdiff_t m_ChannelParticle = 0x750;
    }
    namespace CCitadelModifierItemPickupTimerVData {
      constexpr std::ptrdiff_t m_TimerToSilence = 0x750;
      constexpr std::ptrdiff_t m_SilenceDuration = 0x754;
      constexpr std::ptrdiff_t m_SilenceModifier = 0x758;
      constexpr std::ptrdiff_t m_bIsIdolPickup = 0x768;
    }
    namespace CCitadelModifierProjectilePitchingLoopSoundThinker {
    }
    namespace CCitadelModifierProjectilePitchingLoopSoundThinkerVData {
      constexpr std::ptrdiff_t m_speedToPitchRemap = 0x750;
    }
    namespace CCitadelModifierShadowStepVData {
      constexpr std::ptrdiff_t m_SilenceModifier = 0xa18;
      constexpr std::ptrdiff_t m_ArmorDebuff = 0xa28;
      constexpr std::ptrdiff_t m_InvisChangedEffect = 0xa38;
      constexpr std::ptrdiff_t m_ShadowRevealedEffect = 0xb18;
      constexpr std::ptrdiff_t m_flMinInvisDuration = 0xbf8;
    }
    namespace CCitadelModifierTier2BossAoeWaveAuraVData {
      constexpr std::ptrdiff_t m_flWaveHeight = 0x7a8;
      constexpr std::ptrdiff_t m_waveParticle = 0x7b0;
    }
    namespace CCitadelModifierTier2BossLaserBeamVData {
      constexpr std::ptrdiff_t m_bIsSideHead = 0x750;
      constexpr std::ptrdiff_t m_flSideSearchRadius = 0x754;
      constexpr std::ptrdiff_t m_flSideSearchAngle = 0x758;
      constexpr std::ptrdiff_t m_flMinShootTime = 0x75c;
      constexpr std::ptrdiff_t m_strBeamStartAttachmentPoint = 0x760;
      constexpr std::ptrdiff_t m_strBeamStartAttachmentPoint02 = 0x768;
      constexpr std::ptrdiff_t m_strBeamStartSearchPos = 0x770;
      constexpr std::ptrdiff_t m_BeamPreviewEffect = 0x778;
      constexpr std::ptrdiff_t m_BeamActiveEffect = 0x858;
      constexpr std::ptrdiff_t m_BeamLoopSound = 0x938;
      constexpr std::ptrdiff_t m_BeamFireSound = 0x948;
    }
    namespace CCitadelModifierTier2BossLaserChargeVData {
      constexpr std::ptrdiff_t m_strAttachmentPoints = 0x750;
      constexpr std::ptrdiff_t m_BeamChargingEffect = 0x768;
    }
    namespace CCitadelModifierTier3BossAoeWaveAuraVData {
      constexpr std::ptrdiff_t m_flWaveHeight = 0x7a8;
      constexpr std::ptrdiff_t m_AmberWaveParticle = 0x7b0;
      constexpr std::ptrdiff_t m_SapphWaveParticle = 0x890;
    }
    namespace CCitadelModifierVData {
      constexpr std::ptrdiff_t m_bIsBuildup = 0x408;
      constexpr std::ptrdiff_t m_bNetworkValuesForStatsPreview = 0x409;
      constexpr std::ptrdiff_t m_vecAutoRegisterModifierValueFromAbilityPropertyName = 0x410;
      constexpr std::ptrdiff_t m_bCasterCountsAsAssister = 0x428;
      constexpr std::ptrdiff_t m_flLingeringAssistWindow = 0x42c;
      constexpr std::ptrdiff_t m_bDurationCanBeTimeScaled = 0x430;
      constexpr std::ptrdiff_t m_bDurationReducible = 0x431;
      constexpr std::ptrdiff_t m_bDurationReducibleByCrowdControlDiminish = 0x432;
      constexpr std::ptrdiff_t m_eTimeScaleSource = 0x434;
      constexpr std::ptrdiff_t m_bDurationAffectedByEffectiveness = 0x438;
      constexpr std::ptrdiff_t m_AG2BaseAction = 0x440;
      constexpr std::ptrdiff_t m_AG2BaseState = 0x450;
      constexpr std::ptrdiff_t m_AG2HeroState = 0x460;
      constexpr std::ptrdiff_t m_eDrawOverheadStatus = 0x470;
      constexpr std::ptrdiff_t m_bReverseHudProgressBar = 0x474;
      constexpr std::ptrdiff_t m_strSmallIconCssClass = 0x478;
      constexpr std::ptrdiff_t m_strHintText = 0x480;
      constexpr std::ptrdiff_t m_strModifierOverrideStatusID = 0x488;
      constexpr std::ptrdiff_t m_strHudIcon = 0x490;
      constexpr std::ptrdiff_t m_eHudDisplayLocation = 0x4a0;
      constexpr std::ptrdiff_t m_eModifierDisplayLocaiton = 0x4a4;
      constexpr std::ptrdiff_t m_strHudMessageText = 0x4a8;
      constexpr std::ptrdiff_t m_bIsHiddenOverhead = 0x4b0;
      constexpr std::ptrdiff_t m_vecAlwaysShowInStatModifierUI = 0x4b8;
      constexpr std::ptrdiff_t m_OnCreateResponse = 0x4d0;
      constexpr std::ptrdiff_t m_cameraSequenceCreated = 0x508;
      constexpr std::ptrdiff_t m_bEndCreatedSequenceOnRemove = 0x590;
      constexpr std::ptrdiff_t m_cameraSequenceRemoved = 0x598;
      constexpr std::ptrdiff_t m_BarrierBehavior = 0x620;
      constexpr std::ptrdiff_t m_BarrierCreateParticle = 0x628;
      constexpr std::ptrdiff_t m_bSupressDefaultBarrierBreakParticle = 0x708;
      constexpr std::ptrdiff_t m_sExpiredSound = 0x710;
      constexpr std::ptrdiff_t m_FootstepOverride = 0x720;
      constexpr std::ptrdiff_t m_FootstepAdditional = 0x738;
      constexpr std::ptrdiff_t m_bRemoveOnInterrupted = 0x748;
    }
    namespace CCitadelModifier_Viscous_Goo_Aura {
    }
    namespace CCitadelObserver_MovementServices {
      constexpr std::ptrdiff_t m_flRoamingSpeed = 0x240;
      constexpr std::ptrdiff_t m_bHasFreeCursor = 0x244;
    }
    namespace CCitadelPassthroughFakeWall {
      constexpr std::ptrdiff_t m_bAllowAnyone = 0x9a0;
      constexpr std::ptrdiff_t m_bAllowTinyCharacters = 0x9a1;
      constexpr std::ptrdiff_t m_flTriggerDistanceMeters = 0x9a4;
      constexpr std::ptrdiff_t m_hTrigger = 0x9a8;
      constexpr std::ptrdiff_t m_eventOnOpen = 0x9b0;
      constexpr std::ptrdiff_t m_eventOnClose = 0x9c8;
    }
    namespace CCitadelPlayOfTheGame {
      constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
      constexpr std::ptrdiff_t m_eState = 0xc8;
      constexpr std::ptrdiff_t m_bTriggerStarted = 0xc9;
      constexpr std::ptrdiff_t m_playOfTheGameDataServer = 0xd0;
    }
    namespace CCitadelPlayerClipComponent {
    }
    namespace CCitadelPlayerController {
      constexpr std::ptrdiff_t m_ePlayState = 0x7f0;
      constexpr std::ptrdiff_t m_iGuidedBotMatchLastHits = 0x7f4;
      constexpr std::ptrdiff_t m_iGuidedBotMatchOrbsSecured = 0x7f8;
      constexpr std::ptrdiff_t m_iGuidedBotMatchOrbsDenied = 0x7fc;
      constexpr std::ptrdiff_t m_iGuidedBotMatchDamageToGuardians = 0x800;
      constexpr std::ptrdiff_t m_iGuidedBotMatchDamageToPlayers = 0x804;
      constexpr std::ptrdiff_t m_iGuidedBotMatchDamageTaken = 0x808;
      constexpr std::ptrdiff_t m_iGuidedBotMatchNetWorth = 0x80c;
      constexpr std::ptrdiff_t m_iGuidedBotMatchModsPurchased = 0x810;
      constexpr std::ptrdiff_t m_iGuidedBotMatchAbilityUpgrades = 0x814;
      constexpr std::ptrdiff_t m_flGuideBotMatchLastTaskNagVO = 0x818;
      constexpr std::ptrdiff_t m_flGuideBotLastTimeTaskCompleted = 0x81c;
      constexpr std::ptrdiff_t m_eGuidedBotMatchObjective = 0x820;
      constexpr std::ptrdiff_t m_nCurrentRank = 0x824;
      constexpr std::ptrdiff_t m_nAssignedLane = 0x828;
      constexpr std::ptrdiff_t m_nOriginalLaneAssignment = 0x829;
      constexpr std::ptrdiff_t m_bBotDisconnectTakeover = 0x82a;
      constexpr std::ptrdiff_t m_bInTeamChat = 0x82b;
      constexpr std::ptrdiff_t m_bInPartyChat = 0x82c;
      constexpr std::ptrdiff_t m_bLaneSwapLocked = 0x82d;
      constexpr std::ptrdiff_t m_vecLaneSwapRequests = 0x830;
      constexpr std::ptrdiff_t m_vecLaneSwapRejects = 0x848;
      constexpr std::ptrdiff_t m_vecMutedPlayers = 0x860;
      constexpr std::ptrdiff_t m_bCommsRestricted = 0x878;
      constexpr std::ptrdiff_t m_hHeroPawn = 0x8ac;
      constexpr std::ptrdiff_t m_PlayerDataGlobal = 0x8f0;
      constexpr std::ptrdiff_t m_nDeathReplayAvailable = 0xc20;
      constexpr std::ptrdiff_t m_unLobbyPlayerSlot = 0xc21;
      constexpr std::ptrdiff_t m_bHasCheckedFriendName = 0xc22;
      constexpr std::ptrdiff_t m_sFriendName = 0xc28;
    }
    namespace CCitadelPlayerPawnBase {
    }
    namespace CCitadelPlayer_CameraServices {
      constexpr std::ptrdiff_t m_hPrevPostProcessingVolume = 0x3a0;
    }
    namespace CCitadelPlayer_MovementServices {
      constexpr std::ptrdiff_t m_vPositionDeltaVelocity = 0x270;
      constexpr std::ptrdiff_t m_bToggleDuckActive = 0x2a0;
      constexpr std::ptrdiff_t m_bDucked = 0x2a1;
      constexpr std::ptrdiff_t m_bInPortalEnvironment = 0x2a2;
      constexpr std::ptrdiff_t m_vecPogoVelocity = 0x2a4;
      constexpr std::ptrdiff_t m_vecSupport = 0x2b0;
      constexpr std::ptrdiff_t m_bColliding = 0x2bc;
      constexpr std::ptrdiff_t m_bLandedOnGround = 0x2bd;
      constexpr std::ptrdiff_t m_bHasFreeCursor = 0x2be;
      constexpr std::ptrdiff_t m_flTurnSpringSpeed = 0x2c0;
      constexpr std::ptrdiff_t m_flInputDirectionCommitment = 0x2c4;
      constexpr std::ptrdiff_t m_nSuccessiveDirChanges = 0x2c8;
      constexpr std::ptrdiff_t m_flLastDirChange = 0x2cc;
      constexpr std::ptrdiff_t m_vLastWishDir = 0x2d0;
    }
    namespace CCitadelPlayer_ObserverServices {
      constexpr std::ptrdiff_t m_nLastLocalPlayerObservedTeam = 0x60;
      constexpr std::ptrdiff_t m_nCurrentObservedTeam = 0x64;
      constexpr std::ptrdiff_t m_hLastObserverTarget = 0x68;
      constexpr std::ptrdiff_t m_hPreviousTeamTarget = 0x6c;
      constexpr std::ptrdiff_t m_angTargetCamera = 0x70;
      constexpr std::ptrdiff_t m_vTargetCameraPos = 0x100;
    }
    namespace CCitadelPortalTrigger {
      constexpr std::ptrdiff_t m_hOtherPortal = 0xa88;
    }
    namespace CCitadelPreviewPlayerController {
    }
    namespace CCitadelProjectileTouchVolume {
    }
    namespace CCitadelProjectileTouchVolumeVData {
    }
    namespace CCitadelRecentDamage {
      constexpr std::ptrdiff_t m_flLastDamageTime = 0x8;
      constexpr std::ptrdiff_t m_flStartTime = 0xc;
      constexpr std::ptrdiff_t m_flEndTime = 0x10;
      constexpr std::ptrdiff_t m_hPlayerEntToStore = 0x14;
    }
    namespace CCitadelSoundEntityOBB {
      constexpr std::ptrdiff_t m_vMins = 0x6c4;
      constexpr std::ptrdiff_t m_vMaxs = 0x6d0;
    }
    namespace CCitadelSoundOpvarSetOBB {
      constexpr std::ptrdiff_t m_iszStackName = 0x608;
      constexpr std::ptrdiff_t m_iszOperatorName = 0x610;
      constexpr std::ptrdiff_t m_iszOpvarName = 0x618;
      constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x620;
      constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x62c;
      constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x638;
      constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x644;
      constexpr std::ptrdiff_t m_nAABBDirection = 0x650;
    }
    namespace CCitadelSoundStackFieldOBB {
      constexpr std::ptrdiff_t m_vMins = 0x6b0;
      constexpr std::ptrdiff_t m_vMaxs = 0x6bc;
      constexpr std::ptrdiff_t m_nMaxDistance = 0x6c8;
      constexpr std::ptrdiff_t m_nStackName = 0x6d0;
      constexpr std::ptrdiff_t m_nOperatorName = 0x6d8;
      constexpr std::ptrdiff_t m_nOperatorFieldName = 0x6e0;
      constexpr std::ptrdiff_t m_nMusicState = 0x6e8;
    }
    namespace CCitadelSpeedBoostTrigger {
      constexpr std::ptrdiff_t m_flMovespeedOverride = 0xa70;
    }
    namespace CCitadelTeamRevealHeroCard {
      constexpr std::ptrdiff_t m_unHeroID = 0xee4;
    }
    namespace CCitadelTriggerCapturePoint {
      constexpr std::ptrdiff_t m_pUIWorldEventTimer = 0xa70;
      constexpr std::ptrdiff_t m_tQueuedEnableTime = 0xa78;
      constexpr std::ptrdiff_t m_flCaptureProgress = 0xa7c;
      constexpr std::ptrdiff_t m_nCaptureProgressOwner = 0xa80;
      constexpr std::ptrdiff_t m_nActivelyCapturingTeam = 0xa84;
      constexpr std::ptrdiff_t m_nActiveCapturers = 0xa88;
      constexpr std::ptrdiff_t m_nEnableState = 0xa8c;
    }
    namespace CCitadelTriggerNoPortals {
    }
    namespace CCitadelTrooperMinimap {
      constexpr std::ptrdiff_t m_timeLastUpdate = 0x5f0;
      constexpr std::ptrdiff_t m_vecFOWEntities = 0x5f8;
    }
    namespace CCitadelTunnelTrigger {
      constexpr std::ptrdiff_t m_bKillWhenNotTiny = 0xa78;
    }
    namespace CCitadelUnitStatusStagger {
    }
    namespace CCitadelViscousBallVData {
      constexpr std::ptrdiff_t m_sModelName = 0x28;
      constexpr std::ptrdiff_t m_flPhysicsRadius = 0x108;
    }
    namespace CCitadelYamatoBaseVData {
      constexpr std::ptrdiff_t m_flShadowFormSpeed = 0x1818;
    }
    namespace CCitadelZipLineNode {
      constexpr std::ptrdiff_t m_vecConnections = 0xa10;
      constexpr std::ptrdiff_t m_vecConnectionDir = 0xa28;
      constexpr std::ptrdiff_t m_vTangentIn = 0xa40;
      constexpr std::ptrdiff_t m_vTangentOut = 0xa4c;
      constexpr std::ptrdiff_t m_flCumulativeDistance = 0xa58;
      constexpr std::ptrdiff_t m_iNodeIndex = 0xa5c;
      constexpr std::ptrdiff_t m_eCaptureState = 0xa5e;
      constexpr std::ptrdiff_t m_iPrimaryLane = 0xa60;
      constexpr std::ptrdiff_t m_bUseBaseLaneColor = 0xa62;
      constexpr std::ptrdiff_t m_nRopesParity = 0xa64;
      constexpr std::ptrdiff_t m_bCornerNode = 0xa66;
      constexpr std::ptrdiff_t m_bCapturable = 0xa67;
      constexpr std::ptrdiff_t m_bDisableZippingToByPlayers = 0xa68;
      constexpr std::ptrdiff_t m_flSpeedMultiplierToBaseBonus = 0xa6c;
      constexpr std::ptrdiff_t m_flSpeedMultiplierFromBaseBonus = 0xa70;
      constexpr std::ptrdiff_t m_hGuardingBosses = 0xa78;
      constexpr std::ptrdiff_t m_flRopeRadius = 0xa90;
    }
    namespace CCitadel_Ability_AbilityName {
      constexpr std::ptrdiff_t m_hDoorwayAbility = 0x11e8;
    }
    namespace CCitadel_Ability_Afterburn {
    }
    namespace CCitadel_Ability_AirheartAbility02VData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x1818;
    }
    namespace CCitadel_Ability_AirheartChargeBlastVData {
    }
    namespace CCitadel_Ability_AirheartPrimaryWeaponVData {
      constexpr std::ptrdiff_t m_StuckModifier = 0x19c0;
      constexpr std::ptrdiff_t m_ExplosionFX = 0x19d0;
    }
    namespace CCitadel_Ability_AirheartRocketeer3VData {
      constexpr std::ptrdiff_t m_JetpackFireFX = 0x1818;
      constexpr std::ptrdiff_t m_VTOLExplosionFX = 0x18f8;
      constexpr std::ptrdiff_t m_flAirDashDistancePct = 0x19d8;
      constexpr std::ptrdiff_t m_flAirDrag = 0x19dc;
      constexpr std::ptrdiff_t m_flAirSpeed = 0x19e0;
      constexpr std::ptrdiff_t m_flBeginJetpackingVelocityMultiplier = 0x19e4;
      constexpr std::ptrdiff_t m_flTimeToHoldBeforeBeginJetpack = 0x19e8;
      constexpr std::ptrdiff_t m_flVerticalDampening_FallingBelowNeutral = 0x19ec;
      constexpr std::ptrdiff_t m_flVerticalDampening_FallingAboveNeutral = 0x19f0;
      constexpr std::ptrdiff_t m_flVerticalDampening_RisingBelowNeutral = 0x19f4;
      constexpr std::ptrdiff_t m_flVerticalDampening_RisingAboveNeutral = 0x19f8;
      constexpr std::ptrdiff_t m_flVerticalDeadzoneSoft = 0x19fc;
      constexpr std::ptrdiff_t m_flVerticalDeadzoneHard = 0x1a00;
      constexpr std::ptrdiff_t m_flPreservedVelocityDecaySpeed = 0x1a04;
      constexpr std::ptrdiff_t m_flIntentMultiplierApproachSpeed = 0x1a08;
      constexpr std::ptrdiff_t m_flMPCOriginCoeff = 0x1a0c;
      constexpr std::ptrdiff_t m_flMPCVelocityCoeff = 0x1a10;
      constexpr std::ptrdiff_t m_flMPCScale = 0x1a14;
      constexpr std::ptrdiff_t m_flMPCMaxAccel = 0x1a18;
      constexpr std::ptrdiff_t m_flMoveSpaceSpeed_ZUp = 0x1a1c;
      constexpr std::ptrdiff_t m_flMoveSpaceSpeed_ZDown = 0x1a20;
      constexpr std::ptrdiff_t m_flMoveSpaceSpeed_Lateral = 0x1a24;
      constexpr std::ptrdiff_t m_flMoveSpaceSpeed_LateralZUp = 0x1a28;
      constexpr std::ptrdiff_t m_flMoveSpaceSpeed_Forward = 0x1a2c;
      constexpr std::ptrdiff_t m_flMoveSpaceSpeed_Backward = 0x1a30;
      constexpr std::ptrdiff_t m_flIntentSpaceSoftZone = 0x1a34;
      constexpr std::ptrdiff_t m_flIntentSpaceHardZone = 0x1a38;
      constexpr std::ptrdiff_t m_flHardZoneCoeffFrac = 0x1a3c;
      constexpr std::ptrdiff_t m_flSoftZoneCoeffFrac = 0x1a40;
      constexpr std::ptrdiff_t m_OverdriveLateral = 0x1a48;
      constexpr std::ptrdiff_t m_flOverdriveCooldown = 0x1a88;
      constexpr std::ptrdiff_t m_flConsumedBySideThrusting = 0x1a8c;
      constexpr std::ptrdiff_t m_flConsumedWhileActive = 0x1a90;
      constexpr std::ptrdiff_t m_flHoverVelocityDecaySpeed = 0x1a94;
      constexpr std::ptrdiff_t m_VTOLSpeedByTime = 0x1a98;
      constexpr std::ptrdiff_t m_flVTOLCamTurnRate = 0x1ad8;
      constexpr std::ptrdiff_t m_VTOLModifier = 0x1ae0;
      constexpr std::ptrdiff_t m_flMaxVTOLBounceSpeed = 0x1af0;
      constexpr std::ptrdiff_t m_flVTOLFloorBounceZSpeed = 0x1af4;
      constexpr std::ptrdiff_t m_flWallAttachCooldown = 0x1af8;
      constexpr std::ptrdiff_t m_flWallJumpSpeed = 0x1afc;
      constexpr std::ptrdiff_t m_flWallAttachMinDuration = 0x1b00;
      constexpr std::ptrdiff_t m_strOutOfFuelSound = 0x1b08;
      constexpr std::ptrdiff_t m_strOverdriveActivatedSound = 0x1b18;
      constexpr std::ptrdiff_t m_strJetpackingLoop = 0x1b28;
      constexpr std::ptrdiff_t m_strJetpackingThrustingLoop = 0x1b38;
      constexpr std::ptrdiff_t m_cameraSequenceVTOL = 0x1b48;
      constexpr std::ptrdiff_t m_cameraSequenceHover = 0x1bd0;
      constexpr std::ptrdiff_t m_cameraSequenceWallAttach = 0x1c58;
      constexpr std::ptrdiff_t flScreenShake_VTOL_Amplitude = 0x1ce0;
      constexpr std::ptrdiff_t flScreenShake_VTOL_Frequency = 0x1ce4;
    }
    namespace CCitadel_Ability_AirheartRocketeer4VData {
      constexpr std::ptrdiff_t m_ChargingModifier = 0x1818;
      constexpr std::ptrdiff_t m_ImpulseAccelCurve = 0x1828;
      constexpr std::ptrdiff_t m_flChargingTime = 0x1868;
      constexpr std::ptrdiff_t m_flGravity = 0x186c;
      constexpr std::ptrdiff_t m_flTerminalGravity = 0x1870;
      constexpr std::ptrdiff_t m_flVelocityXYDefaultCeiling = 0x1874;
      constexpr std::ptrdiff_t m_flVelocityDecayToCeilingSpeed = 0x1878;
      constexpr std::ptrdiff_t m_flThrustVelocityAngleApproachTime = 0x187c;
      constexpr std::ptrdiff_t m_flThrustVelocityApproachIncreasing = 0x1880;
      constexpr std::ptrdiff_t m_flThrustVelocityApproachDecreasing = 0x1884;
      constexpr std::ptrdiff_t m_vThrustingVelocity = 0x1888;
    }
    namespace CCitadel_Ability_AirheartUltVData {
      constexpr std::ptrdiff_t m_FlareParticle = 0x1818;
      constexpr std::ptrdiff_t m_TeleportParticle = 0x18f8;
      constexpr std::ptrdiff_t m_PackageOpenParticle = 0x19d8;
      constexpr std::ptrdiff_t m_PackagePunchedParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_PackageCrashedOnGroundParticle = 0x1b98;
      constexpr std::ptrdiff_t m_PackageModel = 0x1c78;
      constexpr std::ptrdiff_t m_flModelScale = 0x1d58;
      constexpr std::ptrdiff_t m_flGravitySlowFalling = 0x1d5c;
      constexpr std::ptrdiff_t m_flGravityFalling = 0x1d60;
      constexpr std::ptrdiff_t m_flMaxElevation = 0x1d64;
      constexpr std::ptrdiff_t m_flSlowFallElevationStart = 0x1d68;
      constexpr std::ptrdiff_t m_flSlowFallElevationEnd = 0x1d6c;
    }
    namespace CCitadel_Ability_Airheart_Ability01 {
    }
    namespace CCitadel_Ability_Airheart_Ability01VData {
    }
    namespace CCitadel_Ability_Airheart_Ability02 {
    }
    namespace CCitadel_Ability_Airheart_AltWeapon {
    }
    namespace CCitadel_Ability_Airheart_ChargeBlast {
      constexpr std::ptrdiff_t m_nState = 0x11dc;
      constexpr std::ptrdiff_t m_vecMarks = 0x11e0;
    }
    namespace CCitadel_Ability_Airheart_PrimaryWeapon {
    }
    namespace CCitadel_Ability_Airheart_Rocketeer3 {
      constexpr std::ptrdiff_t m_vDebugVelocityIntentModelSpace = 0x1708;
      constexpr std::ptrdiff_t m_flDebugCoeffFactor = 0x1714;
      constexpr std::ptrdiff_t m_bJetpackActive = 0x1718;
      constexpr std::ptrdiff_t m_tJetpackInputDownTime = 0x171c;
      constexpr std::ptrdiff_t m_vPreservedVelocity = 0x1720;
      constexpr std::ptrdiff_t m_bHasLeftGround = 0x172c;
      constexpr std::ptrdiff_t m_bOutOfFuelAndHaventTouchedGround = 0x172d;
      constexpr std::ptrdiff_t m_eMode = 0x172e;
      constexpr std::ptrdiff_t m_tModeBeginTime = 0x1730;
      constexpr std::ptrdiff_t m_vJetpackInput = 0x1734;
      constexpr std::ptrdiff_t m_tLastWallAttachTime = 0x1740;
      constexpr std::ptrdiff_t m_tLastGroundedTime = 0x1744;
      constexpr std::ptrdiff_t m_bQueueWallAttachJump = 0x1748;
      constexpr std::ptrdiff_t m_tOverdriveBeginTime = 0x174c;
      constexpr std::ptrdiff_t m_vIntentSpaceMPCVelocity = 0x1750;
      constexpr std::ptrdiff_t m_vIntentSpaceMPCOrigin = 0x175c;
      constexpr std::ptrdiff_t m_flIntentSpeedVerticalActual = 0x1768;
      constexpr std::ptrdiff_t m_flIntentMultiplier = 0x176c;
    }
    namespace CCitadel_Ability_Airheart_Rocketeer4 {
      constexpr std::ptrdiff_t m_vImpulseDirection = 0x11d8;
      constexpr std::ptrdiff_t m_vVelocity = 0x11e4;
      constexpr std::ptrdiff_t m_vThrustingVelocity = 0x11f0;
      constexpr std::ptrdiff_t m_tStateEnterTime = 0x11fc;
      constexpr std::ptrdiff_t m_eState = 0x1200;
    }
    namespace CCitadel_Ability_Airheart_Spotlight {
    }
    namespace CCitadel_Ability_Airheart_SpotlightVData {
    }
    namespace CCitadel_Ability_Airheart_Ult {
    }
    namespace CCitadel_Ability_Astro_Rifle {
    }
    namespace CCitadel_Ability_Astro_Shotgun_Toggle {
    }
    namespace CCitadel_Ability_Astro_Shotgun_Toggle_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
    }
    namespace CCitadel_Ability_BaseHeldItem {
    }
    namespace CCitadel_Ability_BaseHeldItemVData {
      constexpr std::ptrdiff_t m_ItemModel = 0x1818;
    }
    namespace CCitadel_Ability_Bebop_LaserBeam {
      constexpr std::ptrdiff_t m_bZoomed = 0x19d8;
      constexpr std::ptrdiff_t m_bAirCast = 0x19d9;
      constexpr std::ptrdiff_t m_beam = 0x19e0;
    }
    namespace CCitadel_Ability_Bebop_LaserBeamVData {
      constexpr std::ptrdiff_t m_RestrictionModifier = 0x1818;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x1828;
      constexpr std::ptrdiff_t m_flCancelCooldown = 0x1908;
      constexpr std::ptrdiff_t m_BeamParticle = 0x1910;
      constexpr std::ptrdiff_t m_BeamParticleLocal = 0x19f0;
      constexpr std::ptrdiff_t m_BeamHitParticle = 0x1ad0;
      constexpr std::ptrdiff_t m_strLaserStartSound = 0x1bb0;
      constexpr std::ptrdiff_t m_strLaserEndSound = 0x1bc0;
      constexpr std::ptrdiff_t m_strLaserLoopSound = 0x1bd0;
      constexpr std::ptrdiff_t m_strLaserHitSound = 0x1be0;
    }
    namespace CCitadel_Ability_Bebop_StickyBomb2 {
    }
    namespace CCitadel_Ability_Bebop_StickyBomb2VData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_RestrictionModifier = 0x18f8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1908;
    }
    namespace CCitadel_Ability_BloodBomb {
    }
    namespace CCitadel_Ability_BloodBombVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_SpilledBloodModifier = 0x18f8;
      constexpr std::ptrdiff_t m_strBloodSpillStatName = 0x1908;
    }
    namespace CCitadel_Ability_Boho_Ability01 {
    }
    namespace CCitadel_Ability_Boho_Ability02 {
    }
    namespace CCitadel_Ability_Boho_BouncyProjectile {
    }
    namespace CCitadel_Ability_Boho_BouncyProjectileVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1828;
      constexpr std::ptrdiff_t m_TargetCastSound = 0x1908;
      constexpr std::ptrdiff_t m_strImpactSound = 0x1918;
      constexpr std::ptrdiff_t m_flMinProjectileTravelTime = 0x1928;
      constexpr std::ptrdiff_t m_flDistanceBiasForCaster = 0x192c;
      constexpr std::ptrdiff_t m_flDistanceBiasForHeroes = 0x1930;
      constexpr std::ptrdiff_t m_bouncePositionCurve = 0x1938;
    }
    namespace CCitadel_Ability_Boho_ChannelTether {
    }
    namespace CCitadel_Ability_Boho_ChannelTetherVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_ImmobilizeModifier = 0x1838;
      constexpr std::ptrdiff_t m_StartAoEParticle = 0x1848;
      constexpr std::ptrdiff_t m_ExitAoEParticle = 0x1928;
      constexpr std::ptrdiff_t m_EffectParticle = 0x1a08;
      constexpr std::ptrdiff_t m_HitParticle = 0x1ae8;
      constexpr std::ptrdiff_t m_RadiusParticle = 0x1bc8;
      constexpr std::ptrdiff_t m_strExpireSound = 0x1ca8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x1cb8;
      constexpr std::ptrdiff_t m_cameraSequenceInShadow = 0x1cc8;
    }
    namespace CCitadel_Ability_Boho_DamageShare {
      constexpr std::ptrdiff_t m_vecLinkedEnemies = 0x11d8;
    }
    namespace CCitadel_Ability_Boho_DamageShareVData {
      constexpr std::ptrdiff_t m_DamageShareParticle = 0x1818;
      constexpr std::ptrdiff_t m_DamageShareModifier = 0x18f8;
    }
    namespace CCitadel_Ability_Boho_DoubleHit {
    }
    namespace CCitadel_Ability_Boho_DoubleHitVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_CastParticle = 0x1828;
      constexpr std::ptrdiff_t m_CastLifeLeechParticle = 0x1908;
      constexpr std::ptrdiff_t m_strSlashSound = 0x19e8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x19f8;
    }
    namespace CCitadel_Ability_Boho_PrimaryWeapon {
    }
    namespace CCitadel_Ability_Boho_PrimaryWeaponVData {
      constexpr std::ptrdiff_t m_flBeadRadius = 0x19c0;
      constexpr std::ptrdiff_t m_flBeadCount = 0x19c4;
    }
    namespace CCitadel_Ability_Bomber_Ability02 {
    }
    namespace CCitadel_Ability_Bomber_Ability03 {
    }
    namespace CCitadel_Ability_Bomber_ULT {
    }
    namespace CCitadel_Ability_BookWorm_PrimaryWeapon {
    }
    namespace CCitadel_Ability_BookWorm_PrimaryWeaponVData {
    }
    namespace CCitadel_Ability_Bookworm_AOEMagic {
    }
    namespace CCitadel_Ability_Bookworm_AOEMagicVData {
      constexpr std::ptrdiff_t m_AreaModifier = 0x1818;
      constexpr std::ptrdiff_t m_flGroundHeightOffset = 0x1828;
      constexpr std::ptrdiff_t m_flGroundDistance = 0x182c;
      constexpr std::ptrdiff_t m_flSearchUpDistance = 0x1830;
      constexpr std::ptrdiff_t m_flSearchDownDistance = 0x1834;
    }
    namespace CCitadel_Ability_Bookworm_DragonFire {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x15d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x15e4;
      constexpr std::ptrdiff_t m_nCastParticleIndex = 0x15f0;
    }
    namespace CCitadel_Ability_Bookworm_DragonFireVData {
      constexpr std::ptrdiff_t m_DragonSpawnParticle = 0x1818;
      constexpr std::ptrdiff_t m_DragonCastParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x19d8;
      constexpr std::ptrdiff_t m_ProjectileModel = 0x1ab8;
      constexpr std::ptrdiff_t m_GroundAuraModifier = 0x1b98;
      constexpr std::ptrdiff_t m_strExpiredSound = 0x1ba8;
      constexpr std::ptrdiff_t flSpawnVerticalOffset = 0x1bb8;
      constexpr std::ptrdiff_t flIdealSpringLength = 0x1bbc;
      constexpr std::ptrdiff_t flSpringConstant = 0x1bc0;
      constexpr std::ptrdiff_t flDamperConstant = 0x1bc4;
      constexpr std::ptrdiff_t flVelocityImpactOnAngle = 0x1bc8;
      constexpr std::ptrdiff_t flPitchOffset = 0x1bcc;
      constexpr std::ptrdiff_t flDotToChangeForwardDirectionBasedOnImpactNormal = 0x1bd0;
      constexpr std::ptrdiff_t bDebug = 0x1bd4;
      constexpr std::ptrdiff_t flForwardTraceDistance = 0x1bd8;
      constexpr std::ptrdiff_t m_flFloorRaycastForward = 0x1bdc;
      constexpr std::ptrdiff_t m_flTraceRadius = 0x1be0;
      constexpr std::ptrdiff_t m_flDistanceAboveGround = 0x1be4;
      constexpr std::ptrdiff_t m_flFloatDownRate = 0x1be8;
      constexpr std::ptrdiff_t m_flClimbHeight = 0x1bec;
      constexpr std::ptrdiff_t m_flStepDownHeight = 0x1bf0;
      constexpr std::ptrdiff_t m_flQAngleSmoothRate = 0x1bf4;
      constexpr std::ptrdiff_t m_bShouldReflectAgainstWall = 0x1bf8;
    }
    namespace CCitadel_Ability_Bookworm_KnightBarrier {
      constexpr std::ptrdiff_t m_nCastParticleIndex = 0x15d8;
      constexpr std::ptrdiff_t m_iPendingBonusTargets = 0x15dc;
    }
    namespace CCitadel_Ability_Bookworm_KnightBarrierVData {
      constexpr std::ptrdiff_t m_ShoveParticle = 0x1818;
      constexpr std::ptrdiff_t m_BarrierCastParticle = 0x18f8;
      constexpr std::ptrdiff_t m_BarrierModifier = 0x19d8;
    }
    namespace CCitadel_Ability_Bookworm_KnightCharge {
    }
    namespace CCitadel_Ability_Bookworm_KnightChargeVData {
      constexpr std::ptrdiff_t m_KnightChargeChannelParticle = 0x1818;
      constexpr std::ptrdiff_t m_KnightChargeCastParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strKnightChargeExplosionSound = 0x19d8;
      constexpr std::ptrdiff_t m_strCastDelayLocalPlayerSound = 0x19e8;
      constexpr std::ptrdiff_t m_strExpireSound = 0x19f8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1a08;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1a18;
      constexpr std::ptrdiff_t m_flNavMeshSearchRange = 0x1a28;
      constexpr std::ptrdiff_t m_flNavMeshSearchForwardOffset = 0x1a2c;
      constexpr std::ptrdiff_t m_flObstacleAvoidanceAmount = 0x1a30;
      constexpr std::ptrdiff_t m_flGravity = 0x1a34;
      constexpr std::ptrdiff_t m_flGroundCheckDistance = 0x1a38;
      constexpr std::ptrdiff_t m_flGroundSnapDistance = 0x1a3c;
      constexpr std::ptrdiff_t m_flJumpSpeed = 0x1a40;
      constexpr std::ptrdiff_t m_flTimescale = 0x1a44;
      constexpr std::ptrdiff_t m_flHintRecoveryStrength = 0x1a48;
      constexpr std::ptrdiff_t m_worldPositionHeightCurveX = 0x1a50;
      constexpr std::ptrdiff_t m_worldPositionHeightCurveY = 0x1a90;
      constexpr std::ptrdiff_t m_flDestroyLeashDistance = 0x1ad0;
      constexpr std::ptrdiff_t m_flDestroyMapDistance = 0x1ad4;
      constexpr std::ptrdiff_t m_flQAngleSpringConstant = 0x1ad8;
      constexpr std::ptrdiff_t m_flMiniHopSpeedMin = 0x1adc;
      constexpr std::ptrdiff_t m_flMiniHopSpeedMax = 0x1ae0;
      constexpr std::ptrdiff_t m_flMinPitch = 0x1ae4;
      constexpr std::ptrdiff_t m_flMaxPitch = 0x1ae8;
      constexpr std::ptrdiff_t m_bDebug = 0x1aec;
    }
    namespace CCitadel_Ability_Bounce_Pad {
      constexpr std::ptrdiff_t m_vForward = 0x11d8;
      constexpr std::ptrdiff_t m_bShouldDeploy = 0x11e4;
      constexpr std::ptrdiff_t m_bAnglesSet = 0x11e5;
      constexpr std::ptrdiff_t m_bCanCancel = 0x11e6;
      constexpr std::ptrdiff_t m_angFacing = 0x1468;
    }
    namespace CCitadel_Ability_Bull_Charge {
      constexpr std::ptrdiff_t m_anglesCharging = 0x1858;
      constexpr std::ptrdiff_t m_flChargeStartTime = 0x1864;
      constexpr std::ptrdiff_t m_flFastChargeStartTime = 0x1868;
      constexpr std::ptrdiff_t m_flFastChargeEndTime = 0x186c;
      constexpr std::ptrdiff_t m_bHitAPlayer = 0x1870;
      constexpr std::ptrdiff_t m_bFirstTick = 0x1874;
      constexpr std::ptrdiff_t m_vGoalDir = 0x1878;
    }
    namespace CCitadel_Ability_Bull_Heal {
    }
    namespace CCitadel_Ability_Bull_HealVData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x1818;
    }
    namespace CCitadel_Ability_Bull_Leap {
      constexpr std::ptrdiff_t m_bBraceParamTriggered = 0x11d8;
      constexpr std::ptrdiff_t m_flBoostYaw = 0x11dc;
      constexpr std::ptrdiff_t m_vecCrashPosition = 0x11e0;
      constexpr std::ptrdiff_t m_vecCrashDirection = 0x11ec;
      constexpr std::ptrdiff_t m_eLeapState = 0x11f8;
      constexpr std::ptrdiff_t m_flStateEnterTime = 0x11fc;
      constexpr std::ptrdiff_t m_flNextStateTime = 0x1200;
      constexpr std::ptrdiff_t m_flBoostEndTime = 0x1218;
      constexpr std::ptrdiff_t m_vPrevPos = 0x15b0;
      constexpr std::ptrdiff_t m_vecDraggedEntities = 0x15c0;
      constexpr std::ptrdiff_t m_vecLastVel = 0x15e4;
      constexpr std::ptrdiff_t m_vecCrashDownLastPos = 0x15f0;
      constexpr std::ptrdiff_t m_bInputBufferCrash = 0x15fc;
    }
    namespace CCitadel_Ability_Bull_LeapVData {
      constexpr std::ptrdiff_t m_CrashSpeedScaleCurve = 0x1818;
      constexpr std::ptrdiff_t m_ActiveModifier = 0x1858;
      constexpr std::ptrdiff_t m_BoostModifier = 0x1868;
      constexpr std::ptrdiff_t m_CrashModifier = 0x1878;
      constexpr std::ptrdiff_t m_ImmunityModifier = 0x1888;
      constexpr std::ptrdiff_t m_LandingBonusesModifier = 0x1898;
      constexpr std::ptrdiff_t m_DragModifier = 0x18a8;
      constexpr std::ptrdiff_t m_TakeOffParticle = 0x18b8;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1998;
      constexpr std::ptrdiff_t m_AoEPreviewParticle = 0x1a78;
      constexpr std::ptrdiff_t m_HoverParticle = 0x1b58;
      constexpr std::ptrdiff_t m_DivingPreviewParticle = 0x1c38;
      constexpr std::ptrdiff_t m_strCrashingSound = 0x1d18;
      constexpr std::ptrdiff_t m_strImpactSound = 0x1d28;
      constexpr std::ptrdiff_t m_flStartupTime = 0x1d38;
      constexpr std::ptrdiff_t m_flForwardBoostSpeed = 0x1d3c;
      constexpr std::ptrdiff_t m_flUpBoostSpeed = 0x1d40;
      constexpr std::ptrdiff_t m_flBoostTurnRate = 0x1d44;
      constexpr std::ptrdiff_t m_flHoverTime = 0x1d48;
      constexpr std::ptrdiff_t m_flMinAimAngle = 0x1d4c;
      constexpr std::ptrdiff_t m_flBoostGain = 0x1d50;
      constexpr std::ptrdiff_t m_flBoostTime = 0x1d54;
      constexpr std::ptrdiff_t m_flLandingTime = 0x1d58;
      constexpr std::ptrdiff_t m_flCrashSpeed = 0x1d5c;
      constexpr std::ptrdiff_t m_flCrashBraceAnimTime = 0x1d60;
      constexpr std::ptrdiff_t m_flCollideRadius = 0x1d64;
      constexpr std::ptrdiff_t m_flHoverInputSpeedMax = 0x1d68;
      constexpr std::ptrdiff_t m_flHoverInputAcceleration = 0x1d6c;
      constexpr std::ptrdiff_t m_flHoverSpeedDecay = 0x1d70;
      constexpr std::ptrdiff_t m_flCrashDownInputBuffer = 0x1d74;
    }
    namespace CCitadel_Ability_BulletFlurry {
      constexpr std::ptrdiff_t m_flFlurryEndTime = 0x11d8;
      constexpr std::ptrdiff_t m_flNextAttackTime = 0x11f0;
      constexpr std::ptrdiff_t m_vecShootTargets = 0x14f8;
      constexpr std::ptrdiff_t m_nNumPlayersKilled = 0x1510;
      constexpr std::ptrdiff_t m_nShootIndex = 0x1514;
      constexpr std::ptrdiff_t m_nShootIndexNPC = 0x1518;
      constexpr std::ptrdiff_t m_nBurstShots = 0x151c;
      constexpr std::ptrdiff_t m_nSatVolumeIndex = 0x1520;
      constexpr std::ptrdiff_t m_nConeVFX = 0x1524;
      constexpr std::ptrdiff_t m_bHasCameraOverride = 0x1528;
    }
    namespace CCitadel_Ability_BulletFlurryVData {
      constexpr std::ptrdiff_t m_ChannelParticle = 0x1818;
      constexpr std::ptrdiff_t m_BulletFlurryModifier = 0x18f8;
    }
    namespace CCitadel_Ability_Burrow {
      constexpr std::ptrdiff_t m_bInGround = 0x1658;
      constexpr std::ptrdiff_t m_flLastDamageTime = 0x165c;
      constexpr std::ptrdiff_t m_SpinEndTime = 0x1660;
    }
    namespace CCitadel_Ability_BurrowVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_BurrowStartParticle = 0x18f8;
      constexpr std::ptrdiff_t m_BurrowEndParticle = 0x19d8;
      constexpr std::ptrdiff_t m_BurrowInGroundParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_BurrowModifier = 0x1b98;
      constexpr std::ptrdiff_t m_SpinModifier = 0x1ba8;
      constexpr std::ptrdiff_t m_strBurrowEndSound = 0x1bb8;
      constexpr std::ptrdiff_t m_flChannelEndEnemyPopUpForce = 0x1bc8;
      constexpr std::ptrdiff_t m_flChannelEndEnemyPopUpCylinderHeight = 0x1bcc;
      constexpr std::ptrdiff_t m_cameraSpinStart = 0x1bd0;
    }
    namespace CCitadel_Ability_Cadence_Anthem {
    }
    namespace CCitadel_Ability_Cadence_Crescendo {
    }
    namespace CCitadel_Ability_Cadence_GrandFinale {
    }
    namespace CCitadel_Ability_Cadence_Lullaby {
    }
    namespace CCitadel_Ability_Cadence_SilenceContraptions {
    }
    namespace CCitadel_Ability_CardToss {
      constexpr std::ptrdiff_t m_bCardIsFlying = 0x1c70;
    }
    namespace CCitadel_Ability_ChargedShot {
      constexpr std::ptrdiff_t m_ChannelParticle = 0x11d8;
    }
    namespace CCitadel_Ability_ChargedTackle {
      constexpr std::ptrdiff_t m_bPreparing = 0x1658;
      constexpr std::ptrdiff_t m_bTackling = 0x1659;
      constexpr std::ptrdiff_t m_flTackleStartTime = 0x165c;
      constexpr std::ptrdiff_t m_flPrepareStartTime = 0x1660;
      constexpr std::ptrdiff_t m_vecTackleDir = 0x1664;
      constexpr std::ptrdiff_t m_vecLastPosition = 0x1670;
      constexpr std::ptrdiff_t m_nStuckFramesCount = 0x167c;
      constexpr std::ptrdiff_t m_vecHitEnemies = 0x1680;
      constexpr std::ptrdiff_t m_nDistancePreview = 0x1698;
    }
    namespace CCitadel_Ability_Charged_Bomb {
    }
    namespace CCitadel_Ability_ChronoSwap {
      constexpr std::ptrdiff_t m_bHitTarget = 0x11d8;
      constexpr std::ptrdiff_t m_bAltCast = 0x11d9;
    }
    namespace CCitadel_Ability_Chrono_KineticCarbine {
      constexpr std::ptrdiff_t m_bWantsSlow = 0x11d8;
      constexpr std::ptrdiff_t m_flLatchedTimeScaleFracChangeTime = 0x11dc;
      constexpr std::ptrdiff_t m_flLatchedTimeScaleFrac = 0x11e0;
      constexpr std::ptrdiff_t m_flSpeedBoostEndTime = 0x11e4;
      constexpr std::ptrdiff_t m_flShotTimeScaleEndTime = 0x11e8;
      constexpr std::ptrdiff_t m_flStoredPowerPct = 0x11f0;
    }
    namespace CCitadel_Ability_Chrono_KineticCarbineVData {
      constexpr std::ptrdiff_t m_flShotTimeScaleLingerDuration = 0x1818;
      constexpr std::ptrdiff_t m_ChargingModifier = 0x1820;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1830;
      constexpr std::ptrdiff_t m_cameraKineticCarbineShotFired = 0x1840;
    }
    namespace CCitadel_Ability_Chrono_PulseGrenade {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Ability_Chrono_PulseGrenade_VData {
      constexpr std::ptrdiff_t m_PulseAreaModifier = 0x1818;
      constexpr std::ptrdiff_t m_strHitSound = 0x1828;
      constexpr std::ptrdiff_t m_strDebuffStatName = 0x1838;
    }
    namespace CCitadel_Ability_Chrono_TimeWall {
      constexpr std::ptrdiff_t m_hChargingParticle = 0x11d8;
      constexpr std::ptrdiff_t m_vSpawnPos = 0x11dc;
      constexpr std::ptrdiff_t m_qAngles = 0x11e8;
      constexpr std::ptrdiff_t m_bAirCast = 0x11f4;
    }
    namespace CCitadel_Ability_Chrono_TimeWallVData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x1818;
      constexpr std::ptrdiff_t m_TimeWallParticle = 0x1828;
      constexpr std::ptrdiff_t m_TimeWallChargeParticle = 0x1908;
      constexpr std::ptrdiff_t m_TimeWallHitParticle = 0x19e8;
      constexpr std::ptrdiff_t m_TimeWallHitTimerParticle = 0x1ac8;
      constexpr std::ptrdiff_t m_strWallCreated = 0x1ba8;
      constexpr std::ptrdiff_t m_strChargeUpSound = 0x1bb8;
    }
    namespace CCitadel_Ability_Climb_Rope {
      constexpr std::ptrdiff_t m_vTop = 0x11d8;
      constexpr std::ptrdiff_t m_vBottom = 0x1208;
      constexpr std::ptrdiff_t m_flActivatePressTime = 0x1238;
      constexpr std::ptrdiff_t m_flDisconnectTime = 0x123c;
      constexpr std::ptrdiff_t m_flClimbStartTime = 0x1240;
      constexpr std::ptrdiff_t m_vLastPos = 0x1244;
      constexpr std::ptrdiff_t m_bRequestStopClimbing = 0x1264;
      constexpr std::ptrdiff_t m_bRequestJumpToRoof = 0x1265;
      constexpr std::ptrdiff_t m_flMoveDownStartTime = 0x1268;
      constexpr std::ptrdiff_t m_eClimbState = 0x126c;
    }
    namespace CCitadel_Ability_Climb_RopeVData {
      constexpr std::ptrdiff_t m_flMinButtonHoldTimeToActivate = 0x1818;
      constexpr std::ptrdiff_t m_flClimbSpeedUp = 0x181c;
      constexpr std::ptrdiff_t m_flClimbSpeedDown = 0x1820;
      constexpr std::ptrdiff_t m_flClimbSpeedDownMax = 0x1824;
      constexpr std::ptrdiff_t m_flClimbDownAccelTime = 0x1828;
      constexpr std::ptrdiff_t m_flLatchSpeed = 0x182c;
      constexpr std::ptrdiff_t m_flAttachOffset = 0x1830;
      constexpr std::ptrdiff_t m_flMinReconnectTime = 0x1834;
      constexpr std::ptrdiff_t m_flSideMoveReduction = 0x1838;
      constexpr std::ptrdiff_t m_flTopOffset = 0x183c;
      constexpr std::ptrdiff_t m_flBottomOffset = 0x1840;
      constexpr std::ptrdiff_t m_flTraceRadiusSize = 0x1844;
      constexpr std::ptrdiff_t m_flStopTimeToShoot = 0x1848;
      constexpr std::ptrdiff_t m_flJumpOffVertical = 0x184c;
      constexpr std::ptrdiff_t m_flJumpOffHorizontal = 0x1850;
      constexpr std::ptrdiff_t m_flDuckOffVertical = 0x1854;
      constexpr std::ptrdiff_t m_flDuckOffHorizontal = 0x1858;
      constexpr std::ptrdiff_t m_flActivateRange = 0x185c;
      constexpr std::ptrdiff_t m_flJumpToRoofRayCheckDist = 0x1860;
      constexpr std::ptrdiff_t m_flMinTimeToRoofCheck = 0x1864;
      constexpr std::ptrdiff_t m_flTimeToHintRefresh = 0x1868;
      constexpr std::ptrdiff_t m_iMaxHintCount = 0x186c;
      constexpr std::ptrdiff_t m_flClimbRopeSlowDurationOnHit = 0x1870;
      constexpr std::ptrdiff_t m_flCameraRotateSpeed = 0x1874;
      constexpr std::ptrdiff_t m_flCameraRotateMaxTime = 0x1878;
      constexpr std::ptrdiff_t m_ClimbRopeSlowOnHitModifier = 0x1880;
      constexpr std::ptrdiff_t m_ClimbRopeSlowFromRecentDamageModifier = 0x1890;
    }
    namespace CCitadel_Ability_Crackshot {
      constexpr std::ptrdiff_t m_ReadyParticleIndex = 0x11dc;
    }
    namespace CCitadel_Ability_CrowdControl {
    }
    namespace CCitadel_Ability_Dash {
      constexpr std::ptrdiff_t m_flDashAngle = 0x11d8;
      constexpr std::ptrdiff_t m_GroundDashExecuteTime = 0x11dc;
      constexpr std::ptrdiff_t m_GroundDashCancelExecuteTime = 0x11e0;
      constexpr std::ptrdiff_t m_nLastGroundDashTick = 0x11e4;
      constexpr std::ptrdiff_t m_bTagCanActivateGroundDash = 0x11e8;
      constexpr std::ptrdiff_t m_flAirDashCastTime = 0x11ec;
      constexpr std::ptrdiff_t m_flAirDashStartPos = 0x11f0;
      constexpr std::ptrdiff_t m_flAirDashDragStartTime = 0x11fc;
      constexpr std::ptrdiff_t m_nConsecutiveAirDashes = 0x1200;
      constexpr std::ptrdiff_t m_nConsecutiveDownDashes = 0x1201;
      constexpr std::ptrdiff_t m_bDownAirDash = 0x1202;
      constexpr std::ptrdiff_t m_hJumpAbility = 0x1218;
      constexpr std::ptrdiff_t m_flAirDashDelayedEffectsTime = 0x121c;
    }
    namespace CCitadel_Ability_DeathTax {
    }
    namespace CCitadel_Ability_Digger_MudShield {
    }
    namespace CCitadel_Ability_Digger_MudShieldVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
    }
    namespace CCitadel_Ability_Disruptive_Charge {
    }
    namespace CCitadel_Ability_Doorman_Bomb {
    }
    namespace CCitadel_Ability_Doorman_Bomb_VData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_MiniExplodeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x19d8;
      constexpr std::ptrdiff_t m_ExplosionSound = 0x1ab8;
      constexpr std::ptrdiff_t m_ImpactSound = 0x1ac8;
      constexpr std::ptrdiff_t m_HitConfirmSound = 0x1ad8;
      constexpr std::ptrdiff_t m_InaccuracyModifier = 0x1ae8;
      constexpr std::ptrdiff_t m_AuraModifier = 0x1af8;
      constexpr std::ptrdiff_t m_ProjectileDragCurve = 0x1b08;
      constexpr std::ptrdiff_t m_flShakeAmp = 0x1b48;
      constexpr std::ptrdiff_t m_flShakeFreq = 0x1b4c;
      constexpr std::ptrdiff_t m_flShakeDuration = 0x1b50;
    }
    namespace CCitadel_Ability_Doorman_Cart {
    }
    namespace CCitadel_Ability_Doorman_Cart_VData {
      constexpr std::ptrdiff_t m_flTraceRadius = 0x1818;
      constexpr std::ptrdiff_t m_flDistanceAboveGround = 0x181c;
      constexpr std::ptrdiff_t m_flFloatDownRate = 0x1820;
      constexpr std::ptrdiff_t m_flClimbHeight = 0x1824;
      constexpr std::ptrdiff_t m_flStepDownHeight = 0x1828;
      constexpr std::ptrdiff_t m_flMinPitch = 0x182c;
      constexpr std::ptrdiff_t m_flMaxPitch = 0x1830;
      constexpr std::ptrdiff_t m_flJumpHeight = 0x1834;
      constexpr std::ptrdiff_t m_flQAngleSmoothRate = 0x1838;
      constexpr std::ptrdiff_t m_flCartSpeedFast = 0x183c;
      constexpr std::ptrdiff_t m_flGroundHitPitchCurve = 0x1840;
      constexpr std::ptrdiff_t m_flGroundHitRollCurve = 0x1880;
      constexpr std::ptrdiff_t m_flGroundHitYawCurve = 0x18c0;
      constexpr std::ptrdiff_t m_ModifierDrag = 0x1900;
      constexpr std::ptrdiff_t m_CartExpireSound = 0x1910;
      constexpr std::ptrdiff_t m_CartHitSound = 0x1920;
      constexpr std::ptrdiff_t m_CartHitAllySound = 0x1930;
      constexpr std::ptrdiff_t m_strWallSlamSound = 0x1940;
      constexpr std::ptrdiff_t m_FriendlyCastProjectileTrailParticle = 0x1950;
      constexpr std::ptrdiff_t m_FriendlyCastProjectileModel = 0x1a30;
      constexpr std::ptrdiff_t m_CartCastParticle = 0x1b10;
      constexpr std::ptrdiff_t m_WallImpactParticle = 0x1bf0;
    }
    namespace CCitadel_Ability_Doorman_Doorway {
      constexpr std::ptrdiff_t m_hDoor1 = 0x1208;
      constexpr std::ptrdiff_t m_flLastRangeFailCast = 0x1210;
      constexpr std::ptrdiff_t m_flDoorBreakableRadius = 0x1398;
      constexpr std::ptrdiff_t m_nDoorPlacementSphere = 0x13a0;
    }
    namespace CCitadel_Ability_Doorman_Doorway_VData {
      constexpr std::ptrdiff_t m_DoorOpenStartSound = 0x1818;
      constexpr std::ptrdiff_t m_DoorOpenEndSound = 0x1828;
      constexpr std::ptrdiff_t m_DoorPlaceSound = 0x1838;
      constexpr std::ptrdiff_t m_DoorPlacementClearedSound = 0x1848;
      constexpr std::ptrdiff_t m_DoorStartCastSound = 0x1858;
      constexpr std::ptrdiff_t m_DoorEndCastSound = 0x1868;
      constexpr std::ptrdiff_t m_DoorExpireSound = 0x1878;
      constexpr std::ptrdiff_t m_DoorLoopSound = 0x1888;
      constexpr std::ptrdiff_t m_CastParticle = 0x1898;
      constexpr std::ptrdiff_t m_PendingDoorParticle = 0x1978;
      constexpr std::ptrdiff_t m_PlaceDoorParticle = 0x1a58;
      constexpr std::ptrdiff_t m_DoorDurationParticle = 0x1b38;
      constexpr std::ptrdiff_t m_DoorDestructionParticle = 0x1c18;
      constexpr std::ptrdiff_t m_hDoorModel = 0x1cf8;
      constexpr std::ptrdiff_t m_hPortalModel = 0x1dd8;
      constexpr std::ptrdiff_t m_strSingleDoorAbilityImage = 0x1eb8;
      constexpr std::ptrdiff_t m_ColorStart = 0x1ec8;
      constexpr std::ptrdiff_t m_ColorEnd = 0x1ecc;
      constexpr std::ptrdiff_t m_DoorwayTimerModifier = 0x1ed0;
      constexpr std::ptrdiff_t m_PortalBarrierModifier = 0x1ee0;
      constexpr std::ptrdiff_t m_flPlacementWallTestDistance = 0x1ef0;
      constexpr std::ptrdiff_t m_flPlacementWallTestExtentsSolidScale = 0x1ef4;
      constexpr std::ptrdiff_t m_flPlacementWallTestExtentsWallScale = 0x1ef8;
      constexpr std::ptrdiff_t m_flPlacementWallTestSphereRadius = 0x1efc;
      constexpr std::ptrdiff_t m_vPlacementOffset = 0x1f00;
      constexpr std::ptrdiff_t m_flPlacementCooldown = 0x1f0c;
      constexpr std::ptrdiff_t m_flPlacementRangeHintDuration = 0x1f10;
      constexpr std::ptrdiff_t m_flPlacementSphereMaxDesat = 0x1f14;
      constexpr std::ptrdiff_t m_colorPlacementSphereSat = 0x1f18;
      constexpr std::ptrdiff_t m_colorPlacementSphereDesat = 0x1f1c;
      constexpr std::ptrdiff_t m_colorPlacementSphereOutline = 0x1f20;
      constexpr std::ptrdiff_t m_curvePlacementFail = 0x1f28;
    }
    namespace CCitadel_Ability_Doorman_Hotel {
      constexpr std::ptrdiff_t m_bSpendCooldown = 0x11d8;
      constexpr std::ptrdiff_t m_vLookTarget = 0x11dc;
    }
    namespace CCitadel_Ability_Doorman_Hotel_VData {
      constexpr std::ptrdiff_t m_NoDrawModifier = 0x1818;
      constexpr std::ptrdiff_t m_FreezeModifier = 0x1828;
      constexpr std::ptrdiff_t m_HotelModifier = 0x1838;
      constexpr std::ptrdiff_t m_DamageModifier = 0x1848;
      constexpr std::ptrdiff_t m_TeleportFXModifier = 0x1858;
      constexpr std::ptrdiff_t m_PreTeleportModifier = 0x1868;
      constexpr std::ptrdiff_t m_UnstoppableWhileChannelingModifier = 0x1878;
      constexpr std::ptrdiff_t m_ImposterModifier = 0x1888;
      constexpr std::ptrdiff_t m_TrackEnemy = 0x1898;
      constexpr std::ptrdiff_t m_TimeslowModifier = 0x18a8;
      constexpr std::ptrdiff_t m_CastParticle = 0x18b8;
      constexpr std::ptrdiff_t m_ChannelStartParticle = 0x1998;
      constexpr std::ptrdiff_t m_strLateHitConfirmSound = 0x1a78;
      constexpr std::ptrdiff_t m_flSequenceTriggerOffset = 0x1a88;
      constexpr std::ptrdiff_t m_flTeleportToHotelDelay = 0x1a8c;
      constexpr std::ptrdiff_t m_flTeleportToSourceDelay = 0x1a90;
      constexpr std::ptrdiff_t m_flPostSourceTeleportHold = 0x1a94;
      constexpr std::ptrdiff_t m_flFadeToBlackDuration = 0x1a98;
      constexpr std::ptrdiff_t m_flDoormanGroundSpeedMax = 0x1a9c;
      constexpr std::ptrdiff_t m_flDoormanAirSpeedMax = 0x1aa0;
      constexpr std::ptrdiff_t m_flDoormanFallSpeedMax = 0x1aa4;
      constexpr std::ptrdiff_t m_flDoormanAirDrag = 0x1aa8;
    }
    namespace CCitadel_Ability_Drifter_Hunger {
      constexpr std::ptrdiff_t m_vecCurrentTargets = 0x11d8;
      constexpr std::ptrdiff_t m_nKillsEarned = 0x11f4;
      constexpr std::ptrdiff_t m_nAssistsEarned = 0x11f8;
      constexpr std::ptrdiff_t m_TypeIDDarkness = 0x11fc;
    }
    namespace CCitadel_Ability_Drifter_HungerVData {
      constexpr std::ptrdiff_t m_TargetModifier = 0x1818;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_InvisModifier = 0x1838;
      constexpr std::ptrdiff_t m_HungerTargetKillParticle = 0x1848;
      constexpr std::ptrdiff_t m_strStackGainedSound = 0x1928;
    }
    namespace CCitadel_Ability_Drifter_PrimaryWeapon {
    }
    namespace CCitadel_Ability_Drifter_PrimaryWeapon_VData {
      constexpr std::ptrdiff_t m_strSwipeTracerParticleRight = 0x19c0;
      constexpr std::ptrdiff_t m_strSwipeTracerParticleLeft = 0x1aa0;
      constexpr std::ptrdiff_t m_vecOriginOffsetsLeft = 0x1b80;
      constexpr std::ptrdiff_t m_flCenterBulletRadiusOverride = 0x1b98;
    }
    namespace CCitadel_Ability_Dust_Storm {
    }
    namespace CCitadel_Ability_EmpowerBullet {
    }
    namespace CCitadel_Ability_Empty {
    }
    namespace CCitadel_Ability_ExplosiveBarrel {
    }
    namespace CCitadel_Ability_FamiliarAltWeaponVData {
      constexpr std::ptrdiff_t m_PendingBulletParticle = 0x19c0;
      constexpr std::ptrdiff_t m_strAddPendingBulletSound = 0x1aa0;
      constexpr std::ptrdiff_t m_strFirePendingBulletSound = 0x1ab0;
    }
    namespace CCitadel_Ability_FamiliarPrimaryWeaponVData {
      constexpr std::ptrdiff_t m_flShotCosmeticVarianceMagnitude = 0x19c0;
    }
    namespace CCitadel_Ability_Familiar_Ability01 {
      constexpr std::ptrdiff_t m_vecTargetsInCone = 0x11f0;
    }
    namespace CCitadel_Ability_Familiar_Ability01VData {
      constexpr std::ptrdiff_t m_EffectModifier = 0x1818;
      constexpr std::ptrdiff_t m_StaringModifier = 0x1828;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1838;
      constexpr std::ptrdiff_t m_UnstoppableWhileChannelingModifier = 0x1848;
      constexpr std::ptrdiff_t m_AirSpeedMax = 0x1858;
      constexpr std::ptrdiff_t m_FallSpeedMax = 0x185c;
      constexpr std::ptrdiff_t m_VerticalDrag = 0x1860;
      constexpr std::ptrdiff_t m_AirDrag = 0x1864;
      constexpr std::ptrdiff_t m_CameraTurnRateMax = 0x1868;
      constexpr std::ptrdiff_t m_flShotCosmeticVarianceMagnitude = 0x186c;
      constexpr std::ptrdiff_t m_JumpCeilingCheckDistance = 0x1870;
      constexpr std::ptrdiff_t m_JumpSpeed = 0x1874;
      constexpr std::ptrdiff_t m_JumpPitch = 0x1878;
      constexpr std::ptrdiff_t m_JumpUpDownSpeed = 0x187c;
      constexpr std::ptrdiff_t m_ConeSpacingMeters = 0x1880;
      constexpr std::ptrdiff_t m_RadiusGrowthCurve = 0x1888;
      constexpr std::ptrdiff_t aimColorDesat = 0x18c8;
      constexpr std::ptrdiff_t aimColorSat = 0x18cc;
      constexpr std::ptrdiff_t aimColorOutline = 0x18d0;
      constexpr std::ptrdiff_t m_flSatVolumeInnerConeSize = 0x18d4;
      constexpr std::ptrdiff_t m_BeamParticle = 0x18d8;
      constexpr std::ptrdiff_t m_EyeGlowParticle = 0x19b8;
      constexpr std::ptrdiff_t m_TargetDebuffParticle = 0x1a98;
      constexpr std::ptrdiff_t m_GroundParticle = 0x1b78;
      constexpr std::ptrdiff_t m_RadiusIndicatorParticle = 0x1c58;
      constexpr std::ptrdiff_t m_RadiusIndicatorClientParticle = 0x1d38;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1e18;
      constexpr std::ptrdiff_t m_WakeUpDamageParticle = 0x1ef8;
      constexpr std::ptrdiff_t m_SleepHitSound = 0x1fd8;
    }
    namespace CCitadel_Ability_Familiar_Ability02 {
      constexpr std::ptrdiff_t m_bCastWhileAttached = 0x1558;
    }
    namespace CCitadel_Ability_Familiar_Ability02VData {
      constexpr std::ptrdiff_t m_EffectModifier = 0x1818;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1828;
      constexpr std::ptrdiff_t m_CastParticle = 0x1908;
      constexpr std::ptrdiff_t m_strPillowHitSound = 0x19e8;
    }
    namespace CCitadel_Ability_Familiar_AltWeapon {
      constexpr std::ptrdiff_t m_nAmmoToBeConsumedForChannel = 0x15d0;
      constexpr std::ptrdiff_t m_bForceFiring = 0x15d2;
    }
    namespace CCitadel_Ability_Familiar_Attach {
      constexpr std::ptrdiff_t m_vecTagAlongVisitedAllies = 0x11e0;
      constexpr std::ptrdiff_t m_hLastAttachedTo = 0x11f8;
    }
    namespace CCitadel_Ability_Familiar_AttachVData {
      constexpr std::ptrdiff_t m_AttachedModifier = 0x1818;
      constexpr std::ptrdiff_t m_MovingToAttachModifier = 0x1828;
      constexpr std::ptrdiff_t m_CameraDummyModifier = 0x1838;
      constexpr std::ptrdiff_t m_SpeedModifier = 0x1848;
      constexpr std::ptrdiff_t m_DeathBarrierModifier = 0x1858;
      constexpr std::ptrdiff_t m_HopOutLockoutModifier = 0x1868;
      constexpr std::ptrdiff_t m_LaunchedSelfModifier = 0x1878;
      constexpr std::ptrdiff_t m_AllyLockoutModifier = 0x1888;
      constexpr std::ptrdiff_t m_HopOffBuffModifier = 0x1898;
      constexpr std::ptrdiff_t m_AttachHealModifier = 0x18a8;
      constexpr std::ptrdiff_t m_sCamDummyModelName = 0x18b8;
      constexpr std::ptrdiff_t m_FakeFamiliarParticle = 0x1998;
      constexpr std::ptrdiff_t m_flDetachForce = 0x1a78;
      constexpr std::ptrdiff_t m_flDetachForceUp = 0x1a7c;
      constexpr std::ptrdiff_t m_flTriggeredDetachForce = 0x1a80;
      constexpr std::ptrdiff_t m_flTriggeredDetachForceUp = 0x1a84;
      constexpr std::ptrdiff_t m_MovingToAttachProjectileSpeedCurve = 0x1a88;
      constexpr std::ptrdiff_t m_LaunchAngleRemap = 0x1ac8;
    }
    namespace CCitadel_Ability_Familiar_Attach_Trigger {
    }
    namespace CCitadel_Ability_Familiar_Attach_TriggerVData {
    }
    namespace CCitadel_Ability_Familiar_Clone {
    }
    namespace CCitadel_Ability_Familiar_CloneSingle {
    }
    namespace CCitadel_Ability_Familiar_CloneSingleVData {
      constexpr std::ptrdiff_t m_CloneModifier = 0x1818;
      constexpr std::ptrdiff_t m_ClonedParticle = 0x1828;
      constexpr std::ptrdiff_t m_mapClonedAbilities = 0x1908;
    }
    namespace CCitadel_Ability_Familiar_CloneSingle_Trigger {
    }
    namespace CCitadel_Ability_Familiar_CloneVData {
      constexpr std::ptrdiff_t m_CloneModifier = 0x1818;
      constexpr std::ptrdiff_t m_ClonedParticle = 0x1828;
    }
    namespace CCitadel_Ability_Familiar_Clone_End {
    }
    namespace CCitadel_Ability_Familiar_HealHost {
      constexpr std::ptrdiff_t m_flOverrideCooldown = 0x11d8;
    }
    namespace CCitadel_Ability_Familiar_HealHostVData {
      constexpr std::ptrdiff_t m_HealParticle = 0x1818;
      constexpr std::ptrdiff_t m_BarrierModifier = 0x18f8;
    }
    namespace CCitadel_Ability_Familiar_HelpingHands {
      constexpr std::ptrdiff_t m_vecHelpers = 0x11d8;
      constexpr std::ptrdiff_t m_tChoreUseCooldownEndTime = 0x11f0;
      constexpr std::ptrdiff_t m_tSoonestHelperCooldownEndTime = 0x11f4;
      constexpr std::ptrdiff_t m_nAvailableHelperCount = 0x11f8;
    }
    namespace CCitadel_Ability_Familiar_HelpingHandsVData {
      constexpr std::ptrdiff_t m_AIPhysicsModifier = 0x1818;
      constexpr std::ptrdiff_t m_AIAggroModifier = 0x1828;
      constexpr std::ptrdiff_t m_InvisWatcherModifier = 0x1838;
      constexpr std::ptrdiff_t m_InfestModifier = 0x1848;
      constexpr std::ptrdiff_t m_InfestWaitingModifier = 0x1858;
      constexpr std::ptrdiff_t m_InfestBuildingModifier = 0x1868;
      constexpr std::ptrdiff_t m_InfestBarrierModifier = 0x1878;
      constexpr std::ptrdiff_t m_strHelperShootSound = 0x1888;
      constexpr std::ptrdiff_t m_strHelperSpawnSound = 0x1898;
      constexpr std::ptrdiff_t m_strHelperEmoteSound = 0x18a8;
      constexpr std::ptrdiff_t m_strHelperFoundEnemySound = 0x18b8;
      constexpr std::ptrdiff_t m_strHelperHealTroopSound = 0x18c8;
      constexpr std::ptrdiff_t m_strHelperScaredSound = 0x18d8;
      constexpr std::ptrdiff_t m_strHelperBuffSound = 0x18e8;
      constexpr std::ptrdiff_t m_EmoteParticle = 0x18f8;
      constexpr std::ptrdiff_t m_HealParticle = 0x19d8;
      constexpr std::ptrdiff_t m_DamageParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_DamageAttachedParticle = 0x1b98;
      constexpr std::ptrdiff_t m_CastRegionIndicatorParticle = 0x1c78;
      constexpr std::ptrdiff_t m_AuraIndicatorParticle = 0x1d58;
      constexpr std::ptrdiff_t m_AuraInactiveParticle = 0x1e38;
      constexpr std::ptrdiff_t m_HelperCreateParticle = 0x1f18;
      constexpr std::ptrdiff_t m_HelperDestroyParticle = 0x1ff8;
      constexpr std::ptrdiff_t m_HelperParticle = 0x20d8;
      constexpr std::ptrdiff_t m_HelperSleepingParticle = 0x21b8;
      constexpr std::ptrdiff_t m_HelperAttackingParticle = 0x2298;
      constexpr std::ptrdiff_t m_HelperStunnedParticle = 0x2378;
      constexpr std::ptrdiff_t m_HelperChargingUpParticle = 0x2458;
      constexpr std::ptrdiff_t m_HelperAttachedParticle = 0x2538;
      constexpr std::ptrdiff_t m_HelperTeleportOutParticle = 0x2618;
      constexpr std::ptrdiff_t m_HelperTeleportInParticle = 0x26f8;
      constexpr std::ptrdiff_t m_HelperTargetIndicateParticle = 0x27d8;
      constexpr std::ptrdiff_t m_InfestedParticle = 0x28b8;
      constexpr std::ptrdiff_t m_InfestedHeroParticle = 0x2998;
      constexpr std::ptrdiff_t m_ScaredParticle = 0x2a78;
      constexpr std::ptrdiff_t m_flCollisionSize = 0x2b58;
      constexpr std::ptrdiff_t m_flCollisionHeight = 0x2b5c;
      constexpr std::ptrdiff_t m_flLaunchBiasUp = 0x2b60;
      constexpr std::ptrdiff_t m_flLaunchSpeedMult = 0x2b64;
      constexpr std::ptrdiff_t m_flLaunchMaxSpeed = 0x2b68;
      constexpr std::ptrdiff_t m_flHomingBias = 0x2b6c;
      constexpr std::ptrdiff_t m_flDamageCollisonScale = 0x2b70;
      constexpr std::ptrdiff_t m_EmoteVelocityZByTime = 0x2b78;
      constexpr std::ptrdiff_t m_EmoteSpinByTime = 0x2bb8;
      constexpr std::ptrdiff_t m_flNewlySpawnedWaitTime = 0x2bf8;
      constexpr std::ptrdiff_t m_flHealInterval = 0x2bfc;
      constexpr std::ptrdiff_t m_flSpawnLaunchUpBias = 0x2c00;
      constexpr std::ptrdiff_t m_flSpawnLaunchForce = 0x2c04;
      constexpr std::ptrdiff_t m_flMoveTolerance_Meters = 0x2c08;
      constexpr std::ptrdiff_t m_flMoveTolerance_UnitTarget_Meters = 0x2c0c;
      constexpr std::ptrdiff_t m_flTolerance_FarFromPlayer_Meters = 0x2c10;
      constexpr std::ptrdiff_t m_flTolerance_CloseToPlayer_Meters = 0x2c14;
      constexpr std::ptrdiff_t m_PatrolTravelTimeByDistance = 0x2c18;
      constexpr std::ptrdiff_t m_flInfestedNPCModelScale = 0x2c58;
    }
    namespace CCitadel_Ability_Familiar_PrimaryWeapon {
    }
    namespace CCitadel_Ability_Familiar_Spotlight {
      constexpr std::ptrdiff_t m_hWasAttachedTo = 0x1260;
      constexpr std::ptrdiff_t m_vAuraPosition = 0x1264;
    }
    namespace CCitadel_Ability_Familiar_SpotlightVData {
      constexpr std::ptrdiff_t m_ExposedAuraModifier = 0x1818;
      constexpr std::ptrdiff_t m_BuildupModifier = 0x1828;
      constexpr std::ptrdiff_t m_EffectModifier = 0x1838;
      constexpr std::ptrdiff_t m_EyeGlowParticle = 0x1848;
      constexpr std::ptrdiff_t m_strChannelFinishSound = 0x1928;
      constexpr std::ptrdiff_t m_AirSpeedMax = 0x1938;
      constexpr std::ptrdiff_t m_FallSpeedMax = 0x193c;
      constexpr std::ptrdiff_t m_VerticalDrag = 0x1940;
      constexpr std::ptrdiff_t m_AirDrag = 0x1944;
      constexpr std::ptrdiff_t m_CameraTurnRateMax = 0x1948;
      constexpr std::ptrdiff_t m_flShotCosmeticVarianceMagnitude = 0x194c;
      constexpr std::ptrdiff_t m_JumpCeilingCheckDistance = 0x1950;
      constexpr std::ptrdiff_t m_JumpSpeed = 0x1954;
      constexpr std::ptrdiff_t m_JumpPitch = 0x1958;
      constexpr std::ptrdiff_t aimColorDesat = 0x195c;
      constexpr std::ptrdiff_t aimColorSat = 0x1960;
      constexpr std::ptrdiff_t aimColorOutline = 0x1964;
      constexpr std::ptrdiff_t m_flSatVolumeInnerConeSize = 0x1968;
    }
    namespace CCitadel_Ability_Fathom_Breach {
      constexpr std::ptrdiff_t m_nRollFXIndex = 0x11d8;
      constexpr std::ptrdiff_t m_bInFlight = 0x11dc;
    }
    namespace CCitadel_Ability_Fathom_Breach_VData {
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1818;
      constexpr std::ptrdiff_t m_LeapParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strInFlightAnimGraphParam = 0x19d8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x19e0;
      constexpr std::ptrdiff_t m_InFlightModifier = 0x19f0;
    }
    namespace CCitadel_Ability_Fathom_ScaldingSpray {
    }
    namespace CCitadel_Ability_Fathom_ScaldingSpray_VData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x1818;
    }
    namespace CCitadel_Ability_Fealty {
      constexpr std::ptrdiff_t m_hTarget = 0x11d8;
    }
    namespace CCitadel_Ability_Fencer_PrimaryWeapon {
      constexpr std::ptrdiff_t m_iCurrentShotCount = 0x1430;
    }
    namespace CCitadel_Ability_Fencer_PrimaryWeapon_VData {
      constexpr std::ptrdiff_t m_strSwipeTracerParticleRight = 0x19c0;
      constexpr std::ptrdiff_t m_strSwipeTracerParticleRightMove = 0x1aa0;
      constexpr std::ptrdiff_t m_strSwipeTracerParticleLeft = 0x1b80;
      constexpr std::ptrdiff_t m_flMoveSlashThreshold = 0x1c60;
      constexpr std::ptrdiff_t m_vecSlashInfos = 0x1c68;
    }
    namespace CCitadel_Ability_Fencer_Riposte {
      constexpr std::ptrdiff_t m_vRiposteStartPosition = 0x11d8;
      constexpr std::ptrdiff_t m_vDashDirection = 0x11e4;
      constexpr std::ptrdiff_t m_flStateStartTime = 0x11f0;
      constexpr std::ptrdiff_t m_nCurrentRiposteState = 0x11f4;
      constexpr std::ptrdiff_t m_flSuccessfulRiposteTime = 0x11f8;
      constexpr std::ptrdiff_t m_vecHitEnemies = 0x1880;
      constexpr std::ptrdiff_t m_vecLastPosition = 0x1898;
      constexpr std::ptrdiff_t m_flStuckTime = 0x18a4;
    }
    namespace CCitadel_Ability_Fencer_RiposteVData {
      constexpr std::ptrdiff_t m_DashLineEffect = 0x1818;
      constexpr std::ptrdiff_t m_RiposteDashParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strDashStart = 0x19d8;
      constexpr std::ptrdiff_t m_strStunImpactSound = 0x19e8;
      constexpr std::ptrdiff_t m_strAvoidDamage = 0x19f8;
      constexpr std::ptrdiff_t m_strStartParry = 0x1a08;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1a18;
      constexpr std::ptrdiff_t m_flAirSpeedMax = 0x1a28;
      constexpr std::ptrdiff_t m_flAirDrag = 0x1a2c;
      constexpr std::ptrdiff_t m_flFallSpeedMax = 0x1a30;
      constexpr std::ptrdiff_t m_flParryMoveSpeed = 0x1a34;
      constexpr std::ptrdiff_t m_flDashAnimDelay = 0x1a38;
    }
    namespace CCitadel_Ability_Fencer_ThrowBlade {
      constexpr std::ptrdiff_t m_vCastPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qCastAngles = 0x11e4;
      constexpr std::ptrdiff_t m_nMarkParticleIndex = 0x11f0;
      constexpr std::ptrdiff_t m_nLingerParticleIndex = 0x11f4;
      constexpr std::ptrdiff_t m_nExplodeParticleIndex = 0x11f8;
      constexpr std::ptrdiff_t m_bHitEnemyPlayer = 0x11fc;
    }
    namespace CCitadel_Ability_Fencer_ThrowBladeVData {
      constexpr std::ptrdiff_t m_MarkParticle = 0x1818;
      constexpr std::ptrdiff_t m_MarkLingerParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x19d8;
      constexpr std::ptrdiff_t m_LaunchTrailParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1b98;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1ba8;
      constexpr std::ptrdiff_t m_flUpDisenageJumpRatio = 0x1bb8;
      constexpr std::ptrdiff_t m_flForwardPlacementDistance = 0x1bbc;
      constexpr std::ptrdiff_t m_flHeightAboveGround = 0x1bc0;
      constexpr std::ptrdiff_t m_velocityCurve = 0x1bc8;
      constexpr std::ptrdiff_t m_sStartSound = 0x1c08;
      constexpr std::ptrdiff_t m_sExpiredSound = 0x1c18;
      constexpr std::ptrdiff_t m_strHitSound = 0x1c28;
    }
    namespace CCitadel_Ability_FireBomb {
      constexpr std::ptrdiff_t m_flDetonateTime = 0x12e0;
      constexpr std::ptrdiff_t m_flStartTime = 0x12f8;
    }
    namespace CCitadel_Ability_FireBombVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x18f8;
      constexpr std::ptrdiff_t m_ProgressBarModifier = 0x1908;
      constexpr std::ptrdiff_t m_FireBombModifier = 0x1918;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1928;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1938;
    }
    namespace CCitadel_Ability_FissureWall {
      constexpr std::ptrdiff_t m_vecWallPreviewParticles = 0x11e8;
      constexpr std::ptrdiff_t m_vecPosition = 0x1400;
      constexpr std::ptrdiff_t m_vecTravellingPosition = 0x140c;
      constexpr std::ptrdiff_t m_vecInitialPosition = 0x1418;
      constexpr std::ptrdiff_t m_CastTime = 0x1424;
      constexpr std::ptrdiff_t m_vecDirection = 0x1428;
      constexpr std::ptrdiff_t m_vecLeft = 0x1434;
      constexpr std::ptrdiff_t m_Length = 0x1440;
      constexpr std::ptrdiff_t m_bTraveling = 0x1444;
      constexpr std::ptrdiff_t m_bPreview = 0x1445;
    }
    namespace CCitadel_Ability_FissureWallVData {
      constexpr std::ptrdiff_t m_FriendlyWallParticle = 0x1818;
      constexpr std::ptrdiff_t m_EnemyWallParticle = 0x18f8;
      constexpr std::ptrdiff_t m_WallTravelSoundLoop = 0x19d8;
      constexpr std::ptrdiff_t m_strWallRemoveSound = 0x19e8;
      constexpr std::ptrdiff_t m_WallModifier = 0x19f8;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1a08;
      constexpr std::ptrdiff_t m_flWallPreviewDropdownRate = 0x1a18;
      constexpr std::ptrdiff_t m_flWallStepHeight = 0x1a1c;
      constexpr std::ptrdiff_t m_flWallTraceRadius = 0x1a20;
    }
    namespace CCitadel_Ability_FlameDash {
      constexpr std::ptrdiff_t m_flDashEndTime = 0x11d8;
      constexpr std::ptrdiff_t m_bIsSpeedBursting = 0x11f0;
    }
    namespace CCitadel_Ability_FlameDashVData {
      constexpr std::ptrdiff_t m_FlameDashModifier = 0x1818;
      constexpr std::ptrdiff_t m_DashBurstSound = 0x1828;
      constexpr std::ptrdiff_t m_ChargeHitSound = 0x1838;
      constexpr std::ptrdiff_t m_cameraSpeedBoost = 0x1848;
    }
    namespace CCitadel_Ability_FlyingStrike {
      constexpr std::ptrdiff_t m_desatVolIdx = 0x1208;
      constexpr std::ptrdiff_t m_bShadowFormCast = 0x120c;
      constexpr std::ptrdiff_t m_vYamatoCastPos = 0x1210;
      constexpr std::ptrdiff_t m_vTargetCastPos = 0x121c;
      constexpr std::ptrdiff_t m_flFlyingToTargetStartTime = 0x1228;
      constexpr std::ptrdiff_t m_flEndAttackTime = 0x122c;
      constexpr std::ptrdiff_t m_flGrappleStartTime = 0x1230;
      constexpr std::ptrdiff_t m_flGrappleArriveTime = 0x1234;
      constexpr std::ptrdiff_t m_flAttackLatchTime = 0x1238;
      constexpr std::ptrdiff_t m_vAttackLatchPos = 0x123c;
      constexpr std::ptrdiff_t m_hTarget = 0x1248;
      constexpr std::ptrdiff_t m_bIsTargetAlly = 0x124c;
      constexpr std::ptrdiff_t m_flGrappleShotAttackTime = 0x1250;
      constexpr std::ptrdiff_t m_rgPath = 0x1258;
      constexpr std::ptrdiff_t m_nPathIdx = 0x1348;
      constexpr std::ptrdiff_t m_nPathSize = 0x134c;
      constexpr std::ptrdiff_t m_flPathLength = 0x1350;
      constexpr std::ptrdiff_t m_vFlyingInitialOffsetToPath = 0x1354;
      constexpr std::ptrdiff_t flDistFlown = 0x1360;
      constexpr std::ptrdiff_t m_vLastSafePos = 0x1364;
      constexpr std::ptrdiff_t m_nGrappleTravelEffect = 0x1570;
      constexpr std::ptrdiff_t m_bPathDirty = 0x15c8;
    }
    namespace CCitadel_Ability_Fortuna_Ability01 {
    }
    namespace CCitadel_Ability_Fortuna_Ability02 {
    }
    namespace CCitadel_Ability_Fortuna_Ability03 {
    }
    namespace CCitadel_Ability_Fortuna_Ability04 {
    }
    namespace CCitadel_Ability_Fortuna_PrimaryWeapon {
    }
    namespace CCitadel_Ability_Fortuna_PrimaryWeaponVData {
    }
    namespace CCitadel_Ability_Frank_PainAura {
      constexpr std::ptrdiff_t m_ToggleOnTime = 0x11dc;
    }
    namespace CCitadel_Ability_Frank_PainAuraVData {
      constexpr std::ptrdiff_t m_AuraActive = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strTripSound = 0x19d8;
      constexpr std::ptrdiff_t m_AuraModifier = 0x19e8;
      constexpr std::ptrdiff_t m_AuraOffModifier = 0x19f8;
    }
    namespace CCitadel_Ability_Frank_PrimaryWeapon {
      constexpr std::ptrdiff_t m_pNextShooter = 0x1438;
    }
    namespace CCitadel_Ability_Frank_PrimaryWeaponVData {
      constexpr std::ptrdiff_t m_SpreadPenaltyScaleCurve = 0x19c0;
      constexpr std::ptrdiff_t m_strShootDelaySound = 0x1a00;
    }
    namespace CCitadel_Ability_Frank_Revive {
      constexpr std::ptrdiff_t m_bReviveIsActive = 0x11da;
      constexpr std::ptrdiff_t m_TimeOfDeath = 0x11dc;
      constexpr std::ptrdiff_t m_TimeOfRevive = 0x11e0;
      constexpr std::ptrdiff_t m_flTotalPendingHeal = 0x11e4;
    }
    namespace CCitadel_Ability_Frank_ReviveVData {
      constexpr std::ptrdiff_t m_PreExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_nDeathMarkParticle = 0x19d8;
      constexpr std::ptrdiff_t m_nHitParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_ElectricBulletImpactParticle = 0x1b98;
      constexpr std::ptrdiff_t m_ElectricBulletTracerParticle = 0x1c78;
      constexpr std::ptrdiff_t m_strTripSound = 0x1d58;
      constexpr std::ptrdiff_t m_strElectricBulletHitSound = 0x1d68;
      constexpr std::ptrdiff_t m_RevivingModifier = 0x1d78;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1d88;
      constexpr std::ptrdiff_t m_DashSlowModifier = 0x1d98;
    }
    namespace CCitadel_Ability_Frank_SelfZap {
      constexpr std::ptrdiff_t m_flTotalPendingHeal = 0x11e8;
    }
    namespace CCitadel_Ability_Frank_SelfZapVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_healCurve = 0x1828;
    }
    namespace CCitadel_Ability_Frank_ShockTarget2 {
      constexpr std::ptrdiff_t m_vecHitTargets = 0x18e0;
      constexpr std::ptrdiff_t m_bIsFullyCharged = 0x1900;
      constexpr std::ptrdiff_t m_hFullyChargedFXModifier = 0x1908;
    }
    namespace CCitadel_Ability_Frank_ShockTarget2VData {
      constexpr std::ptrdiff_t m_ShockShootSound = 0x1818;
      constexpr std::ptrdiff_t m_ShockImpactSound = 0x1828;
      constexpr std::ptrdiff_t m_ShockImpactParticle = 0x1838;
      constexpr std::ptrdiff_t m_TracerParticle = 0x1918;
      constexpr std::ptrdiff_t m_ShockReadyParticle = 0x19f8;
      constexpr std::ptrdiff_t m_CastParticle = 0x1ad8;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1bb8;
      constexpr std::ptrdiff_t m_FullyChargedFXModifier = 0x1bc8;
    }
    namespace CCitadel_Ability_GangActivity {
    }
    namespace CCitadel_Ability_GangActivity_Cancel {
    }
    namespace CCitadel_Ability_GenericPerson_1 {
    }
    namespace CCitadel_Ability_GenericPerson_2 {
    }
    namespace CCitadel_Ability_GenericPerson_3 {
    }
    namespace CCitadel_Ability_GenericPerson_4 {
    }
    namespace CCitadel_Ability_Ghost_BloodShards {
      constexpr std::ptrdiff_t m_vecDamagedTargets = 0x1558;
    }
    namespace CCitadel_Ability_GoldenIdol {
    }
    namespace CCitadel_Ability_GoldenIdolVData {
      constexpr std::ptrdiff_t m_sIdolDropOffSound = 0x18f8;
      constexpr std::ptrdiff_t m_DropoffTimerModifier = 0x1908;
      constexpr std::ptrdiff_t m_HoldingIdolModifier = 0x1918;
      constexpr std::ptrdiff_t m_Bonus01 = 0x1928;
      constexpr std::ptrdiff_t m_Bonus02 = 0x1938;
      constexpr std::ptrdiff_t m_NoPickupModifier = 0x1948;
      constexpr std::ptrdiff_t m_flInstantGoldPercentage = 0x1958;
      constexpr std::ptrdiff_t m_iComebackBounty = 0x195c;
      constexpr std::ptrdiff_t m_flCasterBonusPercent = 0x1960;
      constexpr std::ptrdiff_t m_flRevealTime = 0x1964;
      constexpr std::ptrdiff_t m_flDamageTickRate = 0x1968;
      constexpr std::ptrdiff_t m_flMaxHealthDamage = 0x196c;
      constexpr std::ptrdiff_t m_flTimeToDamage = 0x1970;
      constexpr std::ptrdiff_t m_flNoPickupTime = 0x1974;
    }
    namespace CCitadel_Ability_GooBowlingBall {
      constexpr std::ptrdiff_t m_nAirJumpsLeft = 0x18d8;
      constexpr std::ptrdiff_t m_bIsRolling = 0x18dc;
      constexpr std::ptrdiff_t m_hBall = 0x18e0;
      constexpr std::ptrdiff_t m_eRollingState = 0x18e4;
      constexpr std::ptrdiff_t m_flNextStateTime = 0x18e8;
      constexpr std::ptrdiff_t m_flNextWallCheck = 0x18ec;
      constexpr std::ptrdiff_t m_flRollStartTime = 0x18f0;
      constexpr std::ptrdiff_t m_flWallExitTime = 0x18f4;
      constexpr std::ptrdiff_t m_vecWallExitVelocity = 0x18f8;
      constexpr std::ptrdiff_t m_nDirectionParticleIndex = 0x190c;
    }
    namespace CCitadel_Ability_GooGrenade {
      constexpr std::ptrdiff_t m_vecPuddleModifiers = 0x11d8;
      constexpr std::ptrdiff_t m_LastDetonateTime = 0x16f0;
    }
    namespace CCitadel_Ability_Graf_Ability01 {
    }
    namespace CCitadel_Ability_Graf_Ability02 {
    }
    namespace CCitadel_Ability_Graf_Ability03 {
    }
    namespace CCitadel_Ability_Graf_Ability04 {
    }
    namespace CCitadel_Ability_Gravity_Lasso {
    }
    namespace CCitadel_Ability_Gravity_Lasso_VData {
      constexpr std::ptrdiff_t m_GravityLassoSelf = 0x1818;
      constexpr std::ptrdiff_t m_GravityLassoTarget = 0x1828;
      constexpr std::ptrdiff_t m_TargetWarningSound = 0x1838;
      constexpr std::ptrdiff_t m_PreCastParticle = 0x1848;
    }
    namespace CCitadel_Ability_GuidedArrow {
      constexpr std::ptrdiff_t m_hProjectile = 0x11e0;
      constexpr std::ptrdiff_t m_flArrowSpeed = 0x11e4;
      constexpr std::ptrdiff_t m_flSnapAnglesBackTime = 0x11e8;
      constexpr std::ptrdiff_t m_nBonusTechPower = 0x11ec;
      constexpr std::ptrdiff_t m_bNeedsExplosion = 0x11f0;
      constexpr std::ptrdiff_t m_flCastTime = 0x11f4;
      constexpr std::ptrdiff_t m_vProjectileRemovedOrigin = 0x11f8;
      constexpr std::ptrdiff_t m_angCasterAnglesAtCastTime = 0x1204;
      constexpr std::ptrdiff_t m_flTravelDistance = 0x1210;
      constexpr std::ptrdiff_t m_bInKillFlow = 0x1214;
      constexpr std::ptrdiff_t m_flProjectileTurnVel = 0x1218;
    }
    namespace CCitadel_Ability_Gunslinger_DemonCarbine {
      constexpr std::ptrdiff_t m_bWantsSlow = 0x11d8;
      constexpr std::ptrdiff_t m_flLatchedTimeScaleFracChangeTime = 0x11dc;
      constexpr std::ptrdiff_t m_flLatchedTimeScaleFrac = 0x11e0;
      constexpr std::ptrdiff_t m_flSpeedBoostEndTime = 0x11e4;
      constexpr std::ptrdiff_t m_flShotTimeScaleEndTime = 0x11e8;
      constexpr std::ptrdiff_t m_flStoredPowerPct = 0x11f0;
    }
    namespace CCitadel_Ability_Gunslinger_DemonCarbineVData {
      constexpr std::ptrdiff_t m_flShotTimeScaleLingerDuration = 0x1818;
      constexpr std::ptrdiff_t m_ChargingModifier = 0x1820;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1830;
      constexpr std::ptrdiff_t m_cameraDemonCarbineShotFired = 0x1840;
    }
    namespace CCitadel_Ability_Gunslinger_KnockbackBlast {
      constexpr std::ptrdiff_t m_vecKnockbackDirection = 0x11d8;
      constexpr std::ptrdiff_t m_vecKnockbackedUnits = 0x11e8;
    }
    namespace CCitadel_Ability_Gunslinger_KnockbackBlastVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_WallImpactParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strWallSlamSound = 0x19d8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x19e8;
    }
    namespace CCitadel_Ability_Gunslinger_Salvo {
      constexpr std::ptrdiff_t m_CastTarget = 0x11dc;
      constexpr std::ptrdiff_t m_iCurrentShots = 0x11e0;
      constexpr std::ptrdiff_t m_iTotalShots = 0x11e4;
    }
    namespace CCitadel_Ability_Gunslinger_SalvoVData {
      constexpr std::ptrdiff_t m_BulletWarningParticle = 0x1818;
      constexpr std::ptrdiff_t m_ProcWatcherModifier = 0x18f8;
      constexpr std::ptrdiff_t m_VictimWarningModifier = 0x1908;
    }
    namespace CCitadel_Ability_Gunslinger_SpreadingFire {
    }
    namespace CCitadel_Ability_Gunslinger_SpreadingFireVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_FireDebuffModifier = 0x18f8;
    }
    namespace CCitadel_Ability_HatTrick {
      constexpr std::ptrdiff_t m_hProjectile = 0x11d8;
    }
    namespace CCitadel_Ability_Haze_StackingDamage {
    }
    namespace CCitadel_Ability_HealingSlash {
    }
    namespace CCitadel_Ability_HealthSwap {
      constexpr std::ptrdiff_t m_nFXIndex = 0x11d8;
      constexpr std::ptrdiff_t m_flPostCastHoldEndTime = 0x1560;
    }
    namespace CCitadel_Ability_HealthSwapVData {
      constexpr std::ptrdiff_t m_SwapParticle = 0x1818;
      constexpr std::ptrdiff_t m_SilenceExplodeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_SwapModifier = 0x19d8;
      constexpr std::ptrdiff_t m_PreCastModifier = 0x19e8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x19f8;
      constexpr std::ptrdiff_t m_SilenceModifier = 0x1a08;
    }
    namespace CCitadel_Ability_HighAlert {
    }
    namespace CCitadel_Ability_HoldMelee {
      constexpr std::ptrdiff_t m_flStateStartTime = 0x12e8;
      constexpr std::ptrdiff_t m_flDashStartTime = 0x12ec;
      constexpr std::ptrdiff_t m_eCurrentAttackState = 0x12f0;
      constexpr std::ptrdiff_t m_eCurrentAttackType = 0x12f4;
      constexpr std::ptrdiff_t m_vAirDashDir = 0x12f8;
      constexpr std::ptrdiff_t m_bAttackStartedWhileSliding = 0x1304;
      constexpr std::ptrdiff_t m_flLightChainEndTime = 0x1308;
      constexpr std::ptrdiff_t m_nLightChainCount = 0x130c;
      constexpr std::ptrdiff_t m_bCreatedChargeEffects = 0x1310;
      constexpr std::ptrdiff_t m_angForced = 0x1314;
      constexpr std::ptrdiff_t m_vGoalDir = 0x1320;
    }
    namespace CCitadel_Ability_Hook {
      constexpr std::ptrdiff_t m_hHookVictim = 0x11d8;
      constexpr std::ptrdiff_t m_vecHookTargetStartPos = 0x11dc;
      constexpr std::ptrdiff_t m_flCancelHookTime = 0x11e8;
      constexpr std::ptrdiff_t m_flBeginReelHookTime = 0x11ec;
      constexpr std::ptrdiff_t m_flBulletShouldExpireTime = 0x11f0;
      constexpr std::ptrdiff_t m_flMaxHookTravelTime = 0x11fc;
    }
    namespace CCitadel_Ability_HornetLeap {
      constexpr std::ptrdiff_t m_bLeaping = 0x11da;
      constexpr std::ptrdiff_t m_flLeapStartTime = 0x11dc;
      constexpr std::ptrdiff_t m_nFXIndex = 0x11e0;
    }
    namespace CCitadel_Ability_HornetMark {
      constexpr std::ptrdiff_t m_nFXIndex = 0x11d8;
    }
    namespace CCitadel_Ability_HornetSting {
      constexpr std::ptrdiff_t m_BounceCount = 0x11d8;
      constexpr std::ptrdiff_t m_bHitHero = 0x11dc;
      constexpr std::ptrdiff_t m_vecValidBounceTargets = 0x11e0;
    }
    namespace CCitadel_Ability_Hornet_Chain {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Ability_Hornet_Snipe {
      constexpr std::ptrdiff_t m_flScopeStartTime = 0x1874;
      constexpr std::ptrdiff_t m_iSnipeKills = 0x1878;
    }
    namespace CCitadel_Ability_IceBeam {
      constexpr std::ptrdiff_t m_bIceBeaming = 0x11d8;
      constexpr std::ptrdiff_t m_flNextDamageTick = 0x15e4;
      constexpr std::ptrdiff_t m_beam = 0x15e8;
      constexpr std::ptrdiff_t m_vecEntitiesHit = 0x26f0;
    }
    namespace CCitadel_Ability_IceBeamVData {
      constexpr std::ptrdiff_t m_SplitBeamWidth = 0x1818;
      constexpr std::ptrdiff_t m_BeamParticle = 0x1820;
      constexpr std::ptrdiff_t m_HitParticle = 0x1900;
      constexpr std::ptrdiff_t m_IceBeamModifier = 0x19e0;
      constexpr std::ptrdiff_t m_SlowModifier = 0x19f0;
      constexpr std::ptrdiff_t m_BuildupModifier = 0x1a00;
      constexpr std::ptrdiff_t m_BuildupProcModifier = 0x1a10;
      constexpr std::ptrdiff_t m_BeamStartSound = 0x1a20;
      constexpr std::ptrdiff_t m_BeamStopSound = 0x1a30;
      constexpr std::ptrdiff_t m_BeamPointStartLoopSound = 0x1a40;
      constexpr std::ptrdiff_t m_BeamPointEndLoopSound = 0x1a50;
      constexpr std::ptrdiff_t m_BeamPointClosestLoopSound = 0x1a60;
    }
    namespace CCitadel_Ability_IceDome {
      constexpr std::ptrdiff_t m_flDomeStartTime = 0x1258;
      constexpr std::ptrdiff_t m_flDomeEndTime = 0x125c;
    }
    namespace CCitadel_Ability_IceDomeVData {
      constexpr std::ptrdiff_t m_IceDomeModifier = 0x1818;
    }
    namespace CCitadel_Ability_IceGrenade {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Ability_IceGrenadeVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_IceGrenadeSlowModifier = 0x18f8;
      constexpr std::ptrdiff_t m_ExplosionSound = 0x1908;
    }
    namespace CCitadel_Ability_IcePath {
      constexpr std::ptrdiff_t m_bIcePathing = 0x12d8;
      constexpr std::ptrdiff_t m_qLastAngles = 0x12dc;
      constexpr std::ptrdiff_t m_vLastVelocity = 0x12e8;
      constexpr std::ptrdiff_t m_bFirstMovementTick = 0x12f4;
      constexpr std::ptrdiff_t m_tLingerMovementControlUntilTime = 0x12f8;
    }
    namespace CCitadel_Ability_IcePathVData {
      constexpr std::ptrdiff_t m_IcePathModifier = 0x1818;
      constexpr std::ptrdiff_t m_flMomentumDecayRate = 0x1828;
      constexpr std::ptrdiff_t m_flMomentumWeight = 0x182c;
      constexpr std::ptrdiff_t m_flMaxPitchChange = 0x1830;
      constexpr std::ptrdiff_t m_flMaxPitchUp = 0x1834;
      constexpr std::ptrdiff_t m_flMaxPitchDown = 0x1838;
      constexpr std::ptrdiff_t m_flMaxHeight = 0x183c;
      constexpr std::ptrdiff_t m_flForwardAngleBias = 0x1840;
    }
    namespace CCitadel_Ability_ImmobilizeTrap {
    }
    namespace CCitadel_Ability_IncendiaryProjectile {
    }
    namespace CCitadel_Ability_InfinitySlash {
      constexpr std::ptrdiff_t m_flExplodeEndTime = 0x1460;
      constexpr std::ptrdiff_t m_flBuffEndTime = 0x1464;
    }
    namespace CCitadel_Ability_InfinitySlashVData {
      constexpr std::ptrdiff_t m_flRiseSpeed = 0x1820;
      constexpr std::ptrdiff_t m_flRiseDuration = 0x1824;
      constexpr std::ptrdiff_t m_flSpeedDecayScale = 0x1828;
      constexpr std::ptrdiff_t m_flExplodeHoldTime = 0x182c;
      constexpr std::ptrdiff_t m_flExplosionShakeAmplitude = 0x1830;
      constexpr std::ptrdiff_t m_flExplosionShakeFrequency = 0x1834;
      constexpr std::ptrdiff_t m_flExplosionShakeDuration = 0x1838;
      constexpr std::ptrdiff_t m_AOERangeEffect = 0x1840;
      constexpr std::ptrdiff_t m_AnimCastEffect = 0x1920;
      constexpr std::ptrdiff_t m_cameraSequenceExplosion = 0x1a00;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1a88;
      constexpr std::ptrdiff_t m_BuffTimerModifier = 0x1a98;
    }
    namespace CCitadel_Ability_Intimidate {
    }
    namespace CCitadel_Ability_Jump {
      constexpr std::ptrdiff_t m_flLastTimeOnZipLine = 0x11d8;
      constexpr std::ptrdiff_t m_flLastOnGroundTime = 0x11dc;
      constexpr std::ptrdiff_t m_flPhaseStartTime = 0x11e0;
      constexpr std::ptrdiff_t m_flJumpTime = 0x11e4;
      constexpr std::ptrdiff_t m_flWallJumpFatigueStartTime = 0x11e8;
      constexpr std::ptrdiff_t m_flLastThinkTime = 0x11ec;
      constexpr std::ptrdiff_t m_vCurrentWallNormal = 0x11f0;
      constexpr std::ptrdiff_t m_vLastWallCollidedWithNormal = 0x11fc;
      constexpr std::ptrdiff_t m_vLastValidWallJumpNormal = 0x1208;
      constexpr std::ptrdiff_t m_vLastValidWallJumpNormal_PlayerPosition = 0x1214;
      constexpr std::ptrdiff_t m_flLastWallJumpTime = 0x1220;
      constexpr std::ptrdiff_t m_vWallJumpFacingDir = 0x1224;
      constexpr std::ptrdiff_t m_eWallJumpFacing = 0x1230;
      constexpr std::ptrdiff_t m_flLastWallJumpFatigueStrength = 0x1234;
      constexpr std::ptrdiff_t m_LastJumpType = 0x1238;
      constexpr std::ptrdiff_t m_bShouldCreateAirJumpEffects = 0x1239;
      constexpr std::ptrdiff_t m_flDoubleJumpFailTime = 0x123c;
      constexpr std::ptrdiff_t m_eDoubleJumpFailReason = 0x1240;
      constexpr std::ptrdiff_t m_vWallJumpNormalUsed = 0x1244;
      constexpr std::ptrdiff_t m_flGroundDashJumpStartTime = 0x14d0;
      constexpr std::ptrdiff_t m_flGroundDashJumpEndTime = 0x14e8;
      constexpr std::ptrdiff_t m_bJumped = 0x1500;
      constexpr std::ptrdiff_t m_bCanDashJump = 0x1501;
      constexpr std::ptrdiff_t m_nDesiredAirJumpCount = 0x1504;
      constexpr std::ptrdiff_t m_nExecutedAirJumpCount = 0x1508;
      constexpr std::ptrdiff_t m_bInSlideJump = 0x150c;
      constexpr std::ptrdiff_t m_nConsecutiveAirJumps = 0x150d;
      constexpr std::ptrdiff_t m_nConsecutiveWallJumps = 0x150e;
      constexpr std::ptrdiff_t m_flLateralInputSuppressEndTime = 0x1510;
    }
    namespace CCitadel_Ability_Kobun {
    }
    namespace CCitadel_Ability_Lash {
    }
    namespace CCitadel_Ability_LashDownStrike {
      constexpr std::ptrdiff_t m_ImpactTime = 0x1358;
      constexpr std::ptrdiff_t m_vDamagePos = 0x135c;
      constexpr std::ptrdiff_t m_PreviewEffect = 0x136c;
      constexpr std::ptrdiff_t m_vStrikeVel = 0x17f0;
      constexpr std::ptrdiff_t m_flInitialYaw = 0x17fc;
      constexpr std::ptrdiff_t m_flStartHeight = 0x1800;
    }
    namespace CCitadel_Ability_Lash_Flog {
      constexpr std::ptrdiff_t m_SandEffect = 0x1458;
    }
    namespace CCitadel_Ability_Lash_Ultimate {
      constexpr std::ptrdiff_t m_EGrappleState = 0x1552;
      constexpr std::ptrdiff_t m_flStateEnterTime = 0x1554;
      constexpr std::ptrdiff_t m_flNextStateTime = 0x1558;
      constexpr std::ptrdiff_t m_flBoostEndTime = 0x155c;
    }
    namespace CCitadel_Ability_LifeDrain {
      constexpr std::ptrdiff_t m_tDrainLifeStopTime = 0x11d8;
      constexpr std::ptrdiff_t m_tSlowStartTime = 0x11dc;
      constexpr std::ptrdiff_t m_tSlowStopTime = 0x11e0;
    }
    namespace CCitadel_Ability_LifeDrainVData {
      constexpr std::ptrdiff_t m_LifeDrainTargetModifier = 0x1818;
      constexpr std::ptrdiff_t m_LifeDrainCasterModifier = 0x1828;
    }
    namespace CCitadel_Ability_LightningBall {
    }
    namespace CCitadel_Ability_LockDown {
    }
    namespace CCitadel_Ability_MageWalk {
    }
    namespace CCitadel_Ability_MageWalkVData {
      constexpr std::ptrdiff_t m_BubbleModifier = 0x1818;
      constexpr std::ptrdiff_t m_TurretModifier = 0x1828;
      constexpr std::ptrdiff_t m_strCastEffect = 0x1838;
    }
    namespace CCitadel_Ability_Magician_AnimalCurse {
      constexpr std::ptrdiff_t m_CachedTarget = 0x11d8;
    }
    namespace CCitadel_Ability_Magician_AnimalCurseVData {
      constexpr std::ptrdiff_t m_CurseModifier = 0x1818;
      constexpr std::ptrdiff_t m_AirDampingModifier = 0x1828;
      constexpr std::ptrdiff_t m_TargetWarningSound = 0x1838;
      constexpr std::ptrdiff_t m_ProjectileHitConfirm = 0x1848;
      constexpr std::ptrdiff_t m_ProjectileImpactParticle = 0x1858;
      constexpr std::ptrdiff_t m_TargetWarningParticle = 0x1938;
      constexpr std::ptrdiff_t m_ProjectileExplodeParticle = 0x1a18;
    }
    namespace CCitadel_Ability_Magician_AnimalHexArea {
    }
    namespace CCitadel_Ability_Magician_AnimalHexAreaVData {
      constexpr std::ptrdiff_t m_HexAreaModifier = 0x1818;
      constexpr std::ptrdiff_t m_TargetWarningSound = 0x1828;
      constexpr std::ptrdiff_t m_ProjectileHitConfirm = 0x1838;
      constexpr std::ptrdiff_t m_AreaWarningEffect = 0x1848;
    }
    namespace CCitadel_Ability_Magician_BigBolt {
      constexpr std::ptrdiff_t m_flNextShootTime = 0x1660;
      constexpr std::ptrdiff_t m_iBoltsFired = 0x1664;
      constexpr std::ptrdiff_t m_iRemainingBolts = 0x1668;
      constexpr std::ptrdiff_t m_bPreppingShoot = 0x166c;
    }
    namespace CCitadel_Ability_Magician_BigBoltVData {
      constexpr std::ptrdiff_t m_ChargeParticle = 0x1818;
      constexpr std::ptrdiff_t m_ShootDelayParticle = 0x18f8;
      constexpr std::ptrdiff_t m_CasterModifier = 0x19d8;
      constexpr std::ptrdiff_t m_BoltHitModifier = 0x19e8;
      constexpr std::ptrdiff_t m_strBoltDelay = 0x19f8;
      constexpr std::ptrdiff_t m_strBoltFire = 0x1a08;
    }
    namespace CCitadel_Ability_Magician_CopyUlt {
      constexpr std::ptrdiff_t m_bHasUsedCopiedUlt = 0x13d8;
      constexpr std::ptrdiff_t m_bHasCopiedUlt = 0x13d9;
      constexpr std::ptrdiff_t m_bIsModelSwapped = 0x13da;
      constexpr std::ptrdiff_t m_timeSwappedModel = 0x13dc;
      constexpr std::ptrdiff_t m_pActiveCopyUltimateAbility = 0x13e0;
      constexpr std::ptrdiff_t m_nCopiedHeroID = 0x13e4;
      constexpr std::ptrdiff_t m_vecLingeringCopiedAbilities = 0x13e8;
      constexpr std::ptrdiff_t m_ModelChange = 0x1400;
    }
    namespace CCitadel_Ability_Magician_CopyUltVData {
      constexpr std::ptrdiff_t m_CopyTetherParticle = 0x1818;
      constexpr std::ptrdiff_t m_UltCopiedModifier = 0x18f8;
      constexpr std::ptrdiff_t m_UltActiveModifier = 0x1908;
      constexpr std::ptrdiff_t m_InformTargetUltCopiedModifier = 0x1918;
      constexpr std::ptrdiff_t m_CopiedUltSpawnedEntityModifier = 0x1928;
    }
    namespace CCitadel_Ability_Magician_Escape {
    }
    namespace CCitadel_Ability_Magician_EscapeVData {
      constexpr std::ptrdiff_t m_EscapedModifier = 0x1818;
      constexpr std::ptrdiff_t m_PoofParticle = 0x1828;
      constexpr std::ptrdiff_t m_TetherParticle = 0x1908;
      constexpr std::ptrdiff_t m_strEscaped = 0x19e8;
      constexpr std::ptrdiff_t m_cameraSequenceTeleport = 0x19f8;
    }
    namespace CCitadel_Ability_Magician_MagicBolt {
      constexpr std::ptrdiff_t m_vecDeployedProjectiles = 0x11e0;
      constexpr std::ptrdiff_t m_iCurrentRedirects = 0x11f8;
    }
    namespace CCitadel_Ability_Magician_MagicBoltVData {
      constexpr std::ptrdiff_t m_TargetDebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1828;
      constexpr std::ptrdiff_t m_RetargetParticle = 0x1908;
      constexpr std::ptrdiff_t m_strRedirect = 0x19e8;
    }
    namespace CCitadel_Ability_Magician_ShadowClone {
    }
    namespace CCitadel_Ability_Magician_ShadowCloneVData {
      constexpr std::ptrdiff_t m_CloneModifier = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1828;
    }
    namespace CCitadel_Ability_Mantle {
      constexpr std::ptrdiff_t m_flVertOffset = 0x11d8;
      constexpr std::ptrdiff_t m_flHorizGap = 0x11dc;
      constexpr std::ptrdiff_t m_vStartPos = 0x11e0;
      constexpr std::ptrdiff_t m_vTargetPos = 0x11ec;
      constexpr std::ptrdiff_t m_angFacing = 0x11f8;
      constexpr std::ptrdiff_t m_nMantleTypeIndex = 0x1204;
      constexpr std::ptrdiff_t m_flStartTime = 0x1208;
    }
    namespace CCitadel_Ability_MedicHeal {
    }
    namespace CCitadel_Ability_MeleeParry {
      constexpr std::ptrdiff_t m_nActiveFX = 0x11d8;
      constexpr std::ptrdiff_t m_flParryStartTime = 0x11dc;
      constexpr std::ptrdiff_t m_bAttackParried = 0x11e0;
      constexpr std::ptrdiff_t m_flParrySuccessEndTime = 0x11e4;
    }
    namespace CCitadel_Ability_Melee_Base {
      constexpr std::ptrdiff_t m_bUsingThisMelee = 0x11d8;
      constexpr std::ptrdiff_t m_bUsingMeleeTagActive = 0x11d9;
      constexpr std::ptrdiff_t m_bHitWithThisAttack = 0x11da;
      constexpr std::ptrdiff_t m_flLastActivateTime = 0x11dc;
      constexpr std::ptrdiff_t m_flNextAttackAllowedTime = 0x11e0;
      constexpr std::ptrdiff_t m_flAttackTriggeredTime = 0x11e4;
    }
    namespace CCitadel_Ability_Mirage_FireBeetles {
    }
    namespace CCitadel_Ability_Mirage_FireBeetles_VData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x18f8;
      constexpr std::ptrdiff_t m_StatStolenDebuffModifier = 0x1908;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x1918;
      constexpr std::ptrdiff_t m_strWorldImpactSound = 0x1928;
    }
    namespace CCitadel_Ability_Mirage_Teleport {
      constexpr std::ptrdiff_t m_hTarget = 0x11f0;
      constexpr std::ptrdiff_t m_tTeleportCompletedTime = 0x11f4;
      constexpr std::ptrdiff_t m_vTargetPosition = 0x11f8;
      constexpr std::ptrdiff_t m_vTargetAngles = 0x1204;
    }
    namespace CCitadel_Ability_MobileResupply {
    }
    namespace CCitadel_Ability_MobileResupplyVData {
      constexpr std::ptrdiff_t m_flResupplyForceScale = 0x1818;
      constexpr std::ptrdiff_t m_flResupplyUp = 0x181c;
      constexpr std::ptrdiff_t m_strKilledSound = 0x1820;
      constexpr std::ptrdiff_t m_strDeploySound = 0x1830;
      constexpr std::ptrdiff_t m_AuraModifier = 0x1840;
      constexpr std::ptrdiff_t m_DispenserModel = 0x1850;
      constexpr std::ptrdiff_t m_SprayParticle = 0x1930;
      constexpr std::ptrdiff_t m_DestroyedParticle = 0x1a10;
      constexpr std::ptrdiff_t m_DeployParticle = 0x1af0;
    }
    namespace CCitadel_Ability_NanoDash {
      constexpr std::ptrdiff_t m_vStartPosition = 0x11d8;
      constexpr std::ptrdiff_t m_vEndPosition = 0x11e4;
      constexpr std::ptrdiff_t m_bIsDashing = 0x11f0;
      constexpr std::ptrdiff_t m_vecHitEnemies = 0x11f8;
      constexpr std::ptrdiff_t m_vecLastPosition = 0x1210;
      constexpr std::ptrdiff_t m_flStuckTime = 0x18a0;
    }
    namespace CCitadel_Ability_NanoDash_VData {
      constexpr std::ptrdiff_t m_DashImpactEffect = 0x1818;
      constexpr std::ptrdiff_t m_DashSwingEffect = 0x18f8;
      constexpr std::ptrdiff_t m_DashLineEffect = 0x19d8;
      constexpr std::ptrdiff_t m_SlashSwingEffect = 0x1ab8;
      constexpr std::ptrdiff_t m_strDashStart = 0x1b98;
      constexpr std::ptrdiff_t m_strSlashStart = 0x1ba8;
      constexpr std::ptrdiff_t m_strSlashImpactSound = 0x1bb8;
      constexpr std::ptrdiff_t m_BountyModifier = 0x1bc8;
      constexpr std::ptrdiff_t m_cameraSequenceSlash = 0x1bd8;
      constexpr std::ptrdiff_t m_flGroundBreakOffAngle = 0x1c60;
      constexpr std::ptrdiff_t m_SpeedCurve = 0x1c68;
    }
    namespace CCitadel_Ability_Nano_CatForm {
      constexpr std::ptrdiff_t m_bIsInCatform = 0x11d8;
      constexpr std::ptrdiff_t m_flLastDamageTime = 0x11dc;
      constexpr std::ptrdiff_t m_flTransformStartTime = 0x11e0;
      constexpr std::ptrdiff_t m_flTransformEndTime = 0x11e4;
      constexpr std::ptrdiff_t m_flStoredDamageAmp = 0x11e8;
    }
    namespace CCitadel_Ability_Nano_CatFormPounce {
    }
    namespace CCitadel_Ability_Nano_CatFormPounceVData {
      constexpr std::ptrdiff_t m_AttackParticle = 0x1818;
      constexpr std::ptrdiff_t m_strCatFormMeleeSwing = 0x18f8;
      constexpr std::ptrdiff_t m_flAttackTime = 0x1908;
      constexpr std::ptrdiff_t m_flAttackRange = 0x190c;
      constexpr std::ptrdiff_t m_flAttackHalfAngle = 0x1910;
      constexpr std::ptrdiff_t m_flAttackConeHalfWidth = 0x1914;
      constexpr std::ptrdiff_t m_flMinAttackTime = 0x1918;
      constexpr std::ptrdiff_t m_flStopTargetRange = 0x191c;
      constexpr std::ptrdiff_t m_MovementSpeedCurve = 0x1920;
    }
    namespace CCitadel_Ability_Nano_CatFormVData {
      constexpr std::ptrdiff_t m_PoofInParticle = 0x1818;
      constexpr std::ptrdiff_t m_PoofOutParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strMeow = 0x19d8;
      constexpr std::ptrdiff_t m_strCatFormMeleeSwing = 0x19e8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x19f8;
      constexpr std::ptrdiff_t m_DamageAmpModifier = 0x1a08;
    }
    namespace CCitadel_Ability_Nano_ClusterGrenade {
      constexpr std::ptrdiff_t m_vecHitEnemies = 0x11d8;
      constexpr std::ptrdiff_t m_flNextProjectileTime = 0x11f0;
    }
    namespace CCitadel_Ability_Nano_ClusterGrenadeVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_AuraModifier = 0x18f8;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x1908;
    }
    namespace CCitadel_Ability_Nano_Pounce {
      constexpr std::ptrdiff_t m_bActive = 0x16d8;
      constexpr std::ptrdiff_t m_hCurrentTarget = 0x16dc;
      constexpr std::ptrdiff_t m_hLastCastTarget = 0x16e0;
      constexpr std::ptrdiff_t m_vStartPosition = 0x16e4;
      constexpr std::ptrdiff_t m_vDeparturePosition = 0x16f0;
      constexpr std::ptrdiff_t m_flDepartureTime = 0x1700;
      constexpr std::ptrdiff_t m_flArrivalTime = 0x1718;
      constexpr std::ptrdiff_t m_vLastKnownSafePos = 0x1730;
      constexpr std::ptrdiff_t m_bStartedPhase01 = 0x173c;
      constexpr std::ptrdiff_t m_bStartedPhase02 = 0x173d;
      constexpr std::ptrdiff_t m_bIsFirstCastCompleted = 0x173e;
      constexpr std::ptrdiff_t m_tDoubleCastWindow = 0x1740;
    }
    namespace CCitadel_Ability_Nano_Pounce_Instant {
      constexpr std::ptrdiff_t m_bActive = 0x16d8;
      constexpr std::ptrdiff_t m_hCurrentTarget = 0x16dc;
      constexpr std::ptrdiff_t m_hLastCastTarget = 0x16e0;
      constexpr std::ptrdiff_t m_vStartPosition = 0x16e4;
      constexpr std::ptrdiff_t m_vDeparturePosition = 0x16f0;
      constexpr std::ptrdiff_t m_flDepartureTime = 0x1700;
      constexpr std::ptrdiff_t m_flArrivalTime = 0x1718;
      constexpr std::ptrdiff_t m_vLastKnownSafePos = 0x1730;
      constexpr std::ptrdiff_t m_bStartedPhase01 = 0x173c;
      constexpr std::ptrdiff_t m_bStartedPhase02 = 0x173d;
      constexpr std::ptrdiff_t m_bIsFirstCastCompleted = 0x173e;
      constexpr std::ptrdiff_t m_tDoubleCastWindow = 0x1740;
    }
    namespace CCitadel_Ability_Nano_Pounce_InstantVData {
      constexpr std::ptrdiff_t m_LeapModifier = 0x1818;
      constexpr std::ptrdiff_t m_ActiveBuff = 0x1828;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1838;
      constexpr std::ptrdiff_t m_AttackParticle = 0x1848;
      constexpr std::ptrdiff_t m_FlashParticle = 0x1928;
      constexpr std::ptrdiff_t m_CastParticle = 0x1a08;
      constexpr std::ptrdiff_t m_ExplodeSlowParticle = 0x1ae8;
      constexpr std::ptrdiff_t m_PrimaryHitParticle = 0x1bc8;
      constexpr std::ptrdiff_t m_AttackSound = 0x1ca8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1cb8;
      constexpr std::ptrdiff_t m_flAttackTimePhase01 = 0x1cc8;
      constexpr std::ptrdiff_t m_flAttackTimePhase02 = 0x1ccc;
      constexpr std::ptrdiff_t m_flAllyMinTargetRange = 0x1cd0;
      constexpr std::ptrdiff_t m_flTargetVerticalOffset = 0x1cd4;
    }
    namespace CCitadel_Ability_Nano_Pounce_VData {
      constexpr std::ptrdiff_t m_LeapModifier = 0x1818;
      constexpr std::ptrdiff_t m_ActiveBuff = 0x1828;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1838;
      constexpr std::ptrdiff_t m_DoublePounceModifier = 0x1848;
      constexpr std::ptrdiff_t m_AttackParticle = 0x1858;
      constexpr std::ptrdiff_t m_FlashParticle = 0x1938;
      constexpr std::ptrdiff_t m_CastParticle = 0x1a18;
      constexpr std::ptrdiff_t m_ExplodeSlowParticle = 0x1af8;
      constexpr std::ptrdiff_t m_PrimaryHitParticle = 0x1bd8;
      constexpr std::ptrdiff_t m_AttackSound = 0x1cb8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1cc8;
      constexpr std::ptrdiff_t m_flAttackTimePhase01 = 0x1cd8;
      constexpr std::ptrdiff_t m_flAttackTimePhase02 = 0x1cdc;
      constexpr std::ptrdiff_t m_flAllyMinTargetRange = 0x1ce0;
      constexpr std::ptrdiff_t m_flTargetVerticalOffset = 0x1ce4;
    }
    namespace CCitadel_Ability_Nano_PrimaryWeapon {
    }
    namespace CCitadel_Ability_Nano_PrimaryWeaponVData {
      constexpr std::ptrdiff_t m_EscapeModifier = 0x19c0;
      constexpr std::ptrdiff_t m_SlashEffectParticle = 0x19d0;
      constexpr std::ptrdiff_t m_strExpireSound = 0x1ab0;
      constexpr std::ptrdiff_t m_cameraSequenceInShadow = 0x1ac0;
    }
    namespace CCitadel_Ability_Nano_Shadow {
    }
    namespace CCitadel_Ability_Nano_ShadowVData {
      constexpr std::ptrdiff_t m_ShadowModifier = 0x1818;
      constexpr std::ptrdiff_t m_PurgeModifier = 0x1828;
      constexpr std::ptrdiff_t m_EnemyAura = 0x1838;
      constexpr std::ptrdiff_t m_flAuraRadius = 0x1848;
    }
    namespace CCitadel_Ability_Necro_Coffin {
    }
    namespace CCitadel_Ability_Necro_CoffinVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_AoEParticle = 0x1838;
      constexpr std::ptrdiff_t m_HitParticle = 0x1918;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x19f8;
      constexpr std::ptrdiff_t m_cameraSequenceInSatchel = 0x1a08;
    }
    namespace CCitadel_Ability_Necro_Fear {
      constexpr std::ptrdiff_t m_flTotalBuildup = 0x11f0;
    }
    namespace CCitadel_Ability_Necro_FearVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_strProcSound = 0x1828;
    }
    namespace CCitadel_Ability_Necro_GraveStone {
      constexpr std::ptrdiff_t m_vecDeployedGravestones = 0x11d8;
      constexpr std::ptrdiff_t m_vCastPosition = 0x11f0;
      constexpr std::ptrdiff_t m_qCastAngle = 0x11fc;
    }
    namespace CCitadel_Ability_Necro_GraveStoneVData {
      constexpr std::ptrdiff_t m_CastWarningParticle = 0x1818;
      constexpr std::ptrdiff_t m_strSummonGravestoneSound = 0x18f8;
      constexpr std::ptrdiff_t m_GraveStoneModifier = 0x1908;
      constexpr std::ptrdiff_t m_ZombieSummonModifier = 0x1918;
      constexpr std::ptrdiff_t m_BlockerModel = 0x1928;
      constexpr std::ptrdiff_t m_flStoneSubmergeMinDepth = 0x1a08;
      constexpr std::ptrdiff_t m_flStoneSubmergeMaxDepth = 0x1a0c;
      constexpr std::ptrdiff_t m_flStonePitchMinOffset = 0x1a10;
      constexpr std::ptrdiff_t m_flStonePitchMaxOffset = 0x1a14;
      constexpr std::ptrdiff_t m_flStoneRollMinOffset = 0x1a18;
      constexpr std::ptrdiff_t m_flStoneRollMaxOffset = 0x1a1c;
      constexpr std::ptrdiff_t m_flStoneYawMinOffset = 0x1a20;
      constexpr std::ptrdiff_t m_flStoneYawMaxOffset = 0x1a24;
      constexpr std::ptrdiff_t m_flDropDownRate = 0x1a28;
      constexpr std::ptrdiff_t m_flClimbHeight = 0x1a2c;
      constexpr std::ptrdiff_t m_flDistanceAboveGround = 0x1a30;
      constexpr std::ptrdiff_t m_flNavMeshSearchRadius = 0x1a34;
      constexpr std::ptrdiff_t m_bAllowStackingDamageFromGun = 0x1a38;
    }
    namespace CCitadel_Ability_Necro_HauntingSkull {
      constexpr std::ptrdiff_t m_tPriorityTargetTime = 0x11d8;
      constexpr std::ptrdiff_t m_eSkullPriorityTarget = 0x11dc;
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11e0;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11ec;
      constexpr std::ptrdiff_t m_bIsFullyCharged = 0x11f9;
    }
    namespace CCitadel_Ability_Necro_HauntingSkullVData {
      constexpr std::ptrdiff_t m_JarExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_SkullFriendlyFoundParticle = 0x18f8;
      constexpr std::ptrdiff_t m_SkullTargetDashParticle = 0x19d8;
      constexpr std::ptrdiff_t m_SkullHitParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_SkullExplodeParticle = 0x1b98;
      constexpr std::ptrdiff_t m_ResourceGainedParticle = 0x1c78;
      constexpr std::ptrdiff_t m_HeroResourceGainedParticle = 0x1d58;
      constexpr std::ptrdiff_t m_SkullModel = 0x1e38;
      constexpr std::ptrdiff_t m_flSkullScale = 0x1f18;
      constexpr std::ptrdiff_t m_ResourceGainedSound = 0x1f20;
      constexpr std::ptrdiff_t m_HeroResourceGainedSound = 0x1f30;
      constexpr std::ptrdiff_t m_JarExplodeSound = 0x1f40;
      constexpr std::ptrdiff_t m_SkullHitSound = 0x1f50;
      constexpr std::ptrdiff_t m_SkullKilledSound = 0x1f60;
      constexpr std::ptrdiff_t m_SkullAttackSound = 0x1f70;
      constexpr std::ptrdiff_t m_SkullLoopStartSound = 0x1f80;
      constexpr std::ptrdiff_t m_SkullLoopEndSound = 0x1f90;
      constexpr std::ptrdiff_t m_SkullLoopSound = 0x1fa0;
      constexpr std::ptrdiff_t m_SkullLastHitSound = 0x1fb0;
      constexpr std::ptrdiff_t m_AreaModifier = 0x1fc0;
      constexpr std::ptrdiff_t m_SummonModifier = 0x1fd0;
      constexpr std::ptrdiff_t m_SummonBuffModifier = 0x1fe0;
      constexpr std::ptrdiff_t m_StackingDebuffModifier = 0x1ff0;
      constexpr std::ptrdiff_t m_SlowModifier = 0x2000;
      constexpr std::ptrdiff_t m_flSkullRadius = 0x2010;
      constexpr std::ptrdiff_t m_bAllowStackingDamageFromGun = 0x2014;
      constexpr std::ptrdiff_t m_flInitialVelocityVariance = 0x2018;
      constexpr std::ptrdiff_t m_flDrag = 0x201c;
      constexpr std::ptrdiff_t m_flCurlNoiseStrength = 0x2020;
      constexpr std::ptrdiff_t m_flCurlNoiseStrengthDuringTarget = 0x2024;
      constexpr std::ptrdiff_t m_flCurlNoiseStrengthDuringFriendly = 0x2028;
      constexpr std::ptrdiff_t m_flCurlNoiseMinFrequency = 0x202c;
      constexpr std::ptrdiff_t m_flCurlNoiseMaxFrequency = 0x2030;
      constexpr std::ptrdiff_t m_flBobbingFrequency = 0x2034;
      constexpr std::ptrdiff_t m_flBobbingStrength = 0x2038;
      constexpr std::ptrdiff_t m_flFloorSpringLength = 0x203c;
      constexpr std::ptrdiff_t m_flFloorSpringStrength = 0x2040;
      constexpr std::ptrdiff_t m_flTargetForwardSpeed = 0x2048;
      constexpr std::ptrdiff_t m_flTargetHitRecoilRatio = 0x2088;
      constexpr std::ptrdiff_t m_flTargetHitRecoilRandomness = 0x208c;
      constexpr std::ptrdiff_t m_flTargetHitUpVelocity = 0x2090;
      constexpr std::ptrdiff_t m_flFriendlyChaseAcceleration = 0x2094;
      constexpr std::ptrdiff_t m_flFriendlyChaseMaxSpeed = 0x2098;
      constexpr std::ptrdiff_t m_flFriendlyChaseMinDistance = 0x209c;
      constexpr std::ptrdiff_t m_flFriendlyChaseMaxDistance = 0x20a0;
      constexpr std::ptrdiff_t m_flFriendlyChaseRandomPositionDistance = 0x20a4;
      constexpr std::ptrdiff_t m_flFriendlyChaseBufferDelay = 0x20a8;
      constexpr std::ptrdiff_t m_flPriorityTargetLingerDuration = 0x20ac;
      constexpr std::ptrdiff_t m_flSkullMeleeRange = 0x20b0;
    }
    namespace CCitadel_Ability_Necro_HauntingSpirits {
      constexpr std::ptrdiff_t m_nCastParticleIndex = 0x1358;
    }
    namespace CCitadel_Ability_Necro_HauntingSpiritsVData {
      constexpr std::ptrdiff_t m_BuffCastParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_HitConfirmSound = 0x19d8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x19e8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x19f8;
    }
    namespace CCitadel_Ability_Necro_KillSummon {
      constexpr std::ptrdiff_t m_bIsInRecast = 0x125a;
      constexpr std::ptrdiff_t m_RecastEndTime = 0x125c;
    }
    namespace CCitadel_Ability_Necro_KillSummonTrigger {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11e8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11f4;
    }
    namespace CCitadel_Ability_Necro_KillSummonTriggerVData {
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1838;
      constexpr std::ptrdiff_t m_AuraModifier = 0x1918;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x1928;
    }
    namespace CCitadel_Ability_Necro_KillSummonVData {
      constexpr std::ptrdiff_t m_KillTrailParticle = 0x1818;
    }
    namespace CCitadel_Ability_Necro_NukeMap {
    }
    namespace CCitadel_Ability_Necro_NukeMapVData {
      constexpr std::ptrdiff_t m_DamageParticle = 0x1818;
      constexpr std::ptrdiff_t m_DelayedEffectModifier = 0x18f8;
      constexpr std::ptrdiff_t m_strDamageSound = 0x1908;
      constexpr std::ptrdiff_t m_flRandomSpawnOffsetPerSummon = 0x1918;
      constexpr std::ptrdiff_t m_flVerticalOffset = 0x191c;
      constexpr std::ptrdiff_t m_flForwardOffset = 0x1920;
    }
    namespace CCitadel_Ability_Necro_PrimaryWeapon {
      constexpr std::ptrdiff_t m_tTetherAttachTime = 0x1b48;
      constexpr std::ptrdiff_t m_tTetherBreakTime = 0x1b4c;
      constexpr std::ptrdiff_t m_bHasTetherTarget = 0x1b50;
    }
    namespace CCitadel_Ability_Necro_PrimaryWeaponVData {
      constexpr std::ptrdiff_t m_TetherModifier = 0x19c0;
      constexpr std::ptrdiff_t m_DummyTetherModifier = 0x19d0;
      constexpr std::ptrdiff_t m_TetheredModifier = 0x19e0;
      constexpr std::ptrdiff_t m_SearchingModifier = 0x19f0;
      constexpr std::ptrdiff_t m_ActiveParticle = 0x1a00;
      constexpr std::ptrdiff_t m_flDefaultSpreadScale = 0x1ae0;
      constexpr std::ptrdiff_t m_flSearchingSpreadScale = 0x1ae4;
      constexpr std::ptrdiff_t m_flTetheredSpreadScale = 0x1ae8;
      constexpr std::ptrdiff_t m_flApproachSpeed = 0x1aec;
    }
    namespace CCitadel_Ability_Necro_ZombieWall {
      constexpr std::ptrdiff_t m_tWallDeployFinishTime = 0x11dc;
      constexpr std::ptrdiff_t m_vecHitUnits = 0x1210;
    }
    namespace CCitadel_Ability_Necro_ZombieWallVData {
      constexpr std::ptrdiff_t m_WallParticle = 0x1818;
      constexpr std::ptrdiff_t m_WallWarningEffect = 0x18f8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x19d8;
      constexpr std::ptrdiff_t m_GroundAuraModifier = 0x19e8;
      constexpr std::ptrdiff_t m_TetherModifier = 0x19f8;
      constexpr std::ptrdiff_t m_flMiddleStitchDistance = 0x1a08;
      constexpr std::ptrdiff_t m_flTraceRadius = 0x1a0c;
      constexpr std::ptrdiff_t m_flDistanceAboveGround = 0x1a10;
      constexpr std::ptrdiff_t m_flFloatDownRate = 0x1a14;
      constexpr std::ptrdiff_t m_flClimbHeight = 0x1a18;
      constexpr std::ptrdiff_t m_flStepDownHeight = 0x1a1c;
      constexpr std::ptrdiff_t m_flCurlNoiseFrequency = 0x1a20;
      constexpr std::ptrdiff_t m_CurlNoiseStrengthCurve = 0x1a28;
      constexpr std::ptrdiff_t m_strWallHitSound = 0x1a68;
      constexpr std::ptrdiff_t m_strWallPopSound = 0x1a78;
      constexpr std::ptrdiff_t m_strWallBeamStartSound = 0x1a88;
      constexpr std::ptrdiff_t m_strWallBeamStopSound = 0x1a98;
      constexpr std::ptrdiff_t m_strWallBeamPointStartLoopSound = 0x1aa8;
      constexpr std::ptrdiff_t m_strWallBeamPointEndLoopSound = 0x1ab8;
      constexpr std::ptrdiff_t m_strWallBeamPointClosestLoopSound = 0x1ac8;
    }
    namespace CCitadel_Ability_Nikuman {
    }
    namespace CCitadel_Ability_Opera_Ability01 {
    }
    namespace CCitadel_Ability_Opera_Ability02 {
    }
    namespace CCitadel_Ability_Opera_Ability03 {
    }
    namespace CCitadel_Ability_Opera_Ability04 {
    }
    namespace CCitadel_Ability_Operative_Blindside {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Ability_Operative_Blindside_VData {
      constexpr std::ptrdiff_t m_EnemyDebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1828;
      constexpr std::ptrdiff_t m_ExplosionSound = 0x1908;
    }
    namespace CCitadel_Ability_PassiveBeefy {
      constexpr std::ptrdiff_t m_flTotalPendingHeal = 0x11d8;
    }
    namespace CCitadel_Ability_PassiveBeefyVData {
      constexpr std::ptrdiff_t m_HealParticle = 0x1818;
    }
    namespace CCitadel_Ability_Perched_Predator {
      constexpr std::ptrdiff_t m_hActiveProjectile = 0x11d8;
    }
    namespace CCitadel_Ability_PowerJump {
      constexpr std::ptrdiff_t m_nTargetingParticleIndex = 0x11dc;
      constexpr std::ptrdiff_t m_bAirRaiding = 0x11e0;
    }
    namespace CCitadel_Ability_PowerSlash {
      constexpr std::ptrdiff_t m_nPowerLevel = 0x1200;
      constexpr std::ptrdiff_t m_vecHitTargets = 0x1208;
      constexpr std::ptrdiff_t m_nCastParticle = 0x1220;
    }
    namespace CCitadel_Ability_PowerSurge {
    }
    namespace CCitadel_Ability_Priest_AntiSpiritVest {
      constexpr std::ptrdiff_t m_tBuffRechargeTime = 0x1258;
    }
    namespace CCitadel_Ability_Priest_AntiSpiritVestVData {
      constexpr std::ptrdiff_t m_ProcParticle = 0x1818;
      constexpr std::ptrdiff_t m_BuffModifier = 0x18f8;
      constexpr std::ptrdiff_t m_ShieldBreakModifier = 0x1908;
      constexpr std::ptrdiff_t m_strProcSound = 0x1918;
    }
    namespace CCitadel_Ability_Priest_Barrage {
    }
    namespace CCitadel_Ability_Priest_BarrageVData {
      constexpr std::ptrdiff_t m_SelfModifier = 0x1818;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1828;
      constexpr std::ptrdiff_t m_ShootSound = 0x1838;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x1848;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1858;
      constexpr std::ptrdiff_t m_ShootParticle = 0x1938;
    }
    namespace CCitadel_Ability_Priest_BearTrap {
    }
    namespace CCitadel_Ability_Priest_BearTrapVData {
      constexpr std::ptrdiff_t m_ArmedParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strExpiredSound = 0x19d8;
      constexpr std::ptrdiff_t m_strDestroyedSound = 0x19e8;
      constexpr std::ptrdiff_t m_strArmSound = 0x19f8;
      constexpr std::ptrdiff_t m_strProjBounceSound = 0x1a08;
      constexpr std::ptrdiff_t m_strProjThrowLoopSound = 0x1a18;
      constexpr std::ptrdiff_t m_strProjArmedLoopSound = 0x1a28;
      constexpr std::ptrdiff_t m_TetherModifier = 0x1a38;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1a48;
      constexpr std::ptrdiff_t m_flVerticalSpawnOffset = 0x1a58;
      constexpr std::ptrdiff_t m_flHorizontalSpawnOffset = 0x1a5c;
      constexpr std::ptrdiff_t m_flDropDownRate = 0x1a60;
      constexpr std::ptrdiff_t m_flClimbHeight = 0x1a64;
      constexpr std::ptrdiff_t m_flDistanceAboveGround = 0x1a68;
      constexpr std::ptrdiff_t m_flDeceleration = 0x1a6c;
      constexpr std::ptrdiff_t m_flMinSpeedToArm = 0x1a70;
      constexpr std::ptrdiff_t m_flReflectSpeedReductionRatio = 0x1a74;
      constexpr std::ptrdiff_t m_flGroundYawSpeedRatio = 0x1a78;
      constexpr std::ptrdiff_t m_flAirYawSpeedRatio = 0x1a7c;
      constexpr std::ptrdiff_t m_flAirPitchSpeedRatio = 0x1a80;
      constexpr std::ptrdiff_t m_flAirRollSpeedRatio = 0x1a84;
    }
    namespace CCitadel_Ability_Priest_CrossbowWeapon {
    }
    namespace CCitadel_Ability_Priest_CrossbowWeaponVData {
      constexpr std::ptrdiff_t m_SpreadPenaltyScaleCurve = 0x19c0;
      constexpr std::ptrdiff_t m_LaserSightParticle = 0x1a00;
      constexpr std::ptrdiff_t m_LaserSightParticleOwnerOnly = 0x1ae0;
      constexpr std::ptrdiff_t m_BlessedTracerParticle = 0x1bc0;
      constexpr std::ptrdiff_t m_CrossbowMuzzleFlashParticle = 0x1ca0;
      constexpr std::ptrdiff_t m_strHitSound = 0x1d80;
      constexpr std::ptrdiff_t m_strHitHeadshotSound = 0x1d90;
      constexpr std::ptrdiff_t m_cameraSequenceBolt = 0x1da0;
    }
    namespace CCitadel_Ability_Priest_Flashbang {
      constexpr std::ptrdiff_t m_tInitialShotID = 0x11d8;
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11dc;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e8;
    }
    namespace CCitadel_Ability_Priest_Flashbang_VData {
      constexpr std::ptrdiff_t m_EnemyDebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1828;
      constexpr std::ptrdiff_t m_BounceParticle = 0x1908;
      constexpr std::ptrdiff_t m_ExplosionSound = 0x19e8;
      constexpr std::ptrdiff_t m_BounceSound = 0x19f8;
      constexpr std::ptrdiff_t m_flMinSurfaceDotToBounce = 0x1a08;
      constexpr std::ptrdiff_t m_flMaxSurfaceDotToBounce = 0x1a0c;
      constexpr std::ptrdiff_t m_flBounceVerticalReductionRatio = 0x1a10;
      constexpr std::ptrdiff_t m_bDebug = 0x1a14;
    }
    namespace CCitadel_Ability_Priest_Knockback {
    }
    namespace CCitadel_Ability_Priest_KnockbackVData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x1818;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1838;
      constexpr std::ptrdiff_t m_KnockbackToWallModifier = 0x1848;
      constexpr std::ptrdiff_t m_KnockbackModifier = 0x1858;
      constexpr std::ptrdiff_t m_ShootParticle = 0x1868;
      constexpr std::ptrdiff_t m_InitialImpactParticle = 0x1948;
      constexpr std::ptrdiff_t m_WallImpactParticle = 0x1a28;
      constexpr std::ptrdiff_t m_strShootSound = 0x1b08;
      constexpr std::ptrdiff_t m_bDoWallSlamBehavior = 0x1b18;
      constexpr std::ptrdiff_t m_flMinTravelTime = 0x1b1c;
      constexpr std::ptrdiff_t m_flTravelTimeFudge = 0x1b20;
      constexpr std::ptrdiff_t m_iFakeBulletCount = 0x1b24;
      constexpr std::ptrdiff_t m_flFakeBulletSpread = 0x1b28;
      constexpr std::ptrdiff_t m_flFakeBulletDistanceFudge = 0x1b2c;
      constexpr std::ptrdiff_t m_flDotProductToStun = 0x1b30;
    }
    namespace CCitadel_Ability_Priest_SelfHeal {
    }
    namespace CCitadel_Ability_Priest_SelfHealVData {
      constexpr std::ptrdiff_t m_SelfModifier = 0x1818;
    }
    namespace CCitadel_Ability_Priest_SilenceBomb {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Ability_Priest_SilenceBombVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_AuraModifier = 0x18f8;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x1908;
    }
    namespace CCitadel_Ability_Priest_SmokeGrenade {
    }
    namespace CCitadel_Ability_Priest_SmokeGrenadeVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_SmokeGrenadeModifier = 0x18f8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1908;
    }
    namespace CCitadel_Ability_Priest_StackingDefense {
      constexpr std::ptrdiff_t m_flMaxStacksBonusDamage = 0x11dc;
    }
    namespace CCitadel_Ability_Priest_StackingDefenseVData {
      constexpr std::ptrdiff_t m_StackingModifier = 0x1818;
    }
    namespace CCitadel_Ability_Priest_WeaponSwap {
      constexpr std::ptrdiff_t m_hOriginalGun = 0x1660;
    }
    namespace CCitadel_Ability_Priest_WeaponSwapVData {
      constexpr std::ptrdiff_t m_SelfModifier = 0x1818;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1828;
      constexpr std::ptrdiff_t m_NewWeaponAbility = 0x1838;
      constexpr std::ptrdiff_t m_flMinTimeBeforeSwappingBack = 0x1848;
      constexpr std::ptrdiff_t m_CrossbowEntImpactParticle = 0x1850;
      constexpr std::ptrdiff_t m_CrossbowImpactParticle = 0x1930;
      constexpr std::ptrdiff_t m_cameraSequenceSwapWeapons = 0x1a10;
    }
    namespace CCitadel_Ability_PrimaryWeapon {
      constexpr std::ptrdiff_t m_flLastReloadStartTime = 0x11d8;
      constexpr std::ptrdiff_t m_flNextPrimaryAttack = 0x11dc;
      constexpr std::ptrdiff_t m_flDelayedShotCreateTime = 0x11e0;
      constexpr std::ptrdiff_t m_iClip = 0x1300;
      constexpr std::ptrdiff_t m_iBonusClip = 0x1304;
      constexpr std::ptrdiff_t m_nNumContinuousShots = 0x1308;
      constexpr std::ptrdiff_t m_flContinuousShotStartTime = 0x130c;
      constexpr std::ptrdiff_t m_flSpreadPenalty = 0x1310;
      constexpr std::ptrdiff_t m_flZoomTime = 0x1314;
      constexpr std::ptrdiff_t m_flZoomOutTime = 0x1318;
      constexpr std::ptrdiff_t m_iSpreadIndex = 0x131c;
      constexpr std::ptrdiff_t m_nShotRecoilIndex = 0x131e;
      constexpr std::ptrdiff_t m_flNextShotRecoilRecoveryTime = 0x1320;
      constexpr std::ptrdiff_t m_bIsZoomed = 0x1324;
      constexpr std::ptrdiff_t m_nBurstShotsRemaining = 0x1325;
      constexpr std::ptrdiff_t m_nShotNumber = 0x1328;
      constexpr std::ptrdiff_t m_bInReload = 0x132c;
      constexpr std::ptrdiff_t m_bSingleShotReloadFirstBullet = 0x132d;
      constexpr std::ptrdiff_t m_reloadQueuedStartTime = 0x1330;
      constexpr std::ptrdiff_t m_flReloadAvailableTime = 0x1334;
      constexpr std::ptrdiff_t m_bCanActiveReload = 0x1338;
      constexpr std::ptrdiff_t m_flLastAttackTime = 0x133c;
      constexpr std::ptrdiff_t m_flNextAttackDelayStartTime = 0x1340;
      constexpr std::ptrdiff_t m_flNextAttackDelayEndTime = 0x1344;
      constexpr std::ptrdiff_t m_flAttackDelayPauseTotalTime = 0x1348;
      constexpr std::ptrdiff_t m_flAttackDelayPauseEndTime = 0x134c;
      constexpr std::ptrdiff_t m_eNextAttackDelayReason = 0x1350;
      constexpr std::ptrdiff_t m_bInputPressedWhileSelected = 0x1354;
      constexpr std::ptrdiff_t m_eActiveFireMode = 0x1358;
      constexpr std::ptrdiff_t m_bPassiveFXActive = 0x135c;
      constexpr std::ptrdiff_t m_flAmmoFrac = 0x1360;
      constexpr std::ptrdiff_t m_bFiredRecently = 0x1364;
      constexpr std::ptrdiff_t m_angRecoilAngles = 0x1368;
      constexpr std::ptrdiff_t m_angRecoilToAdd = 0x1374;
      constexpr std::ptrdiff_t m_angRecoilRecovery = 0x1380;
      constexpr std::ptrdiff_t m_flRecoilStartTime = 0x138c;
      constexpr std::ptrdiff_t m_flRecoilRecoverySpeed = 0x1390;
      constexpr std::ptrdiff_t m_flAddApproachSpeed = 0x1394;
      constexpr std::ptrdiff_t m_currentSpread = 0x1398;
      constexpr std::ptrdiff_t m_currentMaxSpread = 0x139c;
      constexpr std::ptrdiff_t m_currentFireSpread = 0x13a0;
      constexpr std::ptrdiff_t m_flCurrentSpinRate = 0x13a4;
      constexpr std::ptrdiff_t m_bWasSpinningUp = 0x13a8;
      constexpr std::ptrdiff_t m_fFireDuration = 0x13ac;
      constexpr std::ptrdiff_t m_bPrimaryAttackHeld = 0x13b0;
      constexpr std::ptrdiff_t m_bFireOnEmpty = 0x13b1;
      constexpr std::ptrdiff_t m_bHasReleasedForSemiAuto = 0x13b2;
      constexpr std::ptrdiff_t m_flNextDisarmSound = 0x13b4;
      constexpr std::ptrdiff_t m_nPrimaryMuzzleIndex = 0x13e0;
      constexpr std::ptrdiff_t m_flPrimaryMuzzleResetTime = 0x13e4;
      constexpr std::ptrdiff_t m_nSecondaryMuzzleIndex = 0x13e8;
      constexpr std::ptrdiff_t m_flSecondaryMuzzleResetTime = 0x13ec;
      constexpr std::ptrdiff_t m_nRandomStreak = 0x13f0;
      constexpr std::ptrdiff_t m_nLastUsedMuzzleIndex = 0x13f4;
    }
    namespace CCitadel_Ability_PrimaryWeaponVData {
      constexpr std::ptrdiff_t m_DOFWhileZoomed = 0x1818;
      constexpr std::ptrdiff_t m_bDOFFarSettingsAreOffsetByGunRange = 0x1828;
      constexpr std::ptrdiff_t m_sDisarmedSound = 0x1830;
      constexpr std::ptrdiff_t m_flMinDisarmedSoundInterval = 0x1840;
      constexpr std::ptrdiff_t m_sObstructedShotSound = 0x1848;
      constexpr std::ptrdiff_t m_mapDelayLoopsSounds = 0x1858;
      constexpr std::ptrdiff_t m_flActionReloadTimingStart = 0x1880;
      constexpr std::ptrdiff_t m_flActionReloadTimingDuration = 0x1884;
      constexpr std::ptrdiff_t m_strCrosshairCSSClass = 0x1888;
      constexpr std::ptrdiff_t m_bUseCustomCrosshairSettings = 0x1890;
      constexpr std::ptrdiff_t m_CustomCrosshairSettings = 0x1894;
      constexpr std::ptrdiff_t m_PassiveWeaponParticle = 0x18d8;
      constexpr std::ptrdiff_t m_strPassiveWeaponAttachmentSource = 0x19b8;
    }
    namespace CCitadel_Ability_PrimaryWeapon_BeamWeapon {
    }
    namespace CCitadel_Ability_PrimaryWeapon_Bebop {
      constexpr std::ptrdiff_t m_flStartWindUpTime = 0x1858;
      constexpr std::ptrdiff_t m_flStartFiringTime = 0x185c;
      constexpr std::ptrdiff_t m_bFiring = 0x1860;
    }
    namespace CCitadel_Ability_PrimaryWeapon_BebopVData {
      constexpr std::ptrdiff_t m_strWindupSound = 0x19c0;
      constexpr std::ptrdiff_t m_strBeamStartSound = 0x19d0;
      constexpr std::ptrdiff_t m_strBeamLoopSound1 = 0x19e0;
      constexpr std::ptrdiff_t m_strBeamLoopSound2 = 0x19f0;
      constexpr std::ptrdiff_t m_strBeamStopSound = 0x1a00;
      constexpr std::ptrdiff_t m_szWeaponBeamParticle = 0x1a10;
      constexpr std::ptrdiff_t m_flWindupRepeatCycle = 0x1af0;
    }
    namespace CCitadel_Ability_PrimaryWeapon_Cadence {
    }
    namespace CCitadel_Ability_PrimaryWeapon_Empty {
    }
    namespace CCitadel_Ability_PrimaryWeapon_ScalingAltFire {
    }
    namespace CCitadel_Ability_ProjectMind {
    }
    namespace CCitadel_Ability_ProjectMindVData {
      constexpr std::ptrdiff_t m_ProjectMindModifier = 0x1818;
    }
    namespace CCitadel_Ability_Protection_Racket {
    }
    namespace CCitadel_Ability_Protection_RacketVData {
      constexpr std::ptrdiff_t m_CastOtherParticle = 0x1818;
      constexpr std::ptrdiff_t m_ArmorModifier = 0x18f8;
    }
    namespace CCitadel_Ability_ProximityRitual {
      constexpr std::ptrdiff_t m_eState = 0x11d8;
      constexpr std::ptrdiff_t m_hStatue = 0x11dc;
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11e8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11f4;
    }
    namespace CCitadel_Ability_ProximityRitual_VData {
      constexpr std::ptrdiff_t m_PredatoryStatueModel = 0x1818;
      constexpr std::ptrdiff_t m_CatReappearParticle = 0x18f8;
      constexpr std::ptrdiff_t m_CatDisappearParticle = 0x19d8;
      constexpr std::ptrdiff_t m_CatEyesParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_CatSummonParticle = 0x1b98;
      constexpr std::ptrdiff_t m_CatRecallParticle = 0x1c78;
      constexpr std::ptrdiff_t m_RecallLineParticle = 0x1d58;
      constexpr std::ptrdiff_t m_strRecallSound = 0x1e38;
      constexpr std::ptrdiff_t m_strKilledSound = 0x1e48;
      constexpr std::ptrdiff_t m_PredatoryStatueModifier = 0x1e58;
      constexpr std::ptrdiff_t m_RecentDamageModifier = 0x1e68;
      constexpr std::ptrdiff_t m_flHeavyMeleeDmg = 0x1e78;
      constexpr std::ptrdiff_t m_flLightMeleeDmg = 0x1e7c;
      constexpr std::ptrdiff_t m_flAbilityDamageScale = 0x1e80;
      constexpr std::ptrdiff_t m_flNPCDamageScale = 0x1e84;
      constexpr std::ptrdiff_t m_flCastDelayMin = 0x1e88;
      constexpr std::ptrdiff_t m_flCastDelayMax = 0x1e8c;
      constexpr std::ptrdiff_t m_flCastDelayMaxDist = 0x1e90;
      constexpr std::ptrdiff_t m_flPostCastCooldown = 0x1e94;
    }
    namespace CCitadel_Ability_PsychicLift {
      constexpr std::ptrdiff_t m_vLiftPosition = 0x1258;
      constexpr std::ptrdiff_t m_vCrashPosition = 0x1264;
      constexpr std::ptrdiff_t m_vecLiftTargets = 0x1278;
    }
    namespace CCitadel_Ability_PunkGoat_Blasted {
      constexpr std::ptrdiff_t m_bHUDElementVisible = 0x11d8;
      constexpr std::ptrdiff_t m_flBlastedCurrentDuration = 0x11ec;
    }
    namespace CCitadel_Ability_PunkGoat_GoatFlip {
      constexpr std::ptrdiff_t m_eState = 0x1c58;
      constexpr std::ptrdiff_t m_tStateStartTime = 0x1c5c;
      constexpr std::ptrdiff_t m_flGoingUpTargetElevation = 0x1c60;
      constexpr std::ptrdiff_t m_flGoingUpStartElevation = 0x1c64;
    }
    namespace CCitadel_Ability_PunkGoat_Tether {
      constexpr std::ptrdiff_t m_bTetheringActive = 0x11ec;
    }
    namespace CCitadel_Ability_PunkGoat_Ult {
      constexpr std::ptrdiff_t m_nSlamTravelType = 0x11ec;
      constexpr std::ptrdiff_t m_flDistanceToTravel = 0x11f0;
      constexpr std::ptrdiff_t m_bHoldingAbilityButton = 0x11f4;
    }
    namespace CCitadel_Ability_Punkgoat_PrimaryWeapon {
    }
    namespace CCitadel_Ability_Punkgoat_PrimaryWeaponVData {
    }
    namespace CCitadel_Ability_RapidFire {
    }
    namespace CCitadel_Ability_RestorativeGoo {
      constexpr std::ptrdiff_t m_flSelfCastEndTime = 0x11d8;
    }
    namespace CCitadel_Ability_RiotProtocol {
      constexpr std::ptrdiff_t m_bActive = 0x11d8;
    }
    namespace CCitadel_Ability_RocketBarrage {
      constexpr std::ptrdiff_t m_flBarrageEndTime = 0x11d8;
      constexpr std::ptrdiff_t m_flCurrentTimeScale = 0x1670;
      constexpr std::ptrdiff_t m_vecAimPos = 0x1674;
      constexpr std::ptrdiff_t m_vecAimVel = 0x1680;
      constexpr std::ptrdiff_t m_flLastUpdateTime = 0x168c;
    }
    namespace CCitadel_Ability_RocketBarrageVData {
      constexpr std::ptrdiff_t m_BarrageModifier = 0x1818;
      constexpr std::ptrdiff_t m_MoveSlowModifier = 0x1828;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1838;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1918;
      constexpr std::ptrdiff_t m_strBarrageSound = 0x1928;
      constexpr std::ptrdiff_t m_strBarrageLoop = 0x1938;
      constexpr std::ptrdiff_t m_cameraSequenceSelected = 0x1948;
      constexpr std::ptrdiff_t m_flMoveSpeedReductionPct = 0x19d0;
      constexpr std::ptrdiff_t m_flHeightTestDistance = 0x19d4;
    }
    namespace CCitadel_Ability_RocketLauncher {
    }
    namespace CCitadel_Ability_Rolling_FireBall {
    }
    namespace CCitadel_Ability_Rutger_Pulse {
    }
    namespace CCitadel_Ability_Rutger_Pulse_VData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x1818;
    }
    namespace CCitadel_Ability_SelfVacuum {
    }
    namespace CCitadel_Ability_SettingSun {
      constexpr std::ptrdiff_t m_TargetPreviews = 0x11d8;
      constexpr std::ptrdiff_t m_bWasSelected = 0x12f8;
    }
    namespace CCitadel_Ability_SettingSun_VData {
      constexpr std::ptrdiff_t m_BeamTargetParticle = 0x1818;
      constexpr std::ptrdiff_t m_UnitTargetParticle = 0x18f8;
      constexpr std::ptrdiff_t m_SettingSunThinkerModifier = 0x19d8;
      constexpr std::ptrdiff_t m_flSSCameraPreviewOffset = 0x19e8;
      constexpr std::ptrdiff_t m_flSSCameraPreviewSpeed = 0x19ec;
      constexpr std::ptrdiff_t m_flSSCameraPreviewDistance = 0x19f0;
    }
    namespace CCitadel_Ability_ShadowPulse {
    }
    namespace CCitadel_Ability_ShadowPulse_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_ChannelParticle = 0x1828;
      constexpr std::ptrdiff_t m_AoEParticle = 0x1908;
      constexpr std::ptrdiff_t m_EffectParticle = 0x19e8;
      constexpr std::ptrdiff_t m_HitParticle = 0x1ac8;
      constexpr std::ptrdiff_t m_RadiusParticle = 0x1ba8;
      constexpr std::ptrdiff_t m_strExpireSound = 0x1c88;
      constexpr std::ptrdiff_t m_cameraSequenceInShadow = 0x1c98;
    }
    namespace CCitadel_Ability_Shakedown_Target {
      constexpr std::ptrdiff_t m_hShadowdownAbility = 0x11d8;
      constexpr std::ptrdiff_t m_AimPos = 0x11dc;
    }
    namespace CCitadel_Ability_Shakedown_TargetVData {
      constexpr std::ptrdiff_t m_RootModifier = 0x1818;
      constexpr std::ptrdiff_t m_PulseModifier = 0x1828;
    }
    namespace CCitadel_Ability_Shield {
    }
    namespace CCitadel_Ability_ShieldGuy_Ability01 {
    }
    namespace CCitadel_Ability_ShieldGuy_Ability02 {
    }
    namespace CCitadel_Ability_ShieldGuy_Ability03 {
    }
    namespace CCitadel_Ability_ShieldGuy_Ability04 {
    }
    namespace CCitadel_Ability_ShieldedSentry {
      constexpr std::ptrdiff_t k_nOldestSentriesToShowInUI = 0x11d8;
      constexpr std::ptrdiff_t m_vecDeployedSentries = 0x11f8;
    }
    namespace CCitadel_Ability_ShieldedSentry_VData {
      constexpr std::ptrdiff_t m_InnateModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_flDamageFalloffEndScale = 0x1838;
    }
    namespace CCitadel_Ability_ShivDagger {
      constexpr std::ptrdiff_t m_bIsInRicochet = 0x11d8;
    }
    namespace CCitadel_Ability_ShivDaggerVData {
      constexpr std::ptrdiff_t m_DamageDebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_SlowDebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_DaggerStuckParticle = 0x1838;
      constexpr std::ptrdiff_t m_DaggerImpactParticle = 0x1918;
      constexpr std::ptrdiff_t m_DaggerExplodeParticle = 0x19f8;
      constexpr std::ptrdiff_t m_strDaggerHitSound = 0x1ad8;
      constexpr std::ptrdiff_t m_strDaggerExplodeSound = 0x1ae8;
    }
    namespace CCitadel_Ability_ShivDash {
      constexpr std::ptrdiff_t m_vStartPosition = 0x11d8;
      constexpr std::ptrdiff_t m_vDashDirection = 0x11e4;
      constexpr std::ptrdiff_t m_bIsDashing = 0x11f0;
      constexpr std::ptrdiff_t m_bStartedInAir = 0x11f1;
      constexpr std::ptrdiff_t m_vecHitEnemies = 0x11f8;
      constexpr std::ptrdiff_t m_vecLastPosition = 0x1210;
      constexpr std::ptrdiff_t m_nReductionsLeft = 0x121c;
      constexpr std::ptrdiff_t m_flStuckTime = 0x17a0;
    }
    namespace CCitadel_Ability_ShivWeapon {
    }
    namespace CCitadel_Ability_ShivWeapon_VData {
      constexpr std::ptrdiff_t m_flPushForce = 0x19c0;
    }
    namespace CCitadel_Ability_Shiv_Defer_Damage {
      constexpr std::ptrdiff_t m_flTotalPendingDamage = 0x13d8;
    }
    namespace CCitadel_Ability_Shiv_KillingBlow {
      constexpr std::ptrdiff_t m_vHitEnts = 0x11d8;
      constexpr std::ptrdiff_t m_bActive = 0x15f8;
      constexpr std::ptrdiff_t m_bStartedOnGround = 0x15f9;
      constexpr std::ptrdiff_t m_vStartPosition = 0x15fc;
      constexpr std::ptrdiff_t m_qCurrentAngles = 0x1608;
      constexpr std::ptrdiff_t m_flDepartureTime = 0x1618;
      constexpr std::ptrdiff_t m_flArrivalTime = 0x1630;
      constexpr std::ptrdiff_t m_vLastKnownSafePos = 0x1648;
      constexpr std::ptrdiff_t m_bMadeSlashParticle = 0x1654;
      constexpr std::ptrdiff_t m_flDrainSuppressEndTime = 0x1658;
      constexpr std::ptrdiff_t m_flRecastWindowEnd = 0x165c;
    }
    namespace CCitadel_Ability_Shiv_KillingBlowVData {
      constexpr std::ptrdiff_t m_LeapModifier = 0x1818;
      constexpr std::ptrdiff_t m_ActiveBuff = 0x1828;
      constexpr std::ptrdiff_t m_KillableModifier = 0x1838;
      constexpr std::ptrdiff_t m_AttackParticle = 0x1848;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1928;
      constexpr std::ptrdiff_t m_FlashParticle = 0x1a08;
      constexpr std::ptrdiff_t m_KillingBlowCastParticle = 0x1ae8;
      constexpr std::ptrdiff_t m_OnKillSound = 0x1bc8;
      constexpr std::ptrdiff_t m_flKillableGlowRange = 0x1bd8;
      constexpr std::ptrdiff_t m_flGlowMinTime = 0x1bdc;
      constexpr std::ptrdiff_t m_flFracToAllowUp = 0x1be0;
      constexpr std::ptrdiff_t m_flMinLeapTime = 0x1be4;
      constexpr std::ptrdiff_t m_flCheckRadius = 0x1be8;
      constexpr std::ptrdiff_t m_flSlashRadius = 0x1bec;
      constexpr std::ptrdiff_t m_flRefreshLockOutTime = 0x1bf0;
      constexpr std::ptrdiff_t m_flMaxTurnRate = 0x1bf4;
      constexpr std::ptrdiff_t m_flCameraTurnRate = 0x1bf8;
      constexpr std::ptrdiff_t m_SpeedCurve = 0x1c00;
      constexpr std::ptrdiff_t m_SpeedUpCurve = 0x1c40;
      constexpr std::ptrdiff_t m_flVelocityCarryoverOnMiss = 0x1c80;
    }
    namespace CCitadel_Ability_Shotgun_Astro {
    }
    namespace CCitadel_Ability_Shotgun_Astro_Backwards {
    }
    namespace CCitadel_Ability_SkyRunner_Ability04 {
    }
    namespace CCitadel_Ability_SkyRunner_FlakShot {
    }
    namespace CCitadel_Ability_SkyRunner_FlakShotVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x18f8;
    }
    namespace CCitadel_Ability_SkyRunner_PrimaryWeapon {
    }
    namespace CCitadel_Ability_SkyRunner_PrimaryWeaponVData {
    }
    namespace CCitadel_Ability_SkyRunner_SwingLine {
      constexpr std::ptrdiff_t m_eSwingState = 0x11d8;
      constexpr std::ptrdiff_t m_SwingStartTime = 0x11dc;
      constexpr std::ptrdiff_t m_SwingEndTime = 0x11e0;
      constexpr std::ptrdiff_t m_vecSwingPoint = 0x11e4;
      constexpr std::ptrdiff_t m_vecCurrentPosition = 0x11f0;
      constexpr std::ptrdiff_t m_flIdealSpringLength = 0x11fc;
    }
    namespace CCitadel_Ability_Skyrunner_MagicBeam {
      constexpr std::ptrdiff_t m_vCastPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qCastAngle = 0x11e4;
    }
    namespace CCitadel_Ability_Skyrunner_MagicBeamVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x18f8;
      constexpr std::ptrdiff_t m_MagicBeamModifier = 0x1908;
    }
    namespace CCitadel_Ability_SleepBomb {
    }
    namespace CCitadel_Ability_SleepDagger {
    }
    namespace CCitadel_Ability_Slide {
      constexpr std::ptrdiff_t m_flGroundDashSlideTime = 0x1230;
      constexpr std::ptrdiff_t m_flSlowGetupStartTime = 0x1248;
      constexpr std::ptrdiff_t m_bShouldTriggerSlowGetup = 0x124c;
      constexpr std::ptrdiff_t m_bWantsSlide = 0x124d;
      constexpr std::ptrdiff_t m_bAirborneWhenDuckPressed = 0x124e;
      constexpr std::ptrdiff_t m_bIsSliding = 0x124f;
      constexpr std::ptrdiff_t m_bSlideIsSticky = 0x1250;
      constexpr std::ptrdiff_t m_flSpeedAdjust = 0x1254;
      constexpr std::ptrdiff_t m_flDuckPressedTime = 0x1258;
      constexpr std::ptrdiff_t m_flSlideChangeTime = 0x125c;
      constexpr std::ptrdiff_t m_flSlidingOnFlatStartTime = 0x1260;
      constexpr std::ptrdiff_t m_nJumpsThisSlideSession = 0x1264;
      constexpr std::ptrdiff_t m_flOnGroundStartTime = 0x1268;
      constexpr std::ptrdiff_t m_flDashSlideStartTime = 0x126c;
      constexpr std::ptrdiff_t m_bStartedSlideViaProbeSlope = 0x1270;
      constexpr std::ptrdiff_t m_nSlideEffectIndex = 0x1274;
    }
    namespace CCitadel_Ability_SmokeBomb {
    }
    namespace CCitadel_Ability_SmokeBombVData {
      constexpr std::ptrdiff_t m_InvisModifier = 0x1818;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_PhaseOutModifier = 0x1838;
      constexpr std::ptrdiff_t m_PurgeParticle = 0x1848;
    }
    namespace CCitadel_Ability_SnakeDash {
    }
    namespace CCitadel_Ability_SnakeDashVData {
      constexpr std::ptrdiff_t m_strBaseSlideAbility = 0x1818;
      constexpr std::ptrdiff_t m_strViperSlideAbility = 0x1820;
    }
    namespace CCitadel_Ability_SpiderShield {
    }
    namespace CCitadel_Ability_Spinning_Blade {
    }
    namespace CCitadel_Ability_Spinning_BladeVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_CatchIndicator = 0x1828;
      constexpr std::ptrdiff_t m_CatchParticle = 0x1908;
      constexpr std::ptrdiff_t m_strThrowSound = 0x19e8;
      constexpr std::ptrdiff_t m_strReturnSound = 0x19f8;
      constexpr std::ptrdiff_t m_strCatchSound = 0x1a08;
      constexpr std::ptrdiff_t m_strFailSound = 0x1a18;
      constexpr std::ptrdiff_t m_strHitSound = 0x1a28;
    }
    namespace CCitadel_Ability_Sprint {
      constexpr std::ptrdiff_t m_nSprintParticle = 0x11d8;
      constexpr std::ptrdiff_t m_bSprinting = 0x11dc;
      constexpr std::ptrdiff_t m_flSprintStartTime = 0x11e0;
      constexpr std::ptrdiff_t m_bInCombat = 0x11e4;
    }
    namespace CCitadel_Ability_StaticCharge {
    }
    namespace CCitadel_Ability_StaticChargeVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_StaticChargeModifier = 0x18f8;
    }
    namespace CCitadel_Ability_StaticCharge_V2 {
    }
    namespace CCitadel_Ability_StaticCharge_V2_VData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_StaticChargeModifier = 0x18f8;
      constexpr std::ptrdiff_t m_StaticChargeWorldModifier = 0x1908;
      constexpr std::ptrdiff_t m_flWorldTraceRadius = 0x1918;
      constexpr std::ptrdiff_t m_flUnitTraceRadius = 0x191c;
    }
    namespace CCitadel_Ability_StickyBomb {
      constexpr std::ptrdiff_t m_hAutoTarget = 0x11dc;
      constexpr std::ptrdiff_t m_flHookEndTime = 0x11e0;
      constexpr std::ptrdiff_t m_flBombBonusHits = 0x11e4;
      constexpr std::ptrdiff_t m_flBombBonusKills = 0x11e8;
    }
    namespace CCitadel_Ability_Stomp {
    }
    namespace CCitadel_Ability_StormCloud {
      constexpr std::ptrdiff_t m_nTargetingParticleIndex = 0x11d8;
      constexpr std::ptrdiff_t m_flFloat = 0x1560;
      constexpr std::ptrdiff_t m_nLightningStrikesRemaining = 0x1564;
    }
    namespace CCitadel_Ability_SummonGangster {
    }
    namespace CCitadel_Ability_SuperNeutralCharge {
      constexpr std::ptrdiff_t m_bPreparing = 0x15d8;
      constexpr std::ptrdiff_t m_bTackling = 0x15d9;
      constexpr std::ptrdiff_t m_flTackleStartTime = 0x15dc;
      constexpr std::ptrdiff_t m_flTackleDuration = 0x15e0;
      constexpr std::ptrdiff_t m_vecTackleDir = 0x15e4;
      constexpr std::ptrdiff_t m_vecLastPosition = 0x15f0;
      constexpr std::ptrdiff_t m_nStuckFramesCount = 0x15fc;
      constexpr std::ptrdiff_t m_vecHitEnemies = 0x1600;
      constexpr std::ptrdiff_t m_flPrepareStartTime = 0x1618;
      constexpr std::ptrdiff_t m_nDistancePreview = 0x161c;
    }
    namespace CCitadel_Ability_SuperNeutralIncendiary {
    }
    namespace CCitadel_Ability_SuperNeutralShield {
    }
    namespace CCitadel_Ability_Swan_Ability04 {
    }
    namespace CCitadel_Ability_Swan_Acrobat {
    }
    namespace CCitadel_Ability_Swan_AcrobatVData {
      constexpr std::ptrdiff_t m_StackingModifier = 0x1818;
    }
    namespace CCitadel_Ability_Swan_FeatherBoomerang {
      constexpr std::ptrdiff_t m_vecHitTargetList = 0x11d8;
    }
    namespace CCitadel_Ability_Swan_FeatherBoomerangVData {
      constexpr std::ptrdiff_t m_HitParticle = 0x1818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x18f8;
    }
    namespace CCitadel_Ability_Swan_Leap {
    }
    namespace CCitadel_Ability_Swan_LeapVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
    }
    namespace CCitadel_Ability_SwingLineVData {
      constexpr std::ptrdiff_t m_SwingModifier = 0x1818;
      constexpr std::ptrdiff_t m_SwingAttachParticle = 0x1828;
      constexpr std::ptrdiff_t m_strDaggerHitSound = 0x1908;
      constexpr std::ptrdiff_t m_strDaggerExplodeSound = 0x1918;
      constexpr std::ptrdiff_t m_flSwingStartDelay = 0x1928;
      constexpr std::ptrdiff_t m_flSwingMaxDuration = 0x192c;
      constexpr std::ptrdiff_t m_flMass = 0x1930;
      constexpr std::ptrdiff_t m_flBodyForwardForce = 0x1934;
      constexpr std::ptrdiff_t m_flCameraForwardForce = 0x1938;
      constexpr std::ptrdiff_t m_flInputForce = 0x193c;
      constexpr std::ptrdiff_t m_flPullForce = 0x1940;
      constexpr std::ptrdiff_t m_flGravityForce = 0x1944;
      constexpr std::ptrdiff_t m_flDampingConstant = 0x1948;
      constexpr std::ptrdiff_t m_flIdealSpringLengthOverride = 0x194c;
      constexpr std::ptrdiff_t m_flTensionSpringConstant = 0x1950;
      constexpr std::ptrdiff_t m_flMaxSpringForce = 0x1954;
      constexpr std::ptrdiff_t m_flMaxSpeed = 0x1958;
      constexpr std::ptrdiff_t m_flWhiskerLength = 0x195c;
      constexpr std::ptrdiff_t m_flWhiskerOffset = 0x1960;
      constexpr std::ptrdiff_t m_flWhiskerForce = 0x1964;
      constexpr std::ptrdiff_t m_flWhiskerPositionVerticalOffset = 0x1968;
    }
    namespace CCitadel_Ability_TangoTether {
      constexpr std::ptrdiff_t m_desatVolIdx = 0x11d8;
      constexpr std::ptrdiff_t m_vecCastStartPos = 0x11dc;
      constexpr std::ptrdiff_t m_vecDashStartPos = 0x11e8;
      constexpr std::ptrdiff_t m_vecDashEndPos = 0x11f4;
      constexpr std::ptrdiff_t m_angDashStartAng = 0x1200;
      constexpr std::ptrdiff_t m_flDashStartTime = 0x120c;
      constexpr std::ptrdiff_t m_flGrappleStartTime = 0x1210;
      constexpr std::ptrdiff_t m_flGrappleArriveTime = 0x1214;
      constexpr std::ptrdiff_t m_hTarget = 0x1218;
      constexpr std::ptrdiff_t m_flVelSpring = 0x121c;
      constexpr std::ptrdiff_t m_flGrappleShotAttackTime = 0x1220;
      constexpr std::ptrdiff_t m_nTicksNotMoving = 0x1224;
      constexpr std::ptrdiff_t m_vecPrevPos = 0x1228;
      constexpr std::ptrdiff_t m_rgTargetPos = 0x1234;
      constexpr std::ptrdiff_t m_rgTargetPosTime = 0x1324;
      constexpr std::ptrdiff_t m_nGrappleTravelEffect = 0x1374;
    }
    namespace CCitadel_Ability_TangoTether_Trigger {
      constexpr std::ptrdiff_t m_hBaseAbility = 0x11ec;
    }
    namespace CCitadel_Ability_TargetPractice {
    }
    namespace CCitadel_Ability_Targetdummy_1 {
    }
    namespace CCitadel_Ability_Targetdummy_2 {
    }
    namespace CCitadel_Ability_Targetdummy_3 {
    }
    namespace CCitadel_Ability_Targetdummy_4 {
    }
    namespace CCitadel_Ability_Targetdummy_Inherent {
    }
    namespace CCitadel_Ability_Teleport {
      constexpr std::ptrdiff_t m_bTeleportingToTarget = 0x11d8;
      constexpr std::ptrdiff_t m_vTargetPosition = 0x11dc;
      constexpr std::ptrdiff_t m_vTargetAngles = 0x11e8;
    }
    namespace CCitadel_Ability_TeleportToGangster {
    }
    namespace CCitadel_Ability_Tenacity {
    }
    namespace CCitadel_Ability_Tengu_AirLift {
      constexpr std::ptrdiff_t m_hGrabTarget = 0x11d8;
      constexpr std::ptrdiff_t m_nHoldBombEffect = 0x11dc;
      constexpr std::ptrdiff_t m_eFlightState = 0x18e8;
      constexpr std::ptrdiff_t m_bIsGrabbing = 0x18e9;
      constexpr std::ptrdiff_t m_bIsHoldingBomb = 0x18ea;
      constexpr std::ptrdiff_t m_flCurrentSpeed = 0x18ec;
    }
    namespace CCitadel_Ability_Tengu_AirLiftVData {
      constexpr std::ptrdiff_t m_FlyingModifier = 0x1818;
      constexpr std::ptrdiff_t m_GrabModifier = 0x1828;
      constexpr std::ptrdiff_t m_HoldBombModifier = 0x1838;
      constexpr std::ptrdiff_t m_DroppedBuffModifier = 0x1848;
      constexpr std::ptrdiff_t m_ExplodingAllyModifier = 0x1858;
      constexpr std::ptrdiff_t m_SilenceModifier = 0x1868;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1878;
      constexpr std::ptrdiff_t m_BulletResistModifier = 0x1888;
      constexpr std::ptrdiff_t m_InitialExplodeParticle = 0x1898;
      constexpr std::ptrdiff_t m_HoldBombEffect = 0x1978;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1a58;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1b38;
      constexpr std::ptrdiff_t m_flAirDrag = 0x1b48;
      constexpr std::ptrdiff_t m_flMaxFallSpeed = 0x1b4c;
      constexpr std::ptrdiff_t m_flTargetAirSpeedFast = 0x1b50;
      constexpr std::ptrdiff_t m_flTargetAirSpeedBase = 0x1b54;
      constexpr std::ptrdiff_t m_flSprintMult = 0x1b58;
      constexpr std::ptrdiff_t m_flAcceleration = 0x1b5c;
      constexpr std::ptrdiff_t m_flDecceleration = 0x1b60;
      constexpr std::ptrdiff_t m_flAirSideSpeedPercent = 0x1b64;
      constexpr std::ptrdiff_t m_flBoostEndVerticalSpeed = 0x1b68;
      constexpr std::ptrdiff_t m_flBoostSpeedUp = 0x1b6c;
      constexpr std::ptrdiff_t m_flCrouchLaunchReduction = 0x1b70;
      constexpr std::ptrdiff_t m_flMinFlyHeight = 0x1b74;
      constexpr std::ptrdiff_t m_flMaxFlyHeight = 0x1b78;
      constexpr std::ptrdiff_t m_flMaxPitchUp = 0x1b7c;
      constexpr std::ptrdiff_t m_flMaxPitchDown = 0x1b80;
      constexpr std::ptrdiff_t m_flAllyDelayedBoostTime = 0x1b84;
      constexpr std::ptrdiff_t m_flChannelingAirDrag = 0x1b88;
      constexpr std::ptrdiff_t m_flChannelingMaxFallSpeed = 0x1b8c;
      constexpr std::ptrdiff_t m_flBombReleaseSpeed = 0x1b90;
      constexpr std::ptrdiff_t m_flBombReleasePitch = 0x1b94;
      constexpr std::ptrdiff_t m_flBombDropReleaseOffset = 0x1b98;
      constexpr std::ptrdiff_t m_flHoldBombOffsetX = 0x1b9c;
      constexpr std::ptrdiff_t m_flHoldBombOffsetY = 0x1ba0;
      constexpr std::ptrdiff_t m_flHoldBombOffsetZ = 0x1ba4;
      constexpr std::ptrdiff_t m_flAnglePitchBias = 0x1ba8;
      constexpr std::ptrdiff_t m_flTrackAmount = 0x1bac;
      constexpr std::ptrdiff_t m_flMoveCollideSpeed = 0x1bb0;
    }
    namespace CCitadel_Ability_Tengu_StoneForm {
      constexpr std::ptrdiff_t m_flStartTime = 0x1560;
      constexpr std::ptrdiff_t m_flLandedTime = 0x1564;
      constexpr std::ptrdiff_t m_bLanded = 0x1568;
      constexpr std::ptrdiff_t m_bFalling = 0x1569;
      constexpr std::ptrdiff_t m_bInStoneForm = 0x156a;
      constexpr std::ptrdiff_t m_flStartHeight = 0x156c;
      constexpr std::ptrdiff_t m_nStoneFormEffect = 0x1570;
    }
    namespace CCitadel_Ability_Tengu_StoneFormVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x18f8;
      constexpr std::ptrdiff_t m_StoneFormParticle = 0x19d8;
      constexpr std::ptrdiff_t m_strImpactSound = 0x1ab8;
      constexpr std::ptrdiff_t m_DragModifier = 0x1ac8;
      constexpr std::ptrdiff_t m_strTrueFormModel = 0x1ad8;
      constexpr std::ptrdiff_t m_flLandHoldTime = 0x1bb8;
      constexpr std::ptrdiff_t m_flRisingTime = 0x1bbc;
      constexpr std::ptrdiff_t m_flCollideRadius = 0x1bc0;
      constexpr std::ptrdiff_t m_flGroundDetectionFailsafeDelay = 0x1bc4;
    }
    namespace CCitadel_Ability_Tengu_Urn {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Ability_Tengu_UrnVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_AuraModifier = 0x18f8;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x1908;
    }
    namespace CCitadel_Ability_ThrowSand {
      constexpr std::ptrdiff_t m_vHitEnts = 0x12d8;
    }
    namespace CCitadel_Ability_ThrowSandVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_SilenceDebuff = 0x1828;
    }
    namespace CCitadel_Ability_Thumper_1 {
      constexpr std::ptrdiff_t m_vecAimPos = 0x11d8;
      constexpr std::ptrdiff_t m_vecAimNormal = 0x11e4;
      constexpr std::ptrdiff_t m_flPushForce = 0x11f0;
    }
    namespace CCitadel_Ability_Thumper_2 {
    }
    namespace CCitadel_Ability_Thumper_3 {
    }
    namespace CCitadel_Ability_Thumper_4 {
    }
    namespace CCitadel_Ability_Tier2Boss_AoEWave {
    }
    namespace CCitadel_Ability_Tier2Boss_AoEWaveVData {
      constexpr std::ptrdiff_t m_InitialExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strAOEImpactSound = 0x19d8;
      constexpr std::ptrdiff_t m_strAOEAnnounceSound = 0x19e8;
      constexpr std::ptrdiff_t m_AoEModifier = 0x19f8;
      constexpr std::ptrdiff_t m_flCastCompleteToAttackTime = 0x1a08;
    }
    namespace CCitadel_Ability_Tier2Boss_LaserBeam {
    }
    namespace CCitadel_Ability_Tier2Boss_LaserBeamVData {
      constexpr std::ptrdiff_t m_LaserLeft = 0x1818;
      constexpr std::ptrdiff_t m_LaserMid = 0x1828;
      constexpr std::ptrdiff_t m_LaserRight = 0x1838;
      constexpr std::ptrdiff_t m_LaserCharge = 0x1848;
    }
    namespace CCitadel_Ability_Tier2Boss_RocketBarrage {
      constexpr std::ptrdiff_t m_nGrenadeIndex = 0x11d8;
      constexpr std::ptrdiff_t m_nTotalGrenades = 0x11dc;
    }
    namespace CCitadel_Ability_Tier2Boss_RocketBarrageVData {
      constexpr std::ptrdiff_t m_LaunchAngle = 0x1818;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1820;
      constexpr std::ptrdiff_t m_ExplosionSound = 0x1900;
      constexpr std::ptrdiff_t m_RocketFireSound = 0x1910;
      constexpr std::ptrdiff_t m_AuraModifier = 0x1920;
    }
    namespace CCitadel_Ability_Tier2Boss_Stomp {
    }
    namespace CCitadel_Ability_Tier3Boss_AoEWave {
    }
    namespace CCitadel_Ability_Tier3Boss_AoEWaveVData {
      constexpr std::ptrdiff_t m_AmberInitialExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_AmberShrineChargeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_SapphInitialExplodeParticle = 0x19d8;
      constexpr std::ptrdiff_t m_SapphShrineChargeParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_AOEAmberImpactSound = 0x1b98;
      constexpr std::ptrdiff_t m_AOESapphImpactSound = 0x1ba8;
      constexpr std::ptrdiff_t m_AOEAmberAnnounceSound = 0x1bb8;
      constexpr std::ptrdiff_t m_AOESapphAnnounceSound = 0x1bc8;
      constexpr std::ptrdiff_t m_AoEModifier = 0x1bd8;
      constexpr std::ptrdiff_t m_PreviewModifier = 0x1be8;
      constexpr std::ptrdiff_t m_flCastCompleteToAttackTime = 0x1bf8;
      constexpr std::ptrdiff_t m_flShakeRadius = 0x1bfc;
      constexpr std::ptrdiff_t m_flShakeAmplitue = 0x1c00;
      constexpr std::ptrdiff_t m_flShakeFreqency = 0x1c04;
      constexpr std::ptrdiff_t m_flShakeDuration = 0x1c08;
    }
    namespace CCitadel_Ability_Tier3Boss_DropBombs {
    }
    namespace CCitadel_Ability_Tier3Boss_DropBombsVData {
      constexpr std::ptrdiff_t m_AmberExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_AmberAoeWarningParticle = 0x18f8;
      constexpr std::ptrdiff_t m_AmberAoeWarningGroundParticle = 0x19d8;
      constexpr std::ptrdiff_t m_SapphExplodeParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_SapphAoeWarningParticle = 0x1b98;
      constexpr std::ptrdiff_t m_SapphAoeWarningGroundParticle = 0x1c78;
      constexpr std::ptrdiff_t m_AmberAOEWarningSound = 0x1d58;
      constexpr std::ptrdiff_t m_AmberAOEImpactSound = 0x1d68;
      constexpr std::ptrdiff_t m_SapphireAOEWarningSound = 0x1d78;
      constexpr std::ptrdiff_t m_SapphireAOEImpactSound = 0x1d88;
      constexpr std::ptrdiff_t m_strLaunchSound = 0x1d98;
      constexpr std::ptrdiff_t m_strLandSound = 0x1da8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1db8;
      constexpr std::ptrdiff_t m_CurseModifier = 0x1dc8;
      constexpr std::ptrdiff_t m_flExplodeRadius = 0x1dd8;
      constexpr std::ptrdiff_t m_flBombOffsets = 0x1ddc;
      constexpr std::ptrdiff_t m_flBaseDamage = 0x1de0;
      constexpr std::ptrdiff_t m_flDamageNonPlayer = 0x1de4;
      constexpr std::ptrdiff_t m_flMaxHealthPctDamage = 0x1de8;
      constexpr std::ptrdiff_t m_flDebuffDuration = 0x1dec;
      constexpr std::ptrdiff_t m_flCooldownMax = 0x1df0;
      constexpr std::ptrdiff_t m_flCooldownMin = 0x1df4;
      constexpr std::ptrdiff_t m_flDetonationTimeMax = 0x1df8;
      constexpr std::ptrdiff_t m_flDetonationTimeMin = 0x1dfc;
      constexpr std::ptrdiff_t m_flBossHealthMax = 0x1e00;
      constexpr std::ptrdiff_t m_flBossHealthMin = 0x1e04;
      constexpr std::ptrdiff_t m_flBombDropDist = 0x1e08;
      constexpr std::ptrdiff_t m_flWarningOffset = 0x1e0c;
    }
    namespace CCitadel_Ability_Tier3Boss_LaserBeam {
    }
    namespace CCitadel_Ability_Tier3Boss_LaserBeamVData {
      constexpr std::ptrdiff_t m_BeamModifier = 0x1818;
    }
    namespace CCitadel_Ability_Tier3Boss_RocketBarrage {
      constexpr std::ptrdiff_t m_nGrenadeIndex = 0x11d8;
      constexpr std::ptrdiff_t m_nTotalGrenades = 0x11dc;
      constexpr std::ptrdiff_t m_hShootPos = 0x11e0;
    }
    namespace CCitadel_Ability_Tier3Boss_RocketBarrageVData {
      constexpr std::ptrdiff_t m_LaunchAngle = 0x1818;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1820;
      constexpr std::ptrdiff_t m_ExplosionSound = 0x1900;
      constexpr std::ptrdiff_t m_RocketFireSound = 0x1910;
      constexpr std::ptrdiff_t m_AuraModifier = 0x1920;
    }
    namespace CCitadel_Ability_Tokamak_Breach {
    }
    namespace CCitadel_Ability_Tokamak_CrimsonCannon {
      constexpr std::ptrdiff_t m_bAirCast = 0x11d8;
      constexpr std::ptrdiff_t m_bIsZoomed = 0x15e0;
    }
    namespace CCitadel_Ability_Tokamak_CrimsonCannonVData {
      constexpr std::ptrdiff_t m_LaserShot = 0x1818;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_CasterOnlyTargetParticle = 0x19d8;
      constexpr std::ptrdiff_t m_EnemyTargetedParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_strEnemyBeenTargetedSound = 0x1b98;
      constexpr std::ptrdiff_t m_strCasterTargetSelectedSound = 0x1ba8;
      constexpr std::ptrdiff_t m_strFireSound = 0x1bb8;
      constexpr std::ptrdiff_t m_strImpactSound = 0x1bc8;
      constexpr std::ptrdiff_t m_strBlockedSound = 0x1bd8;
    }
    namespace CCitadel_Ability_Tokamak_DyingStar {
      constexpr std::ptrdiff_t m_nRollFXIndex = 0x11d8;
      constexpr std::ptrdiff_t m_bInFlight = 0x11dc;
    }
    namespace CCitadel_Ability_Tokamak_DyingStarVData {
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x1818;
      constexpr std::ptrdiff_t m_FlameAuraParticle = 0x18f8;
      constexpr std::ptrdiff_t m_strInFlightAnimGraphParam = 0x19d8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x19e0;
      constexpr std::ptrdiff_t m_InFlightModifier = 0x19f0;
    }
    namespace CCitadel_Ability_Tokamak_HeatSinks {
    }
    namespace CCitadel_Ability_Tokamak_HeatSinks_Inherent {
      constexpr std::ptrdiff_t m_nIntervalsElapsed = 0x11d8;
      constexpr std::ptrdiff_t m_NextShotTime = 0x11dc;
      constexpr std::ptrdiff_t m_flDissipationRate = 0x11e0;
      constexpr std::ptrdiff_t m_flDissipationTime = 0x11e4;
      constexpr std::ptrdiff_t m_flHeatTime = 0x11e8;
      constexpr std::ptrdiff_t m_flOverheatSoundTime = 0x11ec;
      constexpr std::ptrdiff_t m_bOverheating = 0x11f0;
    }
    namespace CCitadel_Ability_Tokamak_HotShot {
    }
    namespace CCitadel_Ability_Tokamak_Radiance {
    }
    namespace CCitadel_Ability_Trapper_Fear {
    }
    namespace CCitadel_Ability_Trapper_FearVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x18f8;
    }
    namespace CCitadel_Ability_Trapper_PoisonJar {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Ability_Trapper_PoisonJarVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_AuraModifier = 0x18f8;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x1908;
    }
    namespace CCitadel_Ability_Trapper_SpiderJar {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
      constexpr std::ptrdiff_t m_bHasMadeSpiders = 0x11f0;
    }
    namespace CCitadel_Ability_Trapper_SpiderJar_VData {
      constexpr std::ptrdiff_t m_SpiderExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_JarExplodeParticle = 0x18f8;
      constexpr std::ptrdiff_t m_SpiritStealDebuffModifier = 0x19d8;
    }
    namespace CCitadel_Ability_Trapper_WebWall {
      constexpr std::ptrdiff_t m_vecCastPosition = 0x1458;
      constexpr std::ptrdiff_t m_vecCastPositionNormal = 0x1464;
      constexpr std::ptrdiff_t m_vecEndPosition = 0x1470;
      constexpr std::ptrdiff_t m_vecEndPositionNormal = 0x147c;
    }
    namespace CCitadel_Ability_Trapper_WebWallVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_SilenceModifier = 0x1828;
      constexpr std::ptrdiff_t m_WebWallParticle = 0x1838;
      constexpr std::ptrdiff_t m_WebWallDestroyedParticle = 0x1918;
      constexpr std::ptrdiff_t m_WebWallHitParticle = 0x19f8;
      constexpr std::ptrdiff_t m_strWebWallCreated = 0x1ad8;
      constexpr std::ptrdiff_t m_strWebWallDestroyed = 0x1ae8;
    }
    namespace CCitadel_Ability_Trappers_Bolo {
    }
    namespace CCitadel_Ability_TriggerTower {
    }
    namespace CCitadel_Ability_TrooperBossGrenade {
    }
    namespace CCitadel_Ability_TrooperGrenade {
    }
    namespace CCitadel_Ability_TrooperNeutralGrenade {
    }
    namespace CCitadel_Ability_TrooperZipLine {
    }
    namespace CCitadel_Ability_TurretClone {
      constexpr std::ptrdiff_t m_bHasTurretReady = 0x1458;
      constexpr std::ptrdiff_t m_iCurrentSwapCount = 0x145c;
      constexpr std::ptrdiff_t m_flTurretExpireTime = 0x1460;
      constexpr std::ptrdiff_t m_nLastBulletShotID = 0x1468;
      constexpr std::ptrdiff_t m_pActiveTurret = 0x146c;
      constexpr std::ptrdiff_t m_nTurretFXIndex = 0x1470;
    }
    namespace CCitadel_Ability_TurretClone_Trigger {
    }
    namespace CCitadel_Ability_TurretClone_VData {
      constexpr std::ptrdiff_t m_strTurretParticle = 0x1818;
      constexpr std::ptrdiff_t m_strSwapParticle = 0x18f8;
      constexpr std::ptrdiff_t m_TurretModel = 0x19d8;
      constexpr std::ptrdiff_t m_strTurretLoopSound = 0x1ab8;
      constexpr std::ptrdiff_t m_strTurretLoopStartSound = 0x1ac8;
      constexpr std::ptrdiff_t m_strTurretLoopEndSound = 0x1ad8;
      constexpr std::ptrdiff_t m_strTurretShootSound = 0x1ae8;
      constexpr std::ptrdiff_t m_strSwapSound = 0x1af8;
      constexpr std::ptrdiff_t m_strSwapCloneSound = 0x1b08;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1b18;
      constexpr std::ptrdiff_t m_cameraSequenceTeleport = 0x1b28;
    }
    namespace CCitadel_Ability_UltCombo {
      constexpr std::ptrdiff_t m_flLastAttackTime = 0x11d8;
      constexpr std::ptrdiff_t m_nAttackNum = 0x11dc;
      constexpr std::ptrdiff_t m_iBonusHealth = 0x1360;
      constexpr std::ptrdiff_t m_hTarget = 0x1364;
    }
    namespace CCitadel_Ability_UltComboVData {
      constexpr std::ptrdiff_t m_MeleeSwingParticle = 0x1818;
      constexpr std::ptrdiff_t m_MeleeImpactParticle = 0x18f8;
      constexpr std::ptrdiff_t m_SelfModifier = 0x19d8;
      constexpr std::ptrdiff_t m_TargetModifier = 0x19e8;
      constexpr std::ptrdiff_t m_KillCheckModifier = 0x19f8;
      constexpr std::ptrdiff_t m_flKillCheckWindow = 0x1a08;
      constexpr std::ptrdiff_t m_flDamageInterval = 0x1a0c;
    }
    namespace CCitadel_Ability_Unicorn_DazzlingOrb {
    }
    namespace CCitadel_Ability_Unicorn_DazzlingOrbVData {
      constexpr std::ptrdiff_t m_FallSpeedCurve = 0x1818;
      constexpr std::ptrdiff_t m_flAirSpeedMax = 0x1858;
      constexpr std::ptrdiff_t m_flAirDrag = 0x185c;
      constexpr std::ptrdiff_t m_OrbWatcherModifier = 0x1860;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x1870;
    }
    namespace CCitadel_Ability_Unicorn_LuminousStrike {
      constexpr std::ptrdiff_t m_flLastStackChangeTime = 0x11d8;
      constexpr std::ptrdiff_t m_nLastStackCount = 0x11dc;
      constexpr std::ptrdiff_t m_vecNextExplosionTime = 0x11f8;
      constexpr std::ptrdiff_t m_vecNextExplosionLocation = 0x1210;
      constexpr std::ptrdiff_t m_nStackCount = 0x1228;
      constexpr std::ptrdiff_t m_bPendingStackUpdate = 0x122c;
    }
    namespace CCitadel_Ability_Unicorn_LuminousStrikeVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_TellParticleFriendly = 0x18f8;
      constexpr std::ptrdiff_t m_TellParticleEnemy = 0x19d8;
      constexpr std::ptrdiff_t m_TellParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_EnemyHitParticle = 0x1b98;
      constexpr std::ptrdiff_t m_FluxStrikeCast = 0x1c78;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1d58;
      constexpr std::ptrdiff_t m_strTellSound = 0x1d68;
      constexpr std::ptrdiff_t m_strHitSound = 0x1d78;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1d88;
    }
    namespace CCitadel_Ability_Unicorn_PrimaryWeapon {
      constexpr std::ptrdiff_t m_flActivatePressTime = 0x16d0;
    }
    namespace CCitadel_Ability_Unicorn_PrimaryWeaponVData {
      constexpr std::ptrdiff_t m_BatonFlameParticle = 0x19c0;
      constexpr std::ptrdiff_t m_strBounceSound = 0x1aa0;
      constexpr std::ptrdiff_t m_strFiringLoopSound = 0x1ab0;
      constexpr std::ptrdiff_t m_flTargetingRadius = 0x1ac0;
      constexpr std::ptrdiff_t m_flUnitHitTargetingRadius = 0x1ac4;
      constexpr std::ptrdiff_t m_flOrbHitTargetingRadius = 0x1ac8;
      constexpr std::ptrdiff_t m_eLosCheckType = 0x1acc;
      constexpr std::ptrdiff_t m_nRicochetTargets = 0x1ad0;
      constexpr std::ptrdiff_t m_flRicochetPitchAddition = 0x1ad4;
      constexpr std::ptrdiff_t m_flOrbRicochetPitchAddition = 0x1ad8;
      constexpr std::ptrdiff_t m_flRicochetGravity = 0x1adc;
      constexpr std::ptrdiff_t m_flOrbRicochetConeAngle = 0x1ae0;
      constexpr std::ptrdiff_t m_flRicochetConeAngle = 0x1ae4;
      constexpr std::ptrdiff_t m_flMaxRicohetDot = 0x1ae8;
      constexpr std::ptrdiff_t m_flMinTargetDot = 0x1aec;
      constexpr std::ptrdiff_t m_flRicochetDamageScale = 0x1af0;
      constexpr std::ptrdiff_t m_flRearOffset = 0x1af4;
      constexpr std::ptrdiff_t m_flRicochetDotMaxDampening = 0x1af8;
      constexpr std::ptrdiff_t m_flRicochetDotMinDampening = 0x1afc;
      constexpr std::ptrdiff_t m_flMinVelocityDampening = 0x1b00;
      constexpr std::ptrdiff_t m_flMaxVelocityDampening = 0x1b04;
      constexpr std::ptrdiff_t m_flMinButtonHoldTimeToPlaySound = 0x1b08;
    }
    namespace CCitadel_Ability_Unicorn_PrismaticGuard {
    }
    namespace CCitadel_Ability_Unicorn_PrismaticGuardVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_CastParticle = 0x1838;
    }
    namespace CCitadel_Ability_Unicorn_RadiantBlast {
    }
    namespace CCitadel_Ability_Unicorn_RadiantBlastVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_strHitSound = 0x1828;
      constexpr std::ptrdiff_t m_CastParticle = 0x1838;
      constexpr std::ptrdiff_t m_HitParticle = 0x1918;
      constexpr std::ptrdiff_t m_flJumpAirSpeedMax = 0x19f8;
      constexpr std::ptrdiff_t m_flJumpFallSpeedMax = 0x19fc;
      constexpr std::ptrdiff_t m_flJumpAirDrag = 0x1a00;
      constexpr std::ptrdiff_t m_iConeBulletCount = 0x1a04;
      constexpr std::ptrdiff_t m_flConeBulletSpread = 0x1a08;
      constexpr std::ptrdiff_t m_flRangeScaleIncreaseMax = 0x1a0c;
      constexpr std::ptrdiff_t m_flRangeScaleIncreaseMaxSpeed = 0x1a10;
      constexpr std::ptrdiff_t m_flHitConeAngleExtra = 0x1a14;
    }
    namespace CCitadel_Ability_Uppercut {
    }
    namespace CCitadel_Ability_VampireBat_BatBlink {
      constexpr std::ptrdiff_t m_iRemainingCasts = 0x14e0;
      constexpr std::ptrdiff_t m_bIsBlinking = 0x14e4;
      constexpr std::ptrdiff_t m_RecastEndTime = 0x14e8;
      constexpr std::ptrdiff_t m_BlinkEndTime = 0x14ec;
    }
    namespace CCitadel_Ability_VampireBat_BatBlinkVData {
      constexpr std::ptrdiff_t m_BlinkStartParticle = 0x1818;
      constexpr std::ptrdiff_t m_BlinkEndParticle = 0x18f8;
      constexpr std::ptrdiff_t m_BlinkTravelParticle = 0x19d8;
      constexpr std::ptrdiff_t m_SelfBuffModifier = 0x1ab8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1ac8;
      constexpr std::ptrdiff_t m_cameraSequenceTeleport = 0x1ad8;
      constexpr std::ptrdiff_t m_BlinkStartSound = 0x1b60;
      constexpr std::ptrdiff_t m_BlinkEndSound = 0x1b70;
      constexpr std::ptrdiff_t m_BlinkEndFinalSound = 0x1b80;
      constexpr std::ptrdiff_t m_strWhizbySound = 0x1b90;
    }
    namespace CCitadel_Ability_VampireBat_BatCloud {
      constexpr std::ptrdiff_t m_flBatCloudEndTime = 0x11f8;
    }
    namespace CCitadel_Ability_VampireBat_BatCloudVData {
      constexpr std::ptrdiff_t m_SelfModifier = 0x1818;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1828;
      constexpr std::ptrdiff_t m_AuraParticle = 0x1838;
      constexpr std::ptrdiff_t m_BatHitParticle = 0x1918;
      constexpr std::ptrdiff_t m_strFireBatSound = 0x19f8;
      constexpr std::ptrdiff_t m_cameraSequenceBatCloud = 0x1a08;
      constexpr std::ptrdiff_t m_flCameraForwardForce = 0x1a90;
      constexpr std::ptrdiff_t m_flInputForce = 0x1a94;
      constexpr std::ptrdiff_t m_flDampingConstant = 0x1a98;
    }
    namespace CCitadel_Ability_VampireBat_BatSwarm {
      constexpr std::ptrdiff_t m_iBonusBats = 0x11d8;
      constexpr std::ptrdiff_t m_iBatCountOnCast = 0x11dc;
      constexpr std::ptrdiff_t m_flChannelTime = 0x11e0;
      constexpr std::ptrdiff_t m_bPauseChannel = 0x11e4;
      constexpr std::ptrdiff_t m_flLastRemainingChannelTime = 0x11e8;
      constexpr std::ptrdiff_t m_flNextBatTime = 0x11f8;
    }
    namespace CCitadel_Ability_VampireBat_BatSwarmVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_GainedBatParticle = 0x1828;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1908;
      constexpr std::ptrdiff_t m_BatSwarmChannelParticle = 0x19e8;
      constexpr std::ptrdiff_t m_strFireBatSound = 0x1ac8;
      constexpr std::ptrdiff_t m_strGainedBatSound = 0x1ad8;
      constexpr std::ptrdiff_t m_strChannelEndSound = 0x1ae8;
      constexpr std::ptrdiff_t m_bAllowLockOn = 0x1af8;
      constexpr std::ptrdiff_t m_bAllowSatVolume = 0x1af9;
      constexpr std::ptrdiff_t m_bAllowRetarget = 0x1afa;
      constexpr std::ptrdiff_t m_flBatTickRate = 0x1afc;
      constexpr std::ptrdiff_t m_flBatLifetime = 0x1b00;
      constexpr std::ptrdiff_t m_flTrackingAngularStrengthMin = 0x1b04;
      constexpr std::ptrdiff_t m_flTrackingAngularStrengthMax = 0x1b08;
      constexpr std::ptrdiff_t m_flBatRetargetRadius = 0x1b0c;
      constexpr std::ptrdiff_t m_flCurlNoiseStrength = 0x1b10;
      constexpr std::ptrdiff_t m_flCurlNoiseMinFrequency = 0x1b14;
      constexpr std::ptrdiff_t m_flCurlNoiseMaxFrequency = 0x1b18;
      constexpr std::ptrdiff_t m_DistanceToAccuracyCurve = 0x1b20;
      constexpr std::ptrdiff_t m_SatVolumeCastDelayRadiusCurve = 0x1b60;
      constexpr std::ptrdiff_t aimColorDesat = 0x1ba0;
      constexpr std::ptrdiff_t aimColorSat = 0x1ba4;
      constexpr std::ptrdiff_t aimColorOutline = 0x1ba8;
      constexpr std::ptrdiff_t m_flSatVolumePulsePerBat = 0x1bac;
      constexpr std::ptrdiff_t m_flSatVolumeInnerConeSize = 0x1bb0;
      constexpr std::ptrdiff_t m_flLowTickRateDistCheck = 0x1bb4;
    }
    namespace CCitadel_Ability_VampireBat_DoubleDagger {
    }
    namespace CCitadel_Ability_VampireBat_DoubleDaggerVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_BonusImpactParticle = 0x18f8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x19d8;
    }
    namespace CCitadel_Ability_VampireBat_LoveBites {
    }
    namespace CCitadel_Ability_VampireBat_LoveBitesVData {
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x1818;
      constexpr std::ptrdiff_t m_DamageProcModifier = 0x1828;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1838;
      constexpr std::ptrdiff_t m_strAttackerHitSound = 0x1918;
    }
    namespace CCitadel_Ability_VampireBat_StealLife {
      constexpr std::ptrdiff_t m_flFloatElapsedTime = 0x11dc;
      constexpr std::ptrdiff_t m_bFloating = 0x1780;
    }
    namespace CCitadel_Ability_VampireBat_StealLifeVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_CastParticle = 0x1828;
      constexpr std::ptrdiff_t m_CastLifeLeechParticle = 0x1908;
      constexpr std::ptrdiff_t m_DamageTargetParticle = 0x19e8;
      constexpr std::ptrdiff_t m_strSlashSound = 0x1ac8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x1ad8;
      constexpr std::ptrdiff_t m_strKillConfirmSound = 0x1ae8;
      constexpr std::ptrdiff_t m_bAllowFloating = 0x1af8;
    }
    namespace CCitadel_Ability_VandalOverflow {
    }
    namespace CCitadel_Ability_VandalSurge {
    }
    namespace CCitadel_Ability_Vandal_Ability03 {
    }
    namespace CCitadel_Ability_Vandal_Pillar {
    }
    namespace CCitadel_Ability_Vandal_PillarVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_PetrifyModifier = 0x18f8;
    }
    namespace CCitadel_Ability_ViperHookBladeVData {
      constexpr std::ptrdiff_t m_SlowDebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_DaggerStuckParticle = 0x1828;
      constexpr std::ptrdiff_t m_DaggerImpactParticle = 0x1908;
      constexpr std::ptrdiff_t m_DaggerExplodeParticle = 0x19e8;
      constexpr std::ptrdiff_t m_strDaggerHitSound = 0x1ac8;
      constexpr std::ptrdiff_t m_strDaggerExplodeSound = 0x1ad8;
    }
    namespace CCitadel_Ability_ViperHookblade {
      constexpr std::ptrdiff_t m_vecOutgoingHitList = 0x11d8;
      constexpr std::ptrdiff_t m_vecReturningHitList = 0x11f0;
    }
    namespace CCitadel_Ability_ViperVenom {
    }
    namespace CCitadel_Ability_ViperVenomVData {
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x1818;
      constexpr std::ptrdiff_t m_VenomModifier = 0x1828;
      constexpr std::ptrdiff_t m_CastVenomParticle = 0x1838;
      constexpr std::ptrdiff_t m_VenomExplodeParticle = 0x1918;
      constexpr std::ptrdiff_t m_strVenomWeakExplode = 0x19f8;
      constexpr std::ptrdiff_t m_strVenomExplode = 0x1a08;
      constexpr std::ptrdiff_t m_strVenomStrongExplode = 0x1a18;
    }
    namespace CCitadel_Ability_Viper_Ability04 {
    }
    namespace CCitadel_Ability_Viper_Ability04VData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_PetrifyModifier = 0x18f8;
    }
    namespace CCitadel_Ability_Viper_DebuffDagger {
    }
    namespace CCitadel_Ability_Viper_DebuffDaggerVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x1818;
      constexpr std::ptrdiff_t m_strWorldImpactSound = 0x18f8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x1908;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1918;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1928;
    }
    namespace CCitadel_Ability_Viper_PetrifyBola {
    }
    namespace CCitadel_Ability_Viper_PetrifyBolaVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_SlowModifier = 0x18f8;
      constexpr std::ptrdiff_t m_PetrifyModifier = 0x1908;
      constexpr std::ptrdiff_t m_strBolaExplodeSound = 0x1918;
    }
    namespace CCitadel_Ability_Viscous_Telepunch {
      constexpr std::ptrdiff_t m_vecTeleportPosition = 0x1858;
      constexpr std::ptrdiff_t m_vecTeleportPositionNormal = 0x1864;
      constexpr std::ptrdiff_t m_eTelepunchState = 0x1870;
      constexpr std::ptrdiff_t m_flNextStateTime = 0x1874;
    }
    namespace CCitadel_Ability_Viscous_TelepunchVData {
      constexpr std::ptrdiff_t m_PortalParticle = 0x1818;
      constexpr std::ptrdiff_t m_CastParticle = 0x18f8;
      constexpr std::ptrdiff_t m_PunchParticle = 0x19d8;
      constexpr std::ptrdiff_t m_WallPunchParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_CeilingPunchParticle = 0x1b98;
      constexpr std::ptrdiff_t m_PunchSound = 0x1c78;
      constexpr std::ptrdiff_t m_PunchSelfSound = 0x1c88;
      constexpr std::ptrdiff_t m_EnemyPortalSound = 0x1c98;
      constexpr std::ptrdiff_t m_PunchRollSlowModifier = 0x1ca8;
      constexpr std::ptrdiff_t m_ImpactModifier = 0x1cb8;
      constexpr std::ptrdiff_t m_FriendlyImpactModifier = 0x1cc8;
      constexpr std::ptrdiff_t m_flEnemyPortalTelegraphTime = 0x1cd8;
      constexpr std::ptrdiff_t m_flSelfPortalTelegraphTime = 0x1cdc;
      constexpr std::ptrdiff_t m_flWindupTime = 0x1ce0;
      constexpr std::ptrdiff_t m_flAttackTime = 0x1ce4;
      constexpr std::ptrdiff_t m_flGroundTraceOnPlayerHitDistance = 0x1ce8;
      constexpr std::ptrdiff_t m_flPlayerCheckSphereRadius = 0x1cec;
    }
    namespace CCitadel_Ability_VoidSphere {
    }
    namespace CCitadel_Ability_VoidSphereVData {
      constexpr std::ptrdiff_t m_BubbleModifier = 0x1818;
      constexpr std::ptrdiff_t m_strCastEffect = 0x1828;
      constexpr std::ptrdiff_t m_strAllyPositionPreview = 0x1908;
    }
    namespace CCitadel_Ability_Weapon_BossTier2 {
    }
    namespace CCitadel_Ability_Weapon_BossTier3 {
    }
    namespace CCitadel_Ability_Werewolf_ClawWeapon {
    }
    namespace CCitadel_Ability_Werewolf_ClawWeaponVData {
      constexpr std::ptrdiff_t m_strSwipeParticle = 0x19c0;
      constexpr std::ptrdiff_t m_strSwipeHitParticle = 0x1aa0;
      constexpr std::ptrdiff_t m_vecClawSwipeInfos = 0x1b80;
      constexpr std::ptrdiff_t m_strSwipeHitSound = 0x1b98;
    }
    namespace CCitadel_Ability_Werewolf_KickFlip {
      constexpr std::ptrdiff_t m_bIsLeaping = 0x11d8;
      constexpr std::ptrdiff_t m_tLeapStartTime = 0x11dc;
      constexpr std::ptrdiff_t m_tLeapOffTime = 0x11e0;
    }
    namespace CCitadel_Ability_Werewolf_KickFlipVData {
      constexpr std::ptrdiff_t m_LeapingSpeedCurve = 0x1818;
      constexpr std::ptrdiff_t m_flVelocityCarryoverOnMiss = 0x1858;
      constexpr std::ptrdiff_t m_flFracToAllowUp = 0x185c;
      constexpr std::ptrdiff_t m_flGroundBreakOffAngle = 0x1860;
      constexpr std::ptrdiff_t m_KickHitImpact = 0x1868;
      constexpr std::ptrdiff_t m_PushOffImpact = 0x1948;
      constexpr std::ptrdiff_t m_BootKickCast = 0x1a28;
      constexpr std::ptrdiff_t m_KickHitSound = 0x1b08;
      constexpr std::ptrdiff_t m_strPushOffSound = 0x1b18;
      constexpr std::ptrdiff_t m_SuccessSelfModifier = 0x1b28;
      constexpr std::ptrdiff_t m_SuccessEnemyModifier = 0x1b38;
      constexpr std::ptrdiff_t m_LeapingModifier = 0x1b48;
      constexpr std::ptrdiff_t m_DisarmModifier = 0x1b58;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1b68;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1b78;
      constexpr std::ptrdiff_t m_MarkModifier = 0x1b88;
    }
    namespace CCitadel_Ability_Werewolf_Leap {
      constexpr std::ptrdiff_t m_bWillLeapOff = 0x11d8;
      constexpr std::ptrdiff_t m_bIsLeaping = 0x11d9;
      constexpr std::ptrdiff_t m_tLeapStartTime = 0x11dc;
      constexpr std::ptrdiff_t m_tLeapOffTime = 0x11e0;
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11e4;
      constexpr std::ptrdiff_t m_vLaunchVelocity = 0x11f0;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11fc;
    }
    namespace CCitadel_Ability_Werewolf_LeapVData {
      constexpr std::ptrdiff_t m_strCrashSound = 0x1818;
      constexpr std::ptrdiff_t m_LeapingModifier = 0x1828;
      constexpr std::ptrdiff_t m_LandingBonusesModifier = 0x1838;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1848;
      constexpr std::ptrdiff_t m_CrashParticle = 0x1858;
      constexpr std::ptrdiff_t m_flBufferTimeBeforeLanding = 0x1938;
      constexpr std::ptrdiff_t m_flMaxPitch = 0x193c;
      constexpr std::ptrdiff_t m_flMinPitch = 0x1940;
      constexpr std::ptrdiff_t m_LeapSpeedCurve = 0x1948;
    }
    namespace CCitadel_Ability_Werewolf_MaulingLeap {
      constexpr std::ptrdiff_t m_tLeapStartTime = 0x11dc;
    }
    namespace CCitadel_Ability_Werewolf_MaulingLeapVData {
      constexpr std::ptrdiff_t m_LeapingSpeedCurve = 0x1818;
      constexpr std::ptrdiff_t m_LeapingUpCurve = 0x1858;
      constexpr std::ptrdiff_t m_flVelocityCarryoverOnHit = 0x1898;
      constexpr std::ptrdiff_t m_flVelocityCarryoverOnMiss = 0x189c;
      constexpr std::ptrdiff_t m_flFracToAllowUp = 0x18a0;
      constexpr std::ptrdiff_t m_LeapHitImpact = 0x18a8;
      constexpr std::ptrdiff_t m_UltLeapCastParticle = 0x1988;
      constexpr std::ptrdiff_t m_LeapHitSound = 0x1a68;
      constexpr std::ptrdiff_t m_LeapingModifier = 0x1a78;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1a88;
      constexpr std::ptrdiff_t m_strAG2SuccessHeroState = 0x1a98;
    }
    namespace CCitadel_Ability_Werewolf_NetShot {
    }
    namespace CCitadel_Ability_Werewolf_NetShotVData {
      constexpr std::ptrdiff_t m_ShootParticle = 0x1818;
      constexpr std::ptrdiff_t m_strShootSound = 0x18f8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x1908;
      constexpr std::ptrdiff_t m_RootModifier = 0x1918;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1928;
      constexpr std::ptrdiff_t m_BonusDebuffModifier = 0x1938;
    }
    namespace CCitadel_Ability_Werewolf_OnTheHunt {
    }
    namespace CCitadel_Ability_Werewolf_OnTheHuntVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_TargetBuffSound = 0x18f8;
      constexpr std::ptrdiff_t m_RapidFireModifier = 0x1908;
    }
    namespace CCitadel_Ability_Werewolf_Rifle {
    }
    namespace CCitadel_Ability_Werewolf_RifleVData {
    }
    namespace CCitadel_Ability_Werewolf_TrackingBomb {
    }
    namespace CCitadel_Ability_Werewolf_TrackingBombVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_SlowModifier = 0x18f8;
      constexpr std::ptrdiff_t m_VialDebuffModifier = 0x1908;
      constexpr std::ptrdiff_t m_HowlDebuffModifier = 0x1918;
    }
    namespace CCitadel_Ability_WingBlast {
    }
    namespace CCitadel_Ability_Wraith_RapidFire {
    }
    namespace CCitadel_Ability_Wraith_RapidFireVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x1818;
      constexpr std::ptrdiff_t m_TargetBuffSound = 0x18f8;
      constexpr std::ptrdiff_t m_RapidFireModifier = 0x1908;
    }
    namespace CCitadel_Ability_WreckerGarbageSuck {
    }
    namespace CCitadel_Ability_WreckerScrapBlast {
    }
    namespace CCitadel_Ability_WreckerTeleport {
      constexpr std::ptrdiff_t m_hProjectile = 0x11e0;
      constexpr std::ptrdiff_t m_flArrowSpeed = 0x11e4;
      constexpr std::ptrdiff_t m_flSnapAnglesBackTime = 0x11e8;
      constexpr std::ptrdiff_t m_flCastTimeDamage = 0x11ec;
      constexpr std::ptrdiff_t m_flCastTime = 0x11f0;
      constexpr std::ptrdiff_t m_bNeedsExplosion = 0x11f4;
      constexpr std::ptrdiff_t m_vProjectileRemovedOrigin = 0x11f8;
      constexpr std::ptrdiff_t m_angCasterAnglesAtCastTime = 0x1204;
      constexpr std::ptrdiff_t m_flTravelDistance = 0x1210;
    }
    namespace CCitadel_Ability_Wrecker_BoulderGrenade {
      constexpr std::ptrdiff_t m_hHitTroopers = 0x11d8;
      constexpr std::ptrdiff_t m_nBallParticle = 0x11f4;
    }
    namespace CCitadel_Ability_Wrecker_BoulderGrenadeVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818;
      constexpr std::ptrdiff_t m_SummonParticle = 0x18f8;
      constexpr std::ptrdiff_t m_SummonReadyParticle = 0x19d8;
      constexpr std::ptrdiff_t m_SummonParticleAttachment = 0x1ab8;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x1ac0;
    }
    namespace CCitadel_Ability_Wrecker_Salvage {
    }
    namespace CCitadel_Ability_Wrecker_Ultimate {
      constexpr std::ptrdiff_t m_angBeamAngles = 0x11f8;
      constexpr std::ptrdiff_t m_bNeedsBeamReset = 0x1288;
    }
    namespace CCitadel_Ability_WreckingBall {
      constexpr std::ptrdiff_t m_bHoldingBall = 0x1258;
    }
    namespace CCitadel_Ability_WreckingBallThrow {
    }
    namespace CCitadel_Ability_Yakuza_Shakedown {
      constexpr std::ptrdiff_t m_IgnoreChannelSlow = 0x11d8;
    }
    namespace CCitadel_Ability_ZipLine {
      constexpr std::ptrdiff_t m_flActivatePressTime = 0x1be0;
      constexpr std::ptrdiff_t m_bThinking = 0x1be4;
      constexpr std::ptrdiff_t m_bMoveCollidedPushUp = 0x1be5;
      constexpr std::ptrdiff_t m_eCommittedAttachState = 0x1be8;
      constexpr std::ptrdiff_t m_flTimeStartZipping = 0x1c24;
      constexpr std::ptrdiff_t m_flTimeForKnockdownProtection = 0x1c28;
      constexpr std::ptrdiff_t m_flTimeStopZipping = 0x1c2c;
      constexpr std::ptrdiff_t m_flCasterSpeed = 0x1c30;
      constexpr std::ptrdiff_t m_vecInitialVel = 0x1c34;
      constexpr std::ptrdiff_t m_vecAttachPoint = 0x1c68;
      constexpr std::ptrdiff_t m_pPrevNode = 0x1c74;
      constexpr std::ptrdiff_t m_pNextNode = 0x1c78;
      constexpr std::ptrdiff_t m_flTimeEnterState = 0x1c7c;
      constexpr std::ptrdiff_t m_flLatchTime = 0x1c80;
      constexpr std::ptrdiff_t m_flDamagedTime = 0x1c84;
      constexpr std::ptrdiff_t m_eAttachState = 0x1c88;
      constexpr std::ptrdiff_t m_iAttachedZipLineLane = 0x1c8c;
      constexpr std::ptrdiff_t m_bDroppedFromZipline = 0x1c90;
      constexpr std::ptrdiff_t m_hAttachZipLine = 0x1c91;
      constexpr std::ptrdiff_t m_vAttachZipLineOffset = 0x1c94;
      constexpr std::ptrdiff_t m_flZiplineAirDrag = 0x1ca0;
      constexpr std::ptrdiff_t m_vPendulumVelocity = 0x1ca4;
      constexpr std::ptrdiff_t m_vPendulumPosition = 0x1cb0;
      constexpr std::ptrdiff_t m_vVelocityHistory1 = 0x1cbc;
      constexpr std::ptrdiff_t m_vVelocityHistory2 = 0x1cc8;
      constexpr std::ptrdiff_t m_iDesiredLane = 0x1cd4;
    }
    namespace CCitadel_Ability_ZipLineBoost_VData {
      constexpr std::ptrdiff_t m_ZipboostModifier = 0x1818;
      constexpr std::ptrdiff_t m_flTimeToActivate = 0x1828;
      constexpr std::ptrdiff_t m_flTimeForHint = 0x182c;
    }
    namespace CCitadel_Ability_ZipLine_Boost {
    }
    namespace CCitadel_Ability_ZipLine_VData {
      constexpr std::ptrdiff_t m_flZiplineAirDrag = 0x1818;
      constexpr std::ptrdiff_t m_flZiplineAirDragBoosted = 0x181c;
      constexpr std::ptrdiff_t m_flMinButtonHoldTimeToActivate = 0x1820;
      constexpr std::ptrdiff_t m_flCrouchDropSpeedFraction = 0x1824;
      constexpr std::ptrdiff_t m_flCrouchDropAirDragSuppressDuration = 0x1828;
      constexpr std::ptrdiff_t m_flDetachDisallowedTime = 0x182c;
      constexpr std::ptrdiff_t m_flCameraWobbleIntensity = 0x1830;
      constexpr std::ptrdiff_t m_flDismountSpeedMax = 0x1834;
      constexpr std::ptrdiff_t m_flDismountSpeedMaxBrawl = 0x1838;
      constexpr std::ptrdiff_t m_flZiplineKnockdownUpImpulse = 0x183c;
      constexpr std::ptrdiff_t m_flZiplineIntroDuration = 0x1840;
      constexpr std::ptrdiff_t m_DOFWhileZiplining = 0x1844;
      constexpr std::ptrdiff_t m_ZipLinePreviewParticle = 0x1858;
      constexpr std::ptrdiff_t m_ZipLineSpeedParticle = 0x1938;
      constexpr std::ptrdiff_t m_ZipLineTetherParticle = 0x1a18;
      constexpr std::ptrdiff_t m_ZipLineTetherAttachParticle = 0x1af8;
      constexpr std::ptrdiff_t m_ZipLineTetherStartParticle = 0x1bd8;
      constexpr std::ptrdiff_t m_ZipLineEnemyKnockdownProtectionParticle = 0x1cb8;
      constexpr std::ptrdiff_t m_ZipLineSelfKnockdownProtectionParticle = 0x1d98;
      constexpr std::ptrdiff_t m_ZipLineKnockdownProtectionStatusParticle = 0x1e78;
      constexpr std::ptrdiff_t m_strZipLineSummonSound = 0x1f58;
      constexpr std::ptrdiff_t m_strZipLineStartSound = 0x1f68;
      constexpr std::ptrdiff_t m_RidingZipLineModifier = 0x1f78;
      constexpr std::ptrdiff_t m_KnockedOffSlowModifier = 0x1f88;
      constexpr std::ptrdiff_t m_ZipLineIntroModifier = 0x1f98;
      constexpr std::ptrdiff_t m_ZipLineKnockdownImmuneModifier = 0x1fa8;
      constexpr std::ptrdiff_t m_ZipLineSlowModifier = 0x1fb8;
      constexpr std::ptrdiff_t m_cameraSequenceAwaitingTether = 0x1fc8;
      constexpr std::ptrdiff_t m_cameraSequenceLatched = 0x2050;
      constexpr std::ptrdiff_t m_cameraSequenceAttached = 0x20d8;
      constexpr std::ptrdiff_t m_cameraSequenceClear = 0x2160;
    }
    namespace CCitadel_ArmorUpgrade_AbilityLifeSteal {
    }
    namespace CCitadel_ArmorUpgrade_AblativeCoat {
      constexpr std::ptrdiff_t m_iCurrentResistValue = 0x11d8;
    }
    namespace CCitadel_ArmorUpgrade_AblativeCoatVData {
      constexpr std::ptrdiff_t m_RestoreEffectModifier = 0x18b8;
      constexpr std::ptrdiff_t m_OnTakeDamageEffectModifier = 0x18c8;
      constexpr std::ptrdiff_t m_OnBreakEffectModifier = 0x18d8;
      constexpr std::ptrdiff_t m_ResistBuffModifier = 0x18e8;
      constexpr std::ptrdiff_t m_flOnTakeDamageEffectDuration = 0x18f8;
      constexpr std::ptrdiff_t m_flOnBreakEffectDuration = 0x18fc;
      constexpr std::ptrdiff_t m_flOnRestoreEffectDuration = 0x1900;
    }
    namespace CCitadel_ArmorUpgrade_ActiveBulletShield {
    }
    namespace CCitadel_ArmorUpgrade_ActiveBulletShieldVData {
      constexpr std::ptrdiff_t m_TempShieldModifier = 0x18b8;
    }
    namespace CCitadel_ArmorUpgrade_AutoCleanse {
    }
    namespace CCitadel_ArmorUpgrade_AutoCleanseVData {
      constexpr std::ptrdiff_t m_strPurgeSound = 0x18b8;
      constexpr std::ptrdiff_t m_PurgeCastParticle = 0x18c8;
      constexpr std::ptrdiff_t m_BarrierModifier = 0x19a8;
    }
    namespace CCitadel_ArmorUpgrade_BulletArmorReductionAura {
    }
    namespace CCitadel_ArmorUpgrade_CloakingDevice {
    }
    namespace CCitadel_ArmorUpgrade_CloakingDeviceActive {
    }
    namespace CCitadel_ArmorUpgrade_CloakingDeviceActive_VData {
      constexpr std::ptrdiff_t m_AmbushModifier = 0x18b8;
      constexpr std::ptrdiff_t m_InvisModifier = 0x18c8;
    }
    namespace CCitadel_ArmorUpgrade_Colossus {
    }
    namespace CCitadel_ArmorUpgrade_Colossus_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
    }
    namespace CCitadel_ArmorUpgrade_DamageRecycler {
    }
    namespace CCitadel_ArmorUpgrade_DebuffReducer {
    }
    namespace CCitadel_ArmorUpgrade_DebuffReducerVData {
      constexpr std::ptrdiff_t m_DebuffReducedParticle = 0x18b8;
      constexpr std::ptrdiff_t m_PurgeCastParticle = 0x1998;
      constexpr std::ptrdiff_t m_MoveSpeedModifier = 0x1a78;
    }
    namespace CCitadel_ArmorUpgrade_DoubleJump {
      constexpr std::ptrdiff_t m_nTickJumped = 0x11d8;
    }
    namespace CCitadel_ArmorUpgrade_Frenzy {
    }
    namespace CCitadel_ArmorUpgrade_HealOnLevel {
    }
    namespace CCitadel_ArmorUpgrade_HealOnLevelVData {
    }
    namespace CCitadel_ArmorUpgrade_HighImpactArmor {
    }
    namespace CCitadel_ArmorUpgrade_MetalSkin {
    }
    namespace CCitadel_ArmorUpgrade_PersonalRejuvenator {
    }
    namespace CCitadel_ArmorUpgrade_PersonalRejuvenatorVData {
      constexpr std::ptrdiff_t m_DeployParticle = 0x18b8;
      constexpr std::ptrdiff_t m_RespawnParticle = 0x1998;
      constexpr std::ptrdiff_t m_sDeploySound = 0x1a78;
      constexpr std::ptrdiff_t m_sRespawnSound = 0x1a88;
    }
    namespace CCitadel_ArmorUpgrade_RegeneratingBulletShield {
    }
    namespace CCitadel_ArmorUpgrade_RegenerativeArmor {
    }
    namespace CCitadel_ArmorUpgrade_RegenerativeArmorVData {
      constexpr std::ptrdiff_t m_RegenModifier = 0x18b8;
    }
    namespace CCitadel_ArmorUpgrade_ReturnFire {
    }
    namespace CCitadel_ArmorUpgrade_ReturnFireVData {
      constexpr std::ptrdiff_t m_ReactiveArmorModifier = 0x18b8;
    }
    namespace CCitadel_ArmorUpgrade_Shrink_Ray {
    }
    namespace CCitadel_ArmorUpgrade_SlowImmunity {
    }
    namespace CCitadel_ArmorUpgrade_SlowImmunityVData {
      constexpr std::ptrdiff_t m_ImmunityModifier = 0x18b8;
    }
    namespace CCitadel_ArmorUpgrade_SpellShield {
      constexpr std::ptrdiff_t fl_mSpellShieldBreakTime = 0x11d8;
    }
    namespace CCitadel_ArmorUpgrade_SpellShieldVData {
      constexpr std::ptrdiff_t m_SpellShieldBuffModifier = 0x18b8;
    }
    namespace CCitadel_ArmorUpgrade_SpiritBubble {
    }
    namespace CCitadel_ArmorUpgrade_SpiritBubbleVData {
      constexpr std::ptrdiff_t m_BarrierModifier = 0x18b8;
    }
    namespace CCitadel_ArmorUpgrade_Stimpak {
    }
    namespace CCitadel_ArmorUpgrade_VexBarrier {
    }
    namespace CCitadel_ArmorUpgrade_VexBarrierVData {
      constexpr std::ptrdiff_t m_BarrierModifier = 0x18b8;
    }
    namespace CCitadel_ArmorUpgrade_WeaponShielding {
    }
    namespace CCitadel_ArmorUpgrade_WeaponShieldingVData {
      constexpr std::ptrdiff_t m_BarrierModifier = 0x18b8;
    }
    namespace CCitadel_Bounce_PadVData {
      constexpr std::ptrdiff_t m_sModelName = 0x28;
      constexpr std::ptrdiff_t m_IdleParticle = 0x108;
      constexpr std::ptrdiff_t m_BounceParticle = 0x1e8;
      constexpr std::ptrdiff_t m_DestroyParticle = 0x2c8;
      constexpr std::ptrdiff_t m_strCasterBounceSound = 0x3a8;
      constexpr std::ptrdiff_t m_strOtherHeroBounceSound = 0x3b8;
      constexpr std::ptrdiff_t m_strBarrelBounceSound = 0x3c8;
      constexpr std::ptrdiff_t m_strExpiredSound = 0x3d8;
    }
    namespace CCitadel_BreakablePropGoldPickupVData {
      constexpr std::ptrdiff_t m_flGoldAmount = 0x978;
      constexpr std::ptrdiff_t m_flGoldPerMinuteAmount = 0x97c;
    }
    namespace CCitadel_BreakablePropModifierPickupVData {
      constexpr std::ptrdiff_t m_sModifer = 0x978;
    }
    namespace CCitadel_BreakablePropPickupVData {
      constexpr std::ptrdiff_t m_friendlyParticle = 0x28;
      constexpr std::ptrdiff_t m_enemyParticle = 0x108;
      constexpr std::ptrdiff_t m_friendlyModelParticle = 0x1e8;
      constexpr std::ptrdiff_t m_enemyModelParticle = 0x2c8;
      constexpr std::ptrdiff_t m_friendlyInteractiveParticle = 0x3a8;
      constexpr std::ptrdiff_t m_enemyInteractiveParticle = 0x488;
      constexpr std::ptrdiff_t m_gainedParticle = 0x568;
      constexpr std::ptrdiff_t m_vacuumStartParticle = 0x648;
      constexpr std::ptrdiff_t m_Color = 0x728;
      constexpr std::ptrdiff_t m_hModel = 0x730;
      constexpr std::ptrdiff_t m_sDefaultMaterialGroupName = 0x810;
      constexpr std::ptrdiff_t m_sNameLocString = 0x818;
      constexpr std::ptrdiff_t m_nNameOffset = 0x820;
      constexpr std::ptrdiff_t m_bShowOnMinimap = 0x824;
      constexpr std::ptrdiff_t m_bIsPermanentPickup = 0x825;
      constexpr std::ptrdiff_t m_iTempParticleSheetIndex = 0x828;
      constexpr std::ptrdiff_t m_sMiniMapCssClass = 0x830;
      constexpr std::ptrdiff_t m_flParticleRadius = 0x838;
      constexpr std::ptrdiff_t m_sPickupSound = 0x840;
      constexpr std::ptrdiff_t m_sSpawnSound = 0x850;
      constexpr std::ptrdiff_t m_strVacuumStartSound = 0x860;
      constexpr std::ptrdiff_t m_sAmbientSound = 0x870;
      constexpr std::ptrdiff_t m_flPickupRadius = 0x880;
      constexpr std::ptrdiff_t m_flPickupExpirationDuration = 0x890;
      constexpr std::ptrdiff_t bPhysicallyDropToTheGroundOnSpawn = 0x8a0;
      constexpr std::ptrdiff_t m_flSolidRadius = 0x8a4;
      constexpr std::ptrdiff_t m_fInitialSpawnXYSpeed = 0x8a8;
      constexpr std::ptrdiff_t m_fInitialSpawnZSpeed = 0x8b0;
      constexpr std::ptrdiff_t m_flFallGravity = 0x8b8;
      constexpr std::ptrdiff_t m_flHoverOffset = 0x8bc;
      constexpr std::ptrdiff_t m_bPicupIsVacuum = 0x8c0;
      constexpr std::ptrdiff_t m_flInitialVacuumSideSpeed = 0x8c4;
      constexpr std::ptrdiff_t m_flInitialVacuumUpSpeed = 0x8cc;
      constexpr std::ptrdiff_t m_VacuumToPlayerSpeedCurve = 0x8d8;
      constexpr std::ptrdiff_t m_VacuumInitialVelSpeedCurve = 0x918;
      constexpr std::ptrdiff_t m_flVacuumCloseEnoughToPickup = 0x958;
      constexpr std::ptrdiff_t m_EffectDistanceToRadiusRemap = 0x95c;
      constexpr std::ptrdiff_t m_bSameTeamOnly = 0x96c;
      constexpr std::ptrdiff_t m_flOutlineRange = 0x970;
      constexpr std::ptrdiff_t m_OutlineColor = 0x974;
    }
    namespace CCitadel_BreakablePropVData {
      constexpr std::ptrdiff_t m_bBreakOnDodgeTouch = 0x28;
      constexpr std::ptrdiff_t m_bRenderAfterDeath = 0x29;
      constexpr std::ptrdiff_t m_bSolidAfterDeath = 0x2a;
      constexpr std::ptrdiff_t m_bIsPermanent = 0x2b;
      constexpr std::ptrdiff_t m_bDamagedByBullets = 0x2c;
      constexpr std::ptrdiff_t m_bDamagedByMelee = 0x2d;
      constexpr std::ptrdiff_t m_bDamagedByAbilities = 0x2e;
      constexpr std::ptrdiff_t m_hModel = 0x30;
      constexpr std::ptrdiff_t m_sAnimgraphParamDamageReceived = 0x110;
      constexpr std::ptrdiff_t m_sAnimgraphParamOnHit = 0x118;
      constexpr std::ptrdiff_t m_sAnimgraphParamOnRespawn = 0x120;
      constexpr std::ptrdiff_t m_sBreakSound = 0x128;
      constexpr std::ptrdiff_t m_sSpawnSound = 0x138;
      constexpr std::ptrdiff_t m_sDamageSound = 0x148;
      constexpr std::ptrdiff_t m_sHeavyDamageSound = 0x158;
      constexpr std::ptrdiff_t m_sHitIndicatorSound = 0x168;
      constexpr std::ptrdiff_t m_iHealth = 0x178;
      constexpr std::ptrdiff_t m_flInitialSpawnTime = 0x17c;
      constexpr std::ptrdiff_t m_flRespawnTime = 0x180;
      constexpr std::ptrdiff_t m_flInitialSpawnTimeTest = 0x184;
      constexpr std::ptrdiff_t m_flRespawnTimeTest = 0x188;
      constexpr std::ptrdiff_t m_bIsMantleable = 0x18c;
      constexpr std::ptrdiff_t m_flPrimaryDropChance = 0x190;
      constexpr std::ptrdiff_t m_eRollType = 0x194;
      constexpr std::ptrdiff_t m_vecPrimaryPickups = 0x198;
      constexpr std::ptrdiff_t m_iMatchTimeMinsForLevel2Pickups = 0x1b0;
      constexpr std::ptrdiff_t m_vecPickups_lv2 = 0x1b8;
      constexpr std::ptrdiff_t m_iMatchTimeMinsForLevel3Pickups = 0x1d0;
      constexpr std::ptrdiff_t m_vecPickups_lv3 = 0x1d8;
      constexpr std::ptrdiff_t m_iLootListDeckSize = 0x1f0;
    }
    namespace CCitadel_CapturePointVData {
      constexpr std::ptrdiff_t m_strPreEnableParticle = 0x28;
      constexpr std::ptrdiff_t m_strOnBecomeEnableParticle = 0x108;
      constexpr std::ptrdiff_t m_strEnabledParticle = 0x1e8;
      constexpr std::ptrdiff_t m_strOnFullyCapturedParticle = 0x2c8;
      constexpr std::ptrdiff_t m_EnabledLoopSounds = 0x3a8;
      constexpr std::ptrdiff_t m_EnemyCapturingLoopSounds = 0x3d0;
      constexpr std::ptrdiff_t m_FriendlyCapturingLoopSounds = 0x3f8;
      constexpr std::ptrdiff_t m_strPreEnableStartSound = 0x420;
      constexpr std::ptrdiff_t m_strEnableStartSound = 0x430;
      constexpr std::ptrdiff_t m_strFullyCapturedSound = 0x440;
      constexpr std::ptrdiff_t m_modifierCapturer = 0x450;
      constexpr std::ptrdiff_t m_flDecaySpeed = 0x460;
      constexpr std::ptrdiff_t m_remapCapturersToCaptureTime = 0x464;
      constexpr std::ptrdiff_t m_flEnemyProgressRemoveScale = 0x474;
      constexpr std::ptrdiff_t m_flTotalHealthToCapture = 0x478;
      constexpr std::ptrdiff_t m_flInitialEnableTimeInSeconds = 0x47c;
      constexpr std::ptrdiff_t m_flPreEnableWindowInSeconds = 0x484;
      constexpr std::ptrdiff_t m_flRespawnRangeInSeconds = 0x488;
    }
    namespace CCitadel_CatAnimatingVData {
      constexpr std::ptrdiff_t m_sModelName = 0x28;
      constexpr std::ptrdiff_t m_cGlowColor = 0x108;
    }
    namespace CCitadel_CosmeticItem_Snowball {
      constexpr std::ptrdiff_t m_nSeasonal2025Level = 0x1458;
      constexpr std::ptrdiff_t m_flSeasonal2025LevelFrac = 0x145c;
      constexpr std::ptrdiff_t m_flNextShotTime = 0x1460;
      constexpr std::ptrdiff_t m_nShotsRemaining = 0x1464;
    }
    namespace CCitadel_CosmeticItem_Snowball_VData {
      constexpr std::ptrdiff_t m_flMaxLevelDebuffDuration = 0x18b8;
      constexpr std::ptrdiff_t m_progressionDamage = 0x18c0;
      constexpr std::ptrdiff_t m_progressionCooldown = 0x18f0;
      constexpr std::ptrdiff_t m_progressionSpeed = 0x1920;
      constexpr std::ptrdiff_t m_progressionCharges = 0x1950;
      constexpr std::ptrdiff_t m_progressionSnowballCount = 0x1980;
      constexpr std::ptrdiff_t m_progressionRadius = 0x19b0;
      constexpr std::ptrdiff_t m_SnowballModifier = 0x19e0;
    }
    namespace CCitadel_CosmeticItem_VotingPoster {
      constexpr std::ptrdiff_t m_bPreview = 0x1458;
      constexpr std::ptrdiff_t m_nActiveHero = 0x145c;
    }
    namespace CCitadel_CosmeticItem_VotingPoster_VData {
      constexpr std::ptrdiff_t m_vecVotingPosters = 0x18b8;
      constexpr std::ptrdiff_t m_nDecalLimit = 0x18d0;
    }
    namespace CCitadel_Doorman_Bomb_Debuff {
    }
    namespace CCitadel_Doorman_Bomb_DebuffVData {
      constexpr std::ptrdiff_t m_InaccuracyCurveScale = 0x750;
    }
    namespace CCitadel_DoorwayPortal {
      constexpr std::ptrdiff_t m_hLinkedDoorway = 0xd98;
    }
    namespace CCitadel_DoorwayPortalBacksideBlocker {
    }
    namespace CCitadel_FissureWallVData {
      constexpr std::ptrdiff_t m_nMeleeHits = 0x28;
      constexpr std::ptrdiff_t m_HitSound = 0x30;
      constexpr std::ptrdiff_t m_DestroySound = 0x40;
      constexpr std::ptrdiff_t m_DestroyParticle = 0x50;
    }
    namespace CCitadel_GrandFinaleStage {
      constexpr std::ptrdiff_t m_vStartPos = 0xca0;
      constexpr std::ptrdiff_t m_vEndPos = 0xcac;
      constexpr std::ptrdiff_t m_flStartEmitTime = 0xcb8;
      constexpr std::ptrdiff_t m_flEndEmitTime = 0xcbc;
      constexpr std::ptrdiff_t m_nTouchCount = 0xcc0;
    }
    namespace CCitadel_GuidedArrow_OwlModel {
    }
    namespace CCitadel_Gunslinger_DemonMark {
      constexpr std::ptrdiff_t m_flNextSearchTime = 0x11d8;
    }
    namespace CCitadel_Gunslinger_DemonMarkVData {
      constexpr std::ptrdiff_t m_MarkModifier = 0x1818;
    }
    namespace CCitadel_HeroTestOrbSpawner {
    }
    namespace CCitadel_HeroTestOrbSpawnerVData {
      constexpr std::ptrdiff_t m_iGoldValue = 0x28;
      constexpr std::ptrdiff_t m_flSpawnRate = 0x2c;
      constexpr std::ptrdiff_t m_flFirstSpawnTime = 0x30;
      constexpr std::ptrdiff_t m_hModel = 0x38;
      constexpr std::ptrdiff_t m_flModelScale = 0x118;
      constexpr std::ptrdiff_t m_flSpawnOffset = 0x11c;
      constexpr std::ptrdiff_t m_AmbientParticle = 0x120;
      constexpr std::ptrdiff_t m_SpawnParticle = 0x200;
    }
    namespace CCitadel_Item {
    }
    namespace CCitadel_Item_AOERoot {
    }
    namespace CCitadel_Item_AOE_Tech_Shield {
    }
    namespace CCitadel_Item_AOE_Tech_ShieldVData {
      constexpr std::ptrdiff_t m_DurationModifier = 0x18b8;
    }
    namespace CCitadel_Item_ActiveReload {
      constexpr std::ptrdiff_t m_bPlayedStartSound = 0x11d8;
      constexpr std::ptrdiff_t m_bActiveReloadFailed = 0x11d9;
    }
    namespace CCitadel_Item_ArcticBlast {
    }
    namespace CCitadel_Item_ArcticBlast_VData {
      constexpr std::ptrdiff_t m_AOEModifier = 0x18b8;
    }
    namespace CCitadel_Item_Aura_Base {
    }
    namespace CCitadel_Item_BaseProjectileAOEModifier {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Item_BaseProjectileAOEModifierVData {
      constexpr std::ptrdiff_t m_AOEModifier = 0x18b8;
    }
    namespace CCitadel_Item_Bubble {
      constexpr std::ptrdiff_t m_flEndTime = 0x11d8;
    }
    namespace CCitadel_Item_BubbleVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x18b8;
      constexpr std::ptrdiff_t m_CastTargetSound = 0x1998;
      constexpr std::ptrdiff_t m_BubbleModifier = 0x19a8;
    }
    namespace CCitadel_Item_Camouflage {
    }
    namespace CCitadel_Item_CelestialGuidance {
    }
    namespace CCitadel_Item_CelestialGuidanceVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_PurgeCastParticle = 0x18c8;
      constexpr std::ptrdiff_t m_strPurgeSound = 0x19a8;
    }
    namespace CCitadel_Item_Charge_Mastery {
    }
    namespace CCitadel_Item_CheatDeath {
    }
    namespace CCitadel_Item_CheatDeathVData {
      constexpr std::ptrdiff_t m_DamagePulseParticle = 0x18b8;
      constexpr std::ptrdiff_t m_DamageTargetParticle = 0x1998;
      constexpr std::ptrdiff_t m_sHealPulseSound = 0x1a78;
      constexpr std::ptrdiff_t m_sHealAndDamagePulseSound = 0x1a88;
      constexpr std::ptrdiff_t m_DeathImmuneModifier = 0x1a98;
    }
    namespace CCitadel_Item_ColdFront {
    }
    namespace CCitadel_Item_ColdFrontVData {
      constexpr std::ptrdiff_t m_AOEModifier = 0x18b8;
    }
    namespace CCitadel_Item_ComboBreaker {
    }
    namespace CCitadel_Item_ComboBreakerVData {
      constexpr std::ptrdiff_t m_ComboBreakerModifier = 0x18b8;
      constexpr std::ptrdiff_t m_HealModifier = 0x18c8;
    }
    namespace CCitadel_Item_Containment {
    }
    namespace CCitadel_Item_ContainmentVData {
    }
    namespace CCitadel_Item_DPS_Aura {
    }
    namespace CCitadel_Item_DPS_Aura_VData {
      constexpr std::ptrdiff_t m_AOECastParticle = 0x18b8;
      constexpr std::ptrdiff_t m_ActiveModifier = 0x1998;
    }
    namespace CCitadel_Item_Disarm {
    }
    namespace CCitadel_Item_Disarm_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x19b8;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x19c8;
    }
    namespace CCitadel_Item_Discord_Aura {
    }
    namespace CCitadel_Item_Discord_AuraVData {
      constexpr std::ptrdiff_t m_strAreaEffectEnemy = 0x7a8;
      constexpr std::ptrdiff_t m_strAreaEffectFriendly = 0x888;
      constexpr std::ptrdiff_t m_strAreaEffectSelf = 0x968;
      constexpr std::ptrdiff_t m_DrainParticle = 0xa48;
    }
    namespace CCitadel_Item_DivineBarrier {
    }
    namespace CCitadel_Item_DivineBarrier_VData {
      constexpr std::ptrdiff_t m_DivineBarrierModifier = 0x18b8;
      constexpr std::ptrdiff_t m_CastParticle = 0x18c8;
      constexpr std::ptrdiff_t m_strPurgeSound = 0x19a8;
    }
    namespace CCitadel_Item_DivinersKevlar {
      constexpr std::ptrdiff_t m_bExecuted = 0x11d8;
    }
    namespace CCitadel_Item_DivinersKevlar_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_PrecastSpiritBuffModifier = 0x18c8;
    }
    namespace CCitadel_Item_Electric_Slippers {
    }
    namespace CCitadel_Item_Electric_SlippersVData {
      constexpr std::ptrdiff_t m_ElectricParticle = 0x18b8;
      constexpr std::ptrdiff_t m_strProcSound = 0x1998;
    }
    namespace CCitadel_Item_Empty {
    }
    namespace CCitadel_Item_FocusLens {
    }
    namespace CCitadel_Item_FocusLens_VData {
      constexpr std::ptrdiff_t m_SilenceModifier = 0x19b8;
      constexpr std::ptrdiff_t m_DamageModifier = 0x19c8;
      constexpr std::ptrdiff_t m_ResistReductionModifier = 0x19d8;
    }
    namespace CCitadel_Item_GooseEgg {
      constexpr std::ptrdiff_t m_iAccruedGold = 0x11e0;
    }
    namespace CCitadel_Item_GuardianWard {
    }
    namespace CCitadel_Item_GuardianWard_VData {
      constexpr std::ptrdiff_t m_GuardianWardModifier = 0x18b8;
      constexpr std::ptrdiff_t m_CastParticle = 0x18c8;
    }
    namespace CCitadel_Item_HealthRegenAura {
    }
    namespace CCitadel_Item_HealthRegenAuraVData {
      constexpr std::ptrdiff_t m_HealParticle = 0x18b8;
      constexpr std::ptrdiff_t m_CastHealParticle = 0x1998;
      constexpr std::ptrdiff_t m_HealingPulseTrackerModifier = 0x1a78;
    }
    namespace CCitadel_Item_Intensifying_Clip {
      constexpr std::ptrdiff_t m_flSpinUpTime = 0x1258;
    }
    namespace CCitadel_Item_ModDisruptor {
    }
    namespace CCitadel_Item_ModDisruptorVData {
      constexpr std::ptrdiff_t m_DetonateParticle = 0x18b8;
      constexpr std::ptrdiff_t m_DisruptModifier = 0x1998;
      constexpr std::ptrdiff_t m_flWaveSpeed = 0x19a8;
    }
    namespace CCitadel_Item_Mystic_Regeneration {
      constexpr std::ptrdiff_t m_iRegenStacks = 0x11d8;
    }
    namespace CCitadel_Item_Mystic_RegenerationVData {
      constexpr std::ptrdiff_t m_RegenParticle = 0x18b8;
      constexpr std::ptrdiff_t m_StackNotificationModifier = 0x1998;
      constexpr std::ptrdiff_t m_HealingLoopSoundOverride = 0x19a8;
    }
    namespace CCitadel_Item_NullificationAura {
    }
    namespace CCitadel_Item_NullificationAuraVData {
      constexpr std::ptrdiff_t m_AOEModifier = 0x18b8;
    }
    namespace CCitadel_Item_PhantomStrike {
    }
    namespace CCitadel_Item_PowerShard {
    }
    namespace CCitadel_Item_PrismBlast {
      constexpr std::ptrdiff_t m_beam00 = 0x1500;
      constexpr std::ptrdiff_t m_beam01 = 0x25d0;
      constexpr std::ptrdiff_t m_beam02 = 0x36a0;
      constexpr std::ptrdiff_t m_beam03 = 0x4770;
      constexpr std::ptrdiff_t m_beam04 = 0x5840;
    }
    namespace CCitadel_Item_PrismBlastVData {
      constexpr std::ptrdiff_t m_flBeamRotateSpeed = 0x19b8;
      constexpr std::ptrdiff_t m_flTickRate = 0x19bc;
      constexpr std::ptrdiff_t m_flOscilateRate = 0x19c0;
      constexpr std::ptrdiff_t m_flOscilateMaxPitch = 0x19c4;
      constexpr std::ptrdiff_t m_BeamParticle = 0x19c8;
      constexpr std::ptrdiff_t m_BeamParticleLocal = 0x1aa8;
      constexpr std::ptrdiff_t m_BeamHitParticle = 0x1b88;
      constexpr std::ptrdiff_t m_strLaserLoopSound = 0x1c68;
    }
    namespace CCitadel_Item_ProjectileTest {
      constexpr std::ptrdiff_t m_vLaunchPosition = 0x11d8;
      constexpr std::ptrdiff_t m_qLaunchAngle = 0x11e4;
    }
    namespace CCitadel_Item_ProjectileTest02 {
    }
    namespace CCitadel_Item_ProjectileTest02VData {
      constexpr std::ptrdiff_t m_flDrag = 0x18c8;
    }
    namespace CCitadel_Item_ProjectileTest04 {
    }
    namespace CCitadel_Item_ProjectileTest04VData {
      constexpr std::ptrdiff_t m_flDrag = 0x18c8;
      constexpr std::ptrdiff_t m_flMaxDrag = 0x18cc;
      constexpr std::ptrdiff_t m_flMinDrag = 0x18d0;
      constexpr std::ptrdiff_t m_flMinGravity = 0x18d4;
      constexpr std::ptrdiff_t m_flMaxGravity = 0x18d8;
      constexpr std::ptrdiff_t m_flLerpBeginDistanceToTarget = 0x18dc;
    }
    namespace CCitadel_Item_ProjectileTest05 {
    }
    namespace CCitadel_Item_ProjectileTest05VData {
      constexpr std::ptrdiff_t m_flMaxDrag = 0x18c8;
      constexpr std::ptrdiff_t m_flMinDrag = 0x18cc;
      constexpr std::ptrdiff_t m_flMinGravity = 0x18d0;
      constexpr std::ptrdiff_t m_flMaxGravity = 0x18d4;
    }
    namespace CCitadel_Item_ProjectileTest06 {
    }
    namespace CCitadel_Item_ProjectileTest06VData {
      constexpr std::ptrdiff_t m_flMaxDrag = 0x18c8;
      constexpr std::ptrdiff_t m_flMinDrag = 0x18cc;
      constexpr std::ptrdiff_t m_flMinGravity = 0x18d0;
      constexpr std::ptrdiff_t m_flMaxGravity = 0x18d4;
    }
    namespace CCitadel_Item_ProjectileTestVData {
      constexpr std::ptrdiff_t m_AOEModifier = 0x18b8;
    }
    namespace CCitadel_Item_Refresher {
    }
    namespace CCitadel_Item_RejuvTrackingProjectile {
    }
    namespace CCitadel_Item_RescueBeam {
      constexpr std::ptrdiff_t m_bCanPull = 0x11d8;
    }
    namespace CCitadel_Item_RescueBeamVData {
      constexpr std::ptrdiff_t m_DispelAndHealModifier = 0x18b8;
      constexpr std::ptrdiff_t m_PullModifier = 0x18c8;
    }
    namespace CCitadel_Item_SelfBuffModifier {
    }
    namespace CCitadel_Item_SelfBuffModifierVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
    }
    namespace CCitadel_Item_ShadowStep {
      constexpr std::ptrdiff_t m_nCastDelayParticleIndex = 0x1358;
      constexpr std::ptrdiff_t m_flLastTickTime = 0x135c;
    }
    namespace CCitadel_Item_ShadowStepVData {
      constexpr std::ptrdiff_t m_PulseParticle = 0x18b8;
      constexpr std::ptrdiff_t m_TargetParticle = 0x1998;
      constexpr std::ptrdiff_t m_strPulseTickSound = 0x1a78;
      constexpr std::ptrdiff_t m_iMaxTargets = 0x1a88;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x1a90;
      constexpr std::ptrdiff_t m_CastDelayParticle = 0x1aa0;
      constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x1b80;
      constexpr std::ptrdiff_t m_flGroundProbeSpeed = 0x1c60;
      constexpr std::ptrdiff_t m_flGroundStepDown = 0x1c64;
      constexpr std::ptrdiff_t m_flGroundStepUp = 0x1c68;
      constexpr std::ptrdiff_t m_iMaxGroundIterations = 0x1c6c;
      constexpr std::ptrdiff_t m_flVelocityScale = 0x1c70;
    }
    namespace CCitadel_Item_ShadowStrike {
    }
    namespace CCitadel_Item_ShadowStrikeVData {
      constexpr std::ptrdiff_t m_ShadowStrikeInvisModifier = 0x18b8;
      constexpr std::ptrdiff_t m_StealWatcherModifier = 0x18c8;
    }
    namespace CCitadel_Item_SingleTargetStun {
    }
    namespace CCitadel_Item_SpiritSap {
    }
    namespace CCitadel_Item_SpiritSap_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x19b8;
    }
    namespace CCitadel_Item_StasisBomb_Aura {
      constexpr std::ptrdiff_t m_AuraRadius = 0x110;
    }
    namespace CCitadel_Item_Stasis_Bomb {
    }
    namespace CCitadel_Item_Stasis_BombVData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x19b8;
    }
    namespace CCitadel_Item_TechCleave {
    }
    namespace CCitadel_Item_TechCleaveVData {
      constexpr std::ptrdiff_t m_TechCleaveModifier = 0x18b8;
      constexpr std::ptrdiff_t m_sCleaveProcSound = 0x18c8;
    }
    namespace CCitadel_Item_TechDamagePulse {
    }
    namespace CCitadel_Item_TechDamagePulseVData {
      constexpr std::ptrdiff_t m_PulseParticle = 0x18b8;
      constexpr std::ptrdiff_t m_TargetParticle = 0x1998;
      constexpr std::ptrdiff_t m_strPulseTickSound = 0x1a78;
      constexpr std::ptrdiff_t m_iMaxTargets = 0x1a88;
    }
    namespace CCitadel_Item_TrackingProjectileApplyModifier {
    }
    namespace CCitadel_Item_TrackingProjectileApplyModifierVData {
      constexpr std::ptrdiff_t m_ProjectileImpactParticle = 0x18b8;
      constexpr std::ptrdiff_t m_TargetModifier = 0x1998;
      constexpr std::ptrdiff_t m_FriendlyOnlyModifier = 0x19a8;
    }
    namespace CCitadel_Item_TrophyCollector {
      constexpr std::ptrdiff_t m_iTrophyCount = 0x14d8;
      constexpr std::ptrdiff_t m_iInitialKills = 0x14dc;
      constexpr std::ptrdiff_t m_iInitialAssists = 0x14e0;
      constexpr std::ptrdiff_t m_iPrevCount = 0x14e4;
      constexpr std::ptrdiff_t m_bMaxStacksReached = 0x14e8;
    }
    namespace CCitadel_Item_TrophyCollectorVData {
      constexpr std::ptrdiff_t m_EarnedParticle = 0x18b8;
      constexpr std::ptrdiff_t m_GoldModifier = 0x1998;
      constexpr std::ptrdiff_t m_strEarnedSound = 0x19a8;
    }
    namespace CCitadel_Item_WarpStone {
      constexpr std::ptrdiff_t m_nCastDelayParticleIndex = 0x11d8;
    }
    namespace CCitadel_MagicianTurret {
      constexpr std::ptrdiff_t m_hAbility = 0xca8;
    }
    namespace CCitadel_Minimap_EffectsEntity {
    }
    namespace CCitadel_MobileResupply {
      constexpr std::ptrdiff_t m_hAbility = 0xca8;
      constexpr std::ptrdiff_t m_bFloating = 0xcac;
    }
    namespace CCitadel_Modifier_AIPhysics {
    }
    namespace CCitadel_Modifier_APRounds {
      constexpr std::ptrdiff_t m_nLastProcShotID = 0x218;
    }
    namespace CCitadel_Modifier_APRoundsVData {
    }
    namespace CCitadel_Modifier_AblativeCoatResistBuff {
    }
    namespace CCitadel_Modifier_AblativeCoatResistBuffVData {
      constexpr std::ptrdiff_t m_ResistBuffParticle = 0x750;
    }
    namespace CCitadel_Modifier_AbsorbingArmor {
    }
    namespace CCitadel_Modifier_AbsorbingArmorVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x750;
      constexpr std::ptrdiff_t m_strImpactSound = 0x830;
    }
    namespace CCitadel_Modifier_AccuracyTracker {
      constexpr std::ptrdiff_t m_flProgress = 0xc0;
    }
    namespace CCitadel_Modifier_AcolytesGlove {
    }
    namespace CCitadel_Modifier_AcolytesGlove_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
      constexpr std::ptrdiff_t m_SwingParticle = 0x790;
      constexpr std::ptrdiff_t m_HitParticle = 0x870;
    }
    namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal {
    }
    namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal_VData {
      constexpr std::ptrdiff_t m_SpiritStealParticle = 0x750;
    }
    namespace CCitadel_Modifier_Aerial_Assault {
    }
    namespace CCitadel_Modifier_Aerial_Assault_Watcher {
    }
    namespace CCitadel_Modifier_AfterburnWatcher {
    }
    namespace CCitadel_Modifier_AfterburnWatcherVData {
      constexpr std::ptrdiff_t m_AfterburnDotModifier = 0x780;
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x790;
      constexpr std::ptrdiff_t m_strAfterburnHitSound = 0x7a0;
      constexpr std::ptrdiff_t m_flLightMeleeBuildUp = 0x7b0;
      constexpr std::ptrdiff_t m_flHeavyMeleeBuildUp = 0x7b4;
      constexpr std::ptrdiff_t m_flLightMeleeRefresh = 0x7b8;
      constexpr std::ptrdiff_t m_flHeavyMeleeRefresh = 0x7bc;
    }
    namespace CCitadel_Modifier_Afterburn_DOT {
    }
    namespace CCitadel_Modifier_Afterburn_DOT_VData {
      constexpr std::ptrdiff_t m_sAfterburnParticle = 0x750;
    }
    namespace CCitadel_Modifier_AirDamping {
    }
    namespace CCitadel_Modifier_AirLiftExplodingAlly {
    }
    namespace CCitadel_Modifier_AirLiftExplodingAllyVData {
      constexpr std::ptrdiff_t m_strExplodeEffect = 0x750;
    }
    namespace CCitadel_Modifier_AirLift_Grab {
    }
    namespace CCitadel_Modifier_AirRaid {
    }
    namespace CCitadel_Modifier_AirheartStuckBomb {
    }
    namespace CCitadel_Modifier_Airheart_Mark {
    }
    namespace CCitadel_Modifier_Airheart_MarkVData {
      constexpr std::ptrdiff_t m_IndicatorFX = 0x7a8;
      constexpr std::ptrdiff_t m_ExplosionFX = 0x888;
    }
    namespace CCitadel_Modifier_AmmoScavenger {
    }
    namespace CCitadel_Modifier_AnimalCurse {
    }
    namespace CCitadel_Modifier_AnimalCurseVData {
      constexpr std::ptrdiff_t m_CursedModel = 0x750;
      constexpr std::ptrdiff_t m_TargetParticle = 0x838;
      constexpr std::ptrdiff_t m_flModelScale = 0x918;
    }
    namespace CCitadel_Modifier_ApexCombat_Proc {
    }
    namespace CCitadel_Modifier_ApexCombat_ProcVData {
      constexpr std::ptrdiff_t m_RicochetTracerParticle = 0x780;
    }
    namespace CCitadel_Modifier_Apex_Watcher {
      constexpr std::ptrdiff_t m_bShouldEnableBuff = 0x1c8;
    }
    namespace CCitadel_Modifier_ApplyDebuff_Proc {
    }
    namespace CCitadel_Modifier_ApplyDebuff_ProcVData {
      constexpr std::ptrdiff_t m_bUseNonEmbedded = 0x780;
      constexpr std::ptrdiff_t m_DurationAbilityPropOverride = 0x788;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x790;
      constexpr std::ptrdiff_t m_NonEmbeddedModifier = 0x7a0;
    }
    namespace CCitadel_Modifier_ApplyModifierOnDamageTaken {
    }
    namespace CCitadel_Modifier_ArcaneEaterDebuffVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
    }
    namespace CCitadel_Modifier_ArcaneEaterProcVData {
      constexpr std::ptrdiff_t m_StealWatcherModifier = 0x780;
    }
    namespace CCitadel_Modifier_Arcane_Eater_Debuff {
    }
    namespace CCitadel_Modifier_Arcane_Eater_Proc {
    }
    namespace CCitadel_Modifier_Arcane_Eater_Watcher {
    }
    namespace CCitadel_Modifier_ArcticBlastAOE {
      constexpr std::ptrdiff_t m_hAOEEffect = 0x4c0;
    }
    namespace CCitadel_Modifier_ArcticBlastAOE_VData {
      constexpr std::ptrdiff_t m_FreezeModifier = 0x750;
      constexpr std::ptrdiff_t m_SlowModifier = 0x760;
    }
    namespace CCitadel_Modifier_ArcticBlast_Freeze {
    }
    namespace CCitadel_Modifier_ArcticBlast_Freeze_VData {
    }
    namespace CCitadel_Modifier_Astro_Rifle_Debuff {
    }
    namespace CCitadel_Modifier_Astro_Rifle_DebuffVData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x750;
      constexpr std::ptrdiff_t m_strTargetHitSound = 0x760;
    }
    namespace CCitadel_Modifier_Astro_Rifle_Self {
    }
    namespace CCitadel_Modifier_Astro_Rifle_SelfVData {
      constexpr std::ptrdiff_t m_WeaponFxParticle = 0x750;
    }
    namespace CCitadel_Modifier_Astro_ShotgunBuff {
    }
    namespace CCitadel_Modifier_Astro_ShotgunBuffVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
    }
    namespace CCitadel_Modifier_AttachTarget {
      constexpr std::ptrdiff_t m_hTarget = 0xc0;
      constexpr std::ptrdiff_t m_vecOffset = 0xc4;
    }
    namespace CCitadel_Modifier_Backdoor_Protection {
    }
    namespace CCitadel_Modifier_Backdoor_ProtectionVData {
      constexpr std::ptrdiff_t m_flActivationTime = 0x750;
      constexpr std::ptrdiff_t m_flBackdoorProtectionDamageMitigationFromPlayers = 0x754;
      constexpr std::ptrdiff_t m_flBackdoorProtectionDamageMitigationFromPlayers_Streetbrawl = 0x758;
      constexpr std::ptrdiff_t m_flHealthPerSecondRegen = 0x75c;
      constexpr std::ptrdiff_t m_flOutOfCombatHealthRegen = 0x760;
      constexpr std::ptrdiff_t m_flOutOfCombatRegenDelay = 0x764;
      constexpr std::ptrdiff_t m_flEffectsLingerTime = 0x768;
      constexpr std::ptrdiff_t m_ShieldImpactParticle = 0x770;
      constexpr std::ptrdiff_t m_ShieldActiveParticle = 0x850;
      constexpr std::ptrdiff_t m_strActiveEffectConfigName = 0x930;
      constexpr std::ptrdiff_t flShieldImpactDirectionOffset = 0x938;
    }
    namespace CCitadel_Modifier_Backstabber_Debuff {
    }
    namespace CCitadel_Modifier_Backstabber_VData {
      constexpr std::ptrdiff_t m_GlowModifier = 0x750;
      constexpr std::ptrdiff_t m_BuffModifier = 0x760;
      constexpr std::ptrdiff_t m_strDamageTickSound = 0x770;
    }
    namespace CCitadel_Modifier_Backstabber_Watcher {
    }
    namespace CCitadel_Modifier_Backstabber_Watcher_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
      constexpr std::ptrdiff_t flDotResultMin = 0x760;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x768;
    }
    namespace CCitadel_Modifier_BarrierTracker {
      constexpr std::ptrdiff_t m_flMaxHealth = 0xc0;
      constexpr std::ptrdiff_t m_flCurrentHealth = 0xc4;
    }
    namespace CCitadel_Modifier_BarrierTrackerVData {
      constexpr std::ptrdiff_t m_WeaponImpactParticle = 0x750;
      constexpr std::ptrdiff_t m_TechImpactParticle = 0x830;
      constexpr std::ptrdiff_t m_ShieldBreakParticle = 0x910;
      constexpr std::ptrdiff_t m_ShieldBreakSound = 0x9f0;
      constexpr std::ptrdiff_t m_strShieldRefreshSound = 0xa00;
      constexpr std::ptrdiff_t m_flShieldImpactEffectDuration = 0xa10;
    }
    namespace CCitadel_Modifier_Base {
    }
    namespace CCitadel_Modifier_BaseBulletPreRollProc {
      constexpr std::ptrdiff_t m_nSuppressProcShotID = 0x1f8;
      constexpr std::ptrdiff_t m_vecProcdBulletIDs = 0x200;
    }
    namespace CCitadel_Modifier_BaseBulletPreRollProcVData {
      constexpr std::ptrdiff_t m_bRollOnceForAllBulletsInAShot = 0x780;
      constexpr std::ptrdiff_t m_flMaxBulletsToProcInShot = 0x784;
      constexpr std::ptrdiff_t m_bCanProcMultipleTimesFromSameShot = 0x788;
      constexpr std::ptrdiff_t m_bRequiresTargetFilter = 0x789;
      constexpr std::ptrdiff_t m_bCanBeEvaded = 0x78a;
      constexpr std::ptrdiff_t m_TracerAdditionParticle = 0x790;
      constexpr std::ptrdiff_t m_OnBulletRolledProcSound = 0x870;
    }
    namespace CCitadel_Modifier_BaseEventProc {
      constexpr std::ptrdiff_t m_vecProcdUnitsThisShot = 0xc0;
      constexpr std::ptrdiff_t m_vecTrackedUnitsThisFrame = 0xd8;
      constexpr std::ptrdiff_t m_nLastShotId = 0xf0;
    }
    namespace CCitadel_Modifier_BaseEventProcVData {
      constexpr std::ptrdiff_t m_bProcChanceAffectedByEffectiveness = 0x750;
      constexpr std::ptrdiff_t m_bShouldApplyAbilityCooldown = 0x751;
      constexpr std::ptrdiff_t m_bCanProcMultipleTimesOnOneTarget = 0x752;
      constexpr std::ptrdiff_t m_bCanProcByOtherObjects = 0x753;
      constexpr std::ptrdiff_t m_nAbilityTargetTypes = 0x754;
      constexpr std::ptrdiff_t m_nAbilityTargetFlags = 0x758;
      constexpr std::ptrdiff_t m_vecProcDamageTypes = 0x760;
      constexpr std::ptrdiff_t m_nRequiredDamageFlags = 0x778;
    }
    namespace CCitadel_Modifier_Base_Buildup {
      constexpr std::ptrdiff_t m_flLastBuildupAppliedTime = 0xc0;
      constexpr std::ptrdiff_t m_flDelayedDieTimeRemaining = 0xc4;
      constexpr std::ptrdiff_t m_bInDelayTime = 0xc8;
      constexpr std::ptrdiff_t m_flBuildUpDecayDelayFromWeaponCycleTime = 0xcc;
    }
    namespace CCitadel_Modifier_Base_BuildupVData {
      constexpr std::ptrdiff_t m_bUseBaseWeaponCycleTimeForDelay = 0x750;
      constexpr std::ptrdiff_t m_flCycleTimeDelayAdd = 0x754;
      constexpr std::ptrdiff_t m_flBuildUpDecayDelay = 0x758;
      constexpr std::ptrdiff_t m_eBuildupMode = 0x75c;
      constexpr std::ptrdiff_t m_bBuildupAffectedByEffectiveness = 0x760;
      constexpr std::ptrdiff_t m_bPassBuildupEffectivenessToFillModifier = 0x761;
    }
    namespace CCitadel_Modifier_Base_DOT {
    }
    namespace CCitadel_Modifier_Base_DOT_VData {
      constexpr std::ptrdiff_t m_sDOTParticle = 0x750;
    }
    namespace CCitadel_Modifier_Basic_HealthRegen {
      constexpr std::ptrdiff_t m_flHealthRegen = 0xc0;
      constexpr std::ptrdiff_t m_flExternalHealthRegen = 0xc4;
    }
    namespace CCitadel_Modifier_Basic_HealthRegenVData {
      constexpr std::ptrdiff_t m_HealingLoopSoundOverride = 0x750;
    }
    namespace CCitadel_Modifier_Basic_RangedArmorBonus {
    }
    namespace CCitadel_Modifier_Basic_RangedArmorBonusVData {
      constexpr std::ptrdiff_t m_flBulletResistancePctMin = 0x750;
      constexpr std::ptrdiff_t m_flBulletResistancePctMax = 0x754;
      constexpr std::ptrdiff_t m_flTechResistancePctMin = 0x758;
      constexpr std::ptrdiff_t m_flTechResistancePctMax = 0x75c;
      constexpr std::ptrdiff_t m_flRangeMin = 0x760;
      constexpr std::ptrdiff_t m_flRangeMax = 0x764;
      constexpr std::ptrdiff_t m_flInvulnRange = 0x768;
      constexpr std::ptrdiff_t m_bPlayersOnly = 0x76c;
    }
    namespace CCitadel_Modifier_Bebop_Hook_BulletAmp {
    }
    namespace CCitadel_Modifier_BeltFed_Magazine {
      constexpr std::ptrdiff_t m_bInitialized = 0xc0;
      constexpr std::ptrdiff_t m_flSpinUpRateOverride = 0xc4;
      constexpr std::ptrdiff_t m_flSpinUpDecayOverride = 0xc8;
      constexpr std::ptrdiff_t m_flMaxCycleTimeOverride = 0xcc;
      constexpr std::ptrdiff_t m_flMaxBurstFireCooldownOverride = 0xd0;
    }
    namespace CCitadel_Modifier_BeltFed_MagazineVData {
      constexpr std::ptrdiff_t m_SpinUpSound = 0x750;
      constexpr std::ptrdiff_t m_SpinDownSound = 0x760;
      constexpr std::ptrdiff_t m_SpinLoopSound = 0x770;
    }
    namespace CCitadel_Modifier_Berserker {
    }
    namespace CCitadel_Modifier_BerserkerDamageStack {
    }
    namespace CCitadel_Modifier_BerserkerDamageStackVData {
      constexpr std::ptrdiff_t m_BuffStatusParticle = 0x750;
      constexpr std::ptrdiff_t m_BuffStatusParticleEnemy = 0x830;
      constexpr std::ptrdiff_t m_strBerserkerStackSound = 0x910;
      constexpr std::ptrdiff_t m_strMaxStackLayer = 0x920;
    }
    namespace CCitadel_Modifier_BerserkerVData {
      constexpr std::ptrdiff_t m_StackModifier = 0x750;
    }
    namespace CCitadel_Modifier_BigBoltVData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x750;
      constexpr std::ptrdiff_t m_ShieldParticle = 0x760;
      constexpr std::ptrdiff_t m_flModelScale = 0x840;
    }
    namespace CCitadel_Modifier_BlastPush {
      constexpr std::ptrdiff_t m_vPush = 0xc0;
      constexpr std::ptrdiff_t m_flPushVelocity = 0xcc;
      constexpr std::ptrdiff_t m_flMaxPushVelocity = 0xd0;
      constexpr std::ptrdiff_t m_flMaxPushVelocitySqr = 0xd4;
    }
    namespace CCitadel_Modifier_BloodTribute {
    }
    namespace CCitadel_Modifier_Boho_ChannelTether_Tether {
    }
    namespace CCitadel_Modifier_Boho_ChannelTether_TetherVData {
      constexpr std::ptrdiff_t m_TetherParticle = 0x750;
    }
    namespace CCitadel_Modifier_Boho_DamageShare {
    }
    namespace CCitadel_Modifier_Boho_DamageShare_VData {
      constexpr std::ptrdiff_t m_TetherParticle = 0x750;
    }
    namespace CCitadel_Modifier_Boho_DoubleHitBuff {
    }
    namespace CCitadel_Modifier_Bolo {
      constexpr std::ptrdiff_t m_hRingEffect = 0xc0;
    }
    namespace CCitadel_Modifier_BoloVData {
      constexpr std::ptrdiff_t m_TrapModifier = 0x750;
      constexpr std::ptrdiff_t m_ReverseLeechModifier = 0x760;
    }
    namespace CCitadel_Modifier_Bolo_Leech {
    }
    namespace CCitadel_Modifier_BonusDamagePercent {
    }
    namespace CCitadel_Modifier_BonusDamagePercentVData {
      constexpr std::ptrdiff_t m_bSelfish = 0x750;
    }
    namespace CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier {
      constexpr std::ptrdiff_t m_nCastParticleIndex = 0x440;
    }
    namespace CCitadel_Modifier_Bookworm_AOEMagic_AreaModifierVData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x750;
      constexpr std::ptrdiff_t m_RootModifier = 0x760;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x770;
      constexpr std::ptrdiff_t m_AreaWarningEffect = 0x780;
      constexpr std::ptrdiff_t m_ExplodeEffect = 0x860;
      constexpr std::ptrdiff_t m_AoECastEffect = 0x940;
      constexpr std::ptrdiff_t m_strHitSound = 0xa20;
    }
    namespace CCitadel_Modifier_Bookworm_Immobilize {
    }
    namespace CCitadel_Modifier_Bookworm_ImmobilizeVData {
      constexpr std::ptrdiff_t flMaxDrag = 0x758;
      constexpr std::ptrdiff_t flSpeedForNoDrag = 0x75c;
      constexpr std::ptrdiff_t flSpeedForMaxDrag = 0x760;
    }
    namespace CCitadel_Modifier_Bookworm_KnightBarrier {
    }
    namespace CCitadel_Modifier_Bookworm_KnightBarrierVData {
      constexpr std::ptrdiff_t m_BlockParticle = 0x750;
    }
    namespace CCitadel_Modifier_Bookworm_KnightCharge_Buff {
    }
    namespace CCitadel_Modifier_BoucePadVData {
      constexpr std::ptrdiff_t m_StompParticle = 0x750;
      constexpr std::ptrdiff_t m_strImpactSound = 0x830;
    }
    namespace CCitadel_Modifier_Bounce_Pad_Ally {
    }
    namespace CCitadel_Modifier_Bounce_Pad_Stomp {
      constexpr std::ptrdiff_t m_bStomped = 0x5c0;
    }
    namespace CCitadel_Modifier_BoxingGlove {
    }
    namespace CCitadel_Modifier_BoxingGloveVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
      constexpr std::ptrdiff_t m_SwingParticle = 0x790;
      constexpr std::ptrdiff_t m_HitParticle = 0x870;
    }
    namespace CCitadel_Modifier_Bubble {
      constexpr std::ptrdiff_t m_flDampingFactor = 0xc0;
      constexpr std::ptrdiff_t m_ParticleIndex = 0x1c8;
    }
    namespace CCitadel_Modifier_BubbleVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x9f0;
      constexpr std::ptrdiff_t m_ExplodeSound = 0xad0;
      constexpr std::ptrdiff_t m_BuffModifier = 0xae0;
    }
    namespace CCitadel_Modifier_BullCharging {
    }
    namespace CCitadel_Modifier_Bull_Heal_Aura {
      constexpr std::ptrdiff_t m_playerAngles = 0x110;
      constexpr std::ptrdiff_t m_AuraParticle = 0x11c;
    }
    namespace CCitadel_Modifier_Bull_Heal_Target {
      constexpr std::ptrdiff_t m_flTetherRangeSquared = 0x340;
    }
    namespace CCitadel_Modifier_Bull_Heal_TargetVData {
      constexpr std::ptrdiff_t m_DrainParticle = 0x750;
    }
    namespace CCitadel_Modifier_Bull_Leap_Boosting {
    }
    namespace CCitadel_Modifier_Bull_Leap_BoostingVData {
      constexpr std::ptrdiff_t m_BoostTrailParticle = 0x750;
    }
    namespace CCitadel_Modifier_Bull_Leap_Boosting_Crash {
    }
    namespace CCitadel_Modifier_Bull_Leap_Boosting_CrashVData {
      constexpr std::ptrdiff_t m_DragModifier = 0x750;
      constexpr std::ptrdiff_t m_CrashTrailParticle = 0x760;
      constexpr std::ptrdiff_t m_flCollideRadius = 0x840;
    }
    namespace CCitadel_Modifier_BulletArmorReduction {
    }
    namespace CCitadel_Modifier_BulletArmorReductionVData {
    }
    namespace CCitadel_Modifier_BulletArmorShredder_Proc {
    }
    namespace CCitadel_Modifier_BulletArmorShredder_ProcVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
    }
    namespace CCitadel_Modifier_BulletFlurry {
      constexpr std::ptrdiff_t m_nEffectId = 0x1c0;
      constexpr std::ptrdiff_t m_flNextSequenceChange = 0x1c4;
      constexpr std::ptrdiff_t m_nCurrentPose = 0x1c8;
    }
    namespace CCitadel_Modifier_BulletFlurryVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x750;
      constexpr std::ptrdiff_t m_strAttackerHitSound = 0x830;
    }
    namespace CCitadel_Modifier_BulletFlurryWindup {
    }
    namespace CCitadel_Modifier_BulletResilience {
    }
    namespace CCitadel_Modifier_BulletResistReductionStack {
    }
    namespace CCitadel_Modifier_BulletResistReductionStackVData {
      constexpr std::ptrdiff_t m_bSelfish = 0x750;
    }
    namespace CCitadel_Modifier_BulletShredImbue_Proc {
    }
    namespace CCitadel_Modifier_BulletShredImbue_ProcVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x780;
      constexpr std::ptrdiff_t m_BuffNonHeroModifier = 0x790;
    }
    namespace CCitadel_Modifier_Burning {
    }
    namespace CCitadel_Modifier_Burrow {
    }
    namespace CCitadel_Modifier_Burrow_VData {
      constexpr std::ptrdiff_t m_BurrowPlayerParticle = 0x750;
      constexpr std::ptrdiff_t m_flDesatAmount = 0x830;
      constexpr std::ptrdiff_t m_DesatTint = 0x834;
      constexpr std::ptrdiff_t m_SatTint = 0x838;
      constexpr std::ptrdiff_t m_Outline = 0x83c;
    }
    namespace CCitadel_Modifier_BurstFire_Actuator {
      constexpr std::ptrdiff_t m_bLastShotInFlight = 0xc0;
      constexpr std::ptrdiff_t m_bBonusTracked = 0xc1;
      constexpr std::ptrdiff_t m_nHitCounter = 0xc4;
      constexpr std::ptrdiff_t m_nTotalBurstFireShots = 0xc8;
      constexpr std::ptrdiff_t m_nInitialzedClipSize = 0xcc;
      constexpr std::ptrdiff_t m_nBonusPitch = 0xd0;
      constexpr std::ptrdiff_t m_bInitialized = 0xd4;
      constexpr std::ptrdiff_t m_nIncreasedBurstShotCount = 0xd8;
      constexpr std::ptrdiff_t m_flIntraBurstCycleTime = 0xdc;
      constexpr std::ptrdiff_t m_flCycleTimePct = 0xe0;
      constexpr std::ptrdiff_t m_flMaxCycleTimeOverride = 0xe4;
      constexpr std::ptrdiff_t m_flMaxBurstFireCooldownOverride = 0xe8;
    }
    namespace CCitadel_Modifier_CP_Capturer {
      constexpr std::ptrdiff_t m_hCP = 0xc8;
      constexpr std::ptrdiff_t m_hEscort = 0xcc;
    }
    namespace CCitadel_Modifier_CQC_Proc {
    }
    namespace CCitadel_Modifier_CQC_ProcVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
    }
    namespace CCitadel_Modifier_Cadence_AnthemAOE {
    }
    namespace CCitadel_Modifier_Cadence_AnthemAOEVData {
      constexpr std::ptrdiff_t m_AuraParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_Cadence_AnthemBuff {
    }
    namespace CCitadel_Modifier_Cadence_AnthemBuffVData {
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_AOE {
      constexpr std::ptrdiff_t m_nTicks = 0x118;
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_AOE_VData {
      constexpr std::ptrdiff_t m_AuraParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_InAOE {
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_InAOE_VData {
      constexpr std::ptrdiff_t m_PostAOEModifier = 0x750;
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE {
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE_VData {
    }
    namespace CCitadel_Modifier_Cadence_GrandFinaleAOE {
    }
    namespace CCitadel_Modifier_Cadence_GrandFinaleAOEVData {
      constexpr std::ptrdiff_t m_AuraParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_Cadence_GrandFinale_Buff {
    }
    namespace CCitadel_Modifier_Cadence_GrandFinale_BuffVData {
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x750;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x760;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x840;
    }
    namespace CCitadel_Modifier_Cadence_Gun_Spikes {
    }
    namespace CCitadel_Modifier_Cadence_SilenceContraptions {
    }
    namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuff {
    }
    namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuffVData {
    }
    namespace CCitadel_Modifier_Cadence_SilenceContraptionsVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
    }
    namespace CCitadel_Modifier_Cadence_SleepAOE {
    }
    namespace CCitadel_Modifier_Cadence_SleepAOEVData {
      constexpr std::ptrdiff_t m_AuraParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_Cadence_Sleeping {
    }
    namespace CCitadel_Modifier_Cadence_SleepingVData {
    }
    namespace CCitadel_Modifier_Camouflage_Invis {
      constexpr std::ptrdiff_t m_vCastPosition = 0x460;
    }
    namespace CCitadel_Modifier_CanDamageMidBoss {
    }
    namespace CCitadel_Modifier_CanDamageTier3Phase2 {
    }
    namespace CCitadel_Modifier_CapacitorSlowDebuff {
    }
    namespace CCitadel_Modifier_CardToss_StackingResistShred {
    }
    namespace CCitadel_Modifier_CatapultDamageWatcher {
    }
    namespace CCitadel_Modifier_CatapultDamageWatcherVData {
      constexpr std::ptrdiff_t m_StunModifier = 0x750;
      constexpr std::ptrdiff_t m_flDamageHealthPct = 0x760;
    }
    namespace CCitadel_Modifier_CatapultStun {
    }
    namespace CCitadel_Modifier_CatapultStunVData {
      constexpr std::ptrdiff_t m_flStunDurationOnLand = 0x8d8;
      constexpr std::ptrdiff_t m_SlowModifier = 0x8e0;
    }
    namespace CCitadel_Modifier_ChainLightning {
      constexpr std::ptrdiff_t m_flNextProcTime = 0x298;
    }
    namespace CCitadel_Modifier_ChainLightningEffect {
    }
    namespace CCitadel_Modifier_ChainLightningEffectVData {
      constexpr std::ptrdiff_t m_ChainParticle = 0x750;
      constexpr std::ptrdiff_t m_strChainSound = 0x830;
    }
    namespace CCitadel_Modifier_ChainLightningVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x880;
      constexpr std::ptrdiff_t m_ChainModifier = 0x960;
    }
    namespace CCitadel_Modifier_ChangeTeam {
    }
    namespace CCitadel_Modifier_ChargeDragEnemy {
      constexpr std::ptrdiff_t m_qRelativeOffset = 0xc0;
      constexpr std::ptrdiff_t m_flRelativeDist = 0xcc;
      constexpr std::ptrdiff_t m_flMaxDist = 0xd0;
      constexpr std::ptrdiff_t m_vecOffsetDir = 0xd4;
      constexpr std::ptrdiff_t m_vecStartPosition = 0xe0;
    }
    namespace CCitadel_Modifier_ChargePullEnemy {
      constexpr std::ptrdiff_t m_vecOffsetDir = 0xc0;
      constexpr std::ptrdiff_t m_flTackleRadius = 0xcc;
      constexpr std::ptrdiff_t m_flPullTargetSpeed = 0xd0;
    }
    namespace CCitadel_Modifier_ChargedBomb {
    }
    namespace CCitadel_Modifier_ChargedBombVData {
      constexpr std::ptrdiff_t m_ChargeParticle = 0x750;
      constexpr std::ptrdiff_t m_strBeepSound = 0x830;
    }
    namespace CCitadel_Modifier_ChargedTackleActive {
    }
    namespace CCitadel_Modifier_ChargedTacklePrepare {
    }
    namespace CCitadel_Modifier_CharmedWraps {
      constexpr std::ptrdiff_t m_fLastPrimingLightAttackTime = 0x1f8;
    }
    namespace CCitadel_Modifier_CharmedWraps_VData {
      constexpr std::ptrdiff_t m_SwingParticle = 0x780;
      constexpr std::ptrdiff_t m_HitParticle = 0x860;
    }
    namespace CCitadel_Modifier_CheaterCurse {
    }
    namespace CCitadel_Modifier_CheaterCurseVData {
      constexpr std::ptrdiff_t m_CursedModel = 0x750;
      constexpr std::ptrdiff_t m_flModelScale = 0x830;
    }
    namespace CCitadel_Modifier_ChronoSwap_BubbleMove {
      constexpr std::ptrdiff_t m_bOtherIsInFrontAtStart = 0xc0;
      constexpr std::ptrdiff_t m_vOtherToDest = 0xc4;
      constexpr std::ptrdiff_t m_vStart = 0xd0;
      constexpr std::ptrdiff_t m_vDest = 0xdc;
      constexpr std::ptrdiff_t m_hOther = 0xe8;
      constexpr std::ptrdiff_t m_vLastSafePos = 0xec;
      constexpr std::ptrdiff_t m_bDoFinalTeleport = 0xf8;
      constexpr std::ptrdiff_t m_nBeamIndex = 0xfc;
    }
    namespace CCitadel_Modifier_ChronoSwap_BubbleMoveVData {
      constexpr std::ptrdiff_t m_flMultiSwapDistFromOrigin = 0x750;
      constexpr std::ptrdiff_t m_BeamParticle = 0x758;
      constexpr std::ptrdiff_t m_HealParticle = 0x838;
      constexpr std::ptrdiff_t m_DamageParticle = 0x918;
    }
    namespace CCitadel_Modifier_Chrono_KineticCarbine {
      constexpr std::ptrdiff_t m_bShotAnimPlayed = 0xc0;
      constexpr std::ptrdiff_t m_nBulletCount = 0xc4;
      constexpr std::ptrdiff_t m_flElapsedPct = 0xc8;
      constexpr std::ptrdiff_t m_hTimeWarp = 0xcc;
      constexpr std::ptrdiff_t m_nFullyChargedParticle = 0xd0;
    }
    namespace CCitadel_Modifier_Chrono_KineticCarbineVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x750;
      constexpr std::ptrdiff_t m_FullyChargedParticle = 0x830;
      constexpr std::ptrdiff_t m_strFullyCharged = 0x910;
      constexpr std::ptrdiff_t m_strShotSound = 0x920;
    }
    namespace CCitadel_Modifier_Chrono_KineticCarbine_Slow {
    }
    namespace CCitadel_Modifier_Chrono_PulseGrenade_Debuff {
    }
    namespace CCitadel_Modifier_Chrono_PulseGrenade_PulseArea {
    }
    namespace CCitadel_Modifier_Chrono_TimeWall_Effect {
    }
    namespace CCitadel_Modifier_Chrono_TimeWall_EffectVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_BuffParticle = 0x760;
      constexpr std::ptrdiff_t m_DebuffParticle = 0x840;
      constexpr std::ptrdiff_t m_strDamageSound = 0x920;
    }
    namespace CCitadel_Modifier_CinematicIntro_Player {
      constexpr std::ptrdiff_t m_bFirstFrame = 0xc0;
      constexpr std::ptrdiff_t m_override = 0xc8;
    }
    namespace CCitadel_Modifier_CinematicIntro_Player_VData {
      constexpr std::ptrdiff_t m_flZiplineStartDelayDuration = 0x750;
      constexpr std::ptrdiff_t m_vecPostProcessEffects = 0x758;
      constexpr std::ptrdiff_t m_bTeamSpecificCameras = 0x770;
      constexpr std::ptrdiff_t m_vecIntroCameraSequenceAmber = 0x778;
      constexpr std::ptrdiff_t m_vecIntroCameraSequenceSapphire = 0x790;
      constexpr std::ptrdiff_t m_vecIntroCameraSequence = 0x7a8;
    }
    namespace CCitadel_Modifier_CinematicIntro_Shrine {
    }
    namespace CCitadel_Modifier_ClimbRopeSlow {
    }
    namespace CCitadel_Modifier_ClimbRopeSlowVData {
      constexpr std::ptrdiff_t m_flRampDownTime = 0x750;
      constexpr std::ptrdiff_t m_flPercentageMultiplierStart = 0x754;
      constexpr std::ptrdiff_t m_flPercentageMultiplierEnd = 0x758;
    }
    namespace CCitadel_Modifier_CloakOfOpportunityWatcher {
    }
    namespace CCitadel_Modifier_CloakOfOpportunityWatcherVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
      constexpr std::ptrdiff_t m_StatusImmuneModifier = 0x760;
    }
    namespace CCitadel_Modifier_ColdFrontAOE {
      constexpr std::ptrdiff_t m_hAOEEffect = 0x3c0;
    }
    namespace CCitadel_Modifier_ColdFrontAOE_VData {
      constexpr std::ptrdiff_t m_TargetModifier = 0x750;
    }
    namespace CCitadel_Modifier_ColossusActive {
    }
    namespace CCitadel_Modifier_ColossusActive_VData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x750;
      constexpr std::ptrdiff_t m_ShieldParticle = 0x760;
    }
    namespace CCitadel_Modifier_CombatStatus {
    }
    namespace CCitadel_Modifier_CombatStatusVData {
      constexpr std::ptrdiff_t m_flBulletHitSlowPct = 0x750;
    }
    namespace CCitadel_Modifier_CombatStatus_BulletHit {
    }
    namespace CCitadel_Modifier_ComboBreakerHeal {
      constexpr std::ptrdiff_t m_flAmountPerSecond = 0xc0;
    }
    namespace CCitadel_Modifier_ConeWaveProjectile {
      constexpr std::ptrdiff_t m_vInitialCastPosition = 0x240;
      constexpr std::ptrdiff_t m_flProjectileSpeed = 0x24c;
      constexpr std::ptrdiff_t m_iParticleEffect = 0x250;
    }
    namespace CCitadel_Modifier_Containment_Victim {
      constexpr std::ptrdiff_t m_flTetherRadius = 0xc0;
      constexpr std::ptrdiff_t m_vecOrigin = 0xc4;
    }
    namespace CCitadel_Modifier_ControlPointBlockerAura {
    }
    namespace CCitadel_Modifier_ControlPointBlockerAuraTarget {
    }
    namespace CCitadel_Modifier_ControlPointCapturerAura {
    }
    namespace CCitadel_Modifier_ControlPointCapturerAuraTarget {
    }
    namespace CCitadel_Modifier_CopiedUlt_SpawnedEntity {
    }
    namespace CCitadel_Modifier_CopiedUlt_SpawnedEntityVData {
    }
    namespace CCitadel_Modifier_CopyUlt {
      constexpr std::ptrdiff_t m_nCopiedHeroID = 0xc0;
      constexpr std::ptrdiff_t m_ModelChange = 0xc8;
    }
    namespace CCitadel_Modifier_CopyUltPending {
    }
    namespace CCitadel_Modifier_CopyUltVData {
    }
    namespace CCitadel_Modifier_CorpseExplosionThinker {
    }
    namespace CCitadel_Modifier_CorpseExplosionThinkerVData {
      constexpr std::ptrdiff_t m_WarningParticle = 0x750;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x830;
      constexpr std::ptrdiff_t m_flTickRate = 0x910;
    }
    namespace CCitadel_Modifier_CounterspellWatcher {
      constexpr std::ptrdiff_t m_bSpellBlockActivated = 0xc0;
      constexpr std::ptrdiff_t m_bSpellBlocked = 0xc1;
    }
    namespace CCitadel_Modifier_CounterspellWatcherVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
      constexpr std::ptrdiff_t m_ParryFXOverride = 0x760;
      constexpr std::ptrdiff_t m_HealFX = 0x840;
      constexpr std::ptrdiff_t m_strSuccessProcSound = 0x920;
    }
    namespace CCitadel_Modifier_CritShot {
    }
    namespace CCitadel_Modifier_CritShotVData {
      constexpr std::ptrdiff_t m_strHitProcSound = 0x880;
    }
    namespace CCitadel_Modifier_CrowdControl_Diminish_Watcher {
    }
    namespace CCitadel_Modifier_CrowdControl_Diminish_WatcherVData {
      constexpr std::ptrdiff_t m_flModifierWindow = 0x750;
      constexpr std::ptrdiff_t m_flReductionPerModifier = 0x754;
      constexpr std::ptrdiff_t m_flMaxReduction = 0x758;
    }
    namespace CCitadel_Modifier_CrushingFistsDebuff_VData {
      constexpr std::ptrdiff_t m_ProcNotificationModifier = 0x750;
      constexpr std::ptrdiff_t m_ProcNotificationEffect = 0x760;
    }
    namespace CCitadel_Modifier_CrushingFistsWatcher_VData {
      constexpr std::ptrdiff_t m_StackingDebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_strStackSound = 0x760;
    }
    namespace CCitadel_Modifier_CrushingFists_Debuff {
    }
    namespace CCitadel_Modifier_CrushingFists_Watcher {
    }
    namespace CCitadel_Modifier_DPSTracker {
      constexpr std::ptrdiff_t m_flProgress = 0xc0;
      constexpr std::ptrdiff_t m_flDistToTarget = 0xc4;
    }
    namespace CCitadel_Modifier_DamageOnHitGround {
    }
    namespace CCitadel_Modifier_DamageResistance {
      constexpr std::ptrdiff_t m_flShieldHealth = 0xc0;
    }
    namespace CCitadel_Modifier_DamageResistanceVData {
      constexpr std::ptrdiff_t m_flDamageResistancePerSecond = 0x750;
      constexpr std::ptrdiff_t m_flTickInterval = 0x754;
      constexpr std::ptrdiff_t m_flDamageResistanceBonusPerGameMinute = 0x758;
    }
    namespace CCitadel_Modifier_Damage_Taken_Reduction_Handicap {
      constexpr std::ptrdiff_t m_flValue = 0xc0;
    }
    namespace CCitadel_Modifier_Dazed {
    }
    namespace CCitadel_Modifier_DazzlingOrbWatcher {
      constexpr std::ptrdiff_t m_nAssociatedShotID = 0xc0;
      constexpr std::ptrdiff_t m_hAssociatedProjectile = 0xc4;
      constexpr std::ptrdiff_t m_flLastHitTime = 0xc8;
      constexpr std::ptrdiff_t m_hLastHitTarget = 0xcc;
      constexpr std::ptrdiff_t m_vLastHitLocation = 0xd0;
      constexpr std::ptrdiff_t m_nBouncesRemaining = 0xdc;
      constexpr std::ptrdiff_t m_flLingerEndTime = 0xe0;
      constexpr std::ptrdiff_t m_nGraceParticleIndex = 0xe4;
    }
    namespace CCitadel_Modifier_DazzlingOrbWatcherVData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x750;
      constexpr std::ptrdiff_t m_NextTargetModifier = 0x760;
      constexpr std::ptrdiff_t m_OrbFriendlyBounceWatcherModifier = 0x770;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x780;
      constexpr std::ptrdiff_t m_strFinalExplodeSound = 0x790;
      constexpr std::ptrdiff_t m_strWorldHitSound = 0x7a0;
      constexpr std::ptrdiff_t m_strGraceLoopSound = 0x7b0;
      constexpr std::ptrdiff_t m_strExpireSound = 0x7c0;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x7d0;
      constexpr std::ptrdiff_t m_BounceParticle = 0x8b0;
      constexpr std::ptrdiff_t m_GraceParticle = 0x990;
      constexpr std::ptrdiff_t m_BouncePositionCurve = 0xa70;
      constexpr std::ptrdiff_t m_flMinProjectileTravelTime = 0xab0;
      constexpr std::ptrdiff_t m_TrackingParams = 0xab8;
    }
    namespace CCitadel_Modifier_DeathTax {
    }
    namespace CCitadel_Modifier_DeathTaxTechAmp {
    }
    namespace CCitadel_Modifier_DebuffImmunity {
    }
    namespace CCitadel_Modifier_DebuffImmunityVData {
      constexpr std::ptrdiff_t m_ShieldParticle = 0x750;
      constexpr std::ptrdiff_t m_PlayerShieldParticle = 0x830;
    }
    namespace CCitadel_Modifier_DebugIsVisibleToEnemyTeam {
    }
    namespace CCitadel_Modifier_DebugScale {
      constexpr std::ptrdiff_t m_flScale = 0xc0;
    }
    namespace CCitadel_Modifier_DeflectingArmor {
    }
    namespace CCitadel_Modifier_DeflectingArmorVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x750;
      constexpr std::ptrdiff_t m_strImpactSound = 0x830;
      constexpr std::ptrdiff_t m_strProcDeflectionImpactSound = 0x840;
    }
    namespace CCitadel_Modifier_DelayedApply {
    }
    namespace CCitadel_Modifier_DelayedCatapultLaunch {
    }
    namespace CCitadel_Modifier_Delayed_Stun {
      constexpr std::ptrdiff_t m_hRingEffect = 0xc0;
      constexpr std::ptrdiff_t m_flRadius = 0xc4;
    }
    namespace CCitadel_Modifier_DetentionAmmo {
    }
    namespace CCitadel_Modifier_DetentionAmmoVData {
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x780;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x790;
      constexpr std::ptrdiff_t m_ImmunityModifier = 0x7a0;
      constexpr std::ptrdiff_t m_TracerParticle = 0x7b0;
    }
    namespace CCitadel_Modifier_Digger_MudShield {
      constexpr std::ptrdiff_t m_flGrantedBulletShieldHealth = 0xc0;
    }
    namespace CCitadel_Modifier_Digger_MudShieldVData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x830;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x910;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x9f0;
      constexpr std::ptrdiff_t m_ImpactSound = 0xa00;
    }
    namespace CCitadel_Modifier_DiminishingSlow {
      constexpr std::ptrdiff_t m_flSlowPercent = 0xc0;
    }
    namespace CCitadel_Modifier_DiminishingSlowVData {
    }
    namespace CCitadel_Modifier_DisarmProc {
    }
    namespace CCitadel_Modifier_DisarmProcWatcher {
    }
    namespace CCitadel_Modifier_DisarmProcWatcherVData {
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x780;
      constexpr std::ptrdiff_t m_DisarmProcModifier = 0x790;
      constexpr std::ptrdiff_t m_ImmunityModifier = 0x7a0;
      constexpr std::ptrdiff_t m_TracerParticle = 0x7b0;
    }
    namespace CCitadel_Modifier_Disarmed {
    }
    namespace CCitadel_Modifier_DiscordVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x750;
    }
    namespace CCitadel_Modifier_Discord_Enemy {
    }
    namespace CCitadel_Modifier_Discord_Friendly {
    }
    namespace CCitadel_Modifier_Disruptive_Charge {
    }
    namespace CCitadel_Modifier_DivineBarrier {
    }
    namespace CCitadel_Modifier_DivineBarrier_VData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
      constexpr std::ptrdiff_t m_TrailParticle = 0x830;
    }
    namespace CCitadel_Modifier_DivinersKevlarBuff {
    }
    namespace CCitadel_Modifier_DivinersKevlarBuff_VData {
      constexpr std::ptrdiff_t m_KevlarChannelParticle = 0x750;
    }
    namespace CCitadel_Modifier_Doorman_BellAura {
    }
    namespace CCitadel_Modifier_Doorman_DimishingTimestop {
      constexpr std::ptrdiff_t m_flSlowPercent = 0xc0;
      constexpr std::ptrdiff_t m_flDelay = 0xc4;
      constexpr std::ptrdiff_t m_bEscaped = 0xc8;
      constexpr std::ptrdiff_t m_bStunApplied = 0x150;
    }
    namespace CCitadel_Modifier_Doorman_Hotel_Imposter {
      constexpr std::ptrdiff_t m_hRagdoll = 0xc0;
      constexpr std::ptrdiff_t m_vImposterPos = 0xc4;
      constexpr std::ptrdiff_t m_bPlayEnd = 0xd0;
    }
    namespace CCitadel_Modifier_Doorman_Hotel_Imposter_FX {
      constexpr std::ptrdiff_t m_bEndStarted = 0xc0;
    }
    namespace CCitadel_Modifier_Doorman_Hotel_TeleportFX {
      constexpr std::ptrdiff_t m_vMinimapPositionOverride = 0xc0;
    }
    namespace CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData {
      constexpr std::ptrdiff_t m_strKeyLoopSound = 0x750;
      constexpr std::ptrdiff_t m_strKeyLoopStartSound = 0x760;
      constexpr std::ptrdiff_t m_strKeyLoopEndSound = 0x770;
      constexpr std::ptrdiff_t m_HitSound = 0x780;
    }
    namespace CCitadel_Modifier_Doorman_Hotel_TransitionFreeze {
    }
    namespace CCitadel_Modifier_Doorman_Hotel_Victim {
    }
    namespace CCitadel_Modifier_Doorway_Minimap_Range {
      constexpr std::ptrdiff_t m_flMinimapRange = 0xc0;
    }
    namespace CCitadel_Modifier_DragEnemyVData {
      constexpr std::ptrdiff_t m_flForwardOffset = 0x750;
      constexpr std::ptrdiff_t m_flVerticalOffset = 0x754;
      constexpr std::ptrdiff_t m_flDragDistance = 0x758;
      constexpr std::ptrdiff_t m_flForceDistScale = 0x75c;
      constexpr std::ptrdiff_t m_bZDownOnly = 0x760;
      constexpr std::ptrdiff_t m_bAnimate = 0x761;
    }
    namespace CCitadel_Modifier_DragonFireGroundAura {
    }
    namespace CCitadel_Modifier_DragonFireGroundAuraVData {
      constexpr std::ptrdiff_t m_GroundParticle = 0x7a8;
      constexpr std::ptrdiff_t m_flHeight = 0x888;
    }
    namespace CCitadel_Modifier_DummyUnit {
    }
    namespace CCitadel_Modifier_Dust_Storm_Aura {
    }
    namespace CCitadel_Modifier_Dust_Storm_Aura_Apply {
    }
    namespace CCitadel_Modifier_Dust_Storm_Thrown {
    }
    namespace CCitadel_Modifier_EldritchShot {
      constexpr std::ptrdiff_t m_BuffedShotId = 0x398;
    }
    namespace CCitadel_Modifier_EldritchShotVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x880;
      constexpr std::ptrdiff_t m_flExplodeParticleSize = 0x960;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x968;
    }
    namespace CCitadel_Modifier_ElectricSlippers {
      constexpr std::ptrdiff_t m_hBuffEffect = 0xc0;
    }
    namespace CCitadel_Modifier_ElectricSlippersVData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
      constexpr std::ptrdiff_t m_strSlideLoopSound = 0x830;
    }
    namespace CCitadel_Modifier_EmpowerBullet {
      constexpr std::ptrdiff_t m_BuffedShotId = 0x318;
    }
    namespace CCitadel_Modifier_EmpowerBulletVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x880;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x890;
      constexpr std::ptrdiff_t m_ExplosionVictimParticle = 0x970;
      constexpr std::ptrdiff_t m_EmpowerWeaponParticle = 0xa50;
      constexpr std::ptrdiff_t m_ShotVictimSound = 0xb30;
      constexpr std::ptrdiff_t m_ShotConfirmationSound = 0xb40;
    }
    namespace CCitadel_Modifier_EnchantedHolsters_Buff {
    }
    namespace CCitadel_Modifier_EnchantedHolsters_Watcher {
    }
    namespace CCitadel_Modifier_EnchantedHolsters_Watcher_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
      constexpr std::ptrdiff_t m_strRefreshStackSound = 0x760;
    }
    namespace CCitadel_Modifier_EntityPinged {
    }
    namespace CCitadel_Modifier_EscalatingExposure {
    }
    namespace CCitadel_Modifier_EscalatingExposureProcWatcher {
    }
    namespace CCitadel_Modifier_EscalatingExposureProcWatcherVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
    }
    namespace CCitadel_Modifier_EternalGift {
    }
    namespace CCitadel_Modifier_EtherealBulletsBuffVData {
      constexpr std::ptrdiff_t m_RapidFireParticle = 0x750;
    }
    namespace CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x750;
    }
    namespace CCitadel_Modifier_EtherealBulletsVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x780;
      constexpr std::ptrdiff_t m_BulletDamageBuffModifier = 0x790;
      constexpr std::ptrdiff_t m_ProcParticle = 0x7a0;
    }
    namespace CCitadel_Modifier_EtherealBullets_Buff {
      constexpr std::ptrdiff_t m_flEffectivecFireRatePercent = 0xc0;
    }
    namespace CCitadel_Modifier_EtherealBullets_BulletBuff {
    }
    namespace CCitadel_Modifier_EtherealBullets_Watcher {
      constexpr std::ptrdiff_t m_bProcNextHit = 0x37c;
    }
    namespace CCitadel_Modifier_ExplosiveShots {
    }
    namespace CCitadel_Modifier_FamiliarHelper_InvisWatcher {
      constexpr std::ptrdiff_t m_flInvisLevel = 0xc0;
    }
    namespace CCitadel_Modifier_Familiar_Asleep {
    }
    namespace CCitadel_Modifier_Familiar_AsleepVData {
      constexpr std::ptrdiff_t m_WakeUpDamageParticle = 0x750;
    }
    namespace CCitadel_Modifier_Familiar_AttachHeal {
      constexpr std::ptrdiff_t m_flTotalPendingHeal = 0xc0;
      constexpr std::ptrdiff_t m_flTotalHeal = 0xc4;
    }
    namespace CCitadel_Modifier_Familiar_AttachHealVData {
      constexpr std::ptrdiff_t m_HealBurstParticle = 0x750;
    }
    namespace CCitadel_Modifier_Familiar_AttachHost {
    }
    namespace CCitadel_Modifier_Familiar_AttachHostVData {
      constexpr std::ptrdiff_t m_FakeFamiliarParticle = 0x750;
    }
    namespace CCitadel_Modifier_Familiar_Attached {
      constexpr std::ptrdiff_t m_hAttachedTo = 0x2e4;
    }
    namespace CCitadel_Modifier_Familiar_AttachedVData {
      constexpr std::ptrdiff_t m_strForceDetachSound = 0x750;
      constexpr std::ptrdiff_t m_ItemUsedParticle = 0x760;
      constexpr std::ptrdiff_t m_HostModifier = 0x840;
      constexpr std::ptrdiff_t m_ReplicatedBarrierModifier = 0x850;
      constexpr std::ptrdiff_t m_AttachEndingModifier = 0x860;
      constexpr std::ptrdiff_t m_flInputHoldTimeToCancel = 0x870;
      constexpr std::ptrdiff_t m_flEndingWarningDuration = 0x874;
    }
    namespace CCitadel_Modifier_Familiar_Barrier {
    }
    namespace CCitadel_Modifier_Familiar_CameraDummy {
      constexpr std::ptrdiff_t m_bCamOverrideActive = 0xc0;
      constexpr std::ptrdiff_t m_hDummy = 0xc4;
    }
    namespace CCitadel_Modifier_Familiar_Clone {
      constexpr std::ptrdiff_t m_nCopiedHeroID = 0xcc;
      constexpr std::ptrdiff_t m_ModelChange = 0xd0;
    }
    namespace CCitadel_Modifier_Familiar_Exposed {
    }
    namespace CCitadel_Modifier_Familiar_HopOutLockout {
    }
    namespace CCitadel_Modifier_Familiar_MovingToAttach {
      constexpr std::ptrdiff_t m_hTarget = 0xc0;
      constexpr std::ptrdiff_t m_hProjectile = 0xc4;
    }
    namespace CCitadel_Modifier_Familiar_Recast {
    }
    namespace CCitadel_Modifier_Familiar_ReplicatedBarrier {
    }
    namespace CCitadel_Modifier_Familiar_ShadowClone {
      constexpr std::ptrdiff_t m_bCloneIsInvisible = 0xc0;
    }
    namespace CCitadel_Modifier_Familiar_Speedlines {
    }
    namespace CCitadel_Modifier_Familiar_SpotlightAura {
      constexpr std::ptrdiff_t m_vRightVectorWS = 0x110;
    }
    namespace CCitadel_Modifier_Familiar_SpotlightAuraVData {
      constexpr std::ptrdiff_t m_GroundParticle = 0x7a8;
      constexpr std::ptrdiff_t m_flHeight = 0x888;
      constexpr std::ptrdiff_t m_flOffset = 0x88c;
    }
    namespace CCitadel_Modifier_Familiar_SpotlightEffect {
      constexpr std::ptrdiff_t m_flSlowPercent = 0xc0;
    }
    namespace CCitadel_Modifier_Familiar_Staring {
    }
    namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura {
      constexpr std::ptrdiff_t m_playerAngles = 0x110;
      constexpr std::ptrdiff_t m_bHasAnyTargets = 0x11c;
      constexpr std::ptrdiff_t m_flLastStackTime = 0x120;
      constexpr std::ptrdiff_t m_ConeParticle = 0x124;
    }
    namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x7b0;
    }
    namespace CCitadel_Modifier_Fathom_ScaldingSpray_Target {
    }
    namespace CCitadel_Modifier_Fathom_ScaldingSpray_Target_VData {
      constexpr std::ptrdiff_t m_DrainParticle = 0x750;
    }
    namespace CCitadel_Modifier_Fathom_ScaldingSpray_WeaponDamage {
    }
    namespace CCitadel_Modifier_FealtyTarget {
    }
    namespace CCitadel_Modifier_Fear {
    }
    namespace CCitadel_Modifier_FearWatcher {
    }
    namespace CCitadel_Modifier_FearWatcherVData {
      constexpr std::ptrdiff_t m_BuildupProcModifier = 0x780;
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x790;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x7a0;
    }
    namespace CCitadel_Modifier_Fear_VData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x750;
    }
    namespace CCitadel_Modifier_Fervor {
    }
    namespace CCitadel_Modifier_Fervor_Bonuses {
      constexpr std::ptrdiff_t m_nBonusesParticle = 0xc0;
    }
    namespace CCitadel_Modifier_Fervor_Bonuses_VData {
      constexpr std::ptrdiff_t m_BonusesParticle = 0x750;
      constexpr std::ptrdiff_t m_ActivateBonusesSound = 0x830;
    }
    namespace CCitadel_Modifier_Fervor_VData {
      constexpr std::ptrdiff_t m_FervorParticle = 0x750;
      constexpr std::ptrdiff_t m_BonusesModifier = 0x830;
    }
    namespace CCitadel_Modifier_FireBomb {
    }
    namespace CCitadel_Modifier_FireBombVData {
      constexpr std::ptrdiff_t m_ChargeParticle = 0x750;
      constexpr std::ptrdiff_t m_GroundParticle = 0x830;
    }
    namespace CCitadel_Modifier_FireBomb_Buff {
    }
    namespace CCitadel_Modifier_FireRateAura {
    }
    namespace CCitadel_Modifier_FireRateAuraVData {
      constexpr std::ptrdiff_t m_FireRateAuraSourceParticle = 0x750;
    }
    namespace CCitadel_Modifier_FissureWall {
    }
    namespace CCitadel_Modifier_FissureWallVData {
      constexpr std::ptrdiff_t m_DebrisParticle = 0x750;
      constexpr std::ptrdiff_t m_SpikeParticle = 0x830;
      constexpr std::ptrdiff_t m_WallSpawnSound = 0x910;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x920;
      constexpr std::ptrdiff_t m_EnemyVisionModifier = 0x930;
      constexpr std::ptrdiff_t m_SlowModifier = 0x940;
      constexpr std::ptrdiff_t m_flSentryDistanceFromWall = 0x950;
    }
    namespace CCitadel_Modifier_FlameDash {
    }
    namespace CCitadel_Modifier_FlameDashBurn {
    }
    namespace CCitadel_Modifier_FlameDashBurnVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
    }
    namespace CCitadel_Modifier_FlameDashGroundAura {
    }
    namespace CCitadel_Modifier_FlameDashGroundAuraVData {
      constexpr std::ptrdiff_t m_GroundParticle = 0x7a8;
      constexpr std::ptrdiff_t m_flHeight = 0x888;
    }
    namespace CCitadel_Modifier_FlameDashVData {
      constexpr std::ptrdiff_t m_GroundAuraModifier = 0x750;
      constexpr std::ptrdiff_t m_ProgressModifier = 0x760;
      constexpr std::ptrdiff_t m_FlameDashParticle = 0x770;
      constexpr std::ptrdiff_t m_FlameAuraParticle = 0x850;
    }
    namespace CCitadel_Modifier_FlyingStrikeTarget {
    }
    namespace CCitadel_Modifier_FocusLens_Damage {
      constexpr std::ptrdiff_t m_flDamageDealt = 0xc0;
    }
    namespace CCitadel_Modifier_FocusLens_Damage_VData {
      constexpr std::ptrdiff_t m_DamageTakenParticle = 0x750;
      constexpr std::ptrdiff_t m_FinalDamageParticle = 0x830;
    }
    namespace CCitadel_Modifier_Forge_MiniTurret_InnateModifier {
    }
    namespace CCitadel_Modifier_Frank_PainAura {
    }
    namespace CCitadel_Modifier_Frank_PainAuraVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_AuraParticle = 0x760;
    }
    namespace CCitadel_Modifier_Frank_PainAura_Target {
    }
    namespace CCitadel_Modifier_Frank_PainAura_TargetVData {
      constexpr std::ptrdiff_t m_DrainParticle = 0x750;
    }
    namespace CCitadel_Modifier_Frank_Reviving {
    }
    namespace CCitadel_Modifier_Frank_SelfZap {
    }
    namespace CCitadel_Modifier_Frank_ShockFullyCharged {
    }
    namespace CCitadel_Modifier_Frank_ShockFullyChargedVData {
      constexpr std::ptrdiff_t m_FullyChargedParticle = 0x750;
    }
    namespace CCitadel_Modifier_Frank_ShockTarget {
    }
    namespace CCitadel_Modifier_Frank_ShockTargetVData {
      constexpr std::ptrdiff_t m_ZapParticle = 0x750;
    }
    namespace CCitadel_Modifier_Frank_Zombie {
    }
    namespace CCitadel_Modifier_FrenzyAura {
    }
    namespace CCitadel_Modifier_FrenzyAuraVData {
      constexpr std::ptrdiff_t m_KillModifier = 0x7a8;
    }
    namespace CCitadel_Modifier_Frenzy_MoveSpeed {
      constexpr std::ptrdiff_t m_flMoveSpeedPerStack = 0xc0;
    }
    namespace CCitadel_Modifier_FullSpectrum {
    }
    namespace CCitadel_Modifier_FullSpectrumDamage {
    }
    namespace CCitadel_Modifier_FullSpectrumVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
      constexpr std::ptrdiff_t m_BonusDamageModifier = 0x790;
    }
    namespace CCitadel_Modifier_FuryTrance {
    }
    namespace CCitadel_Modifier_FuryTrance_VData {
      constexpr std::ptrdiff_t m_SilenceModifier = 0x750;
      constexpr std::ptrdiff_t m_ModifierActiveDisplay = 0x760;
    }
    namespace CCitadel_Modifier_Galvanic_Storm {
    }
    namespace CCitadel_Modifier_Galvanic_Storm_Effect {
    }
    namespace CCitadel_Modifier_Galvanic_Storm_EffectVData {
      constexpr std::ptrdiff_t m_BuffChainParticle = 0x840;
    }
    namespace CCitadel_Modifier_Galvanic_Storm_VData {
      constexpr std::ptrdiff_t m_TechShieldModifier = 0x970;
    }
    namespace CCitadel_Modifier_GangActivity_AbilitySwap {
    }
    namespace CCitadel_Modifier_GarbageAura {
    }
    namespace CCitadel_Modifier_GarbageAuraTarget {
      constexpr std::ptrdiff_t m_flMaxDist = 0x1c8;
      constexpr std::ptrdiff_t m_vecOffsetDir = 0x1cc;
      constexpr std::ptrdiff_t m_vecStartPosition = 0x1d8;
      constexpr std::ptrdiff_t m_flAOERadius = 0x1e4;
    }
    namespace CCitadel_Modifier_GarbageAuraTargetModifierVData {
      constexpr std::ptrdiff_t m_flOuterSpeedScale = 0x830;
      constexpr std::ptrdiff_t m_flSpeedScaleBias = 0x834;
      constexpr std::ptrdiff_t m_TargetLoopingSound = 0x838;
    }
    namespace CCitadel_Modifier_GhostBloodShard {
      constexpr std::ptrdiff_t m_flMinSlowAmount = 0xc0;
      constexpr std::ptrdiff_t m_flMoveSpeedPenaltyPerStack = 0xc4;
      constexpr std::ptrdiff_t m_flSlowDuration = 0xc8;
    }
    namespace CCitadel_Modifier_GhostBloodShardDebuffVData {
      constexpr std::ptrdiff_t m_BloodShardDebuffParticle = 0x750;
    }
    namespace CCitadel_Modifier_Glitch {
    }
    namespace CCitadel_Modifier_GlowToTeammates {
    }
    namespace CCitadel_Modifier_GoatCharging {
    }
    namespace CCitadel_Modifier_GoatFlipDamageBuff {
    }
    namespace CCitadel_Modifier_GoatFlipEmpoweredMelee {
    }
    namespace CCitadel_Modifier_GoatGoingUp {
      constexpr std::ptrdiff_t m_bAtTargetElevation = 0xc0;
      constexpr std::ptrdiff_t m_vKnockAwayVector = 0xc4;
      constexpr std::ptrdiff_t m_flTargetElevation = 0x250;
    }
    namespace CCitadel_Modifier_GoatGoingUpVData {
      constexpr std::ptrdiff_t m_GoingUpSpeedCurve = 0x750;
    }
    namespace CCitadel_Modifier_GoatGoingUp_LingeringAirControl {
    }
    namespace CCitadel_Modifier_GooGrenade {
    }
    namespace CCitadel_Modifier_GooseEggPassiveGold {
      constexpr std::ptrdiff_t m_flCurrentThinkRate = 0x1c8;
    }
    namespace CCitadel_Modifier_Grapple_Air_Control {
    }
    namespace CCitadel_Modifier_GraveStone {
      constexpr std::ptrdiff_t m_nParticleIndexAura = 0x128;
      constexpr std::ptrdiff_t m_nParticleIndex = 0x12c;
      constexpr std::ptrdiff_t m_flStartTime = 0x130;
    }
    namespace CCitadel_Modifier_GraveStoneVData {
      constexpr std::ptrdiff_t m_GravestoneParticle = 0x7a8;
      constexpr std::ptrdiff_t m_DestroyParticle = 0x888;
      constexpr std::ptrdiff_t m_AuraParticle = 0x968;
      constexpr std::ptrdiff_t m_CasterBuffModifier = 0xa48;
      constexpr std::ptrdiff_t m_GravestoneCriticalModifier = 0xa58;
      constexpr std::ptrdiff_t m_DestroySound = 0xa68;
    }
    namespace CCitadel_Modifier_Gravity_Lasso_Enemy {
      constexpr std::ptrdiff_t m_eHoldPosition = 0xe8;
    }
    namespace CCitadel_Modifier_Gravity_Lasso_Self {
      constexpr std::ptrdiff_t m_bHasUsedBouncePad = 0xc0;
      constexpr std::ptrdiff_t m_vCastTargets = 0xc8;
    }
    namespace CCitadel_Modifier_GuardianWard {
    }
    namespace CCitadel_Modifier_GuardianWard_VData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
      constexpr std::ptrdiff_t m_TrailParticle = 0x830;
    }
    namespace CCitadel_Modifier_Guiding_Arrow {
    }
    namespace CCitadel_Modifier_Guiding_ArrowVData {
      constexpr std::ptrdiff_t m_GlowEnemeyModifier = 0x750;
    }
    namespace CCitadel_Modifier_Guiding_Arrow_KillCheck {
    }
    namespace CCitadel_Modifier_Gunslinger_DemonCarbine {
      constexpr std::ptrdiff_t m_nBulletCount = 0xc0;
      constexpr std::ptrdiff_t m_flElapsedPct = 0xc4;
      constexpr std::ptrdiff_t m_nFullyChargedParticle = 0xc8;
    }
    namespace CCitadel_Modifier_Gunslinger_DemonCarbineVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x750;
      constexpr std::ptrdiff_t m_FullyChargedParticle = 0x830;
      constexpr std::ptrdiff_t m_strFullyCharged = 0x910;
      constexpr std::ptrdiff_t m_strShotSound = 0x920;
    }
    namespace CCitadel_Modifier_Gunslinger_DemonMark {
    }
    namespace CCitadel_Modifier_Gunslinger_DemonMarkVData {
      constexpr std::ptrdiff_t m_ProcEffect = 0x750;
      constexpr std::ptrdiff_t m_BuffModifier = 0x830;
      constexpr std::ptrdiff_t m_SlowModifier = 0x840;
      constexpr std::ptrdiff_t m_CasterMarkTriggerSound = 0x850;
      constexpr std::ptrdiff_t m_VictimMarkTriggerSound = 0x860;
    }
    namespace CCitadel_Modifier_Gunslinger_WallStunVData {
      constexpr std::ptrdiff_t m_ProcEffect = 0x750;
      constexpr std::ptrdiff_t m_StunModifier = 0x830;
      constexpr std::ptrdiff_t m_CasterMarkTriggerSound = 0x840;
    }
    namespace CCitadel_Modifier_HalloweenMask {
    }
    namespace CCitadel_Modifier_HalloweenMaskVData {
      constexpr std::ptrdiff_t m_nNumMasks = 0x750;
      constexpr std::ptrdiff_t m_HalloweenMask = 0x758;
    }
    namespace CCitadel_Modifier_HauntWatcher {
    }
    namespace CCitadel_Modifier_HauntWatcherVData {
      constexpr std::ptrdiff_t m_HauntDamageModifier = 0x780;
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x790;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x7a0;
    }
    namespace CCitadel_Modifier_Haunt_Damage {
    }
    namespace CCitadel_Modifier_Haunt_Damage_VData {
      constexpr std::ptrdiff_t m_sAfterburnParticle = 0x750;
    }
    namespace CCitadel_Modifier_Haze_StackingDamage {
      constexpr std::ptrdiff_t m_nTotalProcs = 0x240;
    }
    namespace CCitadel_Modifier_HeadhunterWatcher {
    }
    namespace CCitadel_Modifier_HeadshotBoosterWatcher {
    }
    namespace CCitadel_Modifier_HealBuff {
    }
    namespace CCitadel_Modifier_HealBuffVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
    }
    namespace CCitadel_Modifier_HealEntitiy {
    }
    namespace CCitadel_Modifier_HealEntitiyVData {
      constexpr std::ptrdiff_t m_flMaxHealthHeal = 0x750;
      constexpr std::ptrdiff_t m_flFlatHeal = 0x754;
    }
    namespace CCitadel_Modifier_HealingPulse_Tracker {
    }
    namespace CCitadel_Modifier_Healing_Disabled {
    }
    namespace CCitadel_Modifier_HealthSwap {
    }
    namespace CCitadel_Modifier_HealthSwapPrecast {
      constexpr std::ptrdiff_t m_hTarget = 0xc0;
    }
    namespace CCitadel_Modifier_HealthSwapPrecastVData {
      constexpr std::ptrdiff_t m_strTargetParticleEffect = 0x750;
      constexpr std::ptrdiff_t m_strTargetEnemyParticleEffect = 0x830;
      constexpr std::ptrdiff_t m_strTargetScreenParticleEffect = 0x910;
    }
    namespace CCitadel_Modifier_HealthSwapVData {
      constexpr std::ptrdiff_t m_BloodExchangeParticle = 0x750;
    }
    namespace CCitadel_Modifier_HeldItemPickupAura {
    }
    namespace CCitadel_Modifier_HeldItemPickupAuraVData {
      constexpr std::ptrdiff_t m_strFilterAbilityName = 0x888;
    }
    namespace CCitadel_Modifier_HeroGravity {
    }
    namespace CCitadel_Modifier_HeroGravityVData {
      constexpr std::ptrdiff_t m_flGravityChange = 0x750;
    }
    namespace CCitadel_Modifier_HeroRefresh {
    }
    namespace CCitadel_Modifier_HeroUpgradeBonuses {
      constexpr std::ptrdiff_t m_pOwningPlayer = 0xc0;
      constexpr std::ptrdiff_t m_flWeaponPower = 0xc8;
      constexpr std::ptrdiff_t m_flArmorPower = 0xcc;
      constexpr std::ptrdiff_t m_flTechPower = 0xd0;
    }
    namespace CCitadel_Modifier_Hero_Clone {
      constexpr std::ptrdiff_t m_bMimicOwner = 0xc0;
    }
    namespace CCitadel_Modifier_Hero_Testing_Damage_Aura {
    }
    namespace CCitadel_Modifier_Hero_Testing_Damage_AuraDebuff {
    }
    namespace CCitadel_Modifier_HideoutIntro {
      constexpr std::ptrdiff_t m_bPreIntroFinished = 0xc0;
    }
    namespace CCitadel_Modifier_HideoutIntroExit {
    }
    namespace CCitadel_Modifier_HideoutIntroVData {
      constexpr std::ptrdiff_t m_preIntroCamera = 0x750;
      constexpr std::ptrdiff_t m_introCamera = 0x760;
    }
    namespace CCitadel_Modifier_Hideout_Teleport {
      constexpr std::ptrdiff_t m_sDestMap = 0xc0;
      constexpr std::ptrdiff_t m_sDestLocString = 0xc8;
      constexpr std::ptrdiff_t m_sLandmarkName = 0xd0;
    }
    namespace CCitadel_Modifier_Hideout_TeleportVData {
    }
    namespace CCitadel_Modifier_HoldingGoldenIdol {
      constexpr std::ptrdiff_t m_iIdolParticle = 0x1c0;
      constexpr std::ptrdiff_t m_nGoldValue = 0x1c4;
      constexpr std::ptrdiff_t m_bRevealed = 0x1c8;
    }
    namespace CCitadel_Modifier_HollowPoint_Proc {
    }
    namespace CCitadel_Modifier_HollowPoint_ProcVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x880;
      constexpr std::ptrdiff_t m_ParticleModifier = 0x960;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x970;
    }
    namespace CCitadel_Modifier_HollowPoint_Stack {
    }
    namespace CCitadel_Modifier_HookSelf {
    }
    namespace CCitadel_Modifier_HookTarget {
      constexpr std::ptrdiff_t m_flCurrentVerticalSpeed = 0xe8;
      constexpr std::ptrdiff_t m_bSuccess = 0xec;
      constexpr std::ptrdiff_t m_bSameTeam = 0xed;
      constexpr std::ptrdiff_t m_bPlayedApproachingWhoosh = 0xee;
      constexpr std::ptrdiff_t m_flInitialTravelDistance = 0xf0;
      constexpr std::ptrdiff_t m_flStuckStartTime = 0xf4;
      constexpr std::ptrdiff_t m_vLastPos = 0xf8;
    }
    namespace CCitadel_Modifier_HookTargetVData {
      constexpr std::ptrdiff_t m_flApproachingWhooshAnticipationTime = 0x830;
      constexpr std::ptrdiff_t m_flCloseEnoughDistance = 0x834;
      constexpr std::ptrdiff_t m_flTossUpSpeed = 0x838;
      constexpr std::ptrdiff_t m_PullSpeedScaleCurve = 0x840;
      constexpr std::ptrdiff_t m_flReturnSpeed = 0x880;
      constexpr std::ptrdiff_t m_flReturnPositionForwardOffset = 0x884;
      constexpr std::ptrdiff_t m_flReturnSpeedFail = 0x888;
      constexpr std::ptrdiff_t m_flReturnStuckTime = 0x88c;
      constexpr std::ptrdiff_t m_flFailSafeMinTime = 0x890;
      constexpr std::ptrdiff_t m_flFailSafeDurationMult = 0x894;
      constexpr std::ptrdiff_t m_RestrictionModifier = 0x898;
      constexpr std::ptrdiff_t m_HookRetrieveParticle = 0x8a8;
      constexpr std::ptrdiff_t m_strApproachingWhooshSound = 0x988;
    }
    namespace CCitadel_Modifier_HornetMark {
    }
    namespace CCitadel_Modifier_HornetSnipeVData {
    }
    namespace CCitadel_Modifier_Hornet_Chain_Connection {
      constexpr std::ptrdiff_t m_vecOrigin = 0xc0;
    }
    namespace CCitadel_Modifier_Hornet_Snipe {
    }
    namespace CCitadel_Modifier_Hornet_Sting {
      constexpr std::ptrdiff_t m_flLastTickTime = 0xc0;
    }
    namespace CCitadel_Modifier_Hunger_Target {
    }
    namespace CCitadel_Modifier_Hunger_Target_VData {
      constexpr std::ptrdiff_t m_HungerTargetParticle = 0x750;
      constexpr std::ptrdiff_t m_HungerTargetPlayerParticle = 0x830;
      constexpr std::ptrdiff_t m_distanceToPitchRemap = 0x910;
    }
    namespace CCitadel_Modifier_HunterAuraTarget {
      constexpr std::ptrdiff_t m_flDebuffScale = 0x240;
    }
    namespace CCitadel_Modifier_IcarusWings {
      constexpr std::ptrdiff_t m_hBuffEffect = 0xc0;
    }
    namespace CCitadel_Modifier_IcarusWingsVData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
      constexpr std::ptrdiff_t m_strFlyingSound = 0x830;
    }
    namespace CCitadel_Modifier_IceBeam_Stacking_Slow {
      constexpr std::ptrdiff_t m_flCurrBuildup = 0x450;
    }
    namespace CCitadel_Modifier_IceDome {
      constexpr std::ptrdiff_t m_hBlocker = 0xc0;
      constexpr std::ptrdiff_t m_hFriendlyAura = 0xc4;
      constexpr std::ptrdiff_t m_hEnemyAura = 0xc8;
      constexpr std::ptrdiff_t m_nParticleIndex = 0xcc;
      constexpr std::ptrdiff_t m_flStartTime = 0xd0;
      constexpr std::ptrdiff_t m_vOrigin = 0x2d8;
    }
    namespace CCitadel_Modifier_IceDomeFriendly {
    }
    namespace CCitadel_Modifier_IceDomeFriendlyVData {
      constexpr std::ptrdiff_t m_PurgeCastParticle = 0x750;
      constexpr std::ptrdiff_t m_PurgeSound = 0x830;
    }
    namespace CCitadel_Modifier_IceDomeVData {
      constexpr std::ptrdiff_t m_BlockerModel = 0x750;
      constexpr std::ptrdiff_t m_DomeParticle = 0x830;
      constexpr std::ptrdiff_t m_FriendlyAuraModifier = 0x910;
      constexpr std::ptrdiff_t m_EnemyAuraModifier = 0x920;
      constexpr std::ptrdiff_t m_strDomeEndSound = 0x930;
      constexpr std::ptrdiff_t m_strTargetLoopingSound = 0x940;
    }
    namespace CCitadel_Modifier_IceDome_AuraModifierBase {
    }
    namespace CCitadel_Modifier_IceGrenadeDebuff {
    }
    namespace CCitadel_Modifier_IcePath {
      constexpr std::ptrdiff_t m_iShardCount = 0x5c0;
      constexpr std::ptrdiff_t m_vLastShardPosition = 0x5c4;
      constexpr std::ptrdiff_t m_hSurfShard = 0x5d0;
    }
    namespace CCitadel_Modifier_IcePath_Friendly {
    }
    namespace CCitadel_Modifier_IcePath_TechPowerLinger {
      constexpr std::ptrdiff_t m_nBonusSpirit = 0xc0;
    }
    namespace CCitadel_Modifier_IdolReturnTimer {
    }
    namespace CCitadel_Modifier_IdolTeamTimeout {
    }
    namespace CCitadel_Modifier_Idol_Return {
    }
    namespace CCitadel_Modifier_InFountain {
    }
    namespace CCitadel_Modifier_InHideoutMap {
    }
    namespace CCitadel_Modifier_InHideoutZone {
    }
    namespace CCitadel_Modifier_InMenu {
    }
    namespace CCitadel_Modifier_InMenuVData {
    }
    namespace CCitadel_Modifier_InShopTunnel {
    }
    namespace CCitadel_Modifier_IncendiaryDebuff {
    }
    namespace CCitadel_Modifier_Infested {
    }
    namespace CCitadel_Modifier_InfestedBuilding {
    }
    namespace CCitadel_Modifier_InfiniteMagazineActive {
    }
    namespace CCitadel_Modifier_Infuser {
    }
    namespace CCitadel_Modifier_Infuser_VData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
    }
    namespace CCitadel_Modifier_Inhibitor_Proc {
    }
    namespace CCitadel_Modifier_Inhibitor_ProcVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x790;
    }
    namespace CCitadel_Modifier_IntensifyingClip {
      constexpr std::ptrdiff_t m_LastThinkTime = 0x1c0;
      constexpr std::ptrdiff_t m_flSpinUpTime = 0x1c4;
    }
    namespace CCitadel_Modifier_Intimidated {
    }
    namespace CCitadel_Modifier_Intimidated_Debuff {
    }
    namespace CCitadel_Modifier_Intrinsic_Base {
    }
    namespace CCitadel_Modifier_Intrinsic_BaseVData {
    }
    namespace CCitadel_Modifier_Invis {
      constexpr std::ptrdiff_t m_bInvis = 0x440;
      constexpr std::ptrdiff_t m_flStartInvisTime = 0x444;
      constexpr std::ptrdiff_t m_bFullyInvis = 0x448;
      constexpr std::ptrdiff_t m_flLastDamageTaken = 0x44c;
      constexpr std::ptrdiff_t m_flLastSpotted = 0x450;
      constexpr std::ptrdiff_t m_nDetectionRangeRing = 0x454;
      constexpr std::ptrdiff_t m_nFullInvisEffect = 0x458;
    }
    namespace CCitadel_Modifier_InvisFading {
    }
    namespace CCitadel_Modifier_InvisVData {
      constexpr std::ptrdiff_t m_InvisLoopParticle = 0x750;
      constexpr std::ptrdiff_t m_InvisDetectRadiusParticle = 0x830;
      constexpr std::ptrdiff_t m_InvisRevealedParticle = 0x910;
      constexpr std::ptrdiff_t m_flDesatFactor = 0x9f0;
      constexpr std::ptrdiff_t m_strInvisRevealedSound = 0x9f8;
      constexpr std::ptrdiff_t m_bFadeInsteadOfRemoveOnBulletFire = 0xa08;
      constexpr std::ptrdiff_t m_bFadeInsteadOfRemoveOnAbilityUse = 0xa09;
      constexpr std::ptrdiff_t m_bBreakOnItemUse = 0xa0a;
      constexpr std::ptrdiff_t m_bFadeToVisibleAtEndOfDuration = 0xa0b;
      constexpr std::ptrdiff_t m_flMinCloak = 0xa0c;
      constexpr std::ptrdiff_t m_flMaxCloak = 0xa10;
    }
    namespace CCitadel_Modifier_ItemPickupAura {
    }
    namespace CCitadel_Modifier_ItemPickupAuraTarget {
    }
    namespace CCitadel_Modifier_ItemPickupAuraVData {
      constexpr std::ptrdiff_t m_IsFrozenParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_ItemPickupTimer {
    }
    namespace CCitadel_Modifier_ItemPunchable_Gold {
    }
    namespace CCitadel_Modifier_ItemPunchable_GoldVData {
      constexpr std::ptrdiff_t m_flPhysicsRadius = 0x7a8;
      constexpr std::ptrdiff_t m_sHitSound = 0x7b0;
    }
    namespace CCitadel_Modifier_ItemPunchable_Rejuv {
    }
    namespace CCitadel_Modifier_ItemPunchable_RejuvVData {
      constexpr std::ptrdiff_t m_iRejuvBossKill01 = 0x750;
      constexpr std::ptrdiff_t m_iRejuvBossKill02 = 0x754;
      constexpr std::ptrdiff_t m_flPhysicsRadius = 0x758;
      constexpr std::ptrdiff_t m_flParryCheckRadius = 0x75c;
      constexpr std::ptrdiff_t m_flMaxDistForHeal = 0x760;
      constexpr std::ptrdiff_t m_IsDroppingParticle = 0x768;
      constexpr std::ptrdiff_t m_IsPunchableParticle = 0x848;
      constexpr std::ptrdiff_t m_IsFrozenParticle = 0x928;
      constexpr std::ptrdiff_t m_DamagedParticle = 0xa08;
      constexpr std::ptrdiff_t m_AoEHealParticle = 0xae8;
      constexpr std::ptrdiff_t m_NearRejuvAuraModifier = 0xbc8;
      constexpr std::ptrdiff_t m_sHitSound = 0xbd8;
    }
    namespace CCitadel_Modifier_ItemWalkBack {
    }
    namespace CCitadel_Modifier_ItemWalkBackVData {
      constexpr std::ptrdiff_t m_IdleParticle = 0x750;
      constexpr std::ptrdiff_t m_RunningParticle = 0x830;
      constexpr std::ptrdiff_t m_BiasEffectPositive = 0x910;
      constexpr std::ptrdiff_t m_BiasEffectNegative = 0x9f0;
      constexpr std::ptrdiff_t m_flStopDistance = 0xad0;
      constexpr std::ptrdiff_t m_flMaxSpeedDistance = 0xad4;
      constexpr std::ptrdiff_t m_flSlowSpeed = 0xad8;
      constexpr std::ptrdiff_t m_flFastSpeed = 0xadc;
      constexpr std::ptrdiff_t m_flVerticalOffset = 0xae0;
      constexpr std::ptrdiff_t m_flTolerance = 0xae4;
      constexpr std::ptrdiff_t m_flRepathTime = 0xae8;
      constexpr std::ptrdiff_t m_flAutoRunTime = 0xaec;
      constexpr std::ptrdiff_t m_flTimeToStartAutoRun = 0xaf0;
      constexpr std::ptrdiff_t m_flWaitTimeDistance = 0xaf4;
      constexpr std::ptrdiff_t m_flWaitTimeLimit = 0xaf8;
      constexpr std::ptrdiff_t m_flCheckPlayerRate = 0xafc;
    }
    namespace CCitadel_Modifier_Item_AOESilence {
      constexpr std::ptrdiff_t m_flStartRadius = 0x110;
      constexpr std::ptrdiff_t m_flEndRadius = 0x114;
      constexpr std::ptrdiff_t m_flSpreadDuration = 0x118;
    }
    namespace CCitadel_Modifier_Item_AOESilence_Target {
    }
    namespace CCitadel_Modifier_Item_Bleeding_Bullets_Active {
    }
    namespace CCitadel_Modifier_Item_Bleeding_Bullets_ActiveVData {
      constexpr std::ptrdiff_t m_BleedModifier = 0x780;
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x790;
      constexpr std::ptrdiff_t m_BulletImpactParticle = 0x7a0;
    }
    namespace CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime {
      constexpr std::ptrdiff_t m_flLastTickTime = 0xc0;
    }
    namespace CCitadel_Modifier_Item_HealthNova {
      constexpr std::ptrdiff_t m_flAmountPerSecond = 0xc0;
    }
    namespace CCitadel_Modifier_Item_SmokeBomb_PreCast {
    }
    namespace CCitadel_Modifier_Kelvin_Frozen {
    }
    namespace CCitadel_Modifier_Killing_Blow_Glow {
    }
    namespace CCitadel_Modifier_Killing_Blow_GlowVData {
      constexpr std::ptrdiff_t m_ShivOnlyDeathStatus = 0x750;
      constexpr std::ptrdiff_t m_ShivOnlyDeathTrail = 0x830;
      constexpr std::ptrdiff_t m_ShivOnlyExecuteHeart = 0x910;
      constexpr std::ptrdiff_t m_strShivOnlyActivateSound = 0x9f0;
    }
    namespace CCitadel_Modifier_Knockback {
      constexpr std::ptrdiff_t m_flForce = 0xc8;
      constexpr std::ptrdiff_t m_bKnockedBack = 0xcc;
    }
    namespace CCitadel_Modifier_KnockbackAura {
    }
    namespace CCitadel_Modifier_Knockdown {
      constexpr std::ptrdiff_t m_angStunAngles = 0xc8;
      constexpr std::ptrdiff_t m_ePreferredKnockdownType = 0xd4;
      constexpr std::ptrdiff_t m_bForceTakePreferred = 0xd8;
      constexpr std::ptrdiff_t m_flGetUpAnimTime = 0xdc;
      constexpr std::ptrdiff_t m_bGetUpCamSeqStarted = 0xe0;
      constexpr std::ptrdiff_t m_flOnGroundDuration = 0xe4;
      constexpr std::ptrdiff_t m_satIndex = 0xe8;
    }
    namespace CCitadel_Modifier_LashGrappleEnemy_Debuff {
      constexpr std::ptrdiff_t m_vCrashDir = 0xc8;
      constexpr std::ptrdiff_t m_vLiftTarget = 0xd4;
      constexpr std::ptrdiff_t m_flStartTime = 0xe0;
      constexpr std::ptrdiff_t m_bCrashingDown = 0xe4;
    }
    namespace CCitadel_Modifier_LashGrappleTarget {
    }
    namespace CCitadel_Modifier_Lash_Flog_Debuff {
    }
    namespace CCitadel_Modifier_LearningHeroAbility {
      constexpr std::ptrdiff_t m_sDescription = 0xc0;
    }
    namespace CCitadel_Modifier_LifeDrain {
    }
    namespace CCitadel_Modifier_LifeDrainVData {
      constexpr std::ptrdiff_t m_SilenceModifier = 0x750;
      constexpr std::ptrdiff_t m_DrainParticle = 0x760;
    }
    namespace CCitadel_Modifier_LifestrikeGauntlets {
    }
    namespace CCitadel_Modifier_LifestrikeGauntlets_VData {
      constexpr std::ptrdiff_t m_SwingParticle = 0x780;
      constexpr std::ptrdiff_t m_HitParticle = 0x860;
    }
    namespace CCitadel_Modifier_LightningBall {
      constexpr std::ptrdiff_t m_hProjectile = 0x240;
    }
    namespace CCitadel_Modifier_LightningBallVData {
      constexpr std::ptrdiff_t m_ZapParticle = 0x750;
      constexpr std::ptrdiff_t m_TargetScreenParticleEffect = 0x830;
    }
    namespace CCitadel_Modifier_LightningBullet {
    }
    namespace CCitadel_Modifier_LightningStrikeArea {
    }
    namespace CCitadel_Modifier_LightningStrikeAreaVData {
      constexpr std::ptrdiff_t m_GroundParticle = 0x750;
      constexpr std::ptrdiff_t m_StrikeParticle = 0x830;
      constexpr std::ptrdiff_t m_GroundParticleFriendly = 0x910;
      constexpr std::ptrdiff_t m_StrikeParticleFriendly = 0x9f0;
      constexpr std::ptrdiff_t m_flHeight = 0xad0;
    }
    namespace CCitadel_Modifier_LingeringAssist {
    }
    namespace CCitadel_Modifier_Link {
      constexpr std::ptrdiff_t m_hPortalToCaster = 0xc0;
      constexpr std::ptrdiff_t m_flPortalStartTime = 0xc4;
      constexpr std::ptrdiff_t m_flPortalEndTime = 0xc8;
      constexpr std::ptrdiff_t m_sCasterAttachment = 0xd0;
      constexpr std::ptrdiff_t m_sParentAttachment = 0xd8;
    }
    namespace CCitadel_Modifier_LinkVData {
      constexpr std::ptrdiff_t m_LinkEffect = 0x750;
    }
    namespace CCitadel_Modifier_LockDown_Debuff {
      constexpr std::ptrdiff_t m_vEscapeTarget = 0x3c0;
    }
    namespace CCitadel_Modifier_Lockdown_BulletResist {
    }
    namespace CCitadel_Modifier_LongRangeSlowingTech_Proc {
    }
    namespace CCitadel_Modifier_LongRangeSlowingTech_ProcVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
    }
    namespace CCitadel_Modifier_Low_Health_Glow {
      constexpr std::ptrdiff_t m_nFXIndex = 0xc0;
    }
    namespace CCitadel_Modifier_Low_Health_GlowVData {
      constexpr std::ptrdiff_t m_GlowParticle = 0x750;
    }
    namespace CCitadel_Modifier_LuggageDrag {
      constexpr std::ptrdiff_t m_flRelativeDist = 0xc0;
      constexpr std::ptrdiff_t m_flCartSpeed = 0xc4;
      constexpr std::ptrdiff_t m_qRelativeOffset = 0xc8;
      constexpr std::ptrdiff_t m_hDragger = 0xd4;
      constexpr std::ptrdiff_t m_hDummyForCamera = 0xd8;
    }
    namespace CCitadel_Modifier_LuggageDragVData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x750;
      constexpr std::ptrdiff_t m_flForwardOffset = 0x760;
      constexpr std::ptrdiff_t m_flVerticalOffset = 0x764;
      constexpr std::ptrdiff_t m_flDragDistance = 0x768;
      constexpr std::ptrdiff_t m_flForceDistScale = 0x76c;
      constexpr std::ptrdiff_t m_flWallStunLookAheadDist = 0x770;
    }
    namespace CCitadel_Modifier_LuminousStrikeBuff {
      constexpr std::ptrdiff_t m_nPowerupParticle = 0xc0;
    }
    namespace CCitadel_Modifier_LuminousStrikeBuffVData {
      constexpr std::ptrdiff_t m_strBuffReceivedSound = 0x750;
      constexpr std::ptrdiff_t m_strMaxBuffReceivedSound = 0x760;
      constexpr std::ptrdiff_t m_BuffParticle = 0x770;
      constexpr std::ptrdiff_t m_IncomingParticle = 0x850;
      constexpr std::ptrdiff_t m_nStackCountForMaxParticle = 0x930;
    }
    namespace CCitadel_Modifier_LurkersAmbush_Invis {
      constexpr std::ptrdiff_t m_mapStartLookTime = 0x460;
      constexpr std::ptrdiff_t m_flStartSpotted = 0x488;
    }
    namespace CCitadel_Modifier_LurkersAmbush_InvisVData {
      constexpr std::ptrdiff_t m_flMaxCameraAngleForSeeing = 0xa18;
      constexpr std::ptrdiff_t m_flMaxDistanceForSeeing = 0xa1c;
      constexpr std::ptrdiff_t m_flInvisBias = 0xa20;
      constexpr std::ptrdiff_t m_flSpottedMinTimeToStart = 0xa24;
    }
    namespace CCitadel_Modifier_MageWalk {
      constexpr std::ptrdiff_t m_bIsFakeout = 0xc0;
      constexpr std::ptrdiff_t m_bTeleported = 0xc1;
      constexpr std::ptrdiff_t m_particleStart = 0xc4;
      constexpr std::ptrdiff_t m_particleEnd = 0xc8;
      constexpr std::ptrdiff_t m_particleTrail = 0xcc;
      constexpr std::ptrdiff_t m_vecEndLocation = 0xd0;
      constexpr std::ptrdiff_t m_vecStartPosition = 0xdc;
      constexpr std::ptrdiff_t m_vecEndLocationCaster = 0xe8;
    }
    namespace CCitadel_Modifier_MageWalkVData {
      constexpr std::ptrdiff_t m_TeleportStartParticle = 0x750;
      constexpr std::ptrdiff_t m_TeleportEndParticle = 0x830;
      constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x910;
      constexpr std::ptrdiff_t m_flPreTeleportDuration = 0x9f0;
      constexpr std::ptrdiff_t m_strAmbientLoopingLocalPlayerSound = 0x9f8;
    }
    namespace CCitadel_Modifier_MagicBeam {
      constexpr std::ptrdiff_t m_hBlocker = 0xc0;
      constexpr std::ptrdiff_t m_nParticleIndex = 0xc4;
      constexpr std::ptrdiff_t m_flStartTime = 0xc8;
      constexpr std::ptrdiff_t m_qAngle = 0x2d0;
      constexpr std::ptrdiff_t m_vOrigin = 0x2dc;
    }
    namespace CCitadel_Modifier_MagicBeamVData {
      constexpr std::ptrdiff_t m_BlockerModel = 0x750;
      constexpr std::ptrdiff_t m_BeamParticle = 0x830;
      constexpr std::ptrdiff_t m_strBeamEndSound = 0x910;
      constexpr std::ptrdiff_t m_strTargetLoopingSound = 0x920;
    }
    namespace CCitadel_Modifier_MagicCarpet_Summon {
    }
    namespace CCitadel_Modifier_MagicCarpet_SummonVData {
      constexpr std::ptrdiff_t m_SummonParticle = 0x750;
    }
    namespace CCitadel_Modifier_MagicClarityWatcher {
    }
    namespace CCitadel_Modifier_MagicClarityWatcherVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
    }
    namespace CCitadel_Modifier_MagicShield_SpiritBuff {
      constexpr std::ptrdiff_t m_bHasHealthForBonuses = 0xc0;
    }
    namespace CCitadel_Modifier_MagicShock_Proc {
    }
    namespace CCitadel_Modifier_MagicShock_ProcVData {
      constexpr std::ptrdiff_t m_ProcParticle = 0x780;
      constexpr std::ptrdiff_t m_hDamageTrackModifier = 0x860;
    }
    namespace CCitadel_Modifier_MagicShock_Proc_ImmuneWatcher {
      constexpr std::ptrdiff_t m_iAbilityID = 0xc0;
    }
    namespace CCitadel_Modifier_MagicStormWatcher {
    }
    namespace CCitadel_Modifier_MagicStormWatcherVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
    }
    namespace CCitadel_Modifier_Magic_Clarity_Buff {
      constexpr std::ptrdiff_t m_bAbilityLocked = 0x140;
    }
    namespace CCitadel_Modifier_Magic_Clarity_BuffVData {
      constexpr std::ptrdiff_t m_VisualModifier = 0x750;
    }
    namespace CCitadel_Modifier_Magician_AnimalHex_HexArea {
    }
    namespace CCitadel_Modifier_Magician_AnimalHex_HexAreaVData {
      constexpr std::ptrdiff_t m_HexModifier = 0x750;
      constexpr std::ptrdiff_t m_AreaWarningEffect = 0x760;
      constexpr std::ptrdiff_t m_ExplodeEffect = 0x840;
      constexpr std::ptrdiff_t m_strArmingSound = 0x920;
      constexpr std::ptrdiff_t m_strArmedSound = 0x930;
      constexpr std::ptrdiff_t m_strLoopingSound = 0x940;
      constexpr std::ptrdiff_t m_strHitSound = 0x950;
    }
    namespace CCitadel_Modifier_MedicBullets {
    }
    namespace CCitadel_Modifier_MedicBulletsVData {
      constexpr std::ptrdiff_t m_ImpactParticle = 0x880;
      constexpr std::ptrdiff_t m_ProcSound = 0x960;
    }
    namespace CCitadel_Modifier_MeleeCharge {
    }
    namespace CCitadel_Modifier_MeleeCharge_VData {
      constexpr std::ptrdiff_t m_SwingParticle = 0x780;
      constexpr std::ptrdiff_t m_HitParticle = 0x860;
      constexpr std::ptrdiff_t m_ReloadVisualModifier = 0x940;
      constexpr std::ptrdiff_t m_AmmoAddedVisualModifier = 0x950;
    }
    namespace CCitadel_Modifier_MeleeDamageOnly {
    }
    namespace CCitadel_Modifier_MeleeTarget {
    }
    namespace CCitadel_Modifier_Metal {
    }
    namespace CCitadel_Modifier_MetalSkin {
    }
    namespace CCitadel_Modifier_MetalSkinVData {
      constexpr std::ptrdiff_t m_BuffStartParticle = 0x750;
      constexpr std::ptrdiff_t m_BuffEndParticle = 0x830;
      constexpr std::ptrdiff_t m_strHitProcSound = 0x910;
    }
    namespace CCitadel_Modifier_MidBossAggroEnemy {
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim {
      constexpr std::ptrdiff_t m_flLastProcTime = 0xd0;
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x750;
      constexpr std::ptrdiff_t m_DebuffStatusPlayerParticle = 0x760;
      constexpr std::ptrdiff_t m_DebuffStatusVictimParticle = 0x840;
      constexpr std::ptrdiff_t m_DebuffStatusNPCParticle = 0x920;
      constexpr std::ptrdiff_t m_StackDamageParticle = 0xa00;
      constexpr std::ptrdiff_t m_StackReadyParticle = 0xae0;
      constexpr std::ptrdiff_t m_StackAppliedParticle = 0xbc0;
      constexpr std::ptrdiff_t m_ConsumeMaxStacksSound = 0xca0;
      constexpr std::ptrdiff_t m_ConsumeMaxStacksHeroSound = 0xcb0;
      constexpr std::ptrdiff_t m_ApplyStackSound = 0xcc0;
      constexpr std::ptrdiff_t m_ApplyStackNPCSound = 0xcd0;
      constexpr std::ptrdiff_t m_StunSound = 0xce0;
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_Proc {
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_ProcReady {
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_ProcReady_VData {
      constexpr std::ptrdiff_t m_ProcReadyParticle = 0x750;
      constexpr std::ptrdiff_t m_strProcReadySound = 0x830;
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_Proc_VData {
      constexpr std::ptrdiff_t m_bRollOnceForAllBulletsInAShot = 0x750;
      constexpr std::ptrdiff_t m_flMaxBulletsToProcInShot = 0x754;
      constexpr std::ptrdiff_t m_bCanProcMultipleTimesFromSameShot = 0x758;
      constexpr std::ptrdiff_t m_bRequiresTargetFilter = 0x759;
      constexpr std::ptrdiff_t m_ProcReadyModifier = 0x760;
      constexpr std::ptrdiff_t m_PassiveVictimModifier = 0x770;
      constexpr std::ptrdiff_t m_ProcReadyParticle = 0x780;
      constexpr std::ptrdiff_t m_TracerAdditionParticle = 0x860;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x940;
      constexpr std::ptrdiff_t m_OnBulletRolledProcSound = 0xa20;
      constexpr std::ptrdiff_t m_ProcSound = 0xa30;
      constexpr std::ptrdiff_t m_ExplodeSound = 0xa40;
    }
    namespace CCitadel_Modifier_MobileResupply {
    }
    namespace CCitadel_Modifier_MobileResupplyAura {
    }
    namespace CCitadel_Modifier_MobileResupplyVData {
      constexpr std::ptrdiff_t m_AuraBuffParticle = 0x750;
    }
    namespace CCitadel_Modifier_ModDisruptor {
    }
    namespace CCitadel_Modifier_Muted {
    }
    namespace CCitadel_Modifier_MutedVData {
      constexpr std::ptrdiff_t m_MutedParticle = 0x750;
      constexpr std::ptrdiff_t m_MutedPlayerParticle = 0x830;
      constexpr std::ptrdiff_t m_MutedStatusParticle = 0x910;
    }
    namespace CCitadel_Modifier_MysticReverbExplosion {
      constexpr std::ptrdiff_t m_hRingEffect = 0xc0;
    }
    namespace CCitadel_Modifier_MysticReverbExplosionVData {
      constexpr std::ptrdiff_t m_DamageParticle = 0x750;
      constexpr std::ptrdiff_t m_SlowModifier = 0x830;
    }
    namespace CCitadel_Modifier_MysticReverb_Proc {
    }
    namespace CCitadel_Modifier_MysticReverb_ProcVData {
      constexpr std::ptrdiff_t m_ExplosionModifier = 0x780;
      constexpr std::ptrdiff_t m_SlowModifier = 0x790;
    }
    namespace CCitadel_Modifier_MysticShot {
      constexpr std::ptrdiff_t m_BuffedShotId = 0x318;
    }
    namespace CCitadel_Modifier_MysticShotVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x880;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x960;
    }
    namespace CCitadel_Modifier_MysticalPianoAura {
      constexpr std::ptrdiff_t m_hRingEffect = 0x110;
      constexpr std::ptrdiff_t m_hGroundEffect = 0x114;
    }
    namespace CCitadel_Modifier_MysticalPianoVData {
      constexpr std::ptrdiff_t m_StunModifier = 0x7a8;
      constexpr std::ptrdiff_t m_DazeModifier = 0x7b8;
      constexpr std::ptrdiff_t m_HitParticle = 0x7c8;
    }
    namespace CCitadel_Modifier_NPC_OOC_Regen {
    }
    namespace CCitadel_Modifier_NPC_OOC_RegenVData {
      constexpr std::ptrdiff_t m_flOOCRegen = 0x750;
      constexpr std::ptrdiff_t m_flTimeToOOC = 0x754;
    }
    namespace CCitadel_Modifier_Nano_Bounty {
    }
    namespace CCitadel_Modifier_Nano_CatForm {
      constexpr std::ptrdiff_t m_ModelChange = 0xc0;
    }
    namespace CCitadel_Modifier_Nano_CatFormVData {
      constexpr std::ptrdiff_t m_ModelChange = 0x750;
      constexpr std::ptrdiff_t m_flModelScale = 0x838;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x840;
      constexpr std::ptrdiff_t m_ImpactSound = 0x850;
    }
    namespace CCitadel_Modifier_Nano_DamageAmp {
      constexpr std::ptrdiff_t m_flDamageAmp = 0xc0;
    }
    namespace CCitadel_Modifier_Nano_Pounce_Self {
    }
    namespace CCitadel_Modifier_Nano_PredatoryStatue {
      constexpr std::ptrdiff_t m_GameTimeEnabled = 0x118;
      constexpr std::ptrdiff_t m_LastCatInAreaTime = 0x11c;
      constexpr std::ptrdiff_t m_bIsAttacking = 0x120;
      constexpr std::ptrdiff_t m_iTargetID = 0x124;
    }
    namespace CCitadel_Modifier_Nano_PredatoryStatueTarget {
    }
    namespace CCitadel_Modifier_Nano_PredatoryStatueTargetVData {
      constexpr std::ptrdiff_t m_strLaserHitSound = 0x750;
      constexpr std::ptrdiff_t m_strLaserStartSound = 0x760;
      constexpr std::ptrdiff_t m_strLaserLoopSound = 0x770;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
    }
    namespace CCitadel_Modifier_Nano_PredatoryStatueVData {
      constexpr std::ptrdiff_t m_AOEParticle = 0x750;
      constexpr std::ptrdiff_t m_EnabledParticle = 0x830;
      constexpr std::ptrdiff_t m_DrainParticle = 0x910;
      constexpr std::ptrdiff_t m_strEnabledSound = 0x9f0;
      constexpr std::ptrdiff_t m_strEnabledLoopSound = 0xa00;
      constexpr std::ptrdiff_t m_strDisabledSound = 0xa10;
      constexpr std::ptrdiff_t m_strLaserHitSound = 0xa20;
      constexpr std::ptrdiff_t m_strLaserStartSound = 0xa30;
      constexpr std::ptrdiff_t m_strLaserLoopSound = 0xa40;
      constexpr std::ptrdiff_t m_TargetModifier = 0xa50;
      constexpr std::ptrdiff_t m_RevealModifier = 0xa60;
      constexpr std::ptrdiff_t m_StatueInvis = 0xa70;
      constexpr std::ptrdiff_t m_flNewTargetAttackTime = 0xa80;
      constexpr std::ptrdiff_t m_flMinRevealTime = 0xa84;
      constexpr std::ptrdiff_t m_flMinDebuffTime = 0xa88;
    }
    namespace CCitadel_Modifier_Nano_Shadow_Debuff {
    }
    namespace CCitadel_Modifier_NearDeathFX {
    }
    namespace CCitadel_Modifier_NearDeathFXVData {
      constexpr std::ptrdiff_t m_EnemyNearDeathParticle = 0x750;
      constexpr std::ptrdiff_t m_FriendlyNearDeathParticle = 0x830;
      constexpr std::ptrdiff_t m_sSelfDestructStart = 0x910;
      constexpr std::ptrdiff_t m_sSelfDestructEnd = 0x920;
    }
    namespace CCitadel_Modifier_Near_Climbable_Rope {
    }
    namespace CCitadel_Modifier_Near_Climbable_RopeVData {
      constexpr std::ptrdiff_t m_flEnableStateTime = 0x750;
    }
    namespace CCitadel_Modifier_NearbyAlliesResistVData {
      constexpr std::ptrdiff_t m_flNearbyAllyResistRange = 0x750;
      constexpr std::ptrdiff_t m_flResistValues = 0x758;
    }
    namespace CCitadel_Modifier_NearbyAllyResist {
    }
    namespace CCitadel_Modifier_NearbyEnemyBoostVData {
      constexpr std::ptrdiff_t m_BerserkerSound = 0x750;
      constexpr std::ptrdiff_t m_BuffModifier = 0x760;
    }
    namespace CCitadel_Modifier_NearbyEnemyResist {
    }
    namespace CCitadel_Modifier_NearbyEnemyResistVData {
      constexpr std::ptrdiff_t m_flNearbyEnemyResistRange = 0x750;
      constexpr std::ptrdiff_t m_flResistValues = 0x758;
    }
    namespace CCitadel_Modifier_Nearby_Enemy_Boost {
    }
    namespace CCitadel_Modifier_Necro_Ghoul_Explode {
    }
    namespace CCitadel_Modifier_Necro_Ghoul_ExplodeVData {
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x750;
      constexpr std::ptrdiff_t m_WarningParticle = 0x830;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x910;
      constexpr std::ptrdiff_t m_WarningSound = 0x920;
      constexpr std::ptrdiff_t m_SlowModifier = 0x930;
    }
    namespace CCitadel_Modifier_Necro_Gravestone_Buff {
    }
    namespace CCitadel_Modifier_Necro_Gravestone_BuffVData {
      constexpr std::ptrdiff_t m_WeaponBuffParticle = 0x750;
    }
    namespace CCitadel_Modifier_Necro_GunSearching {
      constexpr std::ptrdiff_t m_pSearchingParticle = 0xc0;
    }
    namespace CCitadel_Modifier_Necro_GunTether {
    }
    namespace CCitadel_Modifier_Necro_GunTetherVData {
      constexpr std::ptrdiff_t m_TetherParticle = 0x750;
    }
    namespace CCitadel_Modifier_Necro_HauntingSkull_Area {
      constexpr std::ptrdiff_t m_vecDeployedSkulls = 0xc8;
    }
    namespace CCitadel_Modifier_Necro_HauntingSkull_AreaVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_SlowModifier = 0x760;
      constexpr std::ptrdiff_t m_PreviewRingParticle = 0x770;
      constexpr std::ptrdiff_t m_AreaEffect = 0x850;
      constexpr std::ptrdiff_t m_strArmingSound = 0x930;
      constexpr std::ptrdiff_t m_strArmedSound = 0x940;
      constexpr std::ptrdiff_t m_strLoopingSound = 0x950;
      constexpr std::ptrdiff_t m_strHitSound = 0x960;
      constexpr std::ptrdiff_t m_flInitialNormalInfluence = 0x970;
      constexpr std::ptrdiff_t m_flInitialRandomVariance = 0x974;
      constexpr std::ptrdiff_t m_flSpawnPositionNavMeshSearchRange = 0x978;
    }
    namespace CCitadel_Modifier_Necro_HauntingSpirits {
    }
    namespace CCitadel_Modifier_Necro_HauntingSpiritsVData {
      constexpr std::ptrdiff_t m_BlockParticle = 0x750;
      constexpr std::ptrdiff_t m_strTargetFoundSound = 0x830;
    }
    namespace CCitadel_Modifier_Necro_RampUp {
      constexpr std::ptrdiff_t m_flCurrBuildup = 0xd4;
      constexpr std::ptrdiff_t m_tLastTetherTime = 0x560;
    }
    namespace CCitadel_Modifier_Necro_RampUpVData {
      constexpr std::ptrdiff_t m_strProcSound = 0x768;
    }
    namespace CCitadel_Modifier_Necro_SpawnZombies_Area {
      constexpr std::ptrdiff_t m_vecSpawnedZombies = 0xe0;
    }
    namespace CCitadel_Modifier_Necro_SpawnZombies_AreaVData {
      constexpr std::ptrdiff_t m_SummonParticle = 0x750;
      constexpr std::ptrdiff_t m_SummonModifier = 0x830;
      constexpr std::ptrdiff_t m_SummonDecayModifier = 0x840;
      constexpr std::ptrdiff_t m_SpawningInModifier = 0x850;
      constexpr std::ptrdiff_t m_bDebug = 0x860;
      constexpr std::ptrdiff_t m_flRandomSpawnOffsetPerSummon = 0x864;
      constexpr std::ptrdiff_t m_flZombieSpawnVerticalOffset = 0x868;
      constexpr std::ptrdiff_t m_flZombieSpawnForwardOffset = 0x86c;
      constexpr std::ptrdiff_t m_flZombieSpawnNavMeshSearchDistance = 0x870;
      constexpr std::ptrdiff_t m_flForwardWalkDistance = 0x874;
      constexpr std::ptrdiff_t m_flWalkDestinationRandomness = 0x878;
      constexpr std::ptrdiff_t m_flSpawningInTime = 0x87c;
    }
    namespace CCitadel_Modifier_Necro_StackingDebuff {
    }
    namespace CCitadel_Modifier_Necro_SummonDecay {
    }
    namespace CCitadel_Modifier_Necro_WallDebuff {
    }
    namespace CCitadel_Modifier_Necro_WallDebuffVData {
    }
    namespace CCitadel_Modifier_Necro_WallTether {
      constexpr std::ptrdiff_t m_vecOrigin = 0xc0;
    }
    namespace CCitadel_Modifier_NeutralDamageGrowth {
    }
    namespace CCitadel_Modifier_NeutralDamageGrowthVData {
      constexpr std::ptrdiff_t m_flDamageGrowthPctPerMin = 0x750;
    }
    namespace CCitadel_Modifier_Neutral_Debuff_Pushback {
    }
    namespace CCitadel_Modifier_Neutral_Debuff_PushbackVData {
      constexpr std::ptrdiff_t m_flPushSpeed = 0x750;
      constexpr std::ptrdiff_t m_flPushRange = 0x754;
    }
    namespace CCitadel_Modifier_Nikuman {
    }
    namespace CCitadel_Modifier_NoCatapult {
    }
    namespace CCitadel_Modifier_NonPlayerCamera {
    }
    namespace CCitadel_Modifier_NullificationAuraAOE {
      constexpr std::ptrdiff_t m_hAOEEffect = 0x340;
    }
    namespace CCitadel_Modifier_NullificationAuraAOE_VData {
      constexpr std::ptrdiff_t m_TargetModifier = 0x750;
      constexpr std::ptrdiff_t m_PurgeCastParticle = 0x760;
      constexpr std::ptrdiff_t m_PurgeSound = 0x840;
    }
    namespace CCitadel_Modifier_Objective_BulletReistVData {
      constexpr std::ptrdiff_t m_BulletResist = 0x750;
      constexpr std::ptrdiff_t m_BulletResistReductionPerHero = 0x754;
    }
    namespace CCitadel_Modifier_Objective_Bullet_Resist {
    }
    namespace CCitadel_Modifier_Objective_HealthGrowth {
    }
    namespace CCitadel_Modifier_Objective_HealthGrowthVData {
      constexpr std::ptrdiff_t m_iGrowthPerMinute = 0x750;
      constexpr std::ptrdiff_t m_flTickRate = 0x754;
      constexpr std::ptrdiff_t m_iGrowthStartTimeInMinutes = 0x758;
    }
    namespace CCitadel_Modifier_Objective_Regen {
    }
    namespace CCitadel_Modifier_Objective_RegenVData {
      constexpr std::ptrdiff_t m_flOutOfCombatHealthRegen = 0x750;
      constexpr std::ptrdiff_t m_flOutOfCombatRegenDelay = 0x754;
    }
    namespace CCitadel_Modifier_Obscured {
      constexpr std::ptrdiff_t m_flStartObscuredAmount = 0xc0;
      constexpr std::ptrdiff_t m_AmbientParticles = 0xc8;
    }
    namespace CCitadel_Modifier_OneVsOne {
    }
    namespace CCitadel_Modifier_Out_Of_Combat_Health_Regen {
      constexpr std::ptrdiff_t m_LastDamageTaken = 0x1c0;
    }
    namespace CCitadel_Modifier_ParriedStun {
    }
    namespace CCitadel_Modifier_Parry {
    }
    namespace CCitadel_Modifier_Passive_Camouflage {
      constexpr std::ptrdiff_t m_flRate = 0xc0;
      constexpr std::ptrdiff_t m_vLastPosition = 0xc4;
    }
    namespace CCitadel_Modifier_Passive_Cloak {
    }
    namespace CCitadel_Modifier_Passive_CloakVData {
      constexpr std::ptrdiff_t m_InvisModifier = 0x750;
    }
    namespace CCitadel_Modifier_PatronsBlessingAura {
    }
    namespace CCitadel_Modifier_PatronsBlessingEnemyTracker {
    }
    namespace CCitadel_Modifier_PatronsBlessingEnemyTrackerVData {
      constexpr std::ptrdiff_t m_ProcNotificationModifier = 0x750;
      constexpr std::ptrdiff_t m_HealParticle = 0x760;
      constexpr std::ptrdiff_t m_strHealSound = 0x840;
    }
    namespace CCitadel_Modifier_PatronsBlessingProcWatcher {
    }
    namespace CCitadel_Modifier_PatronsBlessingProcWatcherVData {
      constexpr std::ptrdiff_t m_DamageTracker = 0x780;
    }
    namespace CCitadel_Modifier_PatronsBlessingTarget {
    }
    namespace CCitadel_Modifier_PerchedPredatorDrag {
      constexpr std::ptrdiff_t m_qRelativeOffset = 0x1c0;
      constexpr std::ptrdiff_t m_flRelativeDist = 0x1cc;
      constexpr std::ptrdiff_t m_vecOffsetDir = 0x1d0;
      constexpr std::ptrdiff_t m_hFollowEnt = 0x1dc;
    }
    namespace CCitadel_Modifier_PermanentPickup {
    }
    namespace CCitadel_Modifier_PermanentPickupVData {
    }
    namespace CCitadel_Modifier_Petrify {
    }
    namespace CCitadel_Modifier_PetrifyVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x830;
      constexpr std::ptrdiff_t m_BuffStartParticle = 0x910;
      constexpr std::ptrdiff_t m_BuffEndParticle = 0x9f0;
      constexpr std::ptrdiff_t m_PostSleepModifier = 0xad0;
    }
    namespace CCitadel_Modifier_Pillar {
      constexpr std::ptrdiff_t flAccumulatedDamage = 0xc8;
    }
    namespace CCitadel_Modifier_PillarVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x830;
      constexpr std::ptrdiff_t m_BuffStartParticle = 0x910;
      constexpr std::ptrdiff_t m_BuffEndParticle = 0x9f0;
      constexpr std::ptrdiff_t m_PostSleepModifier = 0xad0;
    }
    namespace CCitadel_Modifier_PlayerDisconnected {
    }
    namespace CCitadel_Modifier_PlayerPinged {
    }
    namespace CCitadel_Modifier_PoisonJar_Debuff {
    }
    namespace CCitadel_Modifier_PowerGenerator {
    }
    namespace CCitadel_Modifier_PowerJump {
    }
    namespace CCitadel_Modifier_PowerSurge {
    }
    namespace CCitadel_Modifier_PowerSurgeVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x750;
      constexpr std::ptrdiff_t m_WeaponFxParticle = 0x830;
      constexpr std::ptrdiff_t m_strWeaponShootSound = 0x910;
      constexpr std::ptrdiff_t m_strBulletWhizSound = 0x920;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x930;
    }
    namespace CCitadel_Modifier_PowerSurge_ChainLightning {
    }
    namespace CCitadel_Modifier_PowerUp {
    }
    namespace CCitadel_Modifier_PowerUp_Casting {
    }
    namespace CCitadel_Modifier_PowerUp_Gun {
    }
    namespace CCitadel_Modifier_PowerUp_Movement {
      constexpr std::ptrdiff_t m_bFilled = 0xc0;
    }
    namespace CCitadel_Modifier_PowerUp_Survival {
    }
    namespace CCitadel_Modifier_PreMatchWait {
      constexpr std::ptrdiff_t m_vSpawnPoint = 0xc0;
    }
    namespace CCitadel_Modifier_PredatorPrecision {
    }
    namespace CCitadel_Modifier_PreventHealing {
    }
    namespace CCitadel_Modifier_PriestKnockback {
      constexpr std::ptrdiff_t m_StartTime = 0xc0;
      constexpr std::ptrdiff_t m_vecPushDirection = 0xc4;
      constexpr std::ptrdiff_t m_vecFinalPosition = 0xd0;
    }
    namespace CCitadel_Modifier_PriestKnockbackVData {
      constexpr std::ptrdiff_t m_flMomentumMaintained = 0x750;
      constexpr std::ptrdiff_t m_flVelocityStrengthCurve = 0x758;
    }
    namespace CCitadel_Modifier_PriestSilenceBomb_Aura {
    }
    namespace CCitadel_Modifier_Priest_BearTrap_Debuff {
    }
    namespace CCitadel_Modifier_Priest_CrossbowEquipped {
      constexpr std::ptrdiff_t m_pCrossbowWeapon = 0xc0;
    }
    namespace CCitadel_Modifier_Priest_CrossbowEquippedVData {
      constexpr std::ptrdiff_t m_WeaponBuffParticle = 0x750;
      constexpr std::ptrdiff_t m_BlessedLoopSound = 0x830;
      constexpr std::ptrdiff_t m_AimLoopSound = 0x840;
    }
    namespace CCitadel_Modifier_Priest_Flashbang {
    }
    namespace CCitadel_Modifier_Priest_FlashbangVData {
      constexpr std::ptrdiff_t flFlashFadeInTime = 0x750;
      constexpr std::ptrdiff_t flFlashFadeOutTime = 0x754;
      constexpr std::ptrdiff_t flFlashAlpha = 0x758;
    }
    namespace CCitadel_Modifier_Priest_Immobilize {
      constexpr std::ptrdiff_t m_hRootEffect = 0xc0;
    }
    namespace CCitadel_Modifier_Priest_ImmobilizeVData {
      constexpr std::ptrdiff_t flMaxDrag = 0x758;
      constexpr std::ptrdiff_t flSpeedForNoDrag = 0x75c;
      constexpr std::ptrdiff_t flSpeedForMaxDrag = 0x760;
    }
    namespace CCitadel_Modifier_Priest_KnockbackBuff {
    }
    namespace CCitadel_Modifier_Priest_StackingDefense {
    }
    namespace CCitadel_Modifier_Priest_StackingDefenseVData {
      constexpr std::ptrdiff_t m_StackBuffParticle = 0x750;
      constexpr std::ptrdiff_t m_StackChangedParticle = 0x830;
      constexpr std::ptrdiff_t m_StackLvlChangedParticle = 0x910;
      constexpr std::ptrdiff_t m_SlowModifier = 0x9f0;
    }
    namespace CCitadel_Modifier_Priest_Tether {
      constexpr std::ptrdiff_t m_vecOrigin = 0xc0;
    }
    namespace CCitadel_Modifier_PristineEmblem {
    }
    namespace CCitadel_Modifier_PristineEmblem_VData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x750;
      constexpr std::ptrdiff_t m_ParticleModifier = 0x830;
    }
    namespace CCitadel_Modifier_ProjectMind {
      constexpr std::ptrdiff_t m_particleStart = 0xc0;
      constexpr std::ptrdiff_t m_particleEnd = 0xc4;
      constexpr std::ptrdiff_t m_particleTrail = 0xc8;
      constexpr std::ptrdiff_t m_vecEndLocation = 0xcc;
      constexpr std::ptrdiff_t m_vecStartPosition = 0xd8;
      constexpr std::ptrdiff_t m_flStartDelay = 0xe4;
      constexpr std::ptrdiff_t m_vecApplyOffset = 0xe8;
    }
    namespace CCitadel_Modifier_ProjectMindVData {
      constexpr std::ptrdiff_t m_TeleportStartParticle = 0x750;
      constexpr std::ptrdiff_t m_TeleportEndParticle = 0x830;
      constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x910;
      constexpr std::ptrdiff_t m_TeleportModelParticle = 0x9f0;
      constexpr std::ptrdiff_t m_ShieldModifier = 0xad0;
    }
    namespace CCitadel_Modifier_PsychicLift {
      constexpr std::ptrdiff_t m_vDropStartLocation = 0xc8;
      constexpr std::ptrdiff_t m_flLiftDuration = 0xd4;
      constexpr std::ptrdiff_t m_vecSlamDest = 0x258;
      constexpr std::ptrdiff_t m_bImpacted = 0x264;
    }
    namespace CCitadel_Modifier_PullDownToGround {
    }
    namespace CCitadel_Modifier_PullDownToGroundVData {
      constexpr std::ptrdiff_t m_flMaxHeight = 0x750;
      constexpr std::ptrdiff_t m_flPullDownSpeedMin = 0x754;
      constexpr std::ptrdiff_t m_flPullDownSpeedScale = 0x758;
      constexpr std::ptrdiff_t m_flFullPullDistance = 0x75c;
      constexpr std::ptrdiff_t m_flDampenVelocityRate = 0x760;
    }
    namespace CCitadel_Modifier_PulseGrenade_TimeSlow {
    }
    namespace CCitadel_Modifier_PunkgoatBlastedActive {
    }
    namespace CCitadel_Modifier_PunkgoatBlastedPassive {
    }
    namespace CCitadel_Modifier_PunkgoatPull {
      constexpr std::ptrdiff_t m_vPullToLocation = 0xc0;
      constexpr std::ptrdiff_t m_bAllowTrackTarget = 0xcc;
      constexpr std::ptrdiff_t m_flCurrentVerticalSpeed = 0xd0;
    }
    namespace CCitadel_Modifier_PunkgoatPullVData {
      constexpr std::ptrdiff_t m_PullForceFracByDistanceCurve = 0x750;
      constexpr std::ptrdiff_t m_flPullToCasterLocationDuration = 0x790;
    }
    namespace CCitadel_Modifier_PunkgoatSigilAura {
    }
    namespace CCitadel_Modifier_PunkgoatSigilAuraVData {
      constexpr std::ptrdiff_t m_WaveParticle = 0x7a8;
      constexpr std::ptrdiff_t m_flHeight = 0x888;
    }
    namespace CCitadel_Modifier_PunkgoatTethered {
      constexpr std::ptrdiff_t m_nParticleRope1 = 0xc0;
      constexpr std::ptrdiff_t m_nSatVolumeIndex = 0xc4;
      constexpr std::ptrdiff_t m_flLastDamageTime = 0xc8;
      constexpr std::ptrdiff_t m_hTetheredTo = 0x5d0;
    }
    namespace CCitadel_Modifier_PunkgoatTetheredVData {
      constexpr std::ptrdiff_t m_RopeParticle = 0x750;
      constexpr std::ptrdiff_t m_RopeCancelParticle = 0x830;
      constexpr std::ptrdiff_t m_BleedParticle = 0x910;
      constexpr std::ptrdiff_t m_RangeIndicatorParticle = 0x9f0;
    }
    namespace CCitadel_Modifier_PunkgoatWaitingToPull {
      constexpr std::ptrdiff_t m_nSatVolumeIndex = 0xc0;
    }
    namespace CCitadel_Modifier_Punkgoat_BlastedHealth {
      constexpr std::ptrdiff_t m_nHealthBonus = 0xc0;
    }
    namespace CCitadel_Modifier_Punkgoat_BlastedHealthWatcher {
    }
    namespace CCitadel_Modifier_Punkgoat_BlastedShred {
    }
    namespace CCitadel_Modifier_Push {
      constexpr std::ptrdiff_t m_vPushForce = 0xc0;
      constexpr std::ptrdiff_t m_flDecayRate = 0xcc;
      constexpr std::ptrdiff_t m_TimeDestroy = 0xd0;
    }
    namespace CCitadel_Modifier_Quarantine {
    }
    namespace CCitadel_Modifier_QuickSilverBuffVData {
      constexpr std::ptrdiff_t m_RapidFireParticle = 0x750;
    }
    namespace CCitadel_Modifier_QuickSilverVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x780;
      constexpr std::ptrdiff_t m_ProcParticle = 0x790;
    }
    namespace CCitadel_Modifier_QuickSilver_Buff {
      constexpr std::ptrdiff_t m_flEffectivecFireRatePercent = 0xc0;
    }
    namespace CCitadel_Modifier_QuickSilver_Watcher {
      constexpr std::ptrdiff_t m_bProcNextHit = 0x37c;
    }
    namespace CCitadel_Modifier_Radiance {
    }
    namespace CCitadel_Modifier_RadianceVData {
      constexpr std::ptrdiff_t m_RadianceFxParticle = 0x750;
      constexpr std::ptrdiff_t m_RadianceDamageParticle = 0x830;
      constexpr std::ptrdiff_t m_ClientsideDamageParticle = 0x910;
      constexpr std::ptrdiff_t m_strDamageRecievedSound = 0x9f0;
    }
    namespace CCitadel_Modifier_RadiantFlareBonusDamage {
    }
    namespace CCitadel_Modifier_RadiantFlareBonusDamageVData {
      constexpr std::ptrdiff_t m_strOnBulletHitDamageSound = 0x750;
      constexpr std::ptrdiff_t m_DamageFX = 0x760;
    }
    namespace CCitadel_Modifier_RampSlow {
    }
    namespace CCitadel_Modifier_RampSlowModifierVData {
      constexpr std::ptrdiff_t m_flRampUpTime = 0x750;
      constexpr std::ptrdiff_t m_flPercentageMultiplierStart = 0x754;
      constexpr std::ptrdiff_t m_flPercentageMultiplierEnd = 0x758;
    }
    namespace CCitadel_Modifier_RapidFire {
      constexpr std::ptrdiff_t m_flNextAttackTime = 0x3c0;
    }
    namespace CCitadel_Modifier_RapidFire_AirJuggle {
    }
    namespace CCitadel_Modifier_RebirthCredit {
    }
    namespace CCitadel_Modifier_RebirthCreditVData {
      constexpr std::ptrdiff_t m_DeployParticle = 0x750;
      constexpr std::ptrdiff_t m_RespawnParticle = 0x830;
      constexpr std::ptrdiff_t m_sDeploySound = 0x910;
      constexpr std::ptrdiff_t m_sRespawnSound = 0x920;
      constexpr std::ptrdiff_t m_flRespawnLifePct = 0x930;
      constexpr std::ptrdiff_t m_flRespawnDelay = 0x934;
    }
    namespace CCitadel_Modifier_RebuttalWatcher {
    }
    namespace CCitadel_Modifier_RebuttalWatcherVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
      constexpr std::ptrdiff_t m_strSuccessProcSound = 0x760;
      constexpr std::ptrdiff_t m_strLightMeleeSweetenerSound = 0x770;
      constexpr std::ptrdiff_t m_strHeavyMeleeSweetenerSound = 0x780;
    }
    namespace CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff {
    }
    namespace CCitadel_Modifier_ReinforcingCasings {
      constexpr std::ptrdiff_t m_LastHitShotID = 0xc0;
    }
    namespace CCitadel_Modifier_ReinforcingCasingsVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
    }
    namespace CCitadel_Modifier_ReloadSpeed {
      constexpr std::ptrdiff_t m_flReloadSpeed = 0xc0;
    }
    namespace CCitadel_Modifier_ReloadSpeedVData {
      constexpr std::ptrdiff_t m_flReloadSpeedPercent = 0x750;
      constexpr std::ptrdiff_t m_bDestroyAfterReload = 0x754;
    }
    namespace CCitadel_Modifier_RescueBeam {
      constexpr std::ptrdiff_t m_flHealthPerSecond = 0x2c0;
      constexpr std::ptrdiff_t m_nBeamIndex = 0x2c4;
    }
    namespace CCitadel_Modifier_RescueBeamVData {
      constexpr std::ptrdiff_t m_BeamParticle = 0x750;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x830;
    }
    namespace CCitadel_Modifier_RespawnCredit {
    }
    namespace CCitadel_Modifier_RespawnCreditVData {
      constexpr std::ptrdiff_t m_eRespawnMechanic = 0x750;
      constexpr std::ptrdiff_t m_flRespawnDelay = 0x754;
      constexpr std::ptrdiff_t m_flBonusClipSize = 0x758;
      constexpr std::ptrdiff_t m_flBonusFirerate = 0x75c;
      constexpr std::ptrdiff_t m_flBonusHealth = 0x760;
      constexpr std::ptrdiff_t m_flBonusMoveSpeedMeterPerSecond = 0x764;
      constexpr std::ptrdiff_t m_sExpireSound = 0x768;
      constexpr std::ptrdiff_t m_iMaxMessages = 0x778;
      constexpr std::ptrdiff_t m_flMessageInterval = 0x77c;
    }
    namespace CCitadel_Modifier_RestorativeGoo {
      constexpr std::ptrdiff_t m_flEarliestBreakoutTime = 0xc0;
      constexpr std::ptrdiff_t m_flTotalPendingHeal = 0xc4;
      constexpr std::ptrdiff_t m_hGooCube = 0x748;
      constexpr std::ptrdiff_t m_flBreakoutPercentage = 0x74c;
    }
    namespace CCitadel_Modifier_ReturnFire {
    }
    namespace CCitadel_Modifier_ReturnFireVData {
      constexpr std::ptrdiff_t m_AttackerHitFx = 0x750;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x830;
      constexpr std::ptrdiff_t m_SpiritReflectTracerReplacement = 0x910;
      constexpr std::ptrdiff_t m_strAttackerHitSound = 0x9f0;
      constexpr std::ptrdiff_t m_strHitProcSound = 0xa00;
    }
    namespace CCitadel_Modifier_RevealTarget {
    }
    namespace CCitadel_Modifier_Ricochet_Proc {
    }
    namespace CCitadel_Modifier_Ricochet_ProcVData {
      constexpr std::ptrdiff_t m_RicochetTracerParticle = 0x780;
    }
    namespace CCitadel_Modifier_RocketBarrageVolley {
    }
    namespace CCitadel_Modifier_RocketBarrageVolleyVData {
      constexpr std::ptrdiff_t m_strFireSound = 0x750;
      constexpr std::ptrdiff_t m_RocketLaunchParticle = 0x760;
      constexpr std::ptrdiff_t m_RocketLaunchAmbientParticle = 0x840;
    }
    namespace CCitadel_Modifier_Root {
    }
    namespace CCitadel_Modifier_RootVData {
      constexpr std::ptrdiff_t m_bStopMovementXY = 0x750;
      constexpr std::ptrdiff_t m_bStopMovementPosZ = 0x751;
    }
    namespace CCitadel_Modifier_RunedGauntlets {
    }
    namespace CCitadel_Modifier_Rutger_CheatDeath {
    }
    namespace CCitadel_Modifier_Rutger_CheatDeath_Activated {
    }
    namespace CCitadel_Modifier_Rutger_CheatDeath_Activated_VData {
      constexpr std::ptrdiff_t m_ActivatedParticle = 0x750;
    }
    namespace CCitadel_Modifier_Rutger_ForceField_Aura {
    }
    namespace CCitadel_Modifier_Rutger_ForceField_PushOut {
      constexpr std::ptrdiff_t m_vStart = 0xc0;
      constexpr std::ptrdiff_t m_vDest = 0xcc;
      constexpr std::ptrdiff_t m_vCenter = 0xd8;
    }
    namespace CCitadel_Modifier_Rutger_Pulse_Aura {
      constexpr std::ptrdiff_t m_flStartRadius = 0x110;
      constexpr std::ptrdiff_t m_flEndRadius = 0x114;
      constexpr std::ptrdiff_t m_flSpreadDuration = 0x118;
    }
    namespace CCitadel_Modifier_Rutger_Pulse_Aura_VData {
      constexpr std::ptrdiff_t m_empWaveParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_Rutger_Pulse_Target {
      constexpr std::ptrdiff_t m_vAuraCenter = 0x2c0;
    }
    namespace CCitadel_Modifier_Rutger_Pulse_VData {
      constexpr std::ptrdiff_t m_strSilenceTargetSound = 0x750;
    }
    namespace CCitadel_Modifier_SalvoBullet {
      constexpr std::ptrdiff_t m_BuffedShotId = 0x318;
    }
    namespace CCitadel_Modifier_SalvoBulletVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x880;
      constexpr std::ptrdiff_t m_ExplosionParticle = 0x890;
      constexpr std::ptrdiff_t m_ExplosionVictimParticle = 0x970;
      constexpr std::ptrdiff_t m_SalvoWeaponParticle = 0xa50;
      constexpr std::ptrdiff_t m_ShotVictimSound = 0xb30;
      constexpr std::ptrdiff_t m_ShotConfirmationSound = 0xb40;
    }
    namespace CCitadel_Modifier_ScalingPowerUp {
    }
    namespace CCitadel_Modifier_ScalingPowerUpVData {
      constexpr std::ptrdiff_t m_vecModifierValues = 0x750;
      constexpr std::ptrdiff_t m_flTimeMin = 0x768;
      constexpr std::ptrdiff_t m_flTimeMax = 0x76c;
    }
    namespace CCitadel_Modifier_ServerOnly {
    }
    namespace CCitadel_Modifier_SettingSunThinker {
    }
    namespace CCitadel_Modifier_SettingSunThinker_VData {
      constexpr std::ptrdiff_t m_TargetParticle = 0x750;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x830;
      constexpr std::ptrdiff_t m_LingerParticle = 0x910;
      constexpr std::ptrdiff_t m_LayerParticle = 0x9f0;
      constexpr std::ptrdiff_t m_strExplodeSound = 0xad0;
      constexpr std::ptrdiff_t m_strTargetingCompletedSound = 0xae0;
    }
    namespace CCitadel_Modifier_ShadowClone {
    }
    namespace CCitadel_Modifier_ShadowCloneVData {
    }
    namespace CCitadel_Modifier_Shadow_Step {
      constexpr std::ptrdiff_t m_nRevealedEffect = 0x460;
    }
    namespace CCitadel_Modifier_Shadow_Strike_Debuff {
    }
    namespace CCitadel_Modifier_Shadow_Strike_Invis {
    }
    namespace CCitadel_Modifier_Shadow_Strike_Watcher {
    }
    namespace CCitadel_Modifier_ShakedownPulse {
    }
    namespace CCitadel_Modifier_ShakedownPulseVData {
      constexpr std::ptrdiff_t m_strFireSound = 0x750;
      constexpr std::ptrdiff_t m_ShakeParticle = 0x760;
      constexpr std::ptrdiff_t m_ChainParticle = 0x840;
    }
    namespace CCitadel_Modifier_Shield {
      constexpr std::ptrdiff_t m_hShieldEntity = 0xc0;
    }
    namespace CCitadel_Modifier_ShieldImpact {
      constexpr std::ptrdiff_t m_AmbientEffect = 0xc0;
    }
    namespace CCitadel_Modifier_ShivDash {
      constexpr std::ptrdiff_t m_bUseTrail = 0x140;
      constexpr std::ptrdiff_t m_bUseEchoEffect = 0x141;
    }
    namespace CCitadel_Modifier_ShivDashVData {
      constexpr std::ptrdiff_t m_DashParticle = 0x750;
      constexpr std::ptrdiff_t m_DashEchoParticle = 0x830;
      constexpr std::ptrdiff_t m_DashTrailParticle = 0x910;
    }
    namespace CCitadel_Modifier_Shiv_KillingBlow_Leap {
    }
    namespace CCitadel_Modifier_Shivas_Bracelet_Watcher {
    }
    namespace CCitadel_Modifier_Shivas_Bracelet_WatcherVData {
      constexpr std::ptrdiff_t m_FreezeModifier = 0x750;
      constexpr std::ptrdiff_t m_ImmuneModifier = 0x760;
      constexpr std::ptrdiff_t m_ProcParticle = 0x770;
    }
    namespace CCitadel_Modifier_Shrink_Ray {
    }
    namespace CCitadel_Modifier_SilenceBomb_Debuff {
    }
    namespace CCitadel_Modifier_SilenceProcWatcher {
    }
    namespace CCitadel_Modifier_SilenceProcWatcherVData {
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x780;
      constexpr std::ptrdiff_t m_TechDamageReductionModifier = 0x790;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x7a0;
      constexpr std::ptrdiff_t m_ImmunityModifier = 0x7b0;
      constexpr std::ptrdiff_t m_sInstantProcIfCasterHasModifier = 0x7c0;
      constexpr std::ptrdiff_t m_TracerParticle = 0x7c8;
    }
    namespace CCitadel_Modifier_SilenceProc_Debuff {
    }
    namespace CCitadel_Modifier_SilenceProc_DebuffVData {
      constexpr std::ptrdiff_t m_SilenceModifier = 0x750;
    }
    namespace CCitadel_Modifier_SilenceProc_Immunity {
    }
    namespace CCitadel_Modifier_Silence_Buildup {
    }
    namespace CCitadel_Modifier_Silenced {
    }
    namespace CCitadel_Modifier_SilencedVData {
      constexpr std::ptrdiff_t m_EmpParticle = 0x750;
      constexpr std::ptrdiff_t m_EmpPlayerParticle = 0x830;
      constexpr std::ptrdiff_t m_EmpStatusParticle = 0x910;
    }
    namespace CCitadel_Modifier_SilencerProcActive {
    }
    namespace CCitadel_Modifier_SilencerProcActiveVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x780;
      constexpr std::ptrdiff_t m_SilencerActiveParticle = 0x860;
      constexpr std::ptrdiff_t m_SilenceActiveModifier = 0x940;
    }
    namespace CCitadel_Modifier_Siphon_Bullets_Watcher {
    }
    namespace CCitadel_Modifier_Siphon_Bullets_WatcherVData {
      constexpr std::ptrdiff_t m_HealModifier = 0x770;
    }
    namespace CCitadel_Modifier_Sleep {
    }
    namespace CCitadel_Modifier_SleepBomb_Asleep {
    }
    namespace CCitadel_Modifier_SleepBomb_Aura {
    }
    namespace CCitadel_Modifier_SleepDaggerAsleepVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
      constexpr std::ptrdiff_t m_PostSleepModifier = 0x830;
      constexpr std::ptrdiff_t m_PostSleepBulletShredModifier = 0x840;
      constexpr std::ptrdiff_t m_PostSleepStaminaModifier = 0x850;
    }
    namespace CCitadel_Modifier_SleepDagger_Asleep {
    }
    namespace CCitadel_Modifier_SleepDagger_Drowsy {
    }
    namespace CCitadel_Modifier_SleepDagger_Drowsy_VData {
      constexpr std::ptrdiff_t m_SleepModifier = 0x750;
    }
    namespace CCitadel_Modifier_Slide_Debuff {
    }
    namespace CCitadel_Modifier_Slow {
    }
    namespace CCitadel_Modifier_SlowImmunity {
    }
    namespace CCitadel_Modifier_SlowVData {
      constexpr std::ptrdiff_t m_flGravityScale = 0x750;
    }
    namespace CCitadel_Modifier_SlowingBullets_Proc {
    }
    namespace CCitadel_Modifier_SlowingBullets_ProcVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x790;
    }
    namespace CCitadel_Modifier_SlowingTech_Proc {
    }
    namespace CCitadel_Modifier_SlowingTech_ProcVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
    }
    namespace CCitadel_Modifier_SmokeGrenade {
      constexpr std::ptrdiff_t m_hBlocker = 0xc0;
      constexpr std::ptrdiff_t m_hFriendlyAura = 0xc4;
      constexpr std::ptrdiff_t m_hEnemyAura = 0xc8;
      constexpr std::ptrdiff_t m_nParticleIndex = 0xcc;
      constexpr std::ptrdiff_t m_flStartTime = 0xd0;
      constexpr std::ptrdiff_t m_vOrigin = 0x258;
    }
    namespace CCitadel_Modifier_SmokeGrenadeVData {
      constexpr std::ptrdiff_t m_BlockerModel = 0x750;
      constexpr std::ptrdiff_t m_SmokeParticle = 0x830;
      constexpr std::ptrdiff_t m_FriendlyAuraModifier = 0x910;
      constexpr std::ptrdiff_t m_EnemyAuraModifier = 0x920;
      constexpr std::ptrdiff_t m_strDomeEndSound = 0x930;
      constexpr std::ptrdiff_t m_strTargetLoopingSound = 0x940;
    }
    namespace CCitadel_Modifier_SpeedBoost {
      constexpr std::ptrdiff_t m_flSpeedBoostOverride = 0xc0;
    }
    namespace CCitadel_Modifier_SpeedBoostVData {
      constexpr std::ptrdiff_t m_flMoveSpeedBoost = 0x750;
    }
    namespace CCitadel_Modifier_SpellShield_Buff {
    }
    namespace CCitadel_Modifier_Spellbreaker {
    }
    namespace CCitadel_Modifier_Spellbreaker_VData {
      constexpr std::ptrdiff_t m_ProcParticle = 0x750;
    }
    namespace CCitadel_Modifier_SpilledBloodThinker {
    }
    namespace CCitadel_Modifier_SpilledBloodThinkerVData {
      constexpr std::ptrdiff_t m_SpilledBloodParticle = 0x750;
      constexpr std::ptrdiff_t m_flTickRate = 0x830;
      constexpr std::ptrdiff_t m_flHeight = 0x834;
    }
    namespace CCitadel_Modifier_Spin {
    }
    namespace CCitadel_Modifier_SpinVData {
      constexpr std::ptrdiff_t m_AoEParticle = 0x750;
      constexpr std::ptrdiff_t m_SlowModifier = 0x830;
    }
    namespace CCitadel_Modifier_SpiritBurnDOT_VData {
      constexpr std::ptrdiff_t m_sBurnParticle = 0x750;
    }
    namespace CCitadel_Modifier_SpiritBurnEnemyTracker {
    }
    namespace CCitadel_Modifier_SpiritBurnEnemyTrackerVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x760;
    }
    namespace CCitadel_Modifier_SpiritBurnProcWatcher {
    }
    namespace CCitadel_Modifier_SpiritBurnProcWatcherVData {
      constexpr std::ptrdiff_t m_SpiritBurnDamageTracker = 0x780;
    }
    namespace CCitadel_Modifier_SpiritResilience {
    }
    namespace CCitadel_Modifier_SpiritSnatch {
    }
    namespace CCitadel_Modifier_SpiritSnatch_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x780;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x790;
      constexpr std::ptrdiff_t m_SwingParticle = 0x7a0;
      constexpr std::ptrdiff_t m_HitParticle = 0x880;
    }
    namespace CCitadel_Modifier_Spiritburn_DOT {
    }
    namespace CCitadel_Modifier_SplitShotBonusDamage {
    }
    namespace CCitadel_Modifier_SpreadingFire_DOT {
    }
    namespace CCitadel_Modifier_SpreadingFire_DOT_VData {
      constexpr std::ptrdiff_t m_sSpreadingFireParticle = 0x750;
      constexpr std::ptrdiff_t m_sSpreadingFireTetherParticle = 0x830;
    }
    namespace CCitadel_Modifier_Stabilizing_Tripod {
    }
    namespace CCitadel_Modifier_Stabilizing_Tripod_Self_Debuff {
    }
    namespace CCitadel_Modifier_StatStealBase {
    }
    namespace CCitadel_Modifier_StatStealBaseVData {
      constexpr std::ptrdiff_t m_StatStolenDebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_StatStolenBuffModifier = 0x760;
    }
    namespace CCitadel_Modifier_StaticCharge {
      constexpr std::ptrdiff_t m_hRingEffect = 0xc0;
      constexpr std::ptrdiff_t m_flRadius = 0x1c8;
    }
    namespace CCitadel_Modifier_StaticChargeVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x750;
      constexpr std::ptrdiff_t m_ZapParticle = 0x830;
      constexpr std::ptrdiff_t m_strChargeHitSound = 0x910;
      constexpr std::ptrdiff_t m_strChargeHitOtherSound = 0x920;
    }
    namespace CCitadel_Modifier_StickyBombAttached {
      constexpr std::ptrdiff_t m_bDetonateSoundStarted = 0xc0;
    }
    namespace CCitadel_Modifier_StickyBombAttachedVData {
      constexpr std::ptrdiff_t m_BombAttachedParticle = 0x750;
      constexpr std::ptrdiff_t m_StunAttachedParticle = 0x830;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x910;
      constexpr std::ptrdiff_t m_BombAttachedVictimTeamParticle = 0x9f0;
      constexpr std::ptrdiff_t m_strExplodeSound = 0xad0;
      constexpr std::ptrdiff_t m_strTickTockSound = 0xae0;
      constexpr std::ptrdiff_t m_strTickTockFastSound = 0xaf0;
      constexpr std::ptrdiff_t m_OnGroundModifier = 0xb00;
      constexpr std::ptrdiff_t m_DetonateWarningTime = 0xb10;
    }
    namespace CCitadel_Modifier_StickyBombOnGround {
    }
    namespace CCitadel_Modifier_StickyBombOnGroundVData {
      constexpr std::ptrdiff_t m_flGroundOffset = 0xb18;
      constexpr std::ptrdiff_t m_BombParticle = 0xb20;
    }
    namespace CCitadel_Modifier_Stimpak_regen {
      constexpr std::ptrdiff_t m_flTotalPendingHeal = 0xc0;
    }
    namespace CCitadel_Modifier_StompDebuff {
    }
    namespace CCitadel_Modifier_StormCloud {
      constexpr std::ptrdiff_t m_flNextRandomLightningStrike = 0xc0;
      constexpr std::ptrdiff_t m_flStartTime = 0xc4;
      constexpr std::ptrdiff_t m_flRadiusIncrementPerSecond = 0xc8;
      constexpr std::ptrdiff_t m_vCastPosition = 0xcc;
      constexpr std::ptrdiff_t m_bFiredEndingSoonSound = 0xd8;
      constexpr std::ptrdiff_t m_nLastTickForLightningCenterCalc = 0xdc;
      constexpr std::ptrdiff_t m_vecLightningCenter = 0xe0;
      constexpr std::ptrdiff_t m_nSatVolumeIndex = 0xec;
    }
    namespace CCitadel_Modifier_StreetBrawlTrooper {
    }
    namespace CCitadel_Modifier_StreetBrawl_Phase {
    }
    namespace CCitadel_Modifier_StreetBrawl_Phase_VData {
      constexpr std::ptrdiff_t m_eValidStates = 0x750;
    }
    namespace CCitadel_Modifier_Stunned {
      constexpr std::ptrdiff_t m_bEnabled = 0xc0;
      constexpr std::ptrdiff_t m_bWasEnabled = 0xc1;
    }
    namespace CCitadel_Modifier_StunnedVData {
      constexpr std::ptrdiff_t m_StunnedParticle = 0x750;
    }
    namespace CCitadel_Modifier_Succor_Move {
      constexpr std::ptrdiff_t m_bHasPulled = 0xc0;
      constexpr std::ptrdiff_t m_bIsPulling = 0xc1;
    }
    namespace CCitadel_Modifier_Succor_MoveVData {
      constexpr std::ptrdiff_t m_PullSound = 0x750;
      constexpr std::ptrdiff_t m_flPullSpeedMin = 0x760;
      constexpr std::ptrdiff_t m_flPullSpeedMax = 0x764;
      constexpr std::ptrdiff_t m_flPullDistanceMin = 0x768;
      constexpr std::ptrdiff_t m_flPullDistanceMax = 0x76c;
    }
    namespace CCitadel_Modifier_SuperAcolytesGlove {
    }
    namespace CCitadel_Modifier_SuperAcolytesGlove_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x780;
      constexpr std::ptrdiff_t m_SwingParticle = 0x790;
      constexpr std::ptrdiff_t m_HitParticle = 0x870;
      constexpr std::ptrdiff_t m_FistReadyEffect = 0x950;
    }
    namespace CCitadel_Modifier_SuperNeutralChargeActive {
    }
    namespace CCitadel_Modifier_SuperNeutralChargePrepare {
    }
    namespace CCitadel_Modifier_Surging_Power {
    }
    namespace CCitadel_Modifier_Surging_PowerVData {
      constexpr std::ptrdiff_t m_BerserkerSound = 0x750;
      constexpr std::ptrdiff_t m_ModifierActiveDisplay = 0x760;
    }
    namespace CCitadel_Modifier_Swan_Acrobat {
    }
    namespace CCitadel_Modifier_Swan_AcrobatVData {
      constexpr std::ptrdiff_t m_StackBuffParticle = 0x750;
    }
    namespace CCitadel_Modifier_SwingLine_Swinging {
    }
    namespace CCitadel_Modifier_SwingLine_SwingingVData {
      constexpr std::ptrdiff_t m_PullSpeedScaleCurve = 0x750;
      constexpr std::ptrdiff_t m_flMass = 0x790;
      constexpr std::ptrdiff_t m_flBodyForwardForce = 0x794;
      constexpr std::ptrdiff_t m_flCameraForwardForce = 0x798;
      constexpr std::ptrdiff_t m_flPullForce = 0x79c;
      constexpr std::ptrdiff_t m_flGravityForce = 0x7a0;
      constexpr std::ptrdiff_t m_flDampingForce = 0x7a4;
    }
    namespace CCitadel_Modifier_Synth_PlasmaFlux_WeaponDamage {
    }
    namespace CCitadel_Modifier_T2Boss_AoeWaveAura {
    }
    namespace CCitadel_Modifier_T2Boss_Stagger_Watcher {
    }
    namespace CCitadel_Modifier_T2Boss_Stagger_WatcherVData {
      constexpr std::ptrdiff_t m_flDecayDuration = 0x750;
      constexpr std::ptrdiff_t m_flStaggeredDuration = 0x754;
      constexpr std::ptrdiff_t m_flBuildUpMax = 0x758;
      constexpr std::ptrdiff_t m_flAdditionlPlayerMinContribution = 0x75c;
      constexpr std::ptrdiff_t m_StaggeredModifier = 0x760;
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x770;
    }
    namespace CCitadel_Modifier_T2Boss_Staggered {
    }
    namespace CCitadel_Modifier_T2Boss_Wave_Target {
    }
    namespace CCitadel_Modifier_T3BossWaveBeamPreview {
    }
    namespace CCitadel_Modifier_T3BossWaveBeamPreviewVData {
      constexpr std::ptrdiff_t m_strBeamStartAttachmentPoint_L = 0x750;
      constexpr std::ptrdiff_t m_strBeamStartAttachmentPoint_R = 0x758;
      constexpr std::ptrdiff_t m_flShrineChargeOffset = 0x760;
      constexpr std::ptrdiff_t m_AmberBeamPreviewEffect = 0x768;
      constexpr std::ptrdiff_t m_SapphBeamPreviewEffect = 0x848;
    }
    namespace CCitadel_Modifier_T3Boss_AoeWaveAura {
    }
    namespace CCitadel_Modifier_T3Boss_Effigy {
    }
    namespace CCitadel_Modifier_T3Boss_EffigyVData {
      constexpr std::ptrdiff_t m_AmberEffigyEffect = 0x750;
      constexpr std::ptrdiff_t m_SapphEffigyEffect = 0x830;
    }
    namespace CCitadel_Modifier_T3Boss_Phase1 {
    }
    namespace CCitadel_Modifier_T3Boss_Wave_Target {
    }
    namespace CCitadel_Modifier_T3Phase1VData {
      constexpr std::ptrdiff_t m_flForwardOffset = 0x750;
      constexpr std::ptrdiff_t m_flPitRadius = 0x754;
      constexpr std::ptrdiff_t m_flVisualHeight = 0x758;
      constexpr std::ptrdiff_t m_flRefreshRate = 0x75c;
      constexpr std::ptrdiff_t m_AmberPitGroundEffect = 0x760;
      constexpr std::ptrdiff_t m_SaphhPitGroundEffect = 0x840;
    }
    namespace CCitadel_Modifier_TangoTetherTarget {
    }
    namespace CCitadel_Modifier_TangoTether_Tether {
      constexpr std::ptrdiff_t m_fHealingSoundBuildup = 0x140;
    }
    namespace CCitadel_Modifier_TangoTether_TetherReceiver {
    }
    namespace CCitadel_Modifier_TangoTether_TetherReceiverVData {
      constexpr std::ptrdiff_t m_strAttackBuffParticle = 0x750;
      constexpr std::ptrdiff_t m_sBuffLoopingSound = 0x830;
    }
    namespace CCitadel_Modifier_TangoTether_TetherVData {
      constexpr std::ptrdiff_t m_HealSound = 0x750;
      constexpr std::ptrdiff_t m_GrappleHitSound = 0x760;
      constexpr std::ptrdiff_t m_BuffModifier = 0x770;
      constexpr std::ptrdiff_t m_DisconnectingModifier = 0x780;
      constexpr std::ptrdiff_t m_DisconnectedModifier = 0x790;
      constexpr std::ptrdiff_t m_LockedTargetModifier = 0x7a0;
      constexpr std::ptrdiff_t m_NoConnectionModifier = 0x7b0;
      constexpr std::ptrdiff_t m_flMinConnectTime = 0x7c0;
      constexpr std::ptrdiff_t m_flDisconnectDistanceBuffer = 0x7c4;
      constexpr std::ptrdiff_t m_flCandidateCloserDistance = 0x7c8;
      constexpr std::ptrdiff_t m_flTargetAwayDistance = 0x7cc;
    }
    namespace CCitadel_Modifier_TargetPracticeDebuff {
    }
    namespace CCitadel_Modifier_TargetPracticeDebuffVData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x750;
      constexpr std::ptrdiff_t m_BulletResistModifier = 0x760;
      constexpr std::ptrdiff_t m_EMPModifier = 0x770;
    }
    namespace CCitadel_Modifier_TargetPracticeEnemy {
    }
    namespace CCitadel_Modifier_TargetPracticeEnemyVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_BuildupCompleteModifier = 0x760;
      constexpr std::ptrdiff_t m_BuildupModifier = 0x770;
      constexpr std::ptrdiff_t m_TargetParticle = 0x780;
      constexpr std::ptrdiff_t m_HitParticle = 0x860;
      constexpr std::ptrdiff_t m_HeadParticle = 0x940;
      constexpr std::ptrdiff_t m_strTargetHitSound = 0xa20;
      constexpr std::ptrdiff_t m_strTargetHeadShotHitSound = 0xa30;
      constexpr std::ptrdiff_t m_strTargetCompleteSound = 0xa40;
    }
    namespace CCitadel_Modifier_TargetPracticeSelf {
    }
    namespace CCitadel_Modifier_TargetPracticeSelfVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x750;
      constexpr std::ptrdiff_t m_strWeaponShootSound = 0x830;
      constexpr std::ptrdiff_t m_strBulletWhizSound = 0x840;
    }
    namespace CCitadel_Modifier_TeamRelativeParticle {
    }
    namespace CCitadel_Modifier_TeamRelativeParticleVData {
      constexpr std::ptrdiff_t m_ParentViewParticle = 0x750;
      constexpr std::ptrdiff_t m_OtherPlayerViewParticle = 0x830;
    }
    namespace CCitadel_Modifier_TechBurst_Proc {
    }
    namespace CCitadel_Modifier_TechBurst_ProcVData {
      constexpr std::ptrdiff_t m_bIgnoreResists = 0x780;
      constexpr std::ptrdiff_t m_ProcParticle = 0x788;
      constexpr std::ptrdiff_t m_ProcNotificationModifier = 0x868;
    }
    namespace CCitadel_Modifier_TechCleave {
    }
    namespace CCitadel_Modifier_TechCleaveVData {
      constexpr std::ptrdiff_t m_CleavePlayerParticle = 0x750;
      constexpr std::ptrdiff_t m_CleaveTrooperParticle = 0x830;
      constexpr std::ptrdiff_t m_sVictimSound = 0x910;
    }
    namespace CCitadel_Modifier_TechDamageProcWatcher {
      constexpr std::ptrdiff_t m_flNextProcTime = 0x1f8;
      constexpr std::ptrdiff_t m_shotProced = 0x1fc;
    }
    namespace CCitadel_Modifier_TechDefenderShreddersProcVData {
      constexpr std::ptrdiff_t m_TechDebuffModifier = 0x780;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x790;
    }
    namespace CCitadel_Modifier_TechOverflowProcWatcher {
    }
    namespace CCitadel_Modifier_TechOverflowProcWatcherVData {
      constexpr std::ptrdiff_t m_BuildUpModifier = 0x780;
      constexpr std::ptrdiff_t m_ProcModifier = 0x790;
      constexpr std::ptrdiff_t m_BuildupSuccessEffect = 0x7a0;
    }
    namespace CCitadel_Modifier_TechRangeClamp {
    }
    namespace CCitadel_Modifier_Tech_Defender_Shredders_Debuff {
    }
    namespace CCitadel_Modifier_Tech_Defender_Shredders_Proc {
    }
    namespace CCitadel_Modifier_TeleportToObjective {
      constexpr std::ptrdiff_t m_vDest = 0xc0;
      constexpr std::ptrdiff_t m_angDestAngles = 0xcc;
      constexpr std::ptrdiff_t m_vDestVelocity = 0xd8;
    }
    namespace CCitadel_Modifier_TeleportToObjectiveVData {
      constexpr std::ptrdiff_t m_TeleportOriginParticle = 0x750;
      constexpr std::ptrdiff_t m_TeleportDestinationParticle = 0x830;
      constexpr std::ptrdiff_t m_TeleportStartSound = 0x910;
      constexpr std::ptrdiff_t m_TeleportCompleteSound = 0x920;
      constexpr std::ptrdiff_t m_TeleportArriveSound = 0x930;
    }
    namespace CCitadel_Modifier_TenguUrn_Aura {
    }
    namespace CCitadel_Modifier_TetherNoConnection {
    }
    namespace CCitadel_Modifier_TetherNoConnectionVData {
      constexpr std::ptrdiff_t m_flStatMult = 0x750;
    }
    namespace CCitadel_Modifier_ThermalDetonator_Debuff {
    }
    namespace CCitadel_Modifier_ThermalDetonator_Thinker {
    }
    namespace CCitadel_Modifier_ThermalDetonator_ThinkerVData {
      constexpr std::ptrdiff_t m_GroundParticle = 0x7a8;
      constexpr std::ptrdiff_t m_GroundParticleFriendly = 0x888;
    }
    namespace CCitadel_Modifier_ThrowSandDebuff {
    }
    namespace CCitadel_Modifier_ThrowSandDebuffVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
    }
    namespace CCitadel_Modifier_ThrownShiv_Damage_Debuff {
      constexpr std::ptrdiff_t m_nNumTicksRemaining = 0xc0;
    }
    namespace CCitadel_Modifier_ThrownShiv_Slow_Debuff {
    }
    namespace CCitadel_Modifier_Thumper_2_Aura {
    }
    namespace CCitadel_Modifier_Thumper_2_AuraVData {
      constexpr std::ptrdiff_t m_AoEParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_Thumper_3 {
    }
    namespace CCitadel_Modifier_Thumper_Ability_2 {
      constexpr std::ptrdiff_t m_vLastPosition = 0xc0;
    }
    namespace CCitadel_Modifier_Thumper_EnemyPulled {
    }
    namespace CCitadel_Modifier_Thumper_EnemyPulled_VData {
    }
    namespace CCitadel_Modifier_Thumper_PullAOE {
    }
    namespace CCitadel_Modifier_Thumper_PullAOE_VData {
      constexpr std::ptrdiff_t m_AuraParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_Tier2Boss_LaserBeam {
      constexpr std::ptrdiff_t m_bPreview = 0x240;
      constexpr std::ptrdiff_t m_flYaw = 0x244;
      constexpr std::ptrdiff_t m_iEnemy = 0x248;
      constexpr std::ptrdiff_t m_hCurrentEnemy = 0x24c;
      constexpr std::ptrdiff_t m_hLaserAttachPoint = 0x250;
      constexpr std::ptrdiff_t m_hLaserAttachPoint02 = 0x251;
      constexpr std::ptrdiff_t m_hLaserSearchStartPos = 0x252;
      constexpr std::ptrdiff_t m_flSoundStartTime = 0x268;
      constexpr std::ptrdiff_t m_vStart = 0x278;
      constexpr std::ptrdiff_t m_vEnd = 0x284;
      constexpr std::ptrdiff_t m_vPrevEnd = 0x290;
      constexpr std::ptrdiff_t m_flAngleBetweenTrace = 0x29c;
      constexpr std::ptrdiff_t m_flDamagePerTick = 0x2a0;
      constexpr std::ptrdiff_t m_flCreepDamagePerTick = 0x2a4;
      constexpr std::ptrdiff_t m_flNextDamageTick = 0x2a8;
      constexpr std::ptrdiff_t m_vecEntitiesHit = 0x2b0;
      constexpr std::ptrdiff_t m_flDamageTickRate = 0x2c8;
      constexpr std::ptrdiff_t m_flLastShakeTime = 0x2cc;
      constexpr std::ptrdiff_t m_bSweepRightFirst = 0x2d0;
      constexpr std::ptrdiff_t m_angBeamAim = 0x2d4;
      constexpr std::ptrdiff_t m_vecBeamTarget = 0x2e0;
      constexpr std::ptrdiff_t m_flLastBeamUpdateTime = 0x2ec;
      constexpr std::ptrdiff_t m_flTargetingTaskStartTime = 0x308;
      constexpr std::ptrdiff_t m_flTrackVel = 0x30c;
    }
    namespace CCitadel_Modifier_Tier2Boss_LaserCharge {
    }
    namespace CCitadel_Modifier_Tier2Boss_RocketDamage_Aura {
    }
    namespace CCitadel_Modifier_Tier2Boss_RocketDamage_AuraDebuff {
    }
    namespace CCitadel_Modifier_Tier3BossInvuln {
    }
    namespace CCitadel_Modifier_Tier3Boss_Base {
    }
    namespace CCitadel_Modifier_Tier3Boss_LaserBeam {
      constexpr std::ptrdiff_t m_flSoundStartTime = 0xd4;
      constexpr std::ptrdiff_t m_nHandEffect1 = 0xd8;
      constexpr std::ptrdiff_t m_nHandEffect2 = 0xdc;
      constexpr std::ptrdiff_t m_vStart = 0xe4;
      constexpr std::ptrdiff_t m_vEnd = 0xf0;
      constexpr std::ptrdiff_t m_vPrevEnd = 0xfc;
      constexpr std::ptrdiff_t m_flAngleBetweenTrace = 0x108;
      constexpr std::ptrdiff_t m_flNextDamageTick = 0x10c;
      constexpr std::ptrdiff_t m_flNextAuraDropTick = 0x110;
      constexpr std::ptrdiff_t m_vecEntitiesHit = 0x118;
      constexpr std::ptrdiff_t m_flLastShakeTime = 0x130;
      constexpr std::ptrdiff_t m_vecBeamTarget = 0x134;
      constexpr std::ptrdiff_t m_flLastBeamUpdateTime = 0x140;
      constexpr std::ptrdiff_t m_vecEnemyPosition = 0x144;
      constexpr std::ptrdiff_t m_bPreviewMode = 0x150;
      constexpr std::ptrdiff_t m_iAttachmentIndex = 0x154;
      constexpr std::ptrdiff_t m_hAttachment = 0x158;
    }
    namespace CCitadel_Modifier_Tier3Boss_Laser_Aura {
    }
    namespace CCitadel_Modifier_Tier3Boss_Laser_Debuff {
    }
    namespace CCitadel_Modifier_Tier3_DamagePulse {
    }
    namespace CCitadel_Modifier_Tier3_DamagePulseVData {
      constexpr std::ptrdiff_t m_AmberZapParticle = 0x750;
      constexpr std::ptrdiff_t m_SapphZapParticle = 0x830;
      constexpr std::ptrdiff_t m_strPulseTickSound = 0x910;
      constexpr std::ptrdiff_t m_iMaxTargets = 0x920;
      constexpr std::ptrdiff_t m_flRadius = 0x924;
      constexpr std::ptrdiff_t m_flDamagePerPulse = 0x928;
      constexpr std::ptrdiff_t m_flStartTickRate = 0x92c;
      constexpr std::ptrdiff_t m_flEndTickRate = 0x930;
    }
    namespace CCitadel_Modifier_TimeWall_Aura {
    }
    namespace CCitadel_Modifier_TimeWall_AuraVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x7a8;
    }
    namespace CCitadel_Modifier_TinyCharacter {
    }
    namespace CCitadel_Modifier_Tokamak_AllySmokeAOE {
    }
    namespace CCitadel_Modifier_Tokamak_AllySmokeAOE_VData {
      constexpr std::ptrdiff_t m_AuraParticle = 0x7a8;
    }
    namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE {
    }
    namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE_VData {
    }
    namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT {
    }
    namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData {
      constexpr std::ptrdiff_t m_sAfterburnParticle = 0x750;
      constexpr std::ptrdiff_t m_sAfterburnExplodeParticle = 0x830;
    }
    namespace CCitadel_Modifier_TossUp {
      constexpr std::ptrdiff_t m_bForceApplied = 0xc0;
      constexpr std::ptrdiff_t m_bRestrictMovement = 0xc1;
      constexpr std::ptrdiff_t m_vTossUpForce = 0xc4;
      constexpr std::ptrdiff_t m_flCurrentVelocityScale = 0xd0;
    }
    namespace CCitadel_Modifier_TrapperPoisonJar_Aura {
    }
    namespace CCitadel_Modifier_Trapper_Immobilize {
    }
    namespace CCitadel_Modifier_Trapper_SpiderShield {
    }
    namespace CCitadel_Modifier_Trapper_StealSpiritDebuff {
    }
    namespace CCitadel_Modifier_TriggerPush {
      constexpr std::ptrdiff_t m_vPush = 0xc0;
    }
    namespace CCitadel_Modifier_TriggerTowerRegen {
    }
    namespace CCitadel_Modifier_TrooperDisabledInvulnerability {
      constexpr std::ptrdiff_t m_flBulletResistancePctMax = 0xc0;
      constexpr std::ptrdiff_t m_bShieldUp = 0xc4;
      constexpr std::ptrdiff_t m_flShieldUpTime = 0xc8;
      constexpr std::ptrdiff_t m_trackInfo = 0xcc;
    }
    namespace CCitadel_Modifier_TrooperDisabledInvulnerabilityFX {
    }
    namespace CCitadel_Modifier_Trooper_InEnemyBaseResist {
    }
    namespace CCitadel_Modifier_Trooper_InEnemyBaseResistVData {
      constexpr std::ptrdiff_t m_flDamageReductionForTroopers = 0x750;
    }
    namespace CCitadel_Modifier_Trooper_ShrineDownBuff {
    }
    namespace CCitadel_Modifier_Trooper_ShrineDownBuffVData {
      constexpr std::ptrdiff_t m_flModelScale = 0x750;
      constexpr std::ptrdiff_t m_flHealthScale = 0x754;
      constexpr std::ptrdiff_t m_flDamageScale = 0x758;
    }
    namespace CCitadel_Modifier_TrophyCollectorPassiveGold {
      constexpr std::ptrdiff_t m_flCurrentThinkRate = 0x1c0;
    }
    namespace CCitadel_Modifier_TurnCameraToTarget {
      constexpr std::ptrdiff_t m_hTarget = 0xc0;
    }
    namespace CCitadel_Modifier_UIAbilityHudNotificaiton {
      constexpr std::ptrdiff_t m_strHudMessage = 0xc0;
    }
    namespace CCitadel_Modifier_UIAbilityHudNotificaitonVData {
    }
    namespace CCitadel_Modifier_UIHudMessage {
      constexpr std::ptrdiff_t m_strHudMessage = 0xc0;
      constexpr std::ptrdiff_t m_bIncludeDecimal = 0xc8;
      constexpr std::ptrdiff_t m_eModifierValue = 0xcc;
      constexpr std::ptrdiff_t m_flValue = 0xd0;
    }
    namespace CCitadel_Modifier_UltCombo_Self {
      constexpr std::ptrdiff_t m_angles = 0xc0;
    }
    namespace CCitadel_Modifier_UltCombo_Target {
      constexpr std::ptrdiff_t m_angles = 0xc8;
    }
    namespace CCitadel_Modifier_UltCombo_TargetVData {
      constexpr std::ptrdiff_t m_flTargetPosDistance = 0x830;
      constexpr std::ptrdiff_t m_flTargetPosRange = 0x834;
      constexpr std::ptrdiff_t m_flPullSpeedMin = 0x838;
      constexpr std::ptrdiff_t m_flPullSpeedMax = 0x83c;
      constexpr std::ptrdiff_t m_flPullDistanceMin = 0x840;
      constexpr std::ptrdiff_t m_flPullDistanceMax = 0x844;
    }
    namespace CCitadel_Modifier_UltimateBurst_DelayedEffect {
    }
    namespace CCitadel_Modifier_UltimateBurst_Proc {
      constexpr std::ptrdiff_t m_hHitTargets = 0x1f8;
    }
    namespace CCitadel_Modifier_UltimateBurst_ProcVData {
      constexpr std::ptrdiff_t m_LightningParticle = 0x780;
      constexpr std::ptrdiff_t m_DelayedEffectModifier = 0x860;
      constexpr std::ptrdiff_t m_SlowModifier = 0x870;
      constexpr std::ptrdiff_t m_strLightningSound = 0x880;
    }
    namespace CCitadel_Modifier_Unicorn_DazzlingOrbNextTarget {
      constexpr std::ptrdiff_t hProjectile = 0xc0;
    }
    namespace CCitadel_Modifier_Unicorn_DazzlingOrbNextTargetVData {
      constexpr std::ptrdiff_t m_NextTargetParticle = 0x750;
    }
    namespace CCitadel_Modifier_Unicorn_PrismaticGuard {
    }
    namespace CCitadel_Modifier_Unicorn_PrismaticGuardVData {
      constexpr std::ptrdiff_t m_strExplodeSound = 0x750;
      constexpr std::ptrdiff_t m_strDestroyedSound = 0x760;
      constexpr std::ptrdiff_t m_strCrackingSound = 0x770;
      constexpr std::ptrdiff_t m_eExplosionTargetingType = 0x780;
      constexpr std::ptrdiff_t m_TrackingParams = 0x788;
      constexpr std::ptrdiff_t m_flVerticalBoost = 0x818;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x820;
      constexpr std::ptrdiff_t m_ShieldParticle = 0x900;
    }
    namespace CCitadel_Modifier_Unstable_Concoction {
    }
    namespace CCitadel_Modifier_Unstable_ConcoctionVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x750;
      constexpr std::ptrdiff_t m_ChargeParticle = 0x830;
      constexpr std::ptrdiff_t m_UnstoppableModifier = 0x910;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x920;
    }
    namespace CCitadel_Modifier_Unstick {
    }
    namespace CCitadel_Modifier_Unstoppable {
      constexpr std::ptrdiff_t m_bInCheckState = 0xc0;
    }
    namespace CCitadel_Modifier_UnstoppableVData {
      constexpr std::ptrdiff_t m_ShieldParticle = 0x750;
      constexpr std::ptrdiff_t m_PlayerShieldParticle = 0x830;
    }
    namespace CCitadel_Modifier_Upgrade_Headhunter_HeadshotBuff {
    }
    namespace CCitadel_Modifier_Upgrade_Magic_Storm {
    }
    namespace CCitadel_Modifier_Upgrade_OverdriveClip {
      constexpr std::ptrdiff_t m_nBonusMaxClipSize = 0xc0;
    }
    namespace CCitadel_Modifier_Upgrade_OverdriveClip_Reload {
      constexpr std::ptrdiff_t m_nStartingClipSize = 0xc0;
    }
    namespace CCitadel_Modifier_Upgrade_OverdriveClip_VData {
      constexpr std::ptrdiff_t m_BuffEffect = 0x750;
      constexpr std::ptrdiff_t m_TracerParticle = 0x830;
    }
    namespace CCitadel_Modifier_Upgrade_SpellslingerHeadshots_Debuff {
      constexpr std::ptrdiff_t m_tLastHeadshot = 0xc0;
    }
    namespace CCitadel_Modifier_Upgrade_SpiritSnatch_Buff {
    }
    namespace CCitadel_Modifier_Upgrade_SpiritSnatch_Debuff {
    }
    namespace CCitadel_Modifier_UppercutClipSize {
      constexpr std::ptrdiff_t m_nPreClipSize = 0x140;
    }
    namespace CCitadel_Modifier_Uppercut_Buff {
    }
    namespace CCitadel_Modifier_Uppercutted {
    }
    namespace CCitadel_Modifier_Urn_Debuff {
    }
    namespace CCitadel_Modifier_Urn_DebuffVData {
      constexpr std::ptrdiff_t m_EntangleModifier = 0x750;
      constexpr std::ptrdiff_t m_strEntangleCounter = 0x760;
      constexpr std::ptrdiff_t m_strEntangleSound = 0x840;
      constexpr std::ptrdiff_t m_strEntangleBuildupSound = 0x850;
    }
    namespace CCitadel_Modifier_VacuumAura {
    }
    namespace CCitadel_Modifier_VacuumAuraTarget {
      constexpr std::ptrdiff_t m_flMaxDist = 0x1c8;
      constexpr std::ptrdiff_t m_vecOffsetDir = 0x1cc;
      constexpr std::ptrdiff_t m_vecStartPosition = 0x1d8;
      constexpr std::ptrdiff_t m_flAOERadius = 0x1e4;
    }
    namespace CCitadel_Modifier_VacuumAuraTargetModifierVData {
      constexpr std::ptrdiff_t m_flOuterSpeedScale = 0x830;
      constexpr std::ptrdiff_t m_flSpeedScaleBias = 0x834;
      constexpr std::ptrdiff_t m_TargetLoopingSound = 0x838;
    }
    namespace CCitadel_Modifier_VampireBat_BatCloud_Self {
    }
    namespace CCitadel_Modifier_VampireBat_BatCloud_SelfVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
      constexpr std::ptrdiff_t m_AuraParticle = 0x760;
    }
    namespace CCitadel_Modifier_VampireBat_BatSwarmDoT {
      constexpr std::ptrdiff_t m_flLastTickTime = 0xc0;
    }
    namespace CCitadel_Modifier_VampireBat_BatSwarmDoTVData {
      constexpr std::ptrdiff_t m_BatHitParticle = 0x750;
    }
    namespace CCitadel_Modifier_VampireBat_LoveBitesProc {
    }
    namespace CCitadel_Modifier_VampireBat_LoveBitesProc_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
      constexpr std::ptrdiff_t m_SlowModifier = 0x760;
      constexpr std::ptrdiff_t m_strProcHitSound = 0x770;
    }
    namespace CCitadel_Modifier_VandalOverflow {
      constexpr std::ptrdiff_t m_vecFloatDest = 0x1c8;
      constexpr std::ptrdiff_t m_vecStartingPos = 0x1d4;
    }
    namespace CCitadel_Modifier_VandalSurge {
      constexpr std::ptrdiff_t m_vecFloatDest = 0x1c8;
      constexpr std::ptrdiff_t m_vecStartingPos = 0x1d4;
    }
    namespace CCitadel_Modifier_VeilWalkerMovespeed {
    }
    namespace CCitadel_Modifier_VeilWalkerWatcher {
    }
    namespace CCitadel_Modifier_VeilWalkerWatcherVData {
      constexpr std::ptrdiff_t m_InvisModifier = 0x750;
      constexpr std::ptrdiff_t m_VeilWalkerTriggeredModifier = 0x760;
      constexpr std::ptrdiff_t m_VeilWalkerMovespeed = 0x770;
      constexpr std::ptrdiff_t m_strOwnerExpiredSound = 0x780;
      constexpr std::ptrdiff_t m_flTraceLengthMin = 0x790;
    }
    namespace CCitadel_Modifier_ViperVenomProcWatcher {
    }
    namespace CCitadel_Modifier_ViperVenomProcWatcherVData {
      constexpr std::ptrdiff_t m_TracerParticle = 0x780;
    }
    namespace CCitadel_Modifier_Viper_SlideBuff {
    }
    namespace CCitadel_Modifier_Viper_SlideBuffVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x750;
    }
    namespace CCitadel_Modifier_Viper_StackingDebuff {
    }
    namespace CCitadel_Modifier_Viper_Venom {
    }
    namespace CCitadel_Modifier_Viper_VenomVData {
    }
    namespace CCitadel_Modifier_ViscousBall {
      constexpr std::ptrdiff_t m_nDirectionParticleIndex = 0xc0;
    }
    namespace CCitadel_Modifier_ViscousBallVData {
      constexpr std::ptrdiff_t m_TrailParticle = 0x750;
      constexpr std::ptrdiff_t m_DirectionParticle = 0x830;
    }
    namespace CCitadel_Modifier_VisibleDuration {
    }
    namespace CCitadel_Modifier_VitalitySuppressor {
      constexpr std::ptrdiff_t m_flLastTickTime = 0xc0;
    }
    namespace CCitadel_Modifier_VoidSphere {
      constexpr std::ptrdiff_t m_bTeleported = 0xc0;
      constexpr std::ptrdiff_t m_particleStart = 0xc4;
      constexpr std::ptrdiff_t m_particleEnd = 0xc8;
      constexpr std::ptrdiff_t m_particleTrail = 0xcc;
      constexpr std::ptrdiff_t m_vecEndLocation = 0xd0;
      constexpr std::ptrdiff_t m_vecStartPosition = 0xdc;
      constexpr std::ptrdiff_t m_vecEndLocationCaster = 0xe8;
    }
    namespace CCitadel_Modifier_VoidSphereBuffVData {
      constexpr std::ptrdiff_t m_RapidFireParticle = 0x750;
    }
    namespace CCitadel_Modifier_VoidSphereVData {
      constexpr std::ptrdiff_t m_TeleportStartParticle = 0x750;
      constexpr std::ptrdiff_t m_TeleportEndParticle = 0x830;
      constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x910;
      constexpr std::ptrdiff_t m_TeleportModelParticle = 0x9f0;
      constexpr std::ptrdiff_t m_flPreTeleportDuration = 0xad0;
      constexpr std::ptrdiff_t m_TeleportVerticalOffsetCurve = 0xad8;
      constexpr std::ptrdiff_t m_strAmbientLoopingLocalPlayerSound = 0xb18;
      constexpr std::ptrdiff_t m_BuffModifier = 0xb28;
    }
    namespace CCitadel_Modifier_VoidSphere_Buff {
    }
    namespace CCitadel_Modifier_Warden_CrowdControl_Debuff {
    }
    namespace CCitadel_Modifier_Warden_HighAlert {
    }
    namespace CCitadel_Modifier_Warden_RiotProtocol {
      constexpr std::ptrdiff_t m_mapEntToTimeHit = 0xc0;
      constexpr std::ptrdiff_t m_nNumPlayersAffected = 0xe8;
      constexpr std::ptrdiff_t m_nNumPlayersKilled = 0xec;
      constexpr std::ptrdiff_t m_playerAngles = 0xf0;
      constexpr std::ptrdiff_t m_ConeParticle = 0xfc;
    }
    namespace CCitadel_Modifier_Warden_RiotProtocol_CastDelay {
    }
    namespace CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff {
      constexpr std::ptrdiff_t m_flEnemyMoveSlow = 0xc0;
    }
    namespace CCitadel_Modifier_WeaponEaterStack {
    }
    namespace CCitadel_Modifier_WeaponPowerForHealth {
      constexpr std::ptrdiff_t m_flHealthDrained = 0xc0;
    }
    namespace CCitadel_Modifier_WeaponPowerForHealthVData {
      constexpr std::ptrdiff_t m_ActiveBuff = 0x750;
    }
    namespace CCitadel_Modifier_WebWall_Debuff {
    }
    namespace CCitadel_Modifier_Werewolf {
      constexpr std::ptrdiff_t m_mapHunterAbilities = 0x440;
    }
    namespace CCitadel_Modifier_WerewolfVData {
      constexpr std::ptrdiff_t m_mapWerewolfAbilities = 0x750;
      constexpr std::ptrdiff_t m_StackingBuffModifier = 0x778;
      constexpr std::ptrdiff_t m_BuffEndingParticle = 0x788;
      constexpr std::ptrdiff_t m_WerewolfModel = 0x868;
      constexpr std::ptrdiff_t m_flModelScale = 0x950;
      constexpr std::ptrdiff_t m_HeroCardOverride = 0x958;
    }
    namespace CCitadel_Modifier_Werewolf_HuntAura_Werewolf {
      constexpr std::ptrdiff_t m_playerAngles = 0x110;
      constexpr std::ptrdiff_t m_ConeParticle = 0x11c;
    }
    namespace CCitadel_Modifier_Werewolf_Kickflip_BonusDamage {
    }
    namespace CCitadel_Modifier_Werewolf_Kickflip_BonusDamageVData {
      constexpr std::ptrdiff_t m_strOnBulletHitDamageSound = 0x750;
      constexpr std::ptrdiff_t m_DamageFX = 0x760;
    }
    namespace CCitadel_Modifier_Werewolf_Kickflip_SucessSelf {
      constexpr std::ptrdiff_t m_vecInitialVelocity = 0x2c0;
      constexpr std::ptrdiff_t m_vecKickOffVelocity = 0x2cc;
    }
    namespace CCitadel_Modifier_Werewolf_Kickflip_SucessSelfVData {
      constexpr std::ptrdiff_t m_InitialVelocityCurve = 0x750;
      constexpr std::ptrdiff_t m_KickOffVelocityCurve = 0x790;
    }
    namespace CCitadel_Modifier_Werewolf_Leaping {
    }
    namespace CCitadel_Modifier_Werewolf_LeapingVData {
      constexpr std::ptrdiff_t m_ChargeParticle = 0x750;
    }
    namespace CCitadel_Modifier_Werewolf_MaulingLeapDebuff {
    }
    namespace CCitadel_Modifier_Werewolf_OnTheHunt {
    }
    namespace CCitadel_Modifier_Werewolf_OnTheHuntVData {
      constexpr std::ptrdiff_t m_RapidFireParticle = 0x750;
    }
    namespace CCitadel_Modifier_Werewolf_StackingBuff {
    }
    namespace CCitadel_Modifier_Werewolf_TrackingBomb {
      constexpr std::ptrdiff_t m_bWithinTrackingRange = 0xc0;
    }
    namespace CCitadel_Modifier_Werewolf_TrackingBombVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
      constexpr std::ptrdiff_t m_bAllowAlliesToAlsoTrack = 0x830;
      constexpr std::ptrdiff_t m_flLabelOffset = 0x834;
    }
    namespace CCitadel_Modifier_Werewolf_TransformationWatcher {
    }
    namespace CCitadel_Modifier_Werewolf_TransformationWatcherVData {
      constexpr std::ptrdiff_t m_WerewolfModifier = 0x750;
      constexpr std::ptrdiff_t m_HunterModifier = 0x760;
      constexpr std::ptrdiff_t m_vecWerewolfAbilitySlots = 0x770;
      constexpr std::ptrdiff_t m_vecHunterAbilitySlots = 0x788;
    }
    namespace CCitadel_Modifier_Werewolf_UnloadGun2 {
    }
    namespace CCitadel_Modifier_Werewolf_UnloadGun2VData {
      constexpr std::ptrdiff_t m_strStackProcSound = 0x880;
      constexpr std::ptrdiff_t m_strStackProcEffect = 0x890;
      constexpr std::ptrdiff_t m_StackingModifier = 0x970;
    }
    namespace CCitadel_Modifier_WingBlastApply {
    }
    namespace CCitadel_Modifier_WingBlastPush {
      constexpr std::ptrdiff_t m_vPush = 0xc0;
    }
    namespace CCitadel_Modifier_Wraith_ProjectMind_Shield {
    }
    namespace CCitadel_Modifier_Wraith_RapidFire {
    }
    namespace CCitadel_Modifier_Wraith_RapidFireVData {
      constexpr std::ptrdiff_t m_RapidFireParticle = 0x750;
    }
    namespace CCitadel_Modifier_WreckerSalvage {
    }
    namespace CCitadel_Modifier_WreckerSalvage_Buff {
      constexpr std::ptrdiff_t m_nBuffParticle = 0xc0;
    }
    namespace CCitadel_Modifier_WreckerScrapBlastDebuff {
      constexpr std::ptrdiff_t m_flEnemyMoveSlow = 0xc0;
    }
    namespace CCitadel_Modifier_WreckerUltimate_Invincible {
    }
    namespace CCitadel_Modifier_Wrecker_Ultimate {
    }
    namespace CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy {
      constexpr std::ptrdiff_t m_vHoldOffset = 0xc0;
      constexpr std::ptrdiff_t m_flLastTouchTime = 0xcc;
    }
    namespace CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy {
      constexpr std::ptrdiff_t m_vThrowVelocity = 0xc8;
    }
    namespace CCitadel_Modifier_WreckingBall_AutoThrow {
    }
    namespace CCitadel_Modifier_WreckingBall_Debuff {
    }
    namespace CCitadel_Modifier_Yamato_InfinitySlash_BuffTimer {
    }
    namespace CCitadel_Modifier_ZiplineBoost {
      constexpr std::ptrdiff_t m_bIsBoosting = 0xc0;
    }
    namespace CCitadel_Modifier_ZiplineBoostVData {
      constexpr std::ptrdiff_t m_flRampUpTime = 0x750;
      constexpr std::ptrdiff_t m_flPercentageSpeedIncreaseRampFrom = 0x754;
      constexpr std::ptrdiff_t m_flPercentageSpeedIncreaseRampTo = 0x758;
      constexpr std::ptrdiff_t m_cameraSequenceStartBoost = 0x760;
    }
    namespace CCitadel_Modifier_ZiplineKnockdownImmune {
    }
    namespace CCitadel_Modifier_ZiplineKnockdownImmuneVData {
      constexpr std::ptrdiff_t m_ZipLineEnemyKnockdownProtectionParticle = 0x750;
      constexpr std::ptrdiff_t m_ZipLineSelfKnockdownProtectionParticle = 0x830;
      constexpr std::ptrdiff_t m_ZipLineKnockdownProtectionStatusParticle = 0x910;
      constexpr std::ptrdiff_t m_ZipLineKnockdownProtectionStatusEnemyParticle = 0x9f0;
    }
    namespace CCitadel_Modifier_ZiplineSpeed {
      constexpr std::ptrdiff_t m_iLane = 0xc0;
    }
    namespace CCitadel_Modifier_ZiplineSpeedVData {
      constexpr std::ptrdiff_t m_flPercentageMultiplierStart = 0x750;
      constexpr std::ptrdiff_t m_flPercentageMultiplierEnd = 0x754;
      constexpr std::ptrdiff_t m_flRampUpTime = 0x758;
    }
    namespace CCitadel_Modifier_ZombieWallGroundAura {
    }
    namespace CCitadel_Modifier_ZombieWallGroundAuraVData {
      constexpr std::ptrdiff_t m_GroundParticle = 0x7a8;
      constexpr std::ptrdiff_t m_strPopSound = 0x888;
    }
    namespace CCitadel_Modifire_Bookworm_DragonFire {
    }
    namespace CCitadel_Modifire_Priest_FlashBangBurn {
    }
    namespace CCitadel_Modifire_Priest_FlashBangBurnAura {
    }
    namespace CCitadel_Modifire_Priest_FlashBangBurnAuraVData {
      constexpr std::ptrdiff_t m_BurnModifier = 0x7a8;
      constexpr std::ptrdiff_t m_RadiusParticle = 0x7b8;
    }
    namespace CCitadel_NPCAbility_Shield {
    }
    namespace CCitadel_NPCAbility_Shield_VData {
      constexpr std::ptrdiff_t m_flShieldOffset = 0x1818;
      constexpr std::ptrdiff_t m_flShieldScale = 0x181c;
    }
    namespace CCitadel_NPCAbility_Vanguard_AOEBuff {
      constexpr std::ptrdiff_t m_timeNextCast = 0x1458;
    }
    namespace CCitadel_NPCAbility_Vanguard_AOEBuff_VData {
      constexpr std::ptrdiff_t m_HealingModifier = 0x1818;
      constexpr std::ptrdiff_t m_BuffModifier = 0x1828;
    }
    namespace CCitadel_NewYears_Fireworks {
      constexpr std::ptrdiff_t m_unShowDurationSeconds = 0xee0;
      constexpr std::ptrdiff_t m_unShowDelaySeconds = 0xee4;
      constexpr std::ptrdiff_t m_flFireworkIntervalMin = 0xee8;
      constexpr std::ptrdiff_t m_flFireworkIntervalMax = 0xeec;
      constexpr std::ptrdiff_t m_sFireworkParticle1 = 0xef0;
      constexpr std::ptrdiff_t m_sFireworkParticle2 = 0xef8;
      constexpr std::ptrdiff_t m_sFireworkParticle3 = 0xf00;
      constexpr std::ptrdiff_t m_sFireworkParticle4 = 0xf08;
      constexpr std::ptrdiff_t m_sFireworkParticle5 = 0xf10;
      constexpr std::ptrdiff_t m_sFireworkParticle6 = 0xf18;
      constexpr std::ptrdiff_t m_sFireworkParticle7 = 0xf20;
      constexpr std::ptrdiff_t m_sFireworkParticle8 = 0xf28;
      constexpr std::ptrdiff_t m_iszSoundName = 0xf30;
      constexpr std::ptrdiff_t m_flStartSoundVerticalOffset = 0xf38;
    }
    namespace CCitadel_Omnicharge_Pendant {
    }
    namespace CCitadel_Projectile_BatSwarmExtraProjectile {
    }
    namespace CCitadel_Projectile_BatSwarmProjectile {
    }
    namespace CCitadel_Projectile_BookwormGun {
    }
    namespace CCitadel_Projectile_Cyclone {
    }
    namespace CCitadel_Projectile_FeatherBoomerang {
    }
    namespace CCitadel_Projectile_FortunaWeapon {
    }
    namespace CCitadel_Projectile_HookBlade {
      constexpr std::ptrdiff_t bIsReturning = 0xad0;
    }
    namespace CCitadel_Projectile_MagicBolt {
      constexpr std::ptrdiff_t bIsCloneProjectile = 0xad0;
    }
    namespace CCitadel_Projectile_Petrify {
    }
    namespace CCitadel_Projectile_Pillar {
    }
    namespace CCitadel_Projectile_RocketLauncher_Rocket {
    }
    namespace CCitadel_Projectile_SpiderProjectile {
    }
    namespace CCitadel_Projectile_WebWall {
    }
    namespace CCitadel_PunchablePowerupVData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x988;
      constexpr std::ptrdiff_t m_iHitsRequired = 0x998;
      constexpr std::ptrdiff_t m_flCollisionRadius = 0x99c;
      constexpr std::ptrdiff_t m_flCenterHeightOffset = 0x9a0;
      constexpr std::ptrdiff_t m_DamagedParticle = 0x9a8;
      constexpr std::ptrdiff_t m_sHitSound = 0xa88;
    }
    namespace CCitadel_ShopProp {
    }
    namespace CCitadel_SpiderAnimatingVData {
      constexpr std::ptrdiff_t m_sModelName = 0x28;
      constexpr std::ptrdiff_t m_flModelScale = 0x108;
      constexpr std::ptrdiff_t m_cGlowColor = 0x10c;
    }
    namespace CCitadel_TechUpgrade_CorpseExplosion {
    }
    namespace CCitadel_TechUpgrade_CorpseExplosionVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x18b8;
      constexpr std::ptrdiff_t m_ExplosionModifier = 0x1998;
    }
    namespace CCitadel_TechUpgrade_Infuser {
    }
    namespace CCitadel_TechUpgrade_SuperAcolyteGloves {
      constexpr std::ptrdiff_t fl_StoredDamage = 0x1258;
    }
    namespace CCitadel_TechUpgrade_SuperAcolyteGlovesVData {
      constexpr std::ptrdiff_t m_SpiritMeleeProcModifier = 0x18b8;
    }
    namespace CCitadel_Upgrade_AerialAssault {
    }
    namespace CCitadel_Upgrade_AerialAssualtVData {
      constexpr std::ptrdiff_t m_WatcherModifier = 0x18b8;
      constexpr std::ptrdiff_t m_LaunchParticle = 0x18c8;
    }
    namespace CCitadel_Upgrade_AmmoScavenger {
      constexpr std::ptrdiff_t m_hLastOrbTarget = 0x11d8;
    }
    namespace CCitadel_Upgrade_AmmoScavenger_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_StackSound = 0x18c8;
      constexpr std::ptrdiff_t m_AmmoSound = 0x18d8;
    }
    namespace CCitadel_Upgrade_MagicCarpet {
      constexpr std::ptrdiff_t m_flFlyingStartTime = 0x11d8;
      constexpr std::ptrdiff_t m_bFlying = 0x12e0;
      constexpr std::ptrdiff_t m_bSummoning = 0x12e1;
    }
    namespace CCitadel_Upgrade_MagicCarpetVData {
      constexpr std::ptrdiff_t m_SummonParticle = 0x18b8;
      constexpr std::ptrdiff_t m_FlyingCarpetModifier = 0x1998;
      constexpr std::ptrdiff_t m_SummonFlyingCarpetModifier = 0x19a8;
      constexpr std::ptrdiff_t m_SummonFlyingCarpetVisualModifier = 0x19b8;
      constexpr std::ptrdiff_t m_FlyingCarpetVisualModifier = 0x19c8;
      constexpr std::ptrdiff_t m_flSummonVisualDuration = 0x19d8;
      constexpr std::ptrdiff_t m_flBurstSpeedBonus = 0x19dc;
      constexpr std::ptrdiff_t m_flBurstSpeedMin = 0x19e0;
      constexpr std::ptrdiff_t m_flBurstSpeedDuration = 0x19e4;
      constexpr std::ptrdiff_t m_flMinDistanceAboveGround = 0x19e8;
    }
    namespace CCitadel_Upgrade_OverdriveClip {
    }
    namespace CCitadel_Upgrade_OverdriveClip_VData {
      constexpr std::ptrdiff_t m_OverdriveClipModifier = 0x18b8;
      constexpr std::ptrdiff_t m_ReloadModifier = 0x18c8;
    }
    namespace CCitadel_Upgrade_StabilizingTripod {
    }
    namespace CCitadel_Upgrade_StabilizingTripodVData {
      constexpr std::ptrdiff_t m_SelfDebuffModifier = 0x18b8;
    }
    namespace CCitadel_Upgrade_WeaponPowerForHealth {
    }
    namespace CCitadel_Upgrade_WeaponPowerForHealthVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
    }
    namespace CCitadel_UtilityUpgrade_AOESmokeBomb {
    }
    namespace CCitadel_UtilityUpgrade_AOESmokeBombVData {
      constexpr std::ptrdiff_t m_CastCompleteParticle = 0x18b8;
      constexpr std::ptrdiff_t m_strBuffGainedSound = 0x1998;
      constexpr std::ptrdiff_t m_InvisModifier = 0x19a8;
    }
    namespace CCitadel_UtilityUpgrade_DebuffImmunity {
    }
    namespace CCitadel_UtilityUpgrade_DebuffImmunityVData {
      constexpr std::ptrdiff_t m_DebuffImmunityModifier = 0x18b8;
    }
    namespace CCitadel_UtilityUpgrade_HealthNova {
    }
    namespace CCitadel_UtilityUpgrade_HealthNova_VData {
      constexpr std::ptrdiff_t m_HealingModifier = 0x18b8;
    }
    namespace CCitadel_UtilityUpgrade_RocketBooster {
      constexpr std::ptrdiff_t m_nTargetingParticleIndex = 0x12d8;
      constexpr std::ptrdiff_t m_flCastTime = 0x12dc;
      constexpr std::ptrdiff_t m_bCrashingDown = 0x12e0;
      constexpr std::ptrdiff_t m_bImpulseApplied = 0x12e1;
      constexpr std::ptrdiff_t m_bCanCrash = 0x12e2;
      constexpr std::ptrdiff_t m_vecCrashPosition = 0x12e4;
      constexpr std::ptrdiff_t m_vecCrashDirection = 0x12f0;
    }
    namespace CCitadel_UtilityUpgrade_RocketBoosterVData {
      constexpr std::ptrdiff_t m_LandingParticle = 0x19b0;
      constexpr std::ptrdiff_t m_AoEPreviewParticle = 0x1a90;
      constexpr std::ptrdiff_t m_DropDownStartParticle = 0x1b70;
      constexpr std::ptrdiff_t m_DropDownStartSound = 0x1c50;
      constexpr std::ptrdiff_t m_LandingSound = 0x1c60;
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1c70;
      constexpr std::ptrdiff_t m_BarrierModifier = 0x1c80;
      constexpr std::ptrdiff_t m_flSlamEnabledTime = 0x1c90;
    }
    namespace CCitadel_UtilityUpgrade_RocketBoots {
    }
    namespace CCitadel_UtilityUpgrade_RocketBootsVData {
      constexpr std::ptrdiff_t m_LaunchParticle = 0x18b8;
      constexpr std::ptrdiff_t m_InAirWatcherModifier = 0x1998;
      constexpr std::ptrdiff_t m_flMinHeadClearance = 0x19a8;
    }
    namespace CCitadel_WeaponUpgrade_ApexCombat {
    }
    namespace CCitadel_WeaponUpgrade_BloodTribute {
    }
    namespace CCitadel_WeaponUpgrade_BloodTributeVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
    }
    namespace CCitadel_WeaponUpgrade_BurstFire {
      constexpr std::ptrdiff_t m_nFastFireEndTime = 0x11d8;
    }
    namespace CCitadel_WeaponUpgrade_BurstFireVData {
      constexpr std::ptrdiff_t m_ActivationSound = 0x18b8;
      constexpr std::ptrdiff_t m_BuffModifier = 0x18c8;
    }
    namespace CCitadel_WeaponUpgrade_CooldownOnMiss {
    }
    namespace CCitadel_WeaponUpgrade_CultistSacrifice {
    }
    namespace CCitadel_WeaponUpgrade_CultistSacrifice_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_strOffCooldownSound = 0x18c8;
      constexpr std::ptrdiff_t m_CastTargetEffect = 0x18d8;
    }
    namespace CCitadel_WeaponUpgrade_ExpressShot {
      constexpr std::ptrdiff_t m_iShotsToCreate = 0x1458;
      constexpr std::ptrdiff_t m_bIsInExpressShot = 0x145c;
      constexpr std::ptrdiff_t m_tNextShotTime = 0x1460;
      constexpr std::ptrdiff_t m_bIsPrimaryProc = 0x1480;
    }
    namespace CCitadel_WeaponUpgrade_ExpressShot_VData {
      constexpr std::ptrdiff_t m_ReadyParticle = 0x18b8;
      constexpr std::ptrdiff_t m_TracerAdditionParticle = 0x1998;
      constexpr std::ptrdiff_t flShotDelay = 0x1a78;
      constexpr std::ptrdiff_t m_strOffCooldownSound = 0x1a80;
      constexpr std::ptrdiff_t m_ProcNotificationModifier = 0x1a90;
    }
    namespace CCitadel_WeaponUpgrade_FireRateAura {
    }
    namespace CCitadel_WeaponUpgrade_FuryTrance {
    }
    namespace CCitadel_WeaponUpgrade_FuryTrance_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_CastTargetEffect = 0x18c8;
    }
    namespace CCitadel_WeaponUpgrade_GlassCannon {
      constexpr std::ptrdiff_t m_nKillsEarned = 0x11d8;
    }
    namespace CCitadel_WeaponUpgrade_GlassCannonVData {
      constexpr std::ptrdiff_t m_strDeathSound = 0x18b8;
      constexpr std::ptrdiff_t m_strStackSound = 0x18c8;
      constexpr std::ptrdiff_t m_DeathParticle = 0x18d8;
      constexpr std::ptrdiff_t m_ProcNotificationModifier = 0x19b8;
    }
    namespace CCitadel_WeaponUpgrade_Headhunter_VData {
      constexpr std::ptrdiff_t m_HeadshotBuffModifier = 0x890;
    }
    namespace CCitadel_WeaponUpgrade_HeadshotBooster_VData {
      constexpr std::ptrdiff_t m_HeadShotSound = 0x880;
    }
    namespace CCitadel_WeaponUpgrade_HeadshotDamage {
    }
    namespace CCitadel_WeaponUpgrade_HeadshotDamage_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x18b8;
    }
    namespace CCitadel_WeaponUpgrade_InfiniteMagazine {
    }
    namespace CCitadel_WeaponUpgrade_InfiniteMagazineVData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
    }
    namespace CCitadel_WeaponUpgrade_InstantReload {
      constexpr std::ptrdiff_t m_bIsManualReloading = 0x11d8;
    }
    namespace CCitadel_WeaponUpgrade_InstantReloadVData {
      constexpr std::ptrdiff_t m_ReloadParticle = 0x18b8;
    }
    namespace CCitadel_WeaponUpgrade_RechargingBullets {
    }
    namespace CCitadel_WeaponUpgrade_RechargingBulletsVData {
      constexpr std::ptrdiff_t m_ProcParticle = 0x18b8;
      constexpr std::ptrdiff_t m_strProcSound = 0x1998;
      constexpr std::ptrdiff_t m_ProcNotificationModifier = 0x19a8;
    }
    namespace CCitadel_WeaponUpgrade_Ricochet {
    }
    namespace CCitadel_WeaponUpgrade_SiphonBullets {
      constexpr std::ptrdiff_t m_iStacks = 0x11d8;
    }
    namespace CCitadel_WeaponUpgrade_SiphonBulletsVData {
    }
    namespace CCitadel_WeaponUpgrade_SpellslingerHeadshots {
    }
    namespace CCitadel_WeaponUpgrade_SpellslingerHeadshots_VData {
      constexpr std::ptrdiff_t m_HeadshotDebuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x18c8;
    }
    namespace CCitadel_WeaponUpgrade_SplitShot {
      constexpr std::ptrdiff_t m_nLastShotID = 0x11d8;
      constexpr std::ptrdiff_t m_nLastHitShotID = 0x11dc;
      constexpr std::ptrdiff_t m_nWpnBatchCount = 0x11e0;
      constexpr std::ptrdiff_t m_nLastBulletHitShotID = 0x1250;
      constexpr std::ptrdiff_t m_nLastBulletHitCount = 0x1254;
      constexpr std::ptrdiff_t m_eLastBulletHitEnt = 0x1258;
      constexpr std::ptrdiff_t m_bSplitShotActive = 0x125c;
    }
    namespace CCitadel_WeaponUpgrade_SplitShotVData {
      constexpr std::ptrdiff_t m_strWeaponShootSound = 0x18b8;
      constexpr std::ptrdiff_t m_BuffIndicatorModifier = 0x18c8;
      constexpr std::ptrdiff_t m_WeaponDamageBuff = 0x18d8;
    }
    namespace CCitadel_WeaponUpgrade_SurgingPower {
    }
    namespace CCitadel_WeaponUpgrade_SurgingPowerVData {
      constexpr std::ptrdiff_t m_ModifierSurgingPower = 0x18b8;
      constexpr std::ptrdiff_t m_CastTargetEffect = 0x18c8;
    }
    namespace CCitadel_WeaponUpgrade_WeaponEater {
      constexpr std::ptrdiff_t m_nWeaponPower = 0x13d8;
    }
    namespace CCitadel_WeaponUpgrade_WeaponEaterVData {
      constexpr std::ptrdiff_t m_WeaponEaterTracker = 0x18b8;
    }
    namespace CCitadel_Werewolf_CripplingSlash {
    }
    namespace CCitadel_Werewolf_CripplingSlashVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_DisarmModifier = 0x1828;
      constexpr std::ptrdiff_t m_SlowModifier = 0x1838;
      constexpr std::ptrdiff_t m_strSlashStart = 0x1848;
      constexpr std::ptrdiff_t m_strSlashImpactSound = 0x1858;
      constexpr std::ptrdiff_t m_SlashSwingEffect = 0x1868;
      constexpr std::ptrdiff_t m_SlashImpactEffect = 0x1948;
      constexpr std::ptrdiff_t m_flSlashForwardOffset = 0x1a28;
    }
    namespace CCitadel_Werewolf_Hunt {
    }
    namespace CCitadel_Werewolf_HuntVData {
      constexpr std::ptrdiff_t m_SelfBuffWerewolfModifier = 0x1818;
      constexpr std::ptrdiff_t m_SelfBuffHumanModifier = 0x1828;
      constexpr std::ptrdiff_t m_AuraWerewolfModifier = 0x1838;
      constexpr std::ptrdiff_t m_AuraHumanModifier = 0x1848;
    }
    namespace CCitadel_Werewolf_Transformation {
      constexpr std::ptrdiff_t m_bIsTransformed = 0x17d8;
      constexpr std::ptrdiff_t m_bIsTransformingBack = 0x17d9;
      constexpr std::ptrdiff_t m_tLastRegenComponentThinkTime = 0x17dc;
      constexpr std::ptrdiff_t m_tForceTransformTime = 0x17e4;
      constexpr std::ptrdiff_t m_flWerewolfStartTime = 0x17e8;
      constexpr std::ptrdiff_t m_pWerewolfModifier = 0x17f0;
    }
    namespace CCitadel_Werewolf_TransformationVData {
      constexpr std::ptrdiff_t m_ReadyModifier = 0x1818;
      constexpr std::ptrdiff_t m_WerewolfModifier = 0x1828;
      constexpr std::ptrdiff_t m_KillCreditModifier = 0x1838;
      constexpr std::ptrdiff_t m_TransformEndParticle = 0x1848;
      constexpr std::ptrdiff_t m_TransformKillParticle = 0x1928;
      constexpr std::ptrdiff_t m_bAutoTransformOnReadyComplete = 0x1a08;
      constexpr std::ptrdiff_t m_strEndingWarningSound = 0x1a10;
      constexpr std::ptrdiff_t m_strAG2PostCastAction = 0x1a20;
    }
    namespace CCitadel_Werewolf_UnloadGun {
    }
    namespace CCitadel_Werewolf_UnloadGun2 {
      constexpr std::ptrdiff_t m_tActiveEndTime = 0x11dc;
    }
    namespace CCitadel_Werewolf_UnloadGun2VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x1818;
      constexpr std::ptrdiff_t m_strShootSound = 0x1828;
      constexpr std::ptrdiff_t m_GunReloadParticle = 0x1838;
      constexpr std::ptrdiff_t m_MuzzleFlashParticle = 0x1918;
      constexpr std::ptrdiff_t m_bGrantAmmoOnCast = 0x19f8;
      constexpr std::ptrdiff_t m_InaccuracyCurveScaleDuringPrecast = 0x1a00;
    }
    namespace CCitadel_Werewolf_UnloadGunVData {
      constexpr std::ptrdiff_t m_ShootingModifier = 0x1818;
      constexpr std::ptrdiff_t m_strShootSound = 0x1828;
      constexpr std::ptrdiff_t m_GunReloadParticle = 0x1838;
      constexpr std::ptrdiff_t m_MuzzleFlashParticle = 0x1918;
      constexpr std::ptrdiff_t m_bGrantAmmoOnCast = 0x19f8;
    }
    namespace CCitadel_XPOrbVData {
      constexpr std::ptrdiff_t m_bIsObjective = 0x28;
      constexpr std::ptrdiff_t m_strOrbClaimed = 0x30;
      constexpr std::ptrdiff_t m_strOrbClaimedTeammate = 0x40;
      constexpr std::ptrdiff_t m_strOrbDenied = 0x50;
      constexpr std::ptrdiff_t m_strOrbDeniedPlayer = 0x60;
      constexpr std::ptrdiff_t m_strOrbHitConfirm = 0x70;
      constexpr std::ptrdiff_t m_strOrbHitPredicted = 0x80;
      constexpr std::ptrdiff_t m_sOrbModel = 0x90;
      constexpr std::ptrdiff_t m_sPredictedHitLimboGlowParticle = 0x170;
      constexpr std::ptrdiff_t m_sFriendlyHitConfirmParticle = 0x250;
      constexpr std::ptrdiff_t m_sEnemyHitConfirmParticle = 0x330;
      constexpr std::ptrdiff_t m_sFriendlyGlowParticle = 0x410;
      constexpr std::ptrdiff_t m_sEnemyGlowParticle = 0x4f0;
      constexpr std::ptrdiff_t m_sGoldReceivedParticle = 0x5d0;
      constexpr std::ptrdiff_t m_sFriendlyOrbDeniedParticle = 0x6b0;
      constexpr std::ptrdiff_t m_sEnemyOrbDeniedParticle = 0x790;
      constexpr std::ptrdiff_t m_sFriendlyOrbEarnedParticle = 0x870;
      constexpr std::ptrdiff_t m_sEnemyOrbEarnedParticle = 0x950;
      constexpr std::ptrdiff_t m_flOrbSpawnDelayMin = 0xa30;
      constexpr std::ptrdiff_t m_flOrbSpawnDelayMax = 0xa34;
      constexpr std::ptrdiff_t m_flOrbSpawnOffsetZ = 0xa38;
      constexpr std::ptrdiff_t m_flOrbSpawnOffsetRandomXYZ = 0xa3c;
      constexpr std::ptrdiff_t m_flGravityScale = 0xa40;
      constexpr std::ptrdiff_t m_flLateralSpeedMin = 0xa44;
      constexpr std::ptrdiff_t m_flLateralSpeedMax = 0xa48;
      constexpr std::ptrdiff_t m_flLateralMoveDuration = 0xa4c;
      constexpr std::ptrdiff_t m_flUpSpeedMin = 0xa50;
      constexpr std::ptrdiff_t m_flUpSpeedMax = 0xa54;
      constexpr std::ptrdiff_t m_flDownSpeed = 0xa58;
      constexpr std::ptrdiff_t m_flBurstSpeedMultiplier = 0xa5c;
      constexpr std::ptrdiff_t m_flBurstSpeedDuration = 0xa60;
      constexpr std::ptrdiff_t m_flOscillateFrequency = 0xa64;
      constexpr std::ptrdiff_t m_flLifeTime = 0xa68;
      constexpr std::ptrdiff_t m_flRadius = 0xa6c;
      constexpr std::ptrdiff_t m_flCollisionRadius = 0xa70;
      constexpr std::ptrdiff_t m_flInvulDurationMin = 0xa74;
      constexpr std::ptrdiff_t m_flInvulDurationMax = 0xa78;
      constexpr std::ptrdiff_t m_bUseKillerPlaneOffsets = 0xa7c;
      constexpr std::ptrdiff_t m_flKillerPlaneOffset = 0xa80;
      constexpr std::ptrdiff_t m_flKillerPlaneHorizontalDecayRate = 0xa84;
      constexpr std::ptrdiff_t m_flKillerPlaneHorizontalSpeedX = 0xa88;
      constexpr std::ptrdiff_t m_flKillerPlaneHorizontalSpeedY = 0xa8c;
      constexpr std::ptrdiff_t m_flKillerPlaneVerticalSpeed = 0xa90;
      constexpr std::ptrdiff_t m_flKillerPlaneSpeedNoise = 0xa94;
      constexpr std::ptrdiff_t m_flKillerPlaneLaunchOffset = 0xa98;
      constexpr std::ptrdiff_t m_flKillerPlaneLaunchDelay = 0xa9c;
      constexpr std::ptrdiff_t m_flOrbClaimWindow = 0xaa0;
    }
    namespace CClientAlphaProperty {
      constexpr std::ptrdiff_t m_nRenderFX = 0x0;
      constexpr std::ptrdiff_t m_bAlphaOverride = 0x0;
      constexpr std::ptrdiff_t m_nRenderMode = 0x0;
      constexpr std::ptrdiff_t m_nDesyncOffset = 0x0;
      constexpr std::ptrdiff_t m_bShadowAlphaOverride = 0x0;
      constexpr std::ptrdiff_t m_nDistFadeStart = 0x10;
      constexpr std::ptrdiff_t m_nDistFadeEnd = 0x12;
      constexpr std::ptrdiff_t m_nAlpha = 0x17;
      constexpr std::ptrdiff_t m_flFadeScale = 0x18;
      constexpr std::ptrdiff_t m_flRenderFxStartTime = 0x1c;
      constexpr std::ptrdiff_t m_flRenderFxDuration = 0x20;
    }
    namespace CCollisionProperty {
      constexpr std::ptrdiff_t m_collisionAttribute = 0x10;
      constexpr std::ptrdiff_t m_vecMins = 0x40;
      constexpr std::ptrdiff_t m_vecMaxs = 0x4c;
      constexpr std::ptrdiff_t m_usSolidFlags = 0x5a;
      constexpr std::ptrdiff_t m_nSolidType = 0x5b;
      constexpr std::ptrdiff_t m_triggerBloat = 0x5c;
      constexpr std::ptrdiff_t m_nSurroundType = 0x5d;
      constexpr std::ptrdiff_t m_CollisionGroup = 0x5e;
      constexpr std::ptrdiff_t m_nEnablePhysics = 0x5f;
      constexpr std::ptrdiff_t m_flBoundingRadius = 0x60;
      constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64;
      constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70;
      constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7c;
      constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88;
      constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94;
      constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xa0;
      constexpr std::ptrdiff_t m_flCapsuleRadius = 0xac;
    }
    namespace CDestructableBuildingVData {
      constexpr std::ptrdiff_t m_flEnemyTrooperProtectionRange = 0x28;
      constexpr std::ptrdiff_t m_flTrooperJumpRange = 0x2c;
      constexpr std::ptrdiff_t m_flFinishedDyingThink = 0x30;
      constexpr std::ptrdiff_t m_sAmberModelName = 0x38;
      constexpr std::ptrdiff_t m_sSapphModelName = 0x118;
      constexpr std::ptrdiff_t m_AmberDeathParticle = 0x1f8;
      constexpr std::ptrdiff_t m_SapphDeathParticle = 0x2d8;
      constexpr std::ptrdiff_t m_AmberDeathSound = 0x3b8;
      constexpr std::ptrdiff_t m_SapphDeathSound = 0x3c8;
      constexpr std::ptrdiff_t m_iMaxHealthFinal = 0x3d8;
      constexpr std::ptrdiff_t m_iMaxHealthGenerator = 0x3dc;
      constexpr std::ptrdiff_t m_iMaxHealthGeneratorSecond = 0x3e0;
      constexpr std::ptrdiff_t m_PowerGenerator = 0x3e8;
      constexpr std::ptrdiff_t m_ObjectiveRegen = 0x3f8;
      constexpr std::ptrdiff_t m_BackdoorBulletResistModifier = 0x408;
      constexpr std::ptrdiff_t m_BackdoorProtectionModifier = 0x418;
      constexpr std::ptrdiff_t m_RangedArmorModifier = 0x428;
    }
    namespace CDestructiblePartsComponent {
      constexpr std::ptrdiff_t __m_pChainEntity = 0x0;
      constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48;
      constexpr std::ptrdiff_t m_hOwner = 0x60;
      constexpr std::ptrdiff_t m_pAnimGraphDestructibleGraphController = 0x68;
    }
    namespace CDoormanBombProjectile {
    }
    namespace CEffectData {
      constexpr std::ptrdiff_t m_vOrigin = 0x8;
      constexpr std::ptrdiff_t m_vStart = 0x14;
      constexpr std::ptrdiff_t m_vNormal = 0x20;
      constexpr std::ptrdiff_t m_vAngles = 0x2c;
      constexpr std::ptrdiff_t m_hEntity = 0x38;
      constexpr std::ptrdiff_t m_hOtherEntity = 0x3c;
      constexpr std::ptrdiff_t m_flScale = 0x40;
      constexpr std::ptrdiff_t m_flMagnitude = 0x44;
      constexpr std::ptrdiff_t m_flRadius = 0x48;
      constexpr std::ptrdiff_t m_nSurfaceProp = 0x4c;
      constexpr std::ptrdiff_t m_nEffectIndex = 0x50;
      constexpr std::ptrdiff_t m_nDamageType = 0x58;
      constexpr std::ptrdiff_t m_nPenetrate = 0x5c;
      constexpr std::ptrdiff_t m_nMaterial = 0x5e;
      constexpr std::ptrdiff_t m_nHitBox = 0x60;
      constexpr std::ptrdiff_t m_nColor = 0x62;
      constexpr std::ptrdiff_t m_fFlags = 0x63;
      constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64;
      constexpr std::ptrdiff_t m_nAttachmentName = 0x68;
      constexpr std::ptrdiff_t m_iEffectName = 0x6c;
    }
    namespace CEntityComponent {
    }
    namespace CEntityIdentity {
      constexpr std::ptrdiff_t m_nameStringableIndex = 0x14;
      constexpr std::ptrdiff_t m_name = 0x18;
      constexpr std::ptrdiff_t m_designerName = 0x20;
      constexpr std::ptrdiff_t m_flags = 0x30;
      constexpr std::ptrdiff_t m_worldGroupId = 0x38;
      constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3c;
      constexpr std::ptrdiff_t m_PathIndex = 0x40;
      constexpr std::ptrdiff_t m_pAttributes = 0x48;
      constexpr std::ptrdiff_t m_pPrev = 0x50;
      constexpr std::ptrdiff_t m_pNext = 0x58;
      constexpr std::ptrdiff_t m_pPrevByClass = 0x60;
      constexpr std::ptrdiff_t m_pNextByClass = 0x68;
    }
    namespace CEntityInstance {
      constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8;
      constexpr std::ptrdiff_t m_pEntity = 0x10;
      constexpr std::ptrdiff_t m_CScriptComponent = 0x28;
    }
    namespace CEnvSoundscape {
      constexpr std::ptrdiff_t m_OnPlay = 0x5f0;
      constexpr std::ptrdiff_t m_flRadius = 0x608;
      constexpr std::ptrdiff_t m_soundEventName = 0x610;
      constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x618;
      constexpr std::ptrdiff_t m_soundscapeIndex = 0x61c;
      constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x620;
      constexpr std::ptrdiff_t m_positionNames = 0x628;
      constexpr std::ptrdiff_t m_hProxySoundscape = 0x668;
      constexpr std::ptrdiff_t m_bDisabled = 0x66c;
      constexpr std::ptrdiff_t m_soundscapeName = 0x670;
      constexpr std::ptrdiff_t m_soundEventHash = 0x678;
    }
    namespace CEnvSoundscapeAlias_snd_soundscape {
    }
    namespace CEnvSoundscapeProxy {
      constexpr std::ptrdiff_t m_MainSoundscapeName = 0x680;
    }
    namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
    }
    namespace CEnvSoundscapeTriggerable {
    }
    namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
    }
    namespace CExplosionTypeData {
      constexpr std::ptrdiff_t m_SoundName = 0x0;
      constexpr std::ptrdiff_t m_ParticleEffect = 0x10;
      constexpr std::ptrdiff_t m_bIsIncindiary = 0xf0;
      constexpr std::ptrdiff_t m_bHasForces = 0xf1;
      constexpr std::ptrdiff_t m_DecalType = 0xf8;
    }
    namespace CFilterAttributeInt {
      constexpr std::ptrdiff_t m_sAttributeName = 0x628;
    }
    namespace CFilterClass {
      constexpr std::ptrdiff_t m_iFilterClass = 0x628;
    }
    namespace CFilterLOS {
    }
    namespace CFilterMassGreater {
      constexpr std::ptrdiff_t m_fFilterMass = 0x628;
    }
    namespace CFilterModel {
      constexpr std::ptrdiff_t m_iFilterModel = 0x628;
    }
    namespace CFilterModifier {
      constexpr std::ptrdiff_t m_iFilterModifier = 0x628;
    }
    namespace CFilterMultiple {
      constexpr std::ptrdiff_t m_nFilterType = 0x628;
      constexpr std::ptrdiff_t m_iFilterName = 0x630;
      constexpr std::ptrdiff_t m_hFilter = 0x680;
    }
    namespace CFilterMultipleAPI {
    }
    namespace CFilterName {
      constexpr std::ptrdiff_t m_iFilterName = 0x628;
    }
    namespace CFilterProximity {
      constexpr std::ptrdiff_t m_flRadius = 0x628;
    }
    namespace CFilterTeam {
      constexpr std::ptrdiff_t m_iFilterTeam = 0x628;
    }
    namespace CFlashlightEffect {
      constexpr std::ptrdiff_t m_bIsOn = 0x10;
      constexpr std::ptrdiff_t m_bMuzzleFlashEnabled = 0x20;
      constexpr std::ptrdiff_t m_flMuzzleFlashBrightness = 0x24;
      constexpr std::ptrdiff_t m_quatMuzzleFlashOrientation = 0x30;
      constexpr std::ptrdiff_t m_vecMuzzleFlashOrigin = 0x40;
      constexpr std::ptrdiff_t m_flFov = 0x4c;
      constexpr std::ptrdiff_t m_flFarZ = 0x50;
      constexpr std::ptrdiff_t m_flLinearAtten = 0x54;
      constexpr std::ptrdiff_t m_bCastsShadows = 0x58;
      constexpr std::ptrdiff_t m_flCurrentPullBackDist = 0x5c;
      constexpr std::ptrdiff_t m_FlashlightTexture = 0x60;
      constexpr std::ptrdiff_t m_MuzzleFlashTexture = 0x68;
      constexpr std::ptrdiff_t m_textureName = 0x70;
    }
    namespace CFuncFoliageVData {
      constexpr std::ptrdiff_t m_BulletImpactParticle = 0x28;
      constexpr std::ptrdiff_t m_BulletExitParticle = 0x108;
    }
    namespace CGameModifier_BodyGroupChoice {
      constexpr std::ptrdiff_t m_nBodyGroupName = 0xc0;
      constexpr std::ptrdiff_t m_nBodyGroupChoice = 0xc4;
    }
    namespace CGameModifier_DisableGravity {
    }
    namespace CGameModifier_FireConCommand {
    }
    namespace CGameModifier_FireConCommandVData {
      constexpr std::ptrdiff_t m_FireOnAdded = 0x750;
      constexpr std::ptrdiff_t m_FireOnRemoved = 0x758;
    }
    namespace CGameModifier_FireUserEntityIO {
    }
    namespace CGameModifier_FireUserEntityIOVData {
      constexpr std::ptrdiff_t m_FireOnAdded = 0x750;
      constexpr std::ptrdiff_t m_FireOnRemoved = 0x754;
    }
    namespace CGameModifier_OverrideTargetIdentifier {
      constexpr std::ptrdiff_t m_sTargetIdentifier = 0xc0;
      constexpr std::ptrdiff_t m_hTarget = 0xc8;
      constexpr std::ptrdiff_t m_nOriginType = 0xcc;
      constexpr std::ptrdiff_t m_sAttachmentName = 0xd0;
      constexpr std::ptrdiff_t m_hAttachment = 0xd8;
    }
    namespace CGameModifier_PlayEffectOnDeath {
      constexpr std::ptrdiff_t m_sEffect = 0xc0;
    }
    namespace CGameModifier_SetModelScale {
      constexpr std::ptrdiff_t m_flOldModelScale = 0xc0;
    }
    namespace CGameModifier_SetMoveType {
      constexpr std::ptrdiff_t m_nMoveType = 0xc0;
    }
    namespace CGameModifier_VehicleTopSpeedScale {
      constexpr std::ptrdiff_t m_flTopSpeedScale = 0xc0;
    }
    namespace CGameSceneNode {
      constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0;
      constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0;
      constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0;
      constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0;
      constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0;
      constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0;
      constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0;
      constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0;
      constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0;
      constexpr std::ptrdiff_t m_nodeToWorld = 0x10;
      constexpr std::ptrdiff_t m_pOwner = 0x30;
      constexpr std::ptrdiff_t m_pParent = 0x38;
      constexpr std::ptrdiff_t m_pChild = 0x40;
      constexpr std::ptrdiff_t m_pNextSibling = 0x48;
      constexpr std::ptrdiff_t m_hParent = 0x70;
      constexpr std::ptrdiff_t m_vecOrigin = 0x80;
      constexpr std::ptrdiff_t m_angRotation = 0xb8;
      constexpr std::ptrdiff_t m_flScale = 0xc4;
      constexpr std::ptrdiff_t m_vecAbsOrigin = 0xc8;
      constexpr std::ptrdiff_t m_angAbsRotation = 0xd4;
      constexpr std::ptrdiff_t m_flAbsScale = 0xe0;
      constexpr std::ptrdiff_t m_vecWrappedLocalOrigin = 0xe4;
      constexpr std::ptrdiff_t m_angWrappedLocalRotation = 0xf0;
      constexpr std::ptrdiff_t m_flWrappedScale = 0xfc;
      constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0x100;
      constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0x102;
      constexpr std::ptrdiff_t m_bDormant = 0x103;
      constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0x104;
      constexpr std::ptrdiff_t m_nHierarchicalDepth = 0x107;
      constexpr std::ptrdiff_t m_nHierarchyType = 0x108;
      constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x109;
      constexpr std::ptrdiff_t m_name = 0x10c;
      constexpr std::ptrdiff_t m_hierarchyAttachName = 0x120;
      constexpr std::ptrdiff_t m_flClientLocalScale = 0x124;
      constexpr std::ptrdiff_t m_vRenderOrigin = 0x128;
    }
    namespace CGameSceneNodeHandle {
      constexpr std::ptrdiff_t m_hOwner = 0x8;
      constexpr std::ptrdiff_t m_name = 0xc;
    }
    namespace CGlobalLightBase {
      constexpr std::ptrdiff_t m_bSpotLight = 0x10;
      constexpr std::ptrdiff_t m_SpotLightOrigin = 0x14;
      constexpr std::ptrdiff_t m_SpotLightAngles = 0x20;
      constexpr std::ptrdiff_t m_ShadowDirection = 0x2c;
      constexpr std::ptrdiff_t m_AmbientDirection = 0x38;
      constexpr std::ptrdiff_t m_SpecularDirection = 0x44;
      constexpr std::ptrdiff_t m_InspectorSpecularDirection = 0x50;
      constexpr std::ptrdiff_t m_flSpecularPower = 0x5c;
      constexpr std::ptrdiff_t m_flSpecularIndependence = 0x60;
      constexpr std::ptrdiff_t m_SpecularColor = 0x64;
      constexpr std::ptrdiff_t m_bStartDisabled = 0x68;
      constexpr std::ptrdiff_t m_bEnabled = 0x69;
      constexpr std::ptrdiff_t m_LightColor = 0x6a;
      constexpr std::ptrdiff_t m_AmbientColor1 = 0x6e;
      constexpr std::ptrdiff_t m_AmbientColor2 = 0x72;
      constexpr std::ptrdiff_t m_AmbientColor3 = 0x76;
      constexpr std::ptrdiff_t m_flSunDistance = 0x7c;
      constexpr std::ptrdiff_t m_flFOV = 0x80;
      constexpr std::ptrdiff_t m_flNearZ = 0x84;
      constexpr std::ptrdiff_t m_flFarZ = 0x88;
      constexpr std::ptrdiff_t m_bEnableShadows = 0x8c;
      constexpr std::ptrdiff_t m_bOldEnableShadows = 0x8d;
      constexpr std::ptrdiff_t m_bBackgroundClearNotRequired = 0x8e;
      constexpr std::ptrdiff_t m_flCloudScale = 0x90;
      constexpr std::ptrdiff_t m_flCloud1Speed = 0x94;
      constexpr std::ptrdiff_t m_flCloud1Direction = 0x98;
      constexpr std::ptrdiff_t m_flCloud2Speed = 0x9c;
      constexpr std::ptrdiff_t m_flCloud2Direction = 0xa0;
      constexpr std::ptrdiff_t m_flAmbientScale1 = 0xb0;
      constexpr std::ptrdiff_t m_flAmbientScale2 = 0xb4;
      constexpr std::ptrdiff_t m_flGroundScale = 0xb8;
      constexpr std::ptrdiff_t m_flLightScale = 0xbc;
      constexpr std::ptrdiff_t m_flFoWDarkness = 0xc0;
      constexpr std::ptrdiff_t m_bEnableSeparateSkyboxFog = 0xc4;
      constexpr std::ptrdiff_t m_vFowColor = 0xc8;
      constexpr std::ptrdiff_t m_ViewOrigin = 0xd4;
      constexpr std::ptrdiff_t m_ViewAngles = 0xe0;
      constexpr std::ptrdiff_t m_flViewFoV = 0xec;
      constexpr std::ptrdiff_t m_WorldPoints = 0xf0;
      constexpr std::ptrdiff_t m_vFogOffsetLayer0 = 0x4a8;
      constexpr std::ptrdiff_t m_vFogOffsetLayer1 = 0x4b0;
      constexpr std::ptrdiff_t m_hEnvWind = 0x4b8;
      constexpr std::ptrdiff_t m_hEnvSky = 0x4bc;
    }
    namespace CGlowProperty {
      constexpr std::ptrdiff_t m_fGlowColor = 0x8;
      constexpr std::ptrdiff_t m_iGlowType = 0x30;
      constexpr std::ptrdiff_t m_iGlowTeam = 0x34;
      constexpr std::ptrdiff_t m_nGlowRange = 0x38;
      constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3c;
      constexpr std::ptrdiff_t m_glowColorOverride = 0x40;
      constexpr std::ptrdiff_t m_bFlashing = 0x44;
      constexpr std::ptrdiff_t m_flGlowTime = 0x48;
      constexpr std::ptrdiff_t m_flGlowStartTime = 0x4c;
      constexpr std::ptrdiff_t m_bGlowing = 0x50;
    }
    namespace CHitboxComponent {
      constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14;
    }
    namespace CIcePathShardGenerator {
      constexpr std::ptrdiff_t m_icePathModelDesc = 0x0;
      constexpr std::ptrdiff_t m_hBaseModel = 0x38;
      constexpr std::ptrdiff_t m_icePathSurfModelDesc = 0x40;
      constexpr std::ptrdiff_t m_hSurfModel = 0x78;
      constexpr std::ptrdiff_t m_flRadius = 0x80;
      constexpr std::ptrdiff_t m_vecPreviousShard = 0x88;
      constexpr std::ptrdiff_t m_vecPreviousShardOrigin = 0xa0;
      constexpr std::ptrdiff_t m_vecPreviousPreviousShardOrigin = 0xac;
      constexpr std::ptrdiff_t m_vecUnitCirclePoints = 0xb8;
      constexpr std::ptrdiff_t m_vPrevFrontEdgeVerts = 0xd0;
    }
    namespace CInWorldItemPanel {
      constexpr std::ptrdiff_t m_hTrackedEntity = 0xbf0;
      constexpr std::ptrdiff_t m_nTrackedEntity = 0xbf4;
    }
    namespace CInfoCitadelHideout {
      constexpr std::ptrdiff_t m_OnFastCooldownsEnabled = 0x5f0;
      constexpr std::ptrdiff_t m_OnFastCooldownsDisabled = 0x608;
    }
    namespace CInfoDynamicShadowHint {
      constexpr std::ptrdiff_t m_bDisabled = 0x5f0;
      constexpr std::ptrdiff_t m_flRange = 0x5f4;
      constexpr std::ptrdiff_t m_nImportance = 0x5f8;
      constexpr std::ptrdiff_t m_nLightChoice = 0x5fc;
      constexpr std::ptrdiff_t m_hLight = 0x600;
    }
    namespace CInfoDynamicShadowHintBox {
      constexpr std::ptrdiff_t m_vBoxMins = 0x608;
      constexpr std::ptrdiff_t m_vBoxMaxs = 0x614;
    }
    namespace CInfoFan {
      constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x630;
      constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x634;
      constexpr std::ptrdiff_t m_flCurveDistRange = 0x638;
      constexpr std::ptrdiff_t m_FanForceCurveString = 0x640;
    }
    namespace CInfoInteraction {
      constexpr std::ptrdiff_t m_strInteractVData = 0x5f0;
      constexpr std::ptrdiff_t m_flInteractRadius = 0x608;
      constexpr std::ptrdiff_t m_hSceneRequest = 0x60c;
    }
    namespace CInfoOffscreenPanoramaTexture {
      constexpr std::ptrdiff_t m_bDisabled = 0x5f0;
      constexpr std::ptrdiff_t m_nResolutionX = 0x5f4;
      constexpr std::ptrdiff_t m_nResolutionY = 0x5f8;
      constexpr std::ptrdiff_t m_szPanelType = 0x600;
      constexpr std::ptrdiff_t m_szLayoutFileName = 0x608;
      constexpr std::ptrdiff_t m_RenderAttrName = 0x610;
      constexpr std::ptrdiff_t m_TargetEntities = 0x618;
      constexpr std::ptrdiff_t m_nTargetChangeCount = 0x630;
      constexpr std::ptrdiff_t m_vecCSSClasses = 0x638;
      constexpr std::ptrdiff_t m_szTargetsName = 0x650;
      constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x658;
      constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x7d0;
    }
    namespace CInfoParticleTarget {
    }
    namespace CInfoTarget {
    }
    namespace CInfoTutorialController {
    }
    namespace CInfoTutorialPoint {
      constexpr std::ptrdiff_t m_ePointType = 0x5f0;
      constexpr std::ptrdiff_t m_sMoveTarget = 0x5f8;
      constexpr std::ptrdiff_t m_HeroID = 0x600;
    }
    namespace CInfoWorldLayer {
      constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x5f0;
      constexpr std::ptrdiff_t m_worldName = 0x608;
      constexpr std::ptrdiff_t m_layerName = 0x610;
      constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x618;
      constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x619;
      constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x61a;
      constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x61c;
      constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x620;
    }
    namespace CInterpolatedValue {
      constexpr std::ptrdiff_t m_flStartTime = 0x0;
      constexpr std::ptrdiff_t m_flEndTime = 0x4;
      constexpr std::ptrdiff_t m_flStartValue = 0x8;
      constexpr std::ptrdiff_t m_flEndValue = 0xc;
      constexpr std::ptrdiff_t m_nInterpType = 0x10;
    }
    namespace CItemAOERootVData {
      constexpr std::ptrdiff_t m_AOEParticle = 0x18b8;
      constexpr std::ptrdiff_t m_strRootTargetSound = 0x1998;
      constexpr std::ptrdiff_t m_TargetModifier = 0x19a8;
      constexpr std::ptrdiff_t m_TetherModifier = 0x19b8;
    }
    namespace CItemAOESilenceAuraVData {
      constexpr std::ptrdiff_t m_empWaveParticle = 0x7a8;
    }
    namespace CItemAOESilenceModifierVData {
      constexpr std::ptrdiff_t m_strSilenceTargetSound = 0x750;
      constexpr std::ptrdiff_t m_SilenceModifier = 0x760;
    }
    namespace CItemCapacitor {
    }
    namespace CItemCapacitorVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_DamageParticle = 0x18c8;
      constexpr std::ptrdiff_t m_PurgeCastParticle = 0x19a8;
      constexpr std::ptrdiff_t m_PurgeSound = 0x1a88;
    }
    namespace CItemExplosiveBarrel {
    }
    namespace CItemHauntingScream {
    }
    namespace CItemHauntingScreamVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x18c8;
    }
    namespace CItemMetalSkinVData {
      constexpr std::ptrdiff_t m_MetalSkinModifier = 0x18b8;
    }
    namespace CItemMysticReverb {
    }
    namespace CItemPhantomStrike_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_PullDownModifier = 0x18c8;
      constexpr std::ptrdiff_t m_CasterModifier = 0x18d8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x18e8;
      constexpr std::ptrdiff_t m_CastParticle = 0x18f8;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x19d8;
      constexpr std::ptrdiff_t m_BuffParticle = 0x1ab8;
      constexpr std::ptrdiff_t m_flTeleportDistance = 0x1b98;
      constexpr std::ptrdiff_t m_flVelocityScale = 0x1b9c;
    }
    namespace CItemPowerShardVData {
      constexpr std::ptrdiff_t m_RefreshParticle = 0x18b8;
    }
    namespace CItemRefresherVData {
      constexpr std::ptrdiff_t m_RefreshParticle = 0x18b8;
    }
    namespace CItemShrink_RayVData {
      constexpr std::ptrdiff_t m_ShrinkRayModifier = 0x18b8;
    }
    namespace CItemSilenceGlyph {
    }
    namespace CItemSilenceGlyphVData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_ResistReductionModifier = 0x18c8;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x18d8;
    }
    namespace CItemSingleTargetStunVData {
      constexpr std::ptrdiff_t m_StunDelayModifier = 0x18b8;
      constexpr std::ptrdiff_t m_CastParticle = 0x18c8;
    }
    namespace CItemSmokeBombPreCastModifierVData {
      constexpr std::ptrdiff_t m_SmokeAreaParticle = 0x750;
      constexpr std::ptrdiff_t m_CasterParticle = 0x830;
    }
    namespace CItemStimPakVData {
      constexpr std::ptrdiff_t m_StimPakModifier = 0x18b8;
      constexpr std::ptrdiff_t m_CastParticle = 0x18c8;
    }
    namespace CItemXP {
      constexpr std::ptrdiff_t m_timeLaunch = 0xa00;
      constexpr std::ptrdiff_t m_flAttackableTime = 0xa04;
      constexpr std::ptrdiff_t m_flEndAttackableTime = 0xa08;
      constexpr std::ptrdiff_t m_nLaunchNum = 0xa0c;
    }
    namespace CItem_ActiveReload_VData {
      constexpr std::ptrdiff_t m_SuccessModifier = 0x18b8;
      constexpr std::ptrdiff_t m_strSuccessSound = 0x18c8;
      constexpr std::ptrdiff_t m_strFailureSound = 0x18d8;
      constexpr std::ptrdiff_t m_strWindowEnteredSound = 0x18e8;
      constexpr std::ptrdiff_t m_SuccessParticle = 0x18f8;
      constexpr std::ptrdiff_t m_FailureParticle = 0x19d8;
      constexpr std::ptrdiff_t m_flGraceTime = 0x1ab8;
    }
    namespace CItem_FleetfootBoots {
    }
    namespace CItem_FleetfootBoots_VData {
      constexpr std::ptrdiff_t m_FleetfootBootsModifier = 0x18b8;
      constexpr std::ptrdiff_t m_FleetfootBootsBonusClipModifier = 0x18c8;
    }
    namespace CItem_GreaterWitheringWhip {
    }
    namespace CItem_Infuser_VData {
      constexpr std::ptrdiff_t m_BuffModifier = 0x18b8;
      constexpr std::ptrdiff_t m_CastParticle = 0x18c8;
    }
    namespace CItem_ResonantHealing {
      constexpr std::ptrdiff_t m_iRegenStacks = 0x11d8;
    }
    namespace CItem_ResonantHealing_VData {
      constexpr std::ptrdiff_t m_StackNotificationModifier = 0x18b8;
      constexpr std::ptrdiff_t m_OnCastModifier = 0x18c8;
      constexpr std::ptrdiff_t m_RegenParticle = 0x18d8;
      constexpr std::ptrdiff_t m_ProcParticle = 0x19b8;
      constexpr std::ptrdiff_t m_HealingLoopSoundOverride = 0x1a98;
    }
    namespace CItem_RestorativeLocket {
      constexpr std::ptrdiff_t m_nNumStacks = 0x1458;
    }
    namespace CItem_RestorativeLocket_VData {
      constexpr std::ptrdiff_t m_CastParticle = 0x18b8;
      constexpr std::ptrdiff_t m_TrailParticle = 0x1998;
      constexpr std::ptrdiff_t m_strStackSound = 0x1a78;
      constexpr std::ptrdiff_t m_strMaxStackSound = 0x1a88;
      constexpr std::ptrdiff_t m_strTargetHealSound = 0x1a98;
    }
    namespace CItem_WarpStone_VData {
      constexpr std::ptrdiff_t m_CasterModifier = 0x18b8;
      constexpr std::ptrdiff_t m_CasterDebuffModifier = 0x18c8;
      constexpr std::ptrdiff_t m_strExplodeSound = 0x18d8;
      constexpr std::ptrdiff_t m_CastDelayParticle = 0x18e8;
      constexpr std::ptrdiff_t m_TeleportTrailParticle = 0x19c8;
      constexpr std::ptrdiff_t m_flGroundProbeSpeed = 0x1aa8;
      constexpr std::ptrdiff_t m_flGroundStepDown = 0x1aac;
      constexpr std::ptrdiff_t m_flGroundStepUp = 0x1ab0;
      constexpr std::ptrdiff_t m_iMaxGroundIterations = 0x1ab4;
      constexpr std::ptrdiff_t m_flVelocityScale = 0x1ab8;
    }
    namespace CItem_WitheringWhip {
    }
    namespace CItem_WitheringWhip_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x19b8;
    }
    namespace CLightComponent {
      constexpr std::ptrdiff_t __m_pChainEntity = 0x38;
      constexpr std::ptrdiff_t m_Color = 0x75;
      constexpr std::ptrdiff_t m_SecondaryColor = 0x79;
      constexpr std::ptrdiff_t m_flBrightness = 0x80;
      constexpr std::ptrdiff_t m_flBrightnessScale = 0x84;
      constexpr std::ptrdiff_t m_flBrightnessMult = 0x88;
      constexpr std::ptrdiff_t m_flRange = 0x8c;
      constexpr std::ptrdiff_t m_flFalloff = 0x90;
      constexpr std::ptrdiff_t m_flAttenuation0 = 0x94;
      constexpr std::ptrdiff_t m_flAttenuation1 = 0x98;
      constexpr std::ptrdiff_t m_flAttenuation2 = 0x9c;
      constexpr std::ptrdiff_t m_flTheta = 0xa0;
      constexpr std::ptrdiff_t m_flPhi = 0xa4;
      constexpr std::ptrdiff_t m_hLightCookie = 0xa8;
      constexpr std::ptrdiff_t m_nCascades = 0xb0;
      constexpr std::ptrdiff_t m_nCastShadows = 0xb4;
      constexpr std::ptrdiff_t m_nShadowWidth = 0xb8;
      constexpr std::ptrdiff_t m_nShadowHeight = 0xbc;
      constexpr std::ptrdiff_t m_bRenderDiffuse = 0xc0;
      constexpr std::ptrdiff_t m_nRenderSpecular = 0xc4;
      constexpr std::ptrdiff_t m_bRenderTransmissive = 0xc8;
      constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xcc;
      constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xd0;
      constexpr std::ptrdiff_t m_nStyle = 0xd4;
      constexpr std::ptrdiff_t m_Pattern = 0xd8;
      constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xe0;
      constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xe4;
      constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xe8;
      constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xec;
      constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xf0;
      constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xf4;
      constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xf8;
      constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xfc;
      constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100;
      constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104;
      constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108;
      constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10c;
      constexpr std::ptrdiff_t m_nShadowPriority = 0x110;
      constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114;
      constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x118;
      constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x11c;
      constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x120;
      constexpr std::ptrdiff_t m_bAllowSSTGeneration = 0x121;
      constexpr std::ptrdiff_t m_nDirectLight = 0x124;
      constexpr std::ptrdiff_t m_nIndirectLight = 0x128;
      constexpr std::ptrdiff_t m_bDynamicBounce = 0x12c;
      constexpr std::ptrdiff_t m_flFadeMinDist = 0x130;
      constexpr std::ptrdiff_t m_flFadeMaxDist = 0x134;
      constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x138;
      constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x13c;
      constexpr std::ptrdiff_t m_bEnabled = 0x140;
      constexpr std::ptrdiff_t m_bFlicker = 0x141;
      constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x142;
      constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x144;
      constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x150;
      constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x15c;
      constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x168;
      constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x174;
      constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x180;
      constexpr std::ptrdiff_t m_nFogLightingMode = 0x184;
      constexpr std::ptrdiff_t m_flFogContributionStength = 0x188;
      constexpr std::ptrdiff_t m_flNearClipPlane = 0x18c;
      constexpr std::ptrdiff_t m_SkyColor = 0x190;
      constexpr std::ptrdiff_t m_flSkyIntensity = 0x194;
      constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x198;
      constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x19c;
      constexpr std::ptrdiff_t m_bMixedShadows = 0x19d;
      constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1a0;
      constexpr std::ptrdiff_t m_flCapsuleLength = 0x1a4;
      constexpr std::ptrdiff_t m_flMinRoughness = 0x1a8;
    }
    namespace CLogicRelay {
      constexpr std::ptrdiff_t m_OnSpawn = 0x5f0;
      constexpr std::ptrdiff_t m_OnTrigger = 0x608;
      constexpr std::ptrdiff_t m_bDisabled = 0x620;
      constexpr std::ptrdiff_t m_bWaitForRefire = 0x621;
      constexpr std::ptrdiff_t m_bTriggerOnce = 0x622;
      constexpr std::ptrdiff_t m_bFastRetrigger = 0x623;
      constexpr std::ptrdiff_t m_bPassthoughCaller = 0x624;
    }
    namespace CLogicRelayAPI {
    }
    namespace CLogicalEntity {
    }
    namespace CMatchTrackedStatsEntity {
    }
    namespace CModelState {
      constexpr std::ptrdiff_t m_hModel = 0xa0;
      constexpr std::ptrdiff_t m_ModelName = 0xa8;
      constexpr std::ptrdiff_t m_pVPhysicsAggregate = 0xe0;
      constexpr std::ptrdiff_t m_vRootBoneOffset = 0xe8;
      constexpr std::ptrdiff_t m_nRootBoneOffsetResetSerialNumber = 0xf4;
      constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x100;
      constexpr std::ptrdiff_t m_MeshGroupMask = 0x1b0;
      constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x200;
      constexpr std::ptrdiff_t m_nIdealMotionType = 0x24a;
      constexpr std::ptrdiff_t m_nForceLOD = 0x24b;
      constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x24c;
    }
    namespace CModifierAirLiftGrabVData {
      constexpr std::ptrdiff_t m_GrabEffect = 0x750;
      constexpr std::ptrdiff_t m_flLiftHorizontal = 0x830;
      constexpr std::ptrdiff_t m_flLiftHeight = 0x834;
      constexpr std::ptrdiff_t m_flFollowDampingFactor = 0x838;
      constexpr std::ptrdiff_t m_flFollowDistance = 0x83c;
      constexpr std::ptrdiff_t m_flAllyGrabCancelTime = 0x840;
      constexpr std::ptrdiff_t m_flAllyPossibleStuckDistance = 0x844;
    }
    namespace CModifierAirRaidVData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x780;
      constexpr std::ptrdiff_t m_strWeaponShootSound = 0x790;
    }
    namespace CModifierApplyModifierOnDamageTakenVData {
      constexpr std::ptrdiff_t m_vecDamageTypes = 0x750;
      constexpr std::ptrdiff_t m_TargetModifier = 0x768;
      constexpr std::ptrdiff_t m_TargetModifierDurationAbilityProp = 0x778;
      constexpr std::ptrdiff_t m_SelfModifier = 0x780;
      constexpr std::ptrdiff_t m_SelfModifierDurationAbilityProp = 0x790;
    }
    namespace CModifierBullChargingVData {
      constexpr std::ptrdiff_t m_ChargeParticle = 0x750;
    }
    namespace CModifierChargedTackleActiveVData {
      constexpr std::ptrdiff_t m_TackleParticle = 0x750;
      constexpr std::ptrdiff_t m_PullEnemiesParticle = 0x830;
    }
    namespace CModifierChargedTacklePrepareVData {
      constexpr std::ptrdiff_t m_PrepareParticle = 0x750;
    }
    namespace CModifierContainmentVictimVData {
      constexpr std::ptrdiff_t m_AreaParticle = 0x750;
      constexpr std::ptrdiff_t m_ChainedParticle = 0x830;
      constexpr std::ptrdiff_t m_DebuffParticle = 0x910;
    }
    namespace CModifierCrowdControlDebuffVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
    }
    namespace CModifierDelayedStunVData {
      constexpr std::ptrdiff_t m_HitParticle = 0x750;
    }
    namespace CModifierDoormanHotelImposterFXVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
    }
    namespace CModifierDoormanHotelImposterVData {
      constexpr std::ptrdiff_t m_ImposterModifierFX = 0x750;
      constexpr std::ptrdiff_t m_strKeyTurnSound = 0x760;
    }
    namespace CModifierDoormanHotelVictimVData {
    }
    namespace CModifierFealtyTargetVData {
      constexpr std::ptrdiff_t m_CastParticle = 0x750;
    }
    namespace CModifierFlyingStrikeTargetVData {
      constexpr std::ptrdiff_t m_GrappleRopeParticle = 0x750;
    }
    namespace CModifierGangActivityAbilitySwapVData {
      constexpr std::ptrdiff_t m_SummonGangster = 0x750;
      constexpr std::ptrdiff_t m_TeleportToGangster = 0x760;
      constexpr std::ptrdiff_t m_Cancel = 0x770;
      constexpr std::ptrdiff_t m_ReplaceWithSummonGangster = 0x780;
      constexpr std::ptrdiff_t m_ReplaceWithTeleportToGangster = 0x790;
      constexpr std::ptrdiff_t m_ReplaceWithCancel = 0x7a0;
    }
    namespace CModifierGarbageAuraVData {
      constexpr std::ptrdiff_t m_FinishParticle = 0x7a8;
      constexpr std::ptrdiff_t m_AlliedParticle = 0x888;
      constexpr std::ptrdiff_t m_EnemyParticle = 0x968;
      constexpr std::ptrdiff_t m_strAmbientLoopingLocalPlayerSound = 0xa48;
    }
    namespace CModifierGlitchVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
      constexpr std::ptrdiff_t m_PurgeCastParticle = 0x830;
      constexpr std::ptrdiff_t m_PurgeSound = 0x910;
    }
    namespace CModifierGoatChargingVData {
      constexpr std::ptrdiff_t m_ChargeParticle = 0x750;
    }
    namespace CModifierGravityLassoEnemyVData {
      constexpr std::ptrdiff_t m_LassoEffect = 0x830;
      constexpr std::ptrdiff_t m_StunModifier = 0x910;
    }
    namespace CModifierHandleBase {
      constexpr std::ptrdiff_t m_hStableHandle = 0x8;
    }
    namespace CModifierHighAlertBuffVData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
    }
    namespace CModifierHoldingGoldenIdolVData {
      constexpr std::ptrdiff_t m_IdolParticle = 0x750;
    }
    namespace CModifierIcePathVData {
      constexpr std::ptrdiff_t m_FrontModel = 0x750;
      constexpr std::ptrdiff_t m_BodyModel = 0x830;
      constexpr std::ptrdiff_t m_GroundParticle = 0x910;
      constexpr std::ptrdiff_t m_FloatingParticle = 0x9f0;
      constexpr std::ptrdiff_t m_IcePathBuffParticle = 0xad0;
      constexpr std::ptrdiff_t m_FriendlyAuraModifier = 0xbb0;
      constexpr std::ptrdiff_t m_BonusSpiritLingerModifier = 0xbc0;
    }
    namespace CModifierIntimidatedVData {
      constexpr std::ptrdiff_t m_EffectParticle = 0x750;
    }
    namespace CModifierItemPickupAuraTargetVData {
      constexpr std::ptrdiff_t m_PickupTimer = 0x750;
      constexpr std::ptrdiff_t m_PickupTimerModifier = 0x758;
    }
    namespace CModifierKnockdownVData {
      constexpr std::ptrdiff_t m_flSatVolumeRadius = 0x830;
      constexpr std::ptrdiff_t m_flSatVolumeFadeOut = 0x834;
      constexpr std::ptrdiff_t m_flGravityScale = 0x838;
      constexpr std::ptrdiff_t m_flDesatAmount = 0x83c;
      constexpr std::ptrdiff_t m_satColorDesat = 0x840;
      constexpr std::ptrdiff_t m_satColorSat = 0x844;
      constexpr std::ptrdiff_t m_satColorOutline = 0x848;
      constexpr std::ptrdiff_t m_flGetUpSeqDuration = 0x84c;
      constexpr std::ptrdiff_t m_cameraSequenceGetUp = 0x850;
    }
    namespace CModifierLashFlogDebuffVData {
      constexpr std::ptrdiff_t m_FlogDebuffParticle = 0x750;
    }
    namespace CModifierLashGrappleEnemyDebuffVData {
      constexpr std::ptrdiff_t m_GrappleParticle = 0x830;
      constexpr std::ptrdiff_t m_LaunchParticle = 0x910;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x9f0;
      constexpr std::ptrdiff_t m_RopeParticle = 0xad0;
      constexpr std::ptrdiff_t m_ImpactSound = 0xbb0;
      constexpr std::ptrdiff_t m_DebuffModifier = 0xbc0;
    }
    namespace CModifierLashGrappleTargetVData {
      constexpr std::ptrdiff_t m_LockingOnParticle = 0x750;
      constexpr std::ptrdiff_t m_LockedOnParticle = 0x830;
      constexpr std::ptrdiff_t m_WarningParticle = 0x910;
      constexpr std::ptrdiff_t m_strVictimLockonSound = 0x9f0;
    }
    namespace CModifierLockDownDebuffVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
      constexpr std::ptrdiff_t m_AOEParticleCaster = 0x830;
      constexpr std::ptrdiff_t m_AOEParticleEnemy = 0x910;
      constexpr std::ptrdiff_t m_AOEParticleOthers = 0x9f0;
      constexpr std::ptrdiff_t m_strFollowLoop = 0xad0;
      constexpr std::ptrdiff_t m_strEscapedSound = 0xae0;
      constexpr std::ptrdiff_t m_RootModifier = 0xaf0;
      constexpr std::ptrdiff_t m_BulletResistModifier = 0xb00;
      constexpr std::ptrdiff_t m_SilencedModifier = 0xb10;
    }
    namespace CModifierNikumanVData {
      constexpr std::ptrdiff_t m_SelfParticle = 0x7a8;
      constexpr std::ptrdiff_t m_strAmbientLoopingLocalPlayerSound = 0x888;
    }
    namespace CModifierNonPlayerCameraSettingsVData {
      constexpr std::ptrdiff_t m_flCameraSideOffset = 0x750;
      constexpr std::ptrdiff_t m_flCameraBackOffset = 0x754;
      constexpr std::ptrdiff_t m_flCameraHeightStanding = 0x758;
    }
    namespace CModifierObscuredVData {
      constexpr std::ptrdiff_t m_flHideDuration = 0x750;
      constexpr std::ptrdiff_t m_flRevealDuration = 0x754;
    }
    namespace CModifierPowerGeneratorVData {
      constexpr std::ptrdiff_t m_AmberEffectToTitan = 0x750;
      constexpr std::ptrdiff_t m_SapphEffectToTitan = 0x830;
    }
    namespace CModifierPowerJumpVData {
      constexpr std::ptrdiff_t m_FloatParticle = 0x750;
      constexpr std::ptrdiff_t m_flAirDrag = 0x830;
      constexpr std::ptrdiff_t m_flVerticalCameraOffset = 0x834;
      constexpr std::ptrdiff_t m_flVerticalCameraOffsetLerpTime = 0x838;
      constexpr std::ptrdiff_t m_flVerticalCameraOffsetBias = 0x83c;
    }
    namespace CModifierProperty {
      constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
      constexpr std::ptrdiff_t m_hOwner = 0x30;
      constexpr std::ptrdiff_t m_vecModifiers = 0x38;
      constexpr std::ptrdiff_t m_bModifierStatesDirty = 0x1d3;
      constexpr std::ptrdiff_t m_bPredictedOwner = 0x1d4;
      constexpr std::ptrdiff_t m_bAllowModifiersOnDeadEntities = 0x1d5;
      constexpr std::ptrdiff_t m_iLockRefCount = 0x1d6;
      constexpr std::ptrdiff_t m_hHandle = 0x1d8;
      constexpr std::ptrdiff_t m_nBroadcastEventListenerMask = 0x1dc;
      constexpr std::ptrdiff_t m_nCachedHighestParticleIndex = 0x1e0;
      constexpr std::ptrdiff_t m_pNotifyOwnerEvents = 0x1e8;
      constexpr std::ptrdiff_t m_nDisabledGroups = 0x1f0;
      constexpr std::ptrdiff_t m_bvEnabledStateMask = 0x1f4;
      constexpr std::ptrdiff_t m_bvDisabledStateMask = 0x21c;
      constexpr std::ptrdiff_t m_bvEnabledPredictedStateMask = 0x244;
    }
    namespace CModifierPsychicLiftVData {
      constexpr std::ptrdiff_t m_SilenceModifier = 0x830;
      constexpr std::ptrdiff_t m_DisarmModifier = 0x840;
      constexpr std::ptrdiff_t m_SlowModifier = 0x850;
      constexpr std::ptrdiff_t m_LiftParticle = 0x860;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x940;
      constexpr std::ptrdiff_t m_strImpactSound = 0xa20;
      constexpr std::ptrdiff_t m_flOccilateMaxDistance = 0xa30;
      constexpr std::ptrdiff_t m_flOccilateDegreesPerSecond = 0xa34;
      constexpr std::ptrdiff_t m_flRiseTime = 0xa38;
      constexpr std::ptrdiff_t m_flSlamTime = 0xa3c;
      constexpr std::ptrdiff_t m_flRiseAcc = 0xa40;
      constexpr std::ptrdiff_t m_flRiseMaxSpeed = 0xa44;
      constexpr std::ptrdiff_t m_flRiseDecayFracStart = 0xa48;
      constexpr std::ptrdiff_t m_flRiseDecayFracEnd = 0xa4c;
      constexpr std::ptrdiff_t m_flSlamAcc = 0xa50;
      constexpr std::ptrdiff_t m_flSlamMaxSpeed = 0xa54;
      constexpr std::ptrdiff_t m_flSlamImpactRadius = 0xa58;
    }
    namespace CModifierQuarantineVData {
      constexpr std::ptrdiff_t m_BubbleParticle = 0x750;
      constexpr std::ptrdiff_t m_BubbleExplodeParticle = 0x830;
      constexpr std::ptrdiff_t m_SilenceModifier = 0x910;
    }
    namespace CModifierRapidFireAirJuggleVData {
    }
    namespace CModifierRapidFireChannelVData {
      constexpr std::ptrdiff_t m_flAirDrag = 0x750;
    }
    namespace CModifierRestorativeGooVData {
      constexpr std::ptrdiff_t m_RestorativeGooEndParticle = 0x750;
      constexpr std::ptrdiff_t m_ModelName = 0x830;
      constexpr std::ptrdiff_t m_SelfCubeModelName = 0x910;
      constexpr std::ptrdiff_t m_BreakoutProgressBarModifier = 0x9f0;
      constexpr std::ptrdiff_t m_PostCubeBuffModifier = 0xa00;
      constexpr std::ptrdiff_t m_NonTargetLoopingSound = 0xa10;
      constexpr std::ptrdiff_t m_TargetLoopingSound = 0xa20;
      constexpr std::ptrdiff_t m_LightMeleeImpact = 0xa30;
      constexpr std::ptrdiff_t m_HeavyMeleeImpact = 0xa40;
      constexpr std::ptrdiff_t m_flBreakoutProectionTime = 0xa50;
    }
    namespace CModifierRiotCastDelayVData {
      constexpr std::ptrdiff_t m_UnstoppableModifier = 0x750;
    }
    namespace CModifierRiotProtocolBuffVData {
      constexpr std::ptrdiff_t m_LaserParticle = 0x750;
      constexpr std::ptrdiff_t m_PulseHitEnemyParticle = 0x830;
      constexpr std::ptrdiff_t m_EnemyDebuffModifier = 0x910;
    }
    namespace CModifierRiotProtocolEnemyDebuffVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
    }
    namespace CModifierSleepBombAuraVData {
    }
    namespace CModifierSpiderShieldBuffVData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
      constexpr std::ptrdiff_t m_RadiusParticle = 0x830;
      constexpr std::ptrdiff_t m_PulseParticle = 0x910;
      constexpr std::ptrdiff_t m_PulseDebuffModifier = 0x9f0;
    }
    namespace CModifierStackingDamageVData {
      constexpr std::ptrdiff_t m_SlowModifier = 0x750;
    }
    namespace CModifierStimPakVData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
    }
    namespace CModifierStormCloudVData {
      constexpr std::ptrdiff_t m_ZapFriendly = 0x750;
      constexpr std::ptrdiff_t m_DrawFriendly = 0x830;
      constexpr std::ptrdiff_t m_AoEFriendly = 0x910;
      constexpr std::ptrdiff_t m_ZapEnemy = 0x9f0;
      constexpr std::ptrdiff_t m_DrawEnemy = 0xad0;
      constexpr std::ptrdiff_t m_AoEEnemy = 0xbb0;
      constexpr std::ptrdiff_t m_strChannelEndingSoonSound = 0xc90;
      constexpr std::ptrdiff_t m_strChannelFinishedSound = 0xca0;
      constexpr std::ptrdiff_t m_strDamageRecievedSound = 0xcb0;
      constexpr std::ptrdiff_t m_strAmbientZapSound = 0xcc0;
    }
    namespace CModifierT2BossWaveTargetVData {
      constexpr std::ptrdiff_t m_strSilenceTargetSound = 0x750;
      constexpr std::ptrdiff_t m_SilenceModifier = 0x760;
      constexpr std::ptrdiff_t m_DisarmModifier = 0x770;
      constexpr std::ptrdiff_t m_SlowModifier = 0x780;
      constexpr std::ptrdiff_t m_BulletResistModifier = 0x790;
      constexpr std::ptrdiff_t m_flTossUpStrength = 0x7a0;
      constexpr std::ptrdiff_t m_flTossHorizontalMax = 0x7a4;
      constexpr std::ptrdiff_t m_flTossHorizontalMin = 0x7a8;
      constexpr std::ptrdiff_t m_flDebuffDuration = 0x7ac;
    }
    namespace CModifierT3BossWaveTargetVData {
      constexpr std::ptrdiff_t m_strSilenceTargetSound = 0x750;
      constexpr std::ptrdiff_t m_CurseModifier = 0x760;
      constexpr std::ptrdiff_t m_flTossUpStrength = 0x770;
      constexpr std::ptrdiff_t m_flTossHorizontalMax = 0x774;
      constexpr std::ptrdiff_t m_flTossHorizontalMin = 0x778;
      constexpr std::ptrdiff_t m_flDebuffDuration = 0x77c;
    }
    namespace CModifierTangoTetherTargetVData {
      constexpr std::ptrdiff_t m_GrappleRopeParticle = 0x750;
    }
    namespace CModifierThumper_3VData {
      constexpr std::ptrdiff_t m_DroneParticle = 0x750;
      constexpr std::ptrdiff_t m_LoopSound = 0x830;
    }
    namespace CModifierTier3BossInvulnVData {
      constexpr std::ptrdiff_t m_AmberShieldParticle = 0x750;
      constexpr std::ptrdiff_t m_SapphShieldParticle = 0x830;
      constexpr std::ptrdiff_t m_flShieldRadius = 0x910;
    }
    namespace CModifierTier3BossLaserBeamAuraVData {
      constexpr std::ptrdiff_t m_AmberGroundEffect = 0x7a8;
      constexpr std::ptrdiff_t m_SapphGroundEffect = 0x888;
    }
    namespace CModifierTier3BossLaserBeamDebuffVData {
      constexpr std::ptrdiff_t m_flTickRate = 0x750;
      constexpr std::ptrdiff_t m_flNPCDPS = 0x754;
      constexpr std::ptrdiff_t m_flPlayerDPS = 0x758;
      constexpr std::ptrdiff_t m_flMaxHealthDPS = 0x75c;
      constexpr std::ptrdiff_t m_AmberStatusEffect = 0x760;
      constexpr std::ptrdiff_t m_AmberEffect = 0x840;
      constexpr std::ptrdiff_t m_SapphStatusEffect = 0x920;
      constexpr std::ptrdiff_t m_SapphEffect = 0xa00;
    }
    namespace CModifierTier3BossLaserBeamVData {
      constexpr std::ptrdiff_t m_GroundAuraModifier = 0x750;
      constexpr std::ptrdiff_t m_flAuraDropTickRate = 0x760;
      constexpr std::ptrdiff_t m_AmberLaserBeamEffect = 0x768;
      constexpr std::ptrdiff_t m_AmberLaserPreviewEffect = 0x848;
      constexpr std::ptrdiff_t m_SapphLaserBeamEffect = 0x928;
      constexpr std::ptrdiff_t m_SapphLaserPreviewEffect = 0xa08;
      constexpr std::ptrdiff_t m_AmberLaserChargingEffect = 0xae8;
      constexpr std::ptrdiff_t m_SapphLaserChargingEffect = 0xbc8;
      constexpr std::ptrdiff_t m_strLaserLoopSound = 0xca8;
      constexpr std::ptrdiff_t m_strLaserFireSound = 0xcb8;
      constexpr std::ptrdiff_t m_strLaserHitSound = 0xcc8;
      constexpr std::ptrdiff_t m_flLaserDPSToPlayers = 0xcd8;
      constexpr std::ptrdiff_t m_flLaserDPSMaxHealth = 0xcdc;
      constexpr std::ptrdiff_t m_flLaserDPSToNPCs = 0xce0;
      constexpr std::ptrdiff_t m_flLaserDPSTickRate = 0xce4;
    }
    namespace CModifierUnstickVData {
      constexpr std::ptrdiff_t m_sSuccessSound = 0x830;
      constexpr std::ptrdiff_t m_sFailureSound = 0x840;
    }
    namespace CModifierUppercuttedVData {
      constexpr std::ptrdiff_t m_StunParticle = 0x750;
      constexpr std::ptrdiff_t m_strStunSound = 0x830;
      constexpr std::ptrdiff_t m_NoExplodeModifier = 0x840;
      constexpr std::ptrdiff_t m_ExplodeDebuffModifier = 0x850;
      constexpr std::ptrdiff_t m_flEnemyNoAirDashDuration = 0x860;
    }
    namespace CModifierVData {
      constexpr std::ptrdiff_t m_flDuration = 0x28;
      constexpr std::ptrdiff_t m_bKeepMaximumDurationOnRefresh = 0x38;
      constexpr std::ptrdiff_t m_strParticleEffect = 0x40;
      constexpr std::ptrdiff_t m_strParticleEffectConfig = 0x120;
      constexpr std::ptrdiff_t m_strParticleStatusEffect = 0x128;
      constexpr std::ptrdiff_t m_strParticleStatusEffectConfig = 0x208;
      constexpr std::ptrdiff_t m_strScreenParticleEffect = 0x210;
      constexpr std::ptrdiff_t m_strScreenParticleEffectConfig = 0x2f0;
      constexpr std::ptrdiff_t m_nStatusEffectPriority = 0x2f8;
      constexpr std::ptrdiff_t m_vecRenderAttributes = 0x300;
      constexpr std::ptrdiff_t m_sStartSound = 0x318;
      constexpr std::ptrdiff_t m_sAmbientLoopingSound = 0x328;
      constexpr std::ptrdiff_t m_nAmbientLoopingSoundSource = 0x338;
      constexpr std::ptrdiff_t m_nAmbientLoopingSoundRecipients = 0x33c;
      constexpr std::ptrdiff_t m_sEndSound = 0x340;
      constexpr std::ptrdiff_t m_nEnabledStateMask = 0x350;
      constexpr std::ptrdiff_t m_nDisabledStateMask = 0x378;
      constexpr std::ptrdiff_t m_nAttributes = 0x3a0;
      constexpr std::ptrdiff_t m_vecScriptValues = 0x3a8;
      constexpr std::ptrdiff_t m_vecScriptEventHandlers = 0x3c0;
      constexpr std::ptrdiff_t m_nDisableGroupsMask = 0x3d8;
      constexpr std::ptrdiff_t m_bIsHidden = 0x3dc;
      constexpr std::ptrdiff_t m_eHiddenType = 0x3e0;
      constexpr std::ptrdiff_t m_sLocalizationName = 0x3e8;
      constexpr std::ptrdiff_t m_eDebuffType = 0x3f0;
      constexpr std::ptrdiff_t m_bAutomaticallyDecayStacks = 0x3f4;
      constexpr std::ptrdiff_t m_bAllowApplicationPrediction = 0x3f5;
    }
    namespace CModifierVData_BaseAura {
      constexpr std::ptrdiff_t m_nAuraShapeType = 0x750;
      constexpr std::ptrdiff_t m_nCenterType = 0x754;
      constexpr std::ptrdiff_t m_flAuraRadius = 0x758;
      constexpr std::ptrdiff_t m_flAuraEntityBoundsScale = 0x768;
      constexpr std::ptrdiff_t m_nAmbientParticleRadiusControlPoint = 0x778;
      constexpr std::ptrdiff_t m_modifierProvidedByAura = 0x780;
    }
    namespace CModifierVData_SetModelScale {
      constexpr std::ptrdiff_t m_flScale = 0x750;
    }
    namespace CModifierVData_SetMoveType {
      constexpr std::ptrdiff_t m_nMoveType = 0x750;
    }
    namespace CModifierVacuumAuraVData {
      constexpr std::ptrdiff_t m_FinishParticle = 0x7a8;
      constexpr std::ptrdiff_t m_AlliedParticle = 0x888;
      constexpr std::ptrdiff_t m_EnemyParticle = 0x968;
      constexpr std::ptrdiff_t m_strAmbientLoopingLocalPlayerSound = 0xa48;
    }
    namespace CModifierVandalOverflowVData {
      constexpr std::ptrdiff_t m_LiftParticle = 0x830;
      constexpr std::ptrdiff_t m_strStartSound = 0x910;
    }
    namespace CModifierVandalSurgeVData {
      constexpr std::ptrdiff_t m_LiftParticle = 0x830;
      constexpr std::ptrdiff_t m_strStartSound = 0x910;
    }
    namespace CModifierVitalitySuppressorVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
    }
    namespace CModifier_CheatDeathImmunity {
    }
    namespace CModifier_CheatDeathImmunityVData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
      constexpr std::ptrdiff_t m_BuffPlayerParticle = 0x830;
      constexpr std::ptrdiff_t m_StatusEffect = 0x910;
      constexpr std::ptrdiff_t m_strTimerSound = 0x9f0;
    }
    namespace CModifier_Citadel_Bull_Leap_LandingBonuses {
    }
    namespace CModifier_Citadel_Bull_Leap_LandingBonuses_VData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
    }
    namespace CModifier_CloakingDevice_Active_Ambush {
      constexpr std::ptrdiff_t m_nAmbushParticle = 0xc0;
    }
    namespace CModifier_CloakingDevice_Active_Ambush_VData {
      constexpr std::ptrdiff_t m_InvisRevealedParticle = 0x750;
      constexpr std::ptrdiff_t m_AmbushParticle = 0x830;
      constexpr std::ptrdiff_t m_strActivateAmbushSound = 0x910;
    }
    namespace CModifier_Drifter_Darkness_Caster {
    }
    namespace CModifier_Drifter_Darkness_Caster_VData {
      constexpr std::ptrdiff_t m_SpiritBulletImpactParticle = 0x750;
      constexpr std::ptrdiff_t m_SpiritBulletTracerParticle = 0x830;
      constexpr std::ptrdiff_t m_strSpiritBulletHitSound = 0x910;
    }
    namespace CModifier_Drifter_Darkness_Target {
    }
    namespace CModifier_Drifter_Darkness_Target_BoundaryUnit {
    }
    namespace CModifier_Drifter_Darkness_Target_BoundaryUnit_VData {
      constexpr std::ptrdiff_t m_strBoundaryPuffParticle = 0x750;
      constexpr std::ptrdiff_t m_strAuraEnterPlayerSound = 0x830;
      constexpr std::ptrdiff_t m_strAuraEnterNPCSound = 0x840;
    }
    namespace CModifier_Drifter_Darkness_Target_VData {
      constexpr std::ptrdiff_t m_VictimParticleEffect = 0x7a8;
      constexpr std::ptrdiff_t m_BlindedStatusParticle = 0x888;
      constexpr std::ptrdiff_t m_NearbyVictimStatusParticle = 0x968;
    }
    namespace CModifier_Drifter_Rend_BulletLifesteal {
    }
    namespace CModifier_Drifter_ShadowMark_Target {
      constexpr std::ptrdiff_t m_flLastTickTime = 0xc0;
    }
    namespace CModifier_Drifter_ShadowMark_TargetVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
    }
    namespace CModifier_Drifter_StalkersMark_PostTeleport {
    }
    namespace CModifier_Fathom_LurkersAmbush_Debuff {
    }
    namespace CModifier_Fathom_LurkersAmbush_Debuff_VData {
      constexpr std::ptrdiff_t m_FlogDebuffParticle = 0x750;
    }
    namespace CModifier_Fencer_Ultimate_Caster {
      constexpr std::ptrdiff_t m_bUseTrail = 0xc0;
    }
    namespace CModifier_Fencer_Ultimate_Caster_VData {
      constexpr std::ptrdiff_t m_DashParticle = 0x750;
      constexpr std::ptrdiff_t m_DashTrailParticle = 0x830;
    }
    namespace CModifier_Fencer_Ultimate_Target {
      constexpr std::ptrdiff_t m_vDashDirection = 0x440;
    }
    namespace CModifier_Fencer_Ultimate_Target_VData {
      constexpr std::ptrdiff_t m_flDamageTimeOffset = 0x750;
      constexpr std::ptrdiff_t m_flEndTimeScaleForFlinch = 0x754;
      constexpr std::ptrdiff_t m_DashImpactEffect = 0x758;
      constexpr std::ptrdiff_t m_strDashHitEnemy = 0x838;
      constexpr std::ptrdiff_t m_strTimerSound = 0x848;
      constexpr std::ptrdiff_t m_sSlashSound = 0x858;
    }
    namespace CModifier_FleetfootBoots_BonusClip {
      constexpr std::ptrdiff_t m_nBonusClip = 0xc0;
    }
    namespace CModifier_Headshot_Damage_Debuff {
      constexpr std::ptrdiff_t m_nDebuffsTotal = 0xc0;
    }
    namespace CModifier_Headshot_Damage_DebuffVData {
      constexpr std::ptrdiff_t m_HeadShotParticle = 0x750;
    }
    namespace CModifier_Healbane_Debuff {
    }
    namespace CModifier_HornetLeap {
    }
    namespace CModifier_Item_DPS_Aura_Active {
    }
    namespace CModifier_LeechHealbane_Debuff {
    }
    namespace CModifier_Mirage_FireBeetles_Debuff {
    }
    namespace CModifier_Mirage_FireBeetles_Debuff_VData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
      constexpr std::ptrdiff_t m_DebuffStartParticle = 0x830;
    }
    namespace CModifier_Mirage_FireScarabs_HealthLoss {
      constexpr std::ptrdiff_t m_bCanProc = 0xc0;
    }
    namespace CModifier_Mirage_FireScarabs_HealthLoss_VData {
      constexpr std::ptrdiff_t m_HealthLossParticle = 0x750;
    }
    namespace CModifier_Mirage_Tornado_Aura {
    }
    namespace CModifier_Mirage_Tornado_Aura_Apply {
    }
    namespace CModifier_Mirage_Tornado_Aura_Apply_VData {
      constexpr std::ptrdiff_t m_LiftModifier = 0x750;
      constexpr std::ptrdiff_t m_SlowModifier = 0x760;
      constexpr std::ptrdiff_t m_strHitConfirmSound = 0x770;
    }
    namespace CModifier_Mirage_Tornado_Evasion {
    }
    namespace CModifier_Mirage_Tornado_EvasionVData {
      constexpr std::ptrdiff_t m_AttackerHitFx = 0x750;
      constexpr std::ptrdiff_t m_ImpactParticle = 0x830;
      constexpr std::ptrdiff_t m_playerBuffSelf = 0x910;
      constexpr std::ptrdiff_t m_playerBuffEnemy = 0x9f0;
      constexpr std::ptrdiff_t m_ReflectedBulletTracerParticle = 0xad0;
      constexpr std::ptrdiff_t m_strAttackerHitSound = 0xbb0;
      constexpr std::ptrdiff_t m_strVictimHitSound = 0xbc0;
    }
    namespace CModifier_Mirage_Tornado_HoldInPlace {
    }
    namespace CModifier_Mirage_Tornado_Lift {
      constexpr std::ptrdiff_t m_vecFloatDest = 0x1c0;
      constexpr std::ptrdiff_t m_vecStartingPos = 0x1cc;
    }
    namespace CModifier_Mirage_Tornado_Lift_VData {
      constexpr std::ptrdiff_t m_HoldInPlaceModifier = 0x750;
      constexpr std::ptrdiff_t m_LiftParticle = 0x760;
    }
    namespace CModifier_Mirage_Traveler_MovementSpeed {
    }
    namespace CModifier_Necro_Coffin {
    }
    namespace CModifier_Necro_CoffinVData {
      constexpr std::ptrdiff_t m_SatchelParticle = 0x750;
    }
    namespace CModifier_Operative_Blindside_EnemyDebuff {
    }
    namespace CModifier_Operative_Revelation_Aura {
    }
    namespace CModifier_Operative_Revelation_Caster {
    }
    namespace CModifier_Operative_Revelation_Caster_VData {
      constexpr std::ptrdiff_t m_AuraModifier = 0x750;
      constexpr std::ptrdiff_t m_ShieldParticle = 0x760;
    }
    namespace CModifier_Operative_Revelation_Target {
      constexpr std::ptrdiff_t m_flTotalTimeLookedAtCaster = 0xc0;
    }
    namespace CModifier_Operative_Revelation_Target_VData {
      constexpr std::ptrdiff_t m_DebuffModifier = 0x750;
    }
    namespace CModifier_Operative_UmbrellaManeuver_AirHang {
    }
    namespace CModifier_Operative_UmbrellaManeuver_AirHang_VData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x750;
      constexpr std::ptrdiff_t m_TracerParticle = 0x830;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x910;
      constexpr std::ptrdiff_t m_flAirDrag = 0x920;
      constexpr std::ptrdiff_t m_flAirSpeed = 0x924;
      constexpr std::ptrdiff_t m_flFallSpeed = 0x928;
    }
    namespace CModifier_SiphonBullets {
    }
    namespace CModifier_SiphonBullets_HealthLoss {
    }
    namespace CModifier_SiphonBullets_HealthLoss_VData {
      constexpr std::ptrdiff_t m_SiphonParticle = 0x750;
      constexpr std::ptrdiff_t m_HealModifier = 0x830;
    }
    namespace CModifier_SiphonBullets_RestoreHealth {
    }
    namespace CModifier_SiphonBullets_VData {
      constexpr std::ptrdiff_t m_StealWatcherModifier = 0x780;
      constexpr std::ptrdiff_t m_HealModifier = 0x790;
      constexpr std::ptrdiff_t m_TracerParticle = 0x7a0;
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x880;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x960;
    }
    namespace CModifier_Synth_Affliction_Debuff {
    }
    namespace CModifier_Synth_Affliction_Debuff_VData {
      constexpr std::ptrdiff_t m_EffectParticle = 0x750;
      constexpr std::ptrdiff_t m_DebuffParticle = 0x830;
    }
    namespace CModifier_Synth_Barrage_Amp {
    }
    namespace CModifier_Synth_Barrage_Amp_VData {
    }
    namespace CModifier_Synth_Barrage_Caster {
    }
    namespace CModifier_Synth_Barrage_Caster_VData {
    }
    namespace CModifier_Synth_PlasmaFlux_WeaponDamage_VData {
      constexpr std::ptrdiff_t m_BuffParticle = 0x750;
    }
    namespace CModifier_Synth_Pulse_Escape {
    }
    namespace CModifier_Synth_Pulse_Escape_VData {
      constexpr std::ptrdiff_t m_SatchelParticle = 0x750;
    }
    namespace CModifier_Thumper_BulletWatcherVData {
      constexpr std::ptrdiff_t m_ExplodeParticle = 0x750;
      constexpr std::ptrdiff_t m_ExplodeSound = 0x830;
    }
    namespace CModifier_Thumper_Bullet_Watcher {
    }
    namespace CModifier_Upgrade_ArcaneMedallion {
    }
    namespace CModifier_Upgrade_ArcaneMedallion_VData {
      constexpr std::ptrdiff_t m_TriggeredModifier = 0x780;
    }
    namespace CModifier_Upgrade_ArcaneSurge {
      constexpr std::ptrdiff_t m_tNextAbilityTriggerWindow = 0x2c0;
      constexpr std::ptrdiff_t m_tAbilityWatcherInProgress = 0x2c4;
    }
    namespace CModifier_Upgrade_ArcaneSurge_AbilityWatcher {
      constexpr std::ptrdiff_t m_hBuffedAbility = 0xc0;
      constexpr std::ptrdiff_t m_bRecastingBuffedAbility = 0xc4;
    }
    namespace CModifier_Upgrade_ArcaneSurge_AbilityWatcher_VData {
    }
    namespace CModifier_Upgrade_ArcaneSurge_VData {
      constexpr std::ptrdiff_t m_WeaponBuffModifier = 0x750;
      constexpr std::ptrdiff_t m_AbilityWatcherModifier = 0x760;
    }
    namespace CModifier_Upgrade_KineticSash {
    }
    namespace CModifier_Upgrade_KineticSashTriggered {
      constexpr std::ptrdiff_t m_nBonusClip = 0xc0;
    }
    namespace CModifier_Upgrade_KineticSashTriggered_VData {
      constexpr std::ptrdiff_t m_TriggeredSound = 0x750;
    }
    namespace CModifier_Upgrade_KineticSash_VData {
      constexpr std::ptrdiff_t m_KineticSashTriggeredModifier = 0x750;
    }
    namespace CModifier_WarpStone_Caster {
    }
    namespace CModifier_WarpStone_Caster_VData {
      constexpr std::ptrdiff_t m_playerBuffSelf = 0x750;
    }
    namespace CModifier_WreckerSalvageBuffVData {
      constexpr std::ptrdiff_t m_WeaponBuffParticle = 0x750;
    }
    namespace CModifier_WreckerSalvageVData {
      constexpr std::ptrdiff_t m_SalvageBeam = 0x750;
      constexpr std::ptrdiff_t m_ConnectBeam = 0x830;
    }
    namespace CModifier_WreckerScrapBlastDebuffVData {
      constexpr std::ptrdiff_t m_DebuffParticle = 0x750;
    }
    namespace CModifier_Wrecker_UltimateGrabEnemyVData {
      constexpr std::ptrdiff_t m_EnemyHeroStasisEffect = 0x750;
      constexpr std::ptrdiff_t m_EnemyHeroGrabEffect = 0x830;
    }
    namespace CModifier_Wrecker_UltimateThrowEnemyVData {
      constexpr std::ptrdiff_t m_EnemyHeroStasisEffect = 0x830;
      constexpr std::ptrdiff_t m_EnemyHeroGrabEffect = 0x910;
    }
    namespace CModifier_Wrecker_UltimateVData {
      constexpr std::ptrdiff_t m_EnemyGrabModifier = 0x750;
      constexpr std::ptrdiff_t m_EnemyThrowModifier = 0x760;
      constexpr std::ptrdiff_t m_EnemyDamageModifier = 0x770;
      constexpr std::ptrdiff_t m_InvincibleModifier = 0x780;
      constexpr std::ptrdiff_t m_StartSound = 0x790;
      constexpr std::ptrdiff_t m_AmbientLoopingSound = 0x7a0;
      constexpr std::ptrdiff_t m_GrabSound = 0x7b0;
      constexpr std::ptrdiff_t m_ThrowSound = 0x7c0;
    }
    namespace CNPC_BarrackBossVData {
      constexpr std::ptrdiff_t m_flPlayerAutoAttackRange = 0x1338;
      constexpr std::ptrdiff_t m_flMinMeleeAttackTime = 0x133c;
      constexpr std::ptrdiff_t m_flMeleeDuration = 0x1340;
      constexpr std::ptrdiff_t m_flInvulRange = 0x1344;
      constexpr std::ptrdiff_t m_flTrooperDamageResistPct = 0x1348;
      constexpr std::ptrdiff_t m_flPlayerDamageResistPct = 0x134c;
      constexpr std::ptrdiff_t m_flBackDoorProtectionRange = 0x1350;
      constexpr std::ptrdiff_t m_flDeathFadeTimeStart = 0x1354;
      constexpr std::ptrdiff_t m_flDeathFadeTimeEnd = 0x1358;
      constexpr std::ptrdiff_t m_flTier1PlayerClipCapsuleRadius = 0x135c;
      constexpr std::ptrdiff_t m_flTier1PlayerClipCapsuleHeight = 0x1360;
      constexpr std::ptrdiff_t m_sAngryStart = 0x1368;
      constexpr std::ptrdiff_t m_sAngryLoop = 0x1378;
      constexpr std::ptrdiff_t m_sAngryStop = 0x1388;
      constexpr std::ptrdiff_t m_BackdoorProtectionModifier = 0x1398;
      constexpr std::ptrdiff_t m_TrooperBossInvulnModifier = 0x13a8;
      constexpr std::ptrdiff_t m_flTrooperDPS = 0x13b8;
      constexpr std::ptrdiff_t m_flPlayerDPS = 0x13bc;
      constexpr std::ptrdiff_t m_flDPSPctGrowthPerMinute = 0x13c0;
      constexpr std::ptrdiff_t m_flEnemyTrooperProtectionRange = 0x13c4;
      constexpr std::ptrdiff_t m_BackdoorBulletResistModifier = 0x13c8;
      constexpr std::ptrdiff_t m_ObjectiveRegen = 0x13d8;
    }
    namespace CNPC_Boss_Tier2VData {
      constexpr std::ptrdiff_t m_flSightRange = 0x1338;
      constexpr std::ptrdiff_t m_flPlayerInitialSightRange = 0x133c;
      constexpr std::ptrdiff_t m_strWIPModelName = 0x1340;
      constexpr std::ptrdiff_t m_BeamHitSound = 0x1420;
      constexpr std::ptrdiff_t m_BeamAnnounceSound = 0x1430;
      constexpr std::ptrdiff_t m_BarrageAnnounceSound = 0x1440;
      constexpr std::ptrdiff_t m_MeleeAnnounceSound = 0x1450;
      constexpr std::ptrdiff_t m_bBeamTurnToFire = 0x1460;
      constexpr std::ptrdiff_t m_StompImpactEffect = 0x1468;
      constexpr std::ptrdiff_t m_StompWarningEffect = 0x1548;
      constexpr std::ptrdiff_t m_flTossSpeed = 0x1628;
      constexpr std::ptrdiff_t m_flStompDamage = 0x162c;
      constexpr std::ptrdiff_t m_flStompDamageMaxHealthPercent = 0x1630;
      constexpr std::ptrdiff_t m_flStompDamageTrooperRate = 0x1634;
      constexpr std::ptrdiff_t m_flStompTossUpMagnitude = 0x1638;
      constexpr std::ptrdiff_t m_flStunDuration = 0x163c;
      constexpr std::ptrdiff_t m_flStompAttemptRadius = 0x1640;
      constexpr std::ptrdiff_t m_flStompImpactRadius = 0x1644;
      constexpr std::ptrdiff_t m_flStompImpactHeight = 0x1648;
      constexpr std::ptrdiff_t m_flStompParryRadius = 0x164c;
      constexpr std::ptrdiff_t m_flStompParryImpulse = 0x1650;
      constexpr std::ptrdiff_t m_flStompParryImpulseInAir = 0x1654;
      constexpr std::ptrdiff_t m_flStompParryDamageMult = 0x1658;
      constexpr std::ptrdiff_t m_flSweepRadius = 0x165c;
      constexpr std::ptrdiff_t m_flSweepSpeed = 0x1660;
      constexpr std::ptrdiff_t m_flSweepZScale = 0x1664;
      constexpr std::ptrdiff_t m_flSweepMaxAngle = 0x1668;
      constexpr std::ptrdiff_t m_flSweepMaxRange = 0x166c;
      constexpr std::ptrdiff_t m_flSweepAdjustSpeed = 0x1670;
      constexpr std::ptrdiff_t m_StompAnnounceSound = 0x1678;
      constexpr std::ptrdiff_t m_StompParriedSound = 0x1688;
      constexpr std::ptrdiff_t m_StompImpactSound = 0x1698;
      constexpr std::ptrdiff_t m_flBurstDuration = 0x16a8;
      constexpr std::ptrdiff_t m_flBurstCooldown = 0x16ac;
      constexpr std::ptrdiff_t m_flMeleeDuration = 0x16b0;
      constexpr std::ptrdiff_t m_flMeleeHitTime = 0x16b4;
      constexpr std::ptrdiff_t m_flMeleeAttackRadius = 0x16b8;
      constexpr std::ptrdiff_t m_flMeleeDamage = 0x16bc;
      constexpr std::ptrdiff_t m_flMeleeDamageHealthPct = 0x16c0;
      constexpr std::ptrdiff_t m_flMeleeTrooperStunTime = 0x16c4;
      constexpr std::ptrdiff_t m_BackdoorProtectionModifier = 0x16c8;
      constexpr std::ptrdiff_t m_flBackDoorProtectionRange = 0x16d8;
      constexpr std::ptrdiff_t m_InvulModifier = 0x16e0;
      constexpr std::ptrdiff_t m_flInvulModifierRange = 0x16f0;
      constexpr std::ptrdiff_t m_RangedArmorModifier = 0x16f8;
      constexpr std::ptrdiff_t m_FriendlyAuraModifier = 0x1708;
      constexpr std::ptrdiff_t m_NearbyEnemyResist = 0x1718;
      constexpr std::ptrdiff_t m_StatTrackerAuraModifier = 0x1728;
      constexpr std::ptrdiff_t m_EmpoweredModifierLevel1 = 0x1738;
      constexpr std::ptrdiff_t m_EmpoweredModifierLevel2 = 0x1748;
      constexpr std::ptrdiff_t m_StaggerWatcherModifier = 0x1758;
      constexpr std::ptrdiff_t m_flMaxStaggerBuildup = 0x1768;
      constexpr std::ptrdiff_t m_flStaggerDuration = 0x176c;
      constexpr std::ptrdiff_t m_flStaggerMeleeMult = 0x1770;
      constexpr std::ptrdiff_t m_flStaggerDamageMult = 0x1774;
      constexpr std::ptrdiff_t m_flAoeWaveHealthThreshold = 0x1778;
    }
    namespace CNPC_Boss_Tier3VData {
      constexpr std::ptrdiff_t m_flAllyPitTimeMin = 0x1338;
      constexpr std::ptrdiff_t m_nPhase2Health = 0x133c;
      constexpr std::ptrdiff_t m_flEyeZOffset = 0x1340;
      constexpr std::ptrdiff_t m_flDefaultMoveSpeed = 0x1344;
      constexpr std::ptrdiff_t m_flEnemyTrooperProtectionRange = 0x1348;
      constexpr std::ptrdiff_t m_vPhase1ObserverOrigin = 0x134c;
      constexpr std::ptrdiff_t m_vPhase2ObserverOrigin = 0x1358;
      constexpr std::ptrdiff_t m_flPhase1ObserverPitch = 0x1364;
      constexpr std::ptrdiff_t m_flPhase2ObserverPitch = 0x1368;
      constexpr std::ptrdiff_t m_flPhase2MaxAnimSpinRate = 0x136c;
      constexpr std::ptrdiff_t m_flPhase2AttackBias = 0x1370;
      constexpr std::ptrdiff_t m_flRotateSpeed = 0x1374;
      constexpr std::ptrdiff_t m_flPhase2SightRange = 0x1378;
      constexpr std::ptrdiff_t m_flCoreRadius = 0x137c;
      constexpr std::ptrdiff_t m_flCoreDeathTime = 0x1380;
      constexpr std::ptrdiff_t m_flTransitionLightTime01 = 0x1384;
      constexpr std::ptrdiff_t m_flTransitionLightTime02 = 0x1388;
      constexpr std::ptrdiff_t m_flTransitionLightTime03 = 0x138c;
      constexpr std::ptrdiff_t m_flTransitionLightTime04 = 0x1390;
      constexpr std::ptrdiff_t m_flShrineAttackHealthLossPerAttack = 0x1394;
      constexpr std::ptrdiff_t m_flShrineAttackMinTimeBetweenAttacks = 0x1398;
      constexpr std::ptrdiff_t m_AmberEffigyExplosionParticle = 0x13a0;
      constexpr std::ptrdiff_t m_AmberTransformUpExplosionParticle = 0x1480;
      constexpr std::ptrdiff_t m_AmberBeginDyingParticle = 0x1560;
      constexpr std::ptrdiff_t m_AmberDeathLargeExplosionParticle = 0x1640;
      constexpr std::ptrdiff_t m_AmberHitResponseParticle = 0x1720;
      constexpr std::ptrdiff_t m_AmberPhase2AmbientParticle = 0x1800;
      constexpr std::ptrdiff_t m_SapphEffigyExplosionParticle = 0x18e0;
      constexpr std::ptrdiff_t m_SapphTransformUpExplosionParticle = 0x19c0;
      constexpr std::ptrdiff_t m_SapphBeginDyingParticle = 0x1aa0;
      constexpr std::ptrdiff_t m_SapphDeathLargeExplosionParticle = 0x1b80;
      constexpr std::ptrdiff_t m_SapphHitResponseParticle = 0x1c60;
      constexpr std::ptrdiff_t m_SapphPhase2AmbientParticle = 0x1d40;
      constexpr std::ptrdiff_t m_PatronTransformDownEyeParticle = 0x1e20;
      constexpr std::ptrdiff_t m_strWIPModelName = 0x1f00;
      constexpr std::ptrdiff_t m_strTeamAmberModel = 0x1fe0;
      constexpr std::ptrdiff_t m_AmberEffigyModel = 0x20c0;
      constexpr std::ptrdiff_t m_SapphEffigyModel = 0x21a0;
      constexpr std::ptrdiff_t m_AmberCoreModel = 0x2280;
      constexpr std::ptrdiff_t m_SapphCoreModel = 0x2360;
      constexpr std::ptrdiff_t m_flCoreVerticalOffset = 0x2440;
      constexpr std::ptrdiff_t m_PatronTransformStartSound = 0x2448;
      constexpr std::ptrdiff_t m_PatronKilledSound = 0x2458;
      constexpr std::ptrdiff_t m_EffigySapphireExplodeSound = 0x2468;
      constexpr std::ptrdiff_t m_EffigyAmberExplodeSound = 0x2478;
      constexpr std::ptrdiff_t m_AmberReformSound = 0x2488;
      constexpr std::ptrdiff_t m_SapphireReformSound = 0x2498;
      constexpr std::ptrdiff_t m_AmberReformingLoopSound = 0x24a8;
      constexpr std::ptrdiff_t m_SapphireReformingLoopSound = 0x24b8;
      constexpr std::ptrdiff_t m_LaserBeamModifier = 0x24c8;
      constexpr std::ptrdiff_t m_DyingModifier = 0x24d8;
      constexpr std::ptrdiff_t m_VulnerableModifier = 0x24e8;
      constexpr std::ptrdiff_t m_Phase1Modifier = 0x24f8;
      constexpr std::ptrdiff_t m_EffigyModifier = 0x2508;
      constexpr std::ptrdiff_t m_Phase2DamagePulseModifier = 0x2518;
      constexpr std::ptrdiff_t m_BackdoorProtection = 0x2528;
      constexpr std::ptrdiff_t m_RangedArmorModifier = 0x2538;
      constexpr std::ptrdiff_t m_ObjectiveRegen = 0x2548;
      constexpr std::ptrdiff_t m_ObjectiveHealthGrowthPhase1 = 0x2558;
      constexpr std::ptrdiff_t m_ObjectiveHealthGrowthPhase2 = 0x2568;
      constexpr std::ptrdiff_t m_DefenderInPitInvulnerable = 0x2578;
      constexpr std::ptrdiff_t m_flLaserMoveSpeed = 0x2588;
      constexpr std::ptrdiff_t m_flLaserCooldownPhase1 = 0x258c;
      constexpr std::ptrdiff_t m_flLaserCooldownPhase2 = 0x2590;
      constexpr std::ptrdiff_t m_flLaserDurationPhase1 = 0x2594;
      constexpr std::ptrdiff_t m_flLaserDurationPhase2 = 0x2598;
      constexpr std::ptrdiff_t m_flPhase1DyingBegin = 0x259c;
      constexpr std::ptrdiff_t m_flPhase1DyingDrop = 0x25a0;
      constexpr std::ptrdiff_t m_flPhase2DyingDropScale = 0x25a4;
      constexpr std::ptrdiff_t m_flPhase1DyingWait = 0x25a8;
      constexpr std::ptrdiff_t m_flPhase1DyingTransformUp = 0x25ac;
      constexpr std::ptrdiff_t m_flPhase1BossScale = 0x25b0;
      constexpr std::ptrdiff_t m_flPhase2BossScale = 0x25b4;
      constexpr std::ptrdiff_t m_flPostShrineTransition = 0x25b8;
      constexpr std::ptrdiff_t m_ArmAttackGroundHit = 0x25c0;
      constexpr std::ptrdiff_t m_flArmAttackHealthMin = 0x26a0;
      constexpr std::ptrdiff_t m_flArmAttackHealthMax = 0x26a4;
      constexpr std::ptrdiff_t m_flArmAttackCooldownMin = 0x26a8;
      constexpr std::ptrdiff_t m_flArmAttackCooldownMax = 0x26ac;
      constexpr std::ptrdiff_t m_flArmAttackTimeToHit = 0x26b0;
      constexpr std::ptrdiff_t m_flArmAttackRadius = 0x26b4;
      constexpr std::ptrdiff_t m_flArmAttackPosDotThres = 0x26b8;
      constexpr std::ptrdiff_t m_flArmAttackDamage = 0x26bc;
      constexpr std::ptrdiff_t m_flArmAttackKnockbackStrength = 0x26c0;
      constexpr std::ptrdiff_t m_flArmAttackInvulCooldownScale = 0x26c4;
    }
    namespace CNPC_Escort_VData {
      constexpr std::ptrdiff_t m_strSpawnParticle = 0x1338;
      constexpr std::ptrdiff_t m_flEscortFriendlyHeroSlowMoveSearchRadius = 0x1418;
      constexpr std::ptrdiff_t m_flEscortFriendlyHeroFastMoveSearchRadius = 0x141c;
      constexpr std::ptrdiff_t m_flEscortEnemyObjectiveSearchRadius = 0x1420;
      constexpr std::ptrdiff_t m_flEscortEnemySlowWalkRadius = 0x1424;
      constexpr std::ptrdiff_t m_flCloseEnoughToNode = 0x1428;
      constexpr std::ptrdiff_t m_flCatchUpSpeed = 0x142c;
      constexpr std::ptrdiff_t m_flActivateDelay = 0x1430;
    }
    namespace CNPC_FamiliarHelper {
      constexpr std::ptrdiff_t m_tCooldownStartTime = 0x1bc8;
      constexpr std::ptrdiff_t m_tCooldownEndTime = 0x1bcc;
      constexpr std::ptrdiff_t m_bIsHelperAvailableNet = 0x1bd0;
    }
    namespace CNPC_FieldSentryVData {
      constexpr std::ptrdiff_t m_LaserSightParticle = 0x108;
      constexpr std::ptrdiff_t m_KillExplosionParticle = 0x1e8;
      constexpr std::ptrdiff_t m_DeployProgressModifier = 0x2c8;
      constexpr std::ptrdiff_t m_sSpawnSound = 0x2d8;
      constexpr std::ptrdiff_t m_sKillExplosionSound = 0x2e8;
      constexpr std::ptrdiff_t m_sTargetAcquiredLocalSound = 0x2f8;
      constexpr std::ptrdiff_t m_sTargetAcquiredSound = 0x308;
      constexpr std::ptrdiff_t m_flIdleTurnSpeed = 0x318;
      constexpr std::ptrdiff_t m_flIdleTurnAngles = 0x31c;
      constexpr std::ptrdiff_t m_flTrooperTakeDamageMult = 0x320;
      constexpr std::ptrdiff_t m_flNeutralTakeDamageMulti = 0x324;
      constexpr std::ptrdiff_t m_flNotifyEventTime = 0x328;
    }
    namespace CNPC_MidBossVData {
      constexpr std::ptrdiff_t m_iStartingHealth = 0x1338;
      constexpr std::ptrdiff_t m_iHealthGainPerMinute = 0x133c;
      constexpr std::ptrdiff_t m_flAggroTime = 0x1340;
      constexpr std::ptrdiff_t m_DyingSmallExplosion = 0x1348;
      constexpr std::ptrdiff_t m_DyingFinalExplosion = 0x1428;
      constexpr std::ptrdiff_t m_flDyingDuration = 0x1508;
      constexpr std::ptrdiff_t m_KnockbackAura = 0x1510;
      constexpr std::ptrdiff_t m_AggroEnemy = 0x1520;
    }
    namespace CNPC_NecroSkele {
      constexpr std::ptrdiff_t m_tSpawnTime = 0x1bf0;
      constexpr std::ptrdiff_t m_vecCastLocation = 0x1bf4;
      constexpr std::ptrdiff_t m_bDontMove = 0x1c00;
      constexpr std::ptrdiff_t m_flAttackRange = 0x1c04;
      constexpr std::ptrdiff_t m_flSpawnDuration = 0x1c08;
    }
    namespace CNPC_NeutralSinnerSacrificeHideoutVData {
      constexpr std::ptrdiff_t m_sLocHint01 = 0x18e0;
      constexpr std::ptrdiff_t m_sLocHint02 = 0x18e8;
      constexpr std::ptrdiff_t m_flRespawnTime = 0x18f0;
    }
    namespace CNPC_NeutralSinnerSacrificeVData {
      constexpr std::ptrdiff_t m_flRetaliateDamage = 0x16b0;
      constexpr std::ptrdiff_t m_flVaultMiniGameTime = 0x16b4;
      constexpr std::ptrdiff_t m_flVaultMiniGameHitWindow = 0x16b8;
      constexpr std::ptrdiff_t m_flVaultMiniGameWheelScrollTime = 0x16bc;
      constexpr std::ptrdiff_t m_iVaultSuccessLightBuffDropCount = 0x16c0;
      constexpr std::ptrdiff_t m_iVaultSuccessHeavyBuffDropCount = 0x16c4;
      constexpr std::ptrdiff_t m_flVaultLightScrollTime = 0x16c8;
      constexpr std::ptrdiff_t m_flVaultWheelScrollTime = 0x16cc;
      constexpr std::ptrdiff_t m_flVaultSuccessLightsScroll = 0x16d0;
      constexpr std::ptrdiff_t m_flVaultSuccessWheelScroll = 0x16d4;
      constexpr std::ptrdiff_t m_flVaultSuccessDestroyTime = 0x16d8;
      constexpr std::ptrdiff_t m_VaultSuccessParticle = 0x16e0;
      constexpr std::ptrdiff_t m_VaultIdleLoopSound = 0x17c0;
      constexpr std::ptrdiff_t m_VaultStartActiveSound = 0x17d0;
      constexpr std::ptrdiff_t m_VaultActiveLoopSound = 0x17e0;
      constexpr std::ptrdiff_t m_VaultStartCriticalSound = 0x17f0;
      constexpr std::ptrdiff_t m_VaultCriticalLoopSound = 0x1800;
      constexpr std::ptrdiff_t m_VaultHitSuccessSoundLight = 0x1810;
      constexpr std::ptrdiff_t m_VaultHitSuccessSoundHeavy = 0x1820;
      constexpr std::ptrdiff_t m_VaultHitFailSound = 0x1830;
      constexpr std::ptrdiff_t m_VaultHit01 = 0x1840;
      constexpr std::ptrdiff_t m_VaultHit02 = 0x1850;
      constexpr std::ptrdiff_t m_VaultHit03 = 0x1860;
      constexpr std::ptrdiff_t m_VaultHit04 = 0x1870;
      constexpr std::ptrdiff_t m_VaultHit05 = 0x1880;
      constexpr std::ptrdiff_t m_VaultHit06 = 0x1890;
      constexpr std::ptrdiff_t m_VaultHit07 = 0x18a0;
      constexpr std::ptrdiff_t m_VaultLight = 0x18b0;
      constexpr std::ptrdiff_t m_VaultLightHitWindow = 0x18c0;
      constexpr std::ptrdiff_t m_VaultWheelSuccessDing = 0x18d0;
    }
    namespace CNPC_ShieldedSentryVData {
      constexpr std::ptrdiff_t m_flZShootPostionOffset = 0x108;
      constexpr std::ptrdiff_t m_LaserSightParticle = 0x110;
      constexpr std::ptrdiff_t m_KillExplosionParticle = 0x1f0;
      constexpr std::ptrdiff_t m_AutoDestructParticle = 0x2d0;
      constexpr std::ptrdiff_t m_DeployProgressModifier = 0x3b0;
      constexpr std::ptrdiff_t m_NearDeathModifier = 0x3c0;
      constexpr std::ptrdiff_t m_IntrinsicModifier = 0x3d0;
      constexpr std::ptrdiff_t m_sSpawnSound = 0x3e0;
      constexpr std::ptrdiff_t m_sKillExplosionSound = 0x3f0;
      constexpr std::ptrdiff_t m_sLastHitSound = 0x400;
      constexpr std::ptrdiff_t m_sTargetAcquiredLocalSound = 0x410;
      constexpr std::ptrdiff_t m_sTargetAcquiredSound = 0x420;
      constexpr std::ptrdiff_t m_flIdleTurnSpeed = 0x430;
      constexpr std::ptrdiff_t m_flIdleTurnAngles = 0x434;
      constexpr std::ptrdiff_t m_flTrooperTakeDamageMult = 0x438;
      constexpr std::ptrdiff_t m_flNeutralTakeDamageMulti = 0x43c;
      constexpr std::ptrdiff_t m_flNotifyEventTime = 0x440;
      constexpr std::ptrdiff_t m_flNearDeathDuration = 0x444;
      constexpr std::ptrdiff_t m_flMinimapRevealTime = 0x448;
      constexpr std::ptrdiff_t m_flMinLifetime = 0x44c;
      constexpr std::ptrdiff_t m_flAttackThinkTime = 0x450;
    }
    namespace CNPC_SimpleAnimatingAIVData {
      constexpr std::ptrdiff_t m_sModelName = 0x28;
    }
    namespace CNPC_TrooperBossVData {
      constexpr std::ptrdiff_t m_bMitigateDamageFromPlayers = 0x1338;
      constexpr std::ptrdiff_t m_flPlayerAutoAttackRange = 0x133c;
      constexpr std::ptrdiff_t m_flMinMeleeAttackTime = 0x1340;
      constexpr std::ptrdiff_t m_flMeleeDuration = 0x1344;
      constexpr std::ptrdiff_t m_flInvulRange = 0x1348;
      constexpr std::ptrdiff_t m_flTrooperDamageResistPct = 0x134c;
      constexpr std::ptrdiff_t m_flPlayerDamageResistPct = 0x1350;
      constexpr std::ptrdiff_t m_flBackDoorProtectionRange = 0x1354;
      constexpr std::ptrdiff_t m_flDeathFadeTimeStart = 0x1358;
      constexpr std::ptrdiff_t m_flDeathFadeTimeEnd = 0x135c;
      constexpr std::ptrdiff_t m_flTier1PlayerClipCapsuleRadius = 0x1360;
      constexpr std::ptrdiff_t m_flTier1PlayerClipCapsuleHeight = 0x1364;
      constexpr std::ptrdiff_t m_sAngryStart = 0x1368;
      constexpr std::ptrdiff_t m_sAngryLoop = 0x1378;
      constexpr std::ptrdiff_t m_sAngryStop = 0x1388;
      constexpr std::ptrdiff_t m_BackdoorProtectionModifier = 0x1398;
      constexpr std::ptrdiff_t m_TrooperBossInvulnModifier = 0x13a8;
      constexpr std::ptrdiff_t m_flTrooperDPS = 0x13b8;
      constexpr std::ptrdiff_t m_flPlayerDPS = 0x13bc;
      constexpr std::ptrdiff_t m_flDPSPctGrowthPerMinute = 0x13c0;
    }
    namespace CNPC_TrooperNeutralNodeMoverVData {
      constexpr std::ptrdiff_t m_bEnableMovementToNodes = 0x16b0;
      constexpr std::ptrdiff_t m_flExposedDuration = 0x16b4;
      constexpr std::ptrdiff_t m_flHideDuration = 0x16bc;
      constexpr std::ptrdiff_t m_HidingModifier = 0x16c8;
    }
    namespace CNPC_TrooperNeutralVData {
      constexpr std::ptrdiff_t m_eTrooperType = 0x1338;
      constexpr std::ptrdiff_t m_flGoldReward = 0x133c;
      constexpr std::ptrdiff_t m_flGoldRewardBonusPercentPerMinute = 0x1340;
      constexpr std::ptrdiff_t m_bCapSimultanousAttackers = 0x1344;
      constexpr std::ptrdiff_t m_flShieldReactivateDelay = 0x1348;
      constexpr std::ptrdiff_t m_flDyingDuration = 0x134c;
      constexpr std::ptrdiff_t m_bDamagedByBullets = 0x1350;
      constexpr std::ptrdiff_t m_bDamagedByMelee = 0x1351;
      constexpr std::ptrdiff_t m_bDamagedByAbilities = 0x1352;
      constexpr std::ptrdiff_t m_ShieldParticle = 0x1358;
      constexpr std::ptrdiff_t m_retaliateParticle = 0x1438;
      constexpr std::ptrdiff_t m_bHasAOEAttack = 0x1518;
      constexpr std::ptrdiff_t m_flAOERadius = 0x151c;
      constexpr std::ptrdiff_t m_flAOEDamage = 0x1520;
      constexpr std::ptrdiff_t m_flAOEAttackCooldown = 0x1524;
      constexpr std::ptrdiff_t m_AOEParticle = 0x1528;
      constexpr std::ptrdiff_t m_AOEDebuffToApply = 0x1608;
      constexpr std::ptrdiff_t m_AOEInitiateSound = 0x1618;
      constexpr std::ptrdiff_t m_AOESound = 0x1628;
      constexpr std::ptrdiff_t m_AOEDebuffDuration = 0x1638;
      constexpr std::ptrdiff_t m_vecRandomBodyGroup = 0x1640;
      constexpr std::ptrdiff_t m_vecRandomSkin = 0x1658;
      constexpr std::ptrdiff_t m_flHullCapsuleRadius = 0x1670;
      constexpr std::ptrdiff_t m_flHullCapsuleHeight = 0x1674;
      constexpr std::ptrdiff_t m_bFaceEnemyWhileIdle = 0x1678;
      constexpr std::ptrdiff_t m_IdleLoopSound = 0x1680;
      constexpr std::ptrdiff_t m_MoveType = 0x1690;
      constexpr std::ptrdiff_t m_iWeakPointCount = 0x1694;
      constexpr std::ptrdiff_t m_iWeakPointType = 0x1698;
      constexpr std::ptrdiff_t m_iWeakPointRespawnTime = 0x169c;
      constexpr std::ptrdiff_t m_NeutralDamageGrowth = 0x16a0;
    }
    namespace CNPC_YakuzaGangster {
    }
    namespace CNecro_HauntingSkullEntity {
      constexpr std::ptrdiff_t m_hAbility = 0x9a4;
      constexpr std::ptrdiff_t m_eSkullState = 0x9a8;
    }
    namespace CNetworkedSequenceOperation {
      constexpr std::ptrdiff_t m_hSequence = 0x8;
      constexpr std::ptrdiff_t m_flPrevCycle = 0xc;
      constexpr std::ptrdiff_t m_flCycle = 0x10;
      constexpr std::ptrdiff_t m_flWeight = 0x14;
      constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1c;
      constexpr std::ptrdiff_t m_bDiscontinuity = 0x1d;
      constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20;
      constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24;
    }
    namespace CPathNode {
      constexpr std::ptrdiff_t m_vInTangentLocal = 0x5f0;
      constexpr std::ptrdiff_t m_vOutTangentLocal = 0x5fc;
      constexpr std::ptrdiff_t m_strParentPathUniqueID = 0x608;
      constexpr std::ptrdiff_t m_strPathNodeParameter = 0x610;
      constexpr std::ptrdiff_t m_xWSPrevParent = 0x620;
      constexpr std::ptrdiff_t m_hPath = 0x640;
    }
    namespace CPathQueryComponent {
    }
    namespace CPathSimple {
      constexpr std::ptrdiff_t m_CPathQueryComponent = 0x600;
      constexpr std::ptrdiff_t m_pathString = 0x6f0;
      constexpr std::ptrdiff_t m_bClosedLoop = 0x6f8;
    }
    namespace CPathSimpleAPI {
    }
    namespace CPathWithDynamicNodes {
      constexpr std::ptrdiff_t m_vecPathNodes = 0x700;
      constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x720;
    }
    namespace CPlayerSprayDecalRenderHelper {
    }
    namespace CPlayerTrackedStatsEntity {
      constexpr std::ptrdiff_t m_nPlayerSlot = 0x660;
      constexpr std::ptrdiff_t m_nTeam = 0x664;
    }
    namespace CPlayer_AutoaimServices {
    }
    namespace CPlayer_CameraServices {
      constexpr std::ptrdiff_t m_vecPunchAngle = 0x48;
      constexpr std::ptrdiff_t m_vecPunchAngleVel = 0xd8;
      constexpr std::ptrdiff_t m_nPunchAngleJoltTickClientSide = 0x168;
      constexpr std::ptrdiff_t m_nPunchAngleJoltTick = 0x16c;
      constexpr std::ptrdiff_t m_PlayerFog = 0x170;
      constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x1b0;
      constexpr std::ptrdiff_t m_hViewEntity = 0x1b4;
      constexpr std::ptrdiff_t m_hTonemapController = 0x1b8;
      constexpr std::ptrdiff_t m_audio = 0x1c0;
      constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x238;
      constexpr std::ptrdiff_t m_flOldPlayerZ = 0x250;
      constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x254;
      constexpr std::ptrdiff_t m_CurrentFog = 0x258;
      constexpr std::ptrdiff_t m_hOldFogController = 0x2c0;
      constexpr std::ptrdiff_t m_bOverrideFogColor = 0x2c4;
      constexpr std::ptrdiff_t m_OverrideFogColor = 0x2c9;
      constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x2dd;
      constexpr std::ptrdiff_t m_fOverrideFogStart = 0x2e4;
      constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x2f8;
      constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x30c;
      constexpr std::ptrdiff_t m_angDemoViewAngles = 0x310;
    }
    namespace CPlayer_FlashlightServices {
    }
    namespace CPlayer_ItemServices {
    }
    namespace CPlayer_MovementServices {
      constexpr std::ptrdiff_t m_nImpulse = 0x48;
      constexpr std::ptrdiff_t m_nButtons = 0x50;
      constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x70;
      constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x78;
      constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x80;
      constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x88;
      constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x188;
      constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x190;
      constexpr std::ptrdiff_t m_flMaxspeed = 0x1a0;
      constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x1a4;
      constexpr std::ptrdiff_t m_flForwardMove = 0x1b4;
      constexpr std::ptrdiff_t m_flLeftMove = 0x1b8;
      constexpr std::ptrdiff_t m_flUpMove = 0x1bc;
      constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1c0;
      constexpr std::ptrdiff_t m_vecOldViewAngles = 0x228;
    }
    namespace CPlayer_MovementServices_Humanoid {
      constexpr std::ptrdiff_t m_flStepSoundTime = 0x240;
      constexpr std::ptrdiff_t m_flFallVelocity = 0x244;
      constexpr std::ptrdiff_t m_groundNormal = 0x248;
      constexpr std::ptrdiff_t m_flSurfaceFriction = 0x254;
      constexpr std::ptrdiff_t m_surfaceProps = 0x258;
      constexpr std::ptrdiff_t m_nStepside = 0x268;
    }
    namespace CPlayer_ObserverServices {
      constexpr std::ptrdiff_t m_iObserverMode = 0x48;
      constexpr std::ptrdiff_t m_hObserverTarget = 0x4c;
      constexpr std::ptrdiff_t m_iObserverLastMode = 0x50;
      constexpr std::ptrdiff_t m_bForcedObserverMode = 0x54;
      constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x58;
      constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x5c;
    }
    namespace CPlayer_UseServices {
    }
    namespace CPlayer_WaterServices {
    }
    namespace CPlayer_WeaponServices {
      constexpr std::ptrdiff_t m_hMyWeapons = 0x48;
      constexpr std::ptrdiff_t m_hActiveWeapon = 0x60;
      constexpr std::ptrdiff_t m_hLastWeapon = 0x64;
      constexpr std::ptrdiff_t m_iAmmo = 0x68;
    }
    namespace CPointChildModifier {
      constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x5f0;
    }
    namespace CPointModifierThinker {
      constexpr std::ptrdiff_t m_hModifier = 0x5f0;
      constexpr std::ptrdiff_t m_bSendToClients = 0x608;
    }
    namespace CPointOffScreenIndicatorUi {
      constexpr std::ptrdiff_t m_bBeenEnabled = 0xbf0;
      constexpr std::ptrdiff_t m_bHide = 0xbf1;
      constexpr std::ptrdiff_t m_flSeenTargetTime = 0xbf4;
      constexpr std::ptrdiff_t m_pTargetPanel = 0xbf8;
    }
    namespace CPointOrient {
      constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x5f0;
      constexpr std::ptrdiff_t m_hTarget = 0x5f8;
      constexpr std::ptrdiff_t m_bActive = 0x5fc;
      constexpr std::ptrdiff_t m_nGoalDirection = 0x600;
      constexpr std::ptrdiff_t m_nConstraint = 0x604;
      constexpr std::ptrdiff_t m_flMaxTurnRate = 0x608;
      constexpr std::ptrdiff_t m_flLastGameTime = 0x60c;
    }
    namespace CPointTemplate {
      constexpr std::ptrdiff_t m_iszWorldName = 0x5f0;
      constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x5f8;
      constexpr std::ptrdiff_t m_iszEntityFilterName = 0x600;
      constexpr std::ptrdiff_t m_flTimeoutInterval = 0x608;
      constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x60c;
      constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x610;
      constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x614;
      constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x618;
      constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x630;
      constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x648;
      constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x650;
      constexpr std::ptrdiff_t m_OnEntitySpawned = 0x658;
    }
    namespace CPointTemplateAPI {
    }
    namespace CPrecipitationVData {
      constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28;
      constexpr std::ptrdiff_t m_flInnerDistance = 0x108;
      constexpr std::ptrdiff_t m_nAttachType = 0x10c;
      constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110;
      constexpr std::ptrdiff_t m_nRTEnvCP = 0x114;
      constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118;
      constexpr std::ptrdiff_t m_szModifier = 0x120;
    }
    namespace CProjectile_Boho_BouncyProjectile {
    }
    namespace CProjectile_BookwormDragon_Projectile {
      constexpr std::ptrdiff_t m_vecHitUnits = 0xad0;
    }
    namespace CProjectile_Familiar_MovingToAttach {
    }
    namespace CProjectile_KnightChargeLeading_Projectile {
    }
    namespace CProjectile_Necro_HauntProjectile {
    }
    namespace CProjectile_Priest_SlideTrap_Projectile {
      constexpr std::ptrdiff_t m_flRangeAtCast = 0xae4;
      constexpr std::ptrdiff_t m_bArmed = 0xb24;
      constexpr std::ptrdiff_t m_bMoving = 0xb25;
      constexpr std::ptrdiff_t m_bFinished = 0xb26;
    }
    namespace CPropAnimatingBreakable {
      constexpr std::ptrdiff_t m_stages = 0xca0;
      constexpr std::ptrdiff_t m_OnTakeDamage = 0xcb8;
      constexpr std::ptrdiff_t m_OnFinalBreak = 0xcd0;
      constexpr std::ptrdiff_t m_OnStageAdvanced = 0xce8;
    }
    namespace CPropDataComponent {
      constexpr std::ptrdiff_t m_flDmgModBullet = 0x10;
      constexpr std::ptrdiff_t m_flDmgModClub = 0x14;
      constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18;
      constexpr std::ptrdiff_t m_flDmgModFire = 0x1c;
      constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20;
      constexpr std::ptrdiff_t m_iszBasePropData = 0x28;
      constexpr std::ptrdiff_t m_nInteractions = 0x30;
      constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34;
      constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38;
      constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3c;
    }
    namespace CPulseAnimFuncs {
    }
    namespace CPulseArraylib {
    }
    namespace CPulseCell_Base {
      constexpr std::ptrdiff_t m_nEditorNodeID = 0x8;
    }
    namespace CPulseCell_BaseFlow {
    }
    namespace CPulseCell_BaseLerp {
      constexpr std::ptrdiff_t m_WakeResume = 0x48;
    }
    namespace CPulseCell_BaseLerp__CursorState_t {
      constexpr std::ptrdiff_t m_StartTime = 0x0;
      constexpr std::ptrdiff_t m_EndTime = 0x4;
    }
    namespace CPulseCell_BaseRequirement {
    }
    namespace CPulseCell_BaseState {
    }
    namespace CPulseCell_BaseValue {
    }
    namespace CPulseCell_BaseYieldingInflow {
    }
    namespace CPulseCell_BooleanSwitchState {
      constexpr std::ptrdiff_t m_Condition = 0x48;
      constexpr std::ptrdiff_t m_SubGraph = 0xc0;
      constexpr std::ptrdiff_t m_WhenTrue = 0x108;
      constexpr std::ptrdiff_t m_WhenFalse = 0x150;
    }
    namespace CPulseCell_CursorQueue {
      constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98;
    }
    namespace CPulseCell_FireCursors {
      constexpr std::ptrdiff_t m_Outflows = 0x48;
      constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;
      constexpr std::ptrdiff_t m_OnFinished = 0x68;
      constexpr std::ptrdiff_t m_OnCanceled = 0xb0;
    }
    namespace CPulseCell_Inflow_BaseEntrypoint {
      constexpr std::ptrdiff_t m_EntryChunk = 0x48;
      constexpr std::ptrdiff_t m_RegisterMap = 0x50;
    }
    namespace CPulseCell_Inflow_EntOutputHandler {
      constexpr std::ptrdiff_t m_SourceEntity = 0x80;
      constexpr std::ptrdiff_t m_SourceOutput = 0x90;
      constexpr std::ptrdiff_t m_ExpectedParamType = 0xa0;
    }
    namespace CPulseCell_Inflow_EventHandler {
      constexpr std::ptrdiff_t m_EventName = 0x80;
    }
    namespace CPulseCell_Inflow_GraphHook {
      constexpr std::ptrdiff_t m_HookName = 0x80;
    }
    namespace CPulseCell_Inflow_Method {
      constexpr std::ptrdiff_t m_MethodName = 0x80;
      constexpr std::ptrdiff_t m_Description = 0x90;
      constexpr std::ptrdiff_t m_bIsPublic = 0x98;
      constexpr std::ptrdiff_t m_ReturnType = 0xa0;
      constexpr std::ptrdiff_t m_Args = 0xb8;
    }
    namespace CPulseCell_Inflow_ObservableVariableListener {
      constexpr std::ptrdiff_t m_nBlackboardReference = 0x80;
      constexpr std::ptrdiff_t m_bSelfReference = 0x82;
    }
    namespace CPulseCell_Inflow_Wait {
      constexpr std::ptrdiff_t m_WakeResume = 0x48;
    }
    namespace CPulseCell_Inflow_Yield {
      constexpr std::ptrdiff_t m_UnyieldResume = 0x48;
    }
    namespace CPulseCell_InlineNodeSkipSelector {
      constexpr std::ptrdiff_t m_nFlowNodeID = 0x48;
      constexpr std::ptrdiff_t m_bAnd = 0x4c;
      constexpr std::ptrdiff_t m_PassOutflow = 0x50;
      constexpr std::ptrdiff_t m_FailOutflow = 0x68;
    }
    namespace CPulseCell_IntervalTimer {
      constexpr std::ptrdiff_t m_Completed = 0x48;
      constexpr std::ptrdiff_t m_OnInterval = 0x90;
    }
    namespace CPulseCell_IntervalTimer__CursorState_t {
      constexpr std::ptrdiff_t m_StartTime = 0x0;
      constexpr std::ptrdiff_t m_EndTime = 0x4;
      constexpr std::ptrdiff_t m_flWaitInterval = 0x8;
      constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xc;
      constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10;
    }
    namespace CPulseCell_IsRequirementValid {
    }
    namespace CPulseCell_IsRequirementValid__Criteria_t {
      constexpr std::ptrdiff_t m_bIsValid = 0x0;
    }
    namespace CPulseCell_LerpCameraSettings {
      constexpr std::ptrdiff_t m_flSeconds = 0x90;
      constexpr std::ptrdiff_t m_Start = 0x94;
      constexpr std::ptrdiff_t m_End = 0xa4;
    }
    namespace CPulseCell_LerpCameraSettings__CursorState_t {
      constexpr std::ptrdiff_t m_hCamera = 0x8;
      constexpr std::ptrdiff_t m_OverlaidStart = 0xc;
      constexpr std::ptrdiff_t m_OverlaidEnd = 0x1c;
    }
    namespace CPulseCell_LimitCount {
      constexpr std::ptrdiff_t m_nLimitCount = 0x48;
    }
    namespace CPulseCell_LimitCount__Criteria_t {
      constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0;
    }
    namespace CPulseCell_LimitCount__InstanceState_t {
      constexpr std::ptrdiff_t m_nCurrentCount = 0x0;
    }
    namespace CPulseCell_Outflow_CycleOrdered {
      constexpr std::ptrdiff_t m_Outputs = 0x48;
    }
    namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
      constexpr std::ptrdiff_t m_nNextIndex = 0x0;
    }
    namespace CPulseCell_Outflow_CycleRandom {
      constexpr std::ptrdiff_t m_Outputs = 0x48;
    }
    namespace CPulseCell_Outflow_CycleShuffled {
      constexpr std::ptrdiff_t m_Outputs = 0x48;
    }
    namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
      constexpr std::ptrdiff_t m_Shuffle = 0x0;
      constexpr std::ptrdiff_t m_nNextShuffle = 0x20;
    }
    namespace CPulseCell_PickBestOutflowSelector {
      constexpr std::ptrdiff_t m_nCheckType = 0x48;
      constexpr std::ptrdiff_t m_OutflowList = 0x50;
    }
    namespace CPulseCell_PlaySequence {
      constexpr std::ptrdiff_t m_SequenceName = 0x48;
      constexpr std::ptrdiff_t m_PulseAnimEvents = 0x50;
      constexpr std::ptrdiff_t m_OnFinished = 0x68;
      constexpr std::ptrdiff_t m_OnCanceled = 0xb0;
    }
    namespace CPulseCell_PlaySequence__CursorState_t {
      constexpr std::ptrdiff_t m_hTarget = 0x0;
    }
    namespace CPulseCell_Step_CallExternalMethod {
      constexpr std::ptrdiff_t m_MethodName = 0x48;
      constexpr std::ptrdiff_t m_GameBlackboard = 0x58;
      constexpr std::ptrdiff_t m_ExpectedArgs = 0x68;
      constexpr std::ptrdiff_t m_nAsyncCallMode = 0x78;
      constexpr std::ptrdiff_t m_OnFinished = 0x80;
    }
    namespace CPulseCell_Step_DebugLog {
    }
    namespace CPulseCell_Step_EntFire {
      constexpr std::ptrdiff_t m_Input = 0x48;
    }
    namespace CPulseCell_Step_PublicOutput {
      constexpr std::ptrdiff_t m_OutputIndex = 0x48;
    }
    namespace CPulseCell_Timeline {
      constexpr std::ptrdiff_t m_TimelineEvents = 0x48;
      constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;
      constexpr std::ptrdiff_t m_OnFinished = 0x68;
      constexpr std::ptrdiff_t m_OnCanceled = 0xb0;
    }
    namespace CPulseCell_Timeline__TimelineEvent_t {
      constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0;
      constexpr std::ptrdiff_t m_EventOutflow = 0x8;
    }
    namespace CPulseCell_Unknown {
      constexpr std::ptrdiff_t m_UnknownKeys = 0x48;
    }
    namespace CPulseCell_Value_Curve {
      constexpr std::ptrdiff_t m_Curve = 0x48;
    }
    namespace CPulseCell_Value_Gradient {
      constexpr std::ptrdiff_t m_Gradient = 0x48;
    }
    namespace CPulseCell_Value_RandomFloat {
    }
    namespace CPulseCell_Value_RandomInt {
    }
    namespace CPulseCell_WaitForCursorsWithTag {
      constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98;
      constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9c;
    }
    namespace CPulseCell_WaitForCursorsWithTagBase {
      constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48;
      constexpr std::ptrdiff_t m_WaitComplete = 0x50;
    }
    namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
      constexpr std::ptrdiff_t m_TagName = 0x0;
    }
    namespace CPulseCell_WaitForObservable {
      constexpr std::ptrdiff_t m_Condition = 0x48;
      constexpr std::ptrdiff_t m_OnTrue = 0xc0;
    }
    namespace CPulseCursorFuncs {
    }
    namespace CPulseExecCursor {
    }
    namespace CPulseGameBlackboard {
      constexpr std::ptrdiff_t m_strGraphName = 0x5f8;
      constexpr std::ptrdiff_t m_strStateBlob = 0x600;
    }
    namespace CPulseGraphDef {
      constexpr std::ptrdiff_t m_DomainIdentifier = 0x8;
      constexpr std::ptrdiff_t m_DomainSubType = 0x18;
      constexpr std::ptrdiff_t m_ParentMapName = 0x30;
      constexpr std::ptrdiff_t m_ParentXmlName = 0x40;
      constexpr std::ptrdiff_t m_Chunks = 0x50;
      constexpr std::ptrdiff_t m_Cells = 0x68;
      constexpr std::ptrdiff_t m_Vars = 0x80;
      constexpr std::ptrdiff_t m_PublicOutputs = 0x98;
      constexpr std::ptrdiff_t m_InvokeBindings = 0xb0;
      constexpr std::ptrdiff_t m_CallInfos = 0xc8;
      constexpr std::ptrdiff_t m_Constants = 0xe0;
      constexpr std::ptrdiff_t m_DomainValues = 0xf8;
      constexpr std::ptrdiff_t m_BlackboardReferences = 0x110;
      constexpr std::ptrdiff_t m_OutputConnections = 0x128;
    }
    namespace CPulseMathlib {
    }
    namespace CPulseTestScriptLib {
    }
    namespace CPulse_BlackboardReference {
      constexpr std::ptrdiff_t m_hBlackboardResource = 0x0;
      constexpr std::ptrdiff_t m_BlackboardResource = 0x8;
      constexpr std::ptrdiff_t m_nNodeID = 0x18;
      constexpr std::ptrdiff_t m_NodeName = 0x20;
    }
    namespace CPulse_CallInfo {
      constexpr std::ptrdiff_t m_PortName = 0x0;
      constexpr std::ptrdiff_t m_nEditorNodeID = 0x10;
      constexpr std::ptrdiff_t m_RegisterMap = 0x18;
      constexpr std::ptrdiff_t m_CallMethodID = 0x48;
      constexpr std::ptrdiff_t m_nSrcChunk = 0x4c;
      constexpr std::ptrdiff_t m_nSrcInstruction = 0x50;
    }
    namespace CPulse_InvokeBinding {
      constexpr std::ptrdiff_t m_RegisterMap = 0x0;
      constexpr std::ptrdiff_t m_FuncName = 0x30;
      constexpr std::ptrdiff_t m_nCellIndex = 0x40;
      constexpr std::ptrdiff_t m_nSrcChunk = 0x44;
      constexpr std::ptrdiff_t m_nSrcInstruction = 0x48;
    }
    namespace CPulse_OutflowConnection {
      constexpr std::ptrdiff_t m_SourceOutflowName = 0x0;
      constexpr std::ptrdiff_t m_nDestChunk = 0x10;
      constexpr std::ptrdiff_t m_nInstruction = 0x14;
      constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18;
    }
    namespace CPulse_ResumePoint {
    }
    namespace CRagdollManager {
      constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x5f0;
    }
    namespace CRenderComponent {
      constexpr std::ptrdiff_t __m_pChainEntity = 0x10;
      constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50;
      constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54;
      constexpr std::ptrdiff_t m_bEnableRendering = 0x58;
      constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xa8;
    }
    namespace CScaleFunctionAbilityPropertyBase {
    }
    namespace CScaleFunctionAbilityPropertyMultiStats {
    }
    namespace CScaleFunctionAbilityPropertyMultiStatsVData {
      constexpr std::ptrdiff_t m_vecScalingStats = 0x40;
    }
    namespace CScaleFunctionAbilityPropertySingleStat {
    }
    namespace CScaleFunctionAbilityPropertySingleStatCurve {
    }
    namespace CScaleFunctionAbilityPropertySingleStatCurveVData {
      constexpr std::ptrdiff_t m_statCurve = 0x40;
    }
    namespace CScaleFunctionAbilityPropertySingleStatVData {
    }
    namespace CScaleFunctionAbilityProperty_AbilityCharges {
    }
    namespace CScaleFunctionAbilityProperty_AbilityRechargeTime {
    }
    namespace CScaleFunctionAbilityProperty_BaseWeaponDamage {
    }
    namespace CScaleFunctionAbilityProperty_HealingBoonScale {
    }
    namespace CScaleFunctionAbilityProperty_HealingBoonScaleVData {
    }
    namespace CScaleFunctionAbilityProperty_HealingSpiritScale {
    }
    namespace CScaleFunctionAbilityProperty_HealingSpiritScaleVData {
    }
    namespace CScaleFunctionAbilityProperty_KineticCarbine {
    }
    namespace CScaleFunctionAbilityProperty_NanoTechRoundsDamage {
    }
    namespace CScaleFunctionAbilityProperty_TechDamage {
    }
    namespace CScaleFunctionAbilityProperty_TechDuration {
    }
    namespace CScaleFunctionAbilityProperty_TechRange {
    }
    namespace CScaleFunctionAbilityProperty_WeaponDamage {
    }
    namespace CScaleFunctionVData {
      constexpr std::ptrdiff_t m_eSpecificStatScaleType = 0x28;
      constexpr std::ptrdiff_t m_bFunctionDisabled = 0x2c;
      constexpr std::ptrdiff_t m_flStatScale = 0x30;
      constexpr std::ptrdiff_t m_flStreetBrawlStatScale = 0x34;
    }
    namespace CScenePayloadVData {
      constexpr std::ptrdiff_t m_eNPCBehavior = 0x0;
      constexpr std::ptrdiff_t m_sSceneFile = 0x8;
    }
    namespace CScriptComponent {
      constexpr std::ptrdiff_t m_scriptClassName = 0x30;
    }
    namespace CServerOnlyModelEntity {
    }
    namespace CSkeletonInstance {
      constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0;
      constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0;
      constexpr std::ptrdiff_t m_modelState = 0x150;
      constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x3b0;
      constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x3b1;
      constexpr std::ptrdiff_t m_materialGroup = 0x3b4;
      constexpr std::ptrdiff_t m_nHitboxSet = 0x3b8;
    }
    namespace CSkyboxReference {
      constexpr std::ptrdiff_t m_worldGroupId = 0x5f0;
      constexpr std::ptrdiff_t m_hSkyCamera = 0x5f4;
    }
    namespace CSpriteOriented {
    }
    namespace CStreetBrawlController {
      constexpr std::ptrdiff_t m_eStreetBrawlState = 0x8;
      constexpr std::ptrdiff_t m_flStreetBrawlStateStartTime = 0xc;
      constexpr std::ptrdiff_t m_flNextStateTime = 0x10;
      constexpr std::ptrdiff_t m_flStreetBrawlTotalNonCombatTime = 0x14;
      constexpr std::ptrdiff_t m_iRound = 0x18;
      constexpr std::ptrdiff_t m_iLastBuyCountDown = 0x1c;
      constexpr std::ptrdiff_t m_iTeamSapphireScore = 0x20;
      constexpr std::ptrdiff_t m_iTeamAmberScore = 0x24;
    }
    namespace CTakeDamageInfoAPI {
    }
    namespace CTeamTrackedStatsEntity {
      constexpr std::ptrdiff_t m_nTeam = 0x660;
    }
    namespace CTier3BossAbility {
    }
    namespace CTimeline {
      constexpr std::ptrdiff_t m_flValues = 0x10;
      constexpr std::ptrdiff_t m_nValueCounts = 0x110;
      constexpr std::ptrdiff_t m_nBucketCount = 0x210;
      constexpr std::ptrdiff_t m_flInterval = 0x214;
      constexpr std::ptrdiff_t m_flFinalValue = 0x218;
      constexpr std::ptrdiff_t m_nCompressionType = 0x21c;
      constexpr std::ptrdiff_t m_bStopped = 0x220;
    }
    namespace CTriggerFan {
      constexpr std::ptrdiff_t m_vFanOriginOffset = 0xa70;
      constexpr std::ptrdiff_t m_vDirection = 0xa7c;
      constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0xa88;
      constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0xa89;
      constexpr std::ptrdiff_t m_qNoiseDelta = 0xa90;
      constexpr std::ptrdiff_t m_hInfoFan = 0xaa0;
      constexpr std::ptrdiff_t m_flForce = 0xaa4;
      constexpr std::ptrdiff_t m_bFalloff = 0xaa8;
      constexpr std::ptrdiff_t m_RampTimer = 0xab0;
    }
    namespace CTriggerPassthroughFakeWall {
    }
    namespace CUnitStatusOverlay {
    }
    namespace CUnitStatusOverlayNew {
      constexpr std::ptrdiff_t m_flUIScale = 0xc38;
    }
    namespace CUnitStatusOverlayOld {
      constexpr std::ptrdiff_t m_flUIScale = 0xc30;
    }
    namespace CUnitStatusOverlayV2 {
      constexpr std::ptrdiff_t m_flUIScale = 0xca8;
    }
    namespace C_AI_BaseNPC {
      constexpr std::ptrdiff_t m_NPCState = 0xee8;
      constexpr std::ptrdiff_t m_bFadeCorpse = 0xeec;
      constexpr std::ptrdiff_t m_bImportantRagdoll = 0xeed;
      constexpr std::ptrdiff_t m_pMotor = 0xef0;
    }
    namespace C_AI_CitadelNPC {
      constexpr std::ptrdiff_t m_bBeamActive = 0xf2c;
      constexpr std::ptrdiff_t m_vEyeBeamTarget = 0xf30;
      constexpr std::ptrdiff_t m_nPlayerTeamEvent = 0x18e0;
      constexpr std::ptrdiff_t m_vecWeakPoints = 0x1970;
      constexpr std::ptrdiff_t m_bMinion = 0x19d8;
      constexpr std::ptrdiff_t m_hLookTarget = 0x19dc;
      constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0x19e0;
    }
    namespace C_AI_Motor {
      constexpr std::ptrdiff_t m_nCurrentStance = 0x50;
    }
    namespace C_AirheartStickyBombInWorld {
    }
    namespace C_AssignedLaneParticle {
      constexpr std::ptrdiff_t m_iLane = 0x9c0;
    }
    namespace C_BarnLight {
      constexpr std::ptrdiff_t m_bEnabled = 0x9a0;
      constexpr std::ptrdiff_t m_nColorMode = 0x9a4;
      constexpr std::ptrdiff_t m_Color = 0x9a8;
      constexpr std::ptrdiff_t m_flColorTemperature = 0x9ac;
      constexpr std::ptrdiff_t m_flBrightness = 0x9b0;
      constexpr std::ptrdiff_t m_flBrightnessScale = 0x9b4;
      constexpr std::ptrdiff_t m_nDirectLight = 0x9b8;
      constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x9bc;
      constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x9c0;
      constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x9c4;
      constexpr std::ptrdiff_t m_nLuminaireShape = 0x9c8;
      constexpr std::ptrdiff_t m_flLuminaireSize = 0x9cc;
      constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x9d0;
      constexpr std::ptrdiff_t m_LightStyleString = 0x9d8;
      constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x9e0;
      constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x9e8;
      constexpr std::ptrdiff_t m_LightStyleEvents = 0xa00;
      constexpr std::ptrdiff_t m_LightStyleTargets = 0xa18;
      constexpr std::ptrdiff_t m_StyleEvent = 0xa30;
      constexpr std::ptrdiff_t m_hLightCookie = 0xa90;
      constexpr std::ptrdiff_t m_flShape = 0xa98;
      constexpr std::ptrdiff_t m_flSoftX = 0xa9c;
      constexpr std::ptrdiff_t m_flSoftY = 0xaa0;
      constexpr std::ptrdiff_t m_flSkirt = 0xaa4;
      constexpr std::ptrdiff_t m_flSkirtNear = 0xaa8;
      constexpr std::ptrdiff_t m_vSizeParams = 0xaac;
      constexpr std::ptrdiff_t m_flRange = 0xab8;
      constexpr std::ptrdiff_t m_vShear = 0xabc;
      constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xac8;
      constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xacc;
      constexpr std::ptrdiff_t m_nCastShadows = 0xad8;
      constexpr std::ptrdiff_t m_nShadowMapSize = 0xadc;
      constexpr std::ptrdiff_t m_nShadowPriority = 0xae0;
      constexpr std::ptrdiff_t m_bContactShadow = 0xae4;
      constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0xae5;
      constexpr std::ptrdiff_t m_nBounceLight = 0xae8;
      constexpr std::ptrdiff_t m_flBounceScale = 0xaec;
      constexpr std::ptrdiff_t m_bDynamicBounce = 0xaf0;
      constexpr std::ptrdiff_t m_flMinRoughness = 0xaf4;
      constexpr std::ptrdiff_t m_vAlternateColor = 0xaf8;
      constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xb04;
      constexpr std::ptrdiff_t m_nFog = 0xb08;
      constexpr std::ptrdiff_t m_flFogStrength = 0xb0c;
      constexpr std::ptrdiff_t m_nFogShadows = 0xb10;
      constexpr std::ptrdiff_t m_flFogScale = 0xb14;
      constexpr std::ptrdiff_t m_flFadeSizeStart = 0xb18;
      constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xb1c;
      constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xb20;
      constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xb24;
      constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xb28;
      constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xb2c;
      constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xb38;
      constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xb44;
      constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xb50;
      constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xb5c;
      constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0xb68;
      constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0xb6c;
      constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0xb78;
      constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0xb84;
      constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0xb90;
      constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0xb9c;
      constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0xba8;
      constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0xbb4;
      constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0xbc0;
      constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0xbcc;
      constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0xbd8;
      constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0xbe4;
      constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0xbf0;
      constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0xbfc;
      constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0xc08;
      constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0xc14;
      constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0xc20;
      constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0xc2c;
      constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0xc38;
      constexpr std::ptrdiff_t m_bInitialBoneSetup = 0xc88;
      constexpr std::ptrdiff_t m_VisClusters = 0xc90;
    }
    namespace C_BaseButton {
      constexpr std::ptrdiff_t m_glowEntity = 0x9a0;
      constexpr std::ptrdiff_t m_usable = 0x9a4;
      constexpr std::ptrdiff_t m_szDisplayText = 0x9a8;
    }
    namespace C_BaseClientUIEntity {
      constexpr std::ptrdiff_t m_bEnabled = 0x9a8;
      constexpr std::ptrdiff_t m_DialogXMLName = 0x9b0;
      constexpr std::ptrdiff_t m_PanelClassName = 0x9b8;
      constexpr std::ptrdiff_t m_PanelID = 0x9c0;
    }
    namespace C_BaseCombatCharacter {
      constexpr std::ptrdiff_t m_hMyWearables = 0xe58;
      constexpr std::ptrdiff_t m_leftFootAttachment = 0xe70;
      constexpr std::ptrdiff_t m_rightFootAttachment = 0xe71;
      constexpr std::ptrdiff_t m_nWaterWakeMode = 0xe74;
      constexpr std::ptrdiff_t m_flWaterWorldZ = 0xe78;
      constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0xe7c;
    }
    namespace C_BaseDoor {
      constexpr std::ptrdiff_t m_bIsUsable = 0x9a0;
    }
    namespace C_BaseEntity {
      constexpr std::ptrdiff_t m_CBodyComponent = 0x30;
      constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38;
      constexpr std::ptrdiff_t m_nLastThinkTick = 0x328;
      constexpr std::ptrdiff_t m_pGameSceneNode = 0x330;
      constexpr std::ptrdiff_t m_pRenderComponent = 0x338;
      constexpr std::ptrdiff_t m_pCollision = 0x340;
      constexpr std::ptrdiff_t m_pModifierProp = 0x348;
      constexpr std::ptrdiff_t m_iMaxHealth = 0x350;
      constexpr std::ptrdiff_t m_iHealth = 0x354;
      constexpr std::ptrdiff_t m_flDamageAccumulator = 0x358;
      constexpr std::ptrdiff_t m_lifeState = 0x35c;
      constexpr std::ptrdiff_t m_bTakesDamage = 0x35d;
      constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x360;
      constexpr std::ptrdiff_t m_nPlatformType = 0x368;
      constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x369;
      constexpr std::ptrdiff_t m_hSceneObjectController = 0x36c;
      constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x370;
      constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x374;
      constexpr std::ptrdiff_t m_flProxyRandomValue = 0x378;
      constexpr std::ptrdiff_t m_iEFlags = 0x37c;
      constexpr std::ptrdiff_t m_nWaterType = 0x380;
      constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x381;
      constexpr std::ptrdiff_t m_bPredictionEligible = 0x382;
      constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x383;
      constexpr std::ptrdiff_t m_tokLayerMatchID = 0x384;
      constexpr std::ptrdiff_t m_nSubclassID = 0x388;
      constexpr std::ptrdiff_t m_nSimulationTick = 0x398;
      constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x39c;
      constexpr std::ptrdiff_t m_aThinkFunctions = 0x3a0;
      constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x3b8;
      constexpr std::ptrdiff_t m_flAnimTime = 0x3bc;
      constexpr std::ptrdiff_t m_flSimulationTime = 0x3c0;
      constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x3c4;
      constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x3c5;
      constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x3c6;
      constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3c7;
      constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3c8;
      constexpr std::ptrdiff_t m_ListEntry = 0x3d0;
      constexpr std::ptrdiff_t m_flCreateTime = 0x3e8;
      constexpr std::ptrdiff_t m_flSpeed = 0x3ec;
      constexpr std::ptrdiff_t m_EntClientFlags = 0x3f0;
      constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3f2;
      constexpr std::ptrdiff_t m_iTeamNum = 0x3f3;
      constexpr std::ptrdiff_t m_spawnflags = 0x3f4;
      constexpr std::ptrdiff_t m_nNextThinkTick = 0x3f8;
      constexpr std::ptrdiff_t m_fFlags = 0x400;
      constexpr std::ptrdiff_t m_vecAbsVelocity = 0x404;
      constexpr std::ptrdiff_t m_vecServerVelocity = 0x410;
      constexpr std::ptrdiff_t m_vecVelocity = 0x438;
      constexpr std::ptrdiff_t m_hEffectEntity = 0x518;
      constexpr std::ptrdiff_t m_hOwnerEntity = 0x51c;
      constexpr std::ptrdiff_t m_MoveCollide = 0x520;
      constexpr std::ptrdiff_t m_MoveType = 0x521;
      constexpr std::ptrdiff_t m_nActualMoveType = 0x522;
      constexpr std::ptrdiff_t m_flWaterLevel = 0x524;
      constexpr std::ptrdiff_t m_fEffects = 0x528;
      constexpr std::ptrdiff_t m_hGroundEntity = 0x52c;
      constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x530;
      constexpr std::ptrdiff_t m_flFriction = 0x534;
      constexpr std::ptrdiff_t m_flElasticity = 0x538;
      constexpr std::ptrdiff_t m_flGravityScale = 0x53c;
      constexpr std::ptrdiff_t m_flTimeScale = 0x540;
      constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x544;
      constexpr std::ptrdiff_t m_bGravityDisabled = 0x545;
      constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x548;
      constexpr std::ptrdiff_t m_hThink = 0x54c;
      constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x558;
      constexpr std::ptrdiff_t m_flActualGravityScale = 0x55c;
      constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x560;
      constexpr std::ptrdiff_t m_bPredictable = 0x561;
      constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x562;
      constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x564;
      constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x568;
      constexpr std::ptrdiff_t m_hOldMoveParent = 0x56c;
      constexpr std::ptrdiff_t m_Particles = 0x570;
      constexpr std::ptrdiff_t m_vecAngVelocity = 0x5a0;
      constexpr std::ptrdiff_t m_DataChangeEventRef = 0x5ac;
      constexpr std::ptrdiff_t m_dependencies = 0x5b0;
      constexpr std::ptrdiff_t m_nCreationTick = 0x5c8;
      constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x5d9;
      constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x5da;
      constexpr std::ptrdiff_t m_sUniqueHammerID = 0x5e8;
    }
    namespace C_BaseEntityAPI {
    }
    namespace C_BaseFlex {
      constexpr std::ptrdiff_t m_flexWeight = 0xca8;
      constexpr std::ptrdiff_t m_vLookTargetPosition = 0xcc0;
      constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0xd78;
      constexpr std::ptrdiff_t m_CachedViewTarget = 0xd7c;
      constexpr std::ptrdiff_t m_iMouthAttachment = 0xd88;
      constexpr std::ptrdiff_t m_iEyeAttachment = 0xd89;
      constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0xd8a;
      constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0xda8;
      constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xdac;
      constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0xddc;
      constexpr std::ptrdiff_t m_PhonemeClasses = 0xdf8;
    }
    namespace C_BaseFlex__Emphasized_Phoneme {
      constexpr std::ptrdiff_t m_sClassName = 0x0;
      constexpr std::ptrdiff_t m_flAmount = 0x18;
      constexpr std::ptrdiff_t m_bRequired = 0x1c;
      constexpr std::ptrdiff_t m_bBasechecked = 0x1d;
      constexpr std::ptrdiff_t m_bValid = 0x1e;
    }
    namespace C_BaseModelEntity {
      constexpr std::ptrdiff_t m_CRenderComponent = 0x5f0;
      constexpr std::ptrdiff_t m_CHitboxComponent = 0x5f8;
      constexpr std::ptrdiff_t m_pChoreoComponent = 0x610;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0x618;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0x61c;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0x620;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0x624;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0x628;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x62c;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x630;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x634;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x638;
      constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x63c;
      constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0x640;
      constexpr std::ptrdiff_t m_bInitModelEffects = 0x660;
      constexpr std::ptrdiff_t m_bDoingModelEffects = 0x661;
      constexpr std::ptrdiff_t m_bIsStaticProp = 0x662;
      constexpr std::ptrdiff_t m_iOldHealth = 0x664;
      constexpr std::ptrdiff_t m_nRenderMode = 0x668;
      constexpr std::ptrdiff_t m_nRenderFX = 0x669;
      constexpr std::ptrdiff_t m_szAddModifier = 0x670;
      constexpr std::ptrdiff_t m_bAllowFadeInView = 0x678;
      constexpr std::ptrdiff_t m_bHasCollision = 0x698;
      constexpr std::ptrdiff_t m_vSupport = 0x69c;
      constexpr std::ptrdiff_t m_clrRender = 0x6a8;
      constexpr std::ptrdiff_t m_vecRenderAttributes = 0x6b0;
      constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x730;
      constexpr std::ptrdiff_t m_bNoInterpolate = 0x731;
      constexpr std::ptrdiff_t m_Collision = 0x738;
      constexpr std::ptrdiff_t m_Glow = 0x7e8;
      constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x840;
      constexpr std::ptrdiff_t m_fadeMinDist = 0x844;
      constexpr std::ptrdiff_t m_fadeMaxDist = 0x848;
      constexpr std::ptrdiff_t m_flFadeScale = 0x84c;
      constexpr std::ptrdiff_t m_flShadowStrength = 0x850;
      constexpr std::ptrdiff_t m_nObjectCulling = 0x854;
      constexpr std::ptrdiff_t m_nRequiredDecalRtEncoding = 0x855;
      constexpr std::ptrdiff_t m_bodyGroupChoices = 0x858;
      constexpr std::ptrdiff_t m_vecViewOffset = 0x880;
      constexpr std::ptrdiff_t m_pClientAlphaProperty = 0x960;
      constexpr std::ptrdiff_t m_ClientOverrideTint = 0x968;
      constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0x96c;
      constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x990;
    }
    namespace C_BasePlayerPawn {
      constexpr std::ptrdiff_t m_pWeaponServices = 0xee0;
      constexpr std::ptrdiff_t m_pItemServices = 0xee8;
      constexpr std::ptrdiff_t m_pAutoaimServices = 0xef0;
      constexpr std::ptrdiff_t m_pObserverServices = 0xef8;
      constexpr std::ptrdiff_t m_pWaterServices = 0xf00;
      constexpr std::ptrdiff_t m_pUseServices = 0xf08;
      constexpr std::ptrdiff_t m_pFlashlightServices = 0xf10;
      constexpr std::ptrdiff_t m_pCameraServices = 0xf18;
      constexpr std::ptrdiff_t m_pMovementServices = 0xf20;
      constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xf30;
      constexpr std::ptrdiff_t v_angle = 0xf98;
      constexpr std::ptrdiff_t v_anglePrevious = 0xfa4;
      constexpr std::ptrdiff_t m_iHideHUD = 0xfb0;
      constexpr std::ptrdiff_t m_skybox3d = 0xfb8;
      constexpr std::ptrdiff_t m_flDeathTime = 0x1048;
      constexpr std::ptrdiff_t m_vecPredictionError = 0x104c;
      constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1058;
      constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x1078;
      constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1084;
      constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x1088;
      constexpr std::ptrdiff_t m_flMouseSensitivity = 0x108c;
      constexpr std::ptrdiff_t m_vOldOrigin = 0x1090;
      constexpr std::ptrdiff_t m_flOldSimulationTime = 0x109c;
      constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x10a0;
      constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x10a4;
      constexpr std::ptrdiff_t m_hController = 0x10a8;
      constexpr std::ptrdiff_t m_hDefaultController = 0x10ac;
      constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x10b0;
    }
    namespace C_BasePlayerWeapon {
      constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xca0;
      constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xca4;
      constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xca8;
      constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xcac;
      constexpr std::ptrdiff_t m_iClip1 = 0xcb0;
      constexpr std::ptrdiff_t m_iClip2 = 0xcb4;
      constexpr std::ptrdiff_t m_pReserveAmmo = 0xcb8;
    }
    namespace C_BasePropDoor {
      constexpr std::ptrdiff_t m_eDoorState = 0xef0;
      constexpr std::ptrdiff_t m_modelChanged = 0xef4;
      constexpr std::ptrdiff_t m_bLocked = 0xef5;
      constexpr std::ptrdiff_t m_bNoNPCs = 0xef6;
      constexpr std::ptrdiff_t m_closedPosition = 0xef8;
      constexpr std::ptrdiff_t m_closedAngles = 0xf04;
      constexpr std::ptrdiff_t m_hMaster = 0xf10;
      constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0xf14;
    }
    namespace C_BaseToggle {
    }
    namespace C_BaseTrigger {
      constexpr std::ptrdiff_t m_OnStartTouch = 0x9a0;
      constexpr std::ptrdiff_t m_OnStartTouchAll = 0x9b8;
      constexpr std::ptrdiff_t m_OnEndTouch = 0x9d0;
      constexpr std::ptrdiff_t m_OnEndTouchAll = 0x9e8;
      constexpr std::ptrdiff_t m_OnTouching = 0xa00;
      constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0xa18;
      constexpr std::ptrdiff_t m_OnNotTouching = 0xa30;
      constexpr std::ptrdiff_t m_hTouchingEntities = 0xa48;
      constexpr std::ptrdiff_t m_iFilterName = 0xa60;
      constexpr std::ptrdiff_t m_hFilter = 0xa68;
      constexpr std::ptrdiff_t m_bDisabled = 0xa6c;
    }
    namespace C_Beam {
      constexpr std::ptrdiff_t m_flFrameRate = 0x9a0;
      constexpr std::ptrdiff_t m_flHDRColorScale = 0x9a4;
      constexpr std::ptrdiff_t m_flFireTime = 0x9a8;
      constexpr std::ptrdiff_t m_flDamage = 0x9ac;
      constexpr std::ptrdiff_t m_nNumBeamEnts = 0x9b0;
      constexpr std::ptrdiff_t m_queryHandleHalo = 0x9b4;
      constexpr std::ptrdiff_t m_hBaseMaterial = 0x9d8;
      constexpr std::ptrdiff_t m_nHaloIndex = 0x9e0;
      constexpr std::ptrdiff_t m_nBeamType = 0x9e8;
      constexpr std::ptrdiff_t m_nBeamFlags = 0x9ec;
      constexpr std::ptrdiff_t m_hAttachEntity = 0x9f0;
      constexpr std::ptrdiff_t m_nAttachIndex = 0xa18;
      constexpr std::ptrdiff_t m_fWidth = 0xa24;
      constexpr std::ptrdiff_t m_fEndWidth = 0xa28;
      constexpr std::ptrdiff_t m_fFadeLength = 0xa2c;
      constexpr std::ptrdiff_t m_fHaloScale = 0xa30;
      constexpr std::ptrdiff_t m_fAmplitude = 0xa34;
      constexpr std::ptrdiff_t m_fStartFrame = 0xa38;
      constexpr std::ptrdiff_t m_fSpeed = 0xa3c;
      constexpr std::ptrdiff_t m_flFrame = 0xa40;
      constexpr std::ptrdiff_t m_nClipStyle = 0xa44;
      constexpr std::ptrdiff_t m_bTurnedOff = 0xa48;
      constexpr std::ptrdiff_t m_vecEndPos = 0xa4c;
      constexpr std::ptrdiff_t m_hEndEntity = 0xa58;
    }
    namespace C_Breakable {
    }
    namespace C_BreakableProp {
      constexpr std::ptrdiff_t m_CPropDataComponent = 0xcd0;
      constexpr std::ptrdiff_t m_OnStartDeath = 0xd10;
      constexpr std::ptrdiff_t m_OnBreak = 0xd28;
      constexpr std::ptrdiff_t m_OnHealthChanged = 0xd40;
      constexpr std::ptrdiff_t m_OnTakeDamage = 0xd60;
      constexpr std::ptrdiff_t m_impactEnergyScale = 0xd78;
      constexpr std::ptrdiff_t m_iMinHealthDmg = 0xd7c;
      constexpr std::ptrdiff_t m_flPressureDelay = 0xd80;
      constexpr std::ptrdiff_t m_flDefBurstScale = 0xd84;
      constexpr std::ptrdiff_t m_vDefBurstOffset = 0xd88;
      constexpr std::ptrdiff_t m_hBreaker = 0xd94;
      constexpr std::ptrdiff_t m_PerformanceMode = 0xd98;
      constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xd9c;
      constexpr std::ptrdiff_t m_BreakableContentsType = 0xda0;
      constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xda8;
      constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xdb0;
      constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xdb8;
      constexpr std::ptrdiff_t m_explodeDamage = 0xdbc;
      constexpr std::ptrdiff_t m_explodeRadius = 0xdc0;
      constexpr std::ptrdiff_t m_sExplosionType = 0xdc8;
      constexpr std::ptrdiff_t m_explosionDelay = 0xdd0;
      constexpr std::ptrdiff_t m_explosionBuildupSound = 0xdd8;
      constexpr std::ptrdiff_t m_explosionCustomEffect = 0xde0;
      constexpr std::ptrdiff_t m_explosionCustomSound = 0xde8;
      constexpr std::ptrdiff_t m_explosionModifier = 0xdf0;
      constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xdf8;
      constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xdfc;
      constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xe00;
      constexpr std::ptrdiff_t m_hLastAttacker = 0xe04;
    }
    namespace C_CProjectile_Rutger_Rocket {
    }
    namespace C_CitadelBaseAbility {
      constexpr std::ptrdiff_t m_vecIntrinsicModifiers = 0x6c0;
      constexpr std::ptrdiff_t m_pCastDelayAutoModifier = 0x6d8;
      constexpr std::ptrdiff_t m_pChannelAutoModifier = 0x6f0;
      constexpr std::ptrdiff_t m_strUsedCastGraphParam = 0x708;
      constexpr std::ptrdiff_t m_nCastParamNeedsResetTick = 0x710;
      constexpr std::ptrdiff_t m_bIsCoolingDownInternal = 0x718;
      constexpr std::ptrdiff_t m_flCancelMashProtectionEndTime = 0x71c;
      constexpr std::ptrdiff_t m_flCancelLockoutEndTime = 0x720;
      constexpr std::ptrdiff_t m_bChanneling = 0x740;
      constexpr std::ptrdiff_t m_bInCastDelay = 0x741;
      constexpr std::ptrdiff_t m_bShouldBeExecuted = 0x742;
      constexpr std::ptrdiff_t m_bCanBeUpgraded = 0x743;
      constexpr std::ptrdiff_t m_eStolenInSlot = 0x748;
      constexpr std::ptrdiff_t m_nUpgradeInfo = 0x758;
      constexpr std::ptrdiff_t m_iBucketID = 0x75c;
      constexpr std::ptrdiff_t m_bToggleState = 0x760;
      constexpr std::ptrdiff_t m_flCooldownStart = 0x764;
      constexpr std::ptrdiff_t m_flCooldownEnd = 0x768;
      constexpr std::ptrdiff_t m_flCastCompletedTime = 0x76c;
      constexpr std::ptrdiff_t m_flChannelStartTime = 0x770;
      constexpr std::ptrdiff_t m_flCastDelayStartTime = 0x774;
      constexpr std::ptrdiff_t m_eAbilitySlot = 0x778;
      constexpr std::ptrdiff_t m_flPostCastDelayEndTime = 0x77c;
      constexpr std::ptrdiff_t m_iRemainingCharges = 0x780;
      constexpr std::ptrdiff_t m_flChargeRechargeStart = 0x784;
      constexpr std::ptrdiff_t m_flChargeRechargeEnd = 0x788;
      constexpr std::ptrdiff_t m_flMovementControlActiveTime = 0x78c;
      constexpr std::ptrdiff_t m_flSelectedChangedTime = 0x790;
      constexpr std::ptrdiff_t m_flAltCastHoldStartTime = 0x794;
      constexpr std::ptrdiff_t m_flAltCastDoubleTapStartTime = 0x798;
      constexpr std::ptrdiff_t m_bCanBeImbued = 0x79c;
      constexpr std::ptrdiff_t m_vecImbuedAbilities = 0x7a0;
      constexpr std::ptrdiff_t m_bSelectionModeIsAltMode = 0x7b8;
      constexpr std::ptrdiff_t m_bPredErrorCheckChanneling = 0x7b9;
      constexpr std::ptrdiff_t m_bPredErrorCheckCasting = 0x7ba;
      constexpr std::ptrdiff_t m_flPredErrorCheckCastCompleteTime = 0x7bc;
      constexpr std::ptrdiff_t m_bPredErrorCheckIsSelected = 0x7c0;
      constexpr std::ptrdiff_t m_flNextMeepMopTime = 0x119c;
    }
    namespace C_CitadelBoomerangProjectile {
      constexpr std::ptrdiff_t m_bReturning = 0xad0;
    }
    namespace C_CitadelClimbRopeTrigger {
      constexpr std::ptrdiff_t m_bAlignCameraOnAutoDismount = 0xa70;
    }
    namespace C_CitadelConfigurableTrackedProjectile {
    }
    namespace C_CitadelDruidInvisBush {
      constexpr std::ptrdiff_t m_vStartPos = 0xca8;
      constexpr std::ptrdiff_t m_vEndPos = 0xcb4;
      constexpr std::ptrdiff_t m_flStartGrowTime = 0xcc0;
      constexpr std::ptrdiff_t m_flEndGrowTime = 0xcc4;
    }
    namespace C_CitadelGameRules {
      constexpr std::ptrdiff_t m_bFreezePeriod = 0x58;
      constexpr std::ptrdiff_t m_fLevelStartTime = 0x5c;
      constexpr std::ptrdiff_t m_flGameStartTime = 0x60;
      constexpr std::ptrdiff_t m_flGameStateStartTime = 0x64;
      constexpr std::ptrdiff_t m_flGameStateEndTime = 0x68;
      constexpr std::ptrdiff_t m_flRoundStartTime = 0x6c;
      constexpr std::ptrdiff_t m_flPlayOfTheGameStateEndTime = 0x70;
      constexpr std::ptrdiff_t m_eGameState = 0x74;
      constexpr std::ptrdiff_t m_hTowerAmber = 0x78;
      constexpr std::ptrdiff_t m_hTowerSapphire = 0x7c;
      constexpr std::ptrdiff_t m_bEnemyInAmberBase = 0x80;
      constexpr std::ptrdiff_t m_bEnemyInSapphireBase = 0x81;
      constexpr std::ptrdiff_t m_bEnemyPlayersInAmberBase = 0x82;
      constexpr std::ptrdiff_t m_bEnemyPlayersInSapphireBase = 0x83;
      constexpr std::ptrdiff_t m_vMinimapMins = 0x84;
      constexpr std::ptrdiff_t m_vMinimapMaxs = 0x90;
      constexpr std::ptrdiff_t m_bMatchSafeToAbandon = 0x9c;
      constexpr std::ptrdiff_t m_bMatchNotScored = 0x9d;
      constexpr std::ptrdiff_t m_bNoDeathEnabled = 0x9e;
      constexpr std::ptrdiff_t m_bFastCooldownsEnabled = 0x9f;
      constexpr std::ptrdiff_t m_bStaminaCooldownsEnabled = 0xa0;
      constexpr std::ptrdiff_t m_bUnlimitedAmmoEnabled = 0xa1;
      constexpr std::ptrdiff_t m_bInfiniteResourcesEnabled = 0xa2;
      constexpr std::ptrdiff_t m_bFlexSlotsForcedUnlocked = 0xa3;
      constexpr std::ptrdiff_t m_eMatchMode = 0xa4;
      constexpr std::ptrdiff_t m_eGameMode = 0xa8;
      constexpr std::ptrdiff_t m_unSpectatorCount = 0xac;
      constexpr std::ptrdiff_t m_unExpectedPlayerCount = 0xb0;
      constexpr std::ptrdiff_t m_nHideoutOwner = 0xb4;
      constexpr std::ptrdiff_t m_hTrooperMinimap = 0xb8;
      constexpr std::ptrdiff_t m_iWinningTeam = 0xbc;
      constexpr std::ptrdiff_t m_hCurrentHeroDrafterRebels = 0xc0;
      constexpr std::ptrdiff_t m_hCurrentHeroDrafterCombine = 0xc4;
      constexpr std::ptrdiff_t m_bDontUploadStats = 0xc8;
      constexpr std::ptrdiff_t m_iMidbossKillCount = 0xcc;
      constexpr std::ptrdiff_t m_iAmberRejuvCount = 0xd0;
      constexpr std::ptrdiff_t m_iSapphireRejuvCount = 0xd4;
      constexpr std::ptrdiff_t m_tNextMidBossSpawnTime = 0xd8;
      constexpr std::ptrdiff_t m_bServerPaused = 0x9e30;
      constexpr std::ptrdiff_t m_iPauseTeam = 0x9e34;
      constexpr std::ptrdiff_t m_nMatchClockUpdateTick = 0x9e38;
      constexpr std::ptrdiff_t m_flMatchClockAtLastUpdate = 0x9e3c;
      constexpr std::ptrdiff_t m_flPauseTime = 0x9e40;
      constexpr std::ptrdiff_t m_pausingPlayerId = 0x9e48;
      constexpr std::ptrdiff_t m_unpausingPlayerId = 0x9e4c;
      constexpr std::ptrdiff_t m_fPauseRawTime = 0x9e50;
      constexpr std::ptrdiff_t m_fPauseCurTime = 0x9e54;
      constexpr std::ptrdiff_t m_fUnpauseRawTime = 0x9e58;
      constexpr std::ptrdiff_t m_fUnpauseCurTime = 0x9e5c;
      constexpr std::ptrdiff_t m_bRequiresReportCardDismissal = 0x9eb0;
      constexpr std::ptrdiff_t m_flPreGameWaitEndTime = 0x9eb4;
      constexpr std::ptrdiff_t m_flReportCardDismissalWaitStart = 0x9eb8;
      constexpr std::ptrdiff_t m_nLastPreGameCount = 0x9ebc;
      constexpr std::ptrdiff_t m_eGGTeam = 0x9ec0;
      constexpr std::ptrdiff_t m_flGGEndsAtTime = 0x9ec4;
      constexpr std::ptrdiff_t m_unMatchID = 0x9ec8;
      constexpr std::ptrdiff_t m_sGameplayExperiment = 0x9ed0;
      constexpr std::ptrdiff_t m_ExperimentTokenHashCode = 0x9ed8;
      constexpr std::ptrdiff_t m_nPlayerDeathEventID = 0x9edc;
      constexpr std::ptrdiff_t m_nReplayChangedEvent = 0x9ee0;
      constexpr std::ptrdiff_t m_nGameOverEvent = 0x9ee4;
      constexpr std::ptrdiff_t m_flHeroDiedTime = 0x9f08;
      constexpr std::ptrdiff_t m_pPlayOfTheGame = 0x9f10;
      constexpr std::ptrdiff_t m_tStreetBrawl = 0x9f18;
    }
    namespace C_CitadelGameRulesProxy {
      constexpr std::ptrdiff_t m_pGameRules = 0x5f0;
    }
    namespace C_CitadelIdolReturnTrigger {
    }
    namespace C_CitadelItemPickup {
      constexpr std::ptrdiff_t m_eLootType = 0xcc0;
      constexpr std::ptrdiff_t m_nCurrencyValue = 0xcc4;
      constexpr std::ptrdiff_t m_iszModelName = 0xcc8;
      constexpr std::ptrdiff_t m_flModelScale = 0xcd0;
      constexpr std::ptrdiff_t m_hTargetPlayer = 0xcd4;
      constexpr std::ptrdiff_t m_flFallRate = 0xcd8;
    }
    namespace C_CitadelMinimapBoundary {
    }
    namespace C_CitadelObserverPawn {
    }
    namespace C_CitadelPlayerBotNPCBrain {
    }
    namespace C_CitadelPlayerPawn {
      constexpr std::ptrdiff_t m_hAbilityRequiresDebounce = 0x1188;
      constexpr std::ptrdiff_t m_angEyeAngles = 0x11b0;
      constexpr std::ptrdiff_t m_angClientCamera = 0x1240;
      constexpr std::ptrdiff_t m_eZipLineLaneColor = 0x12d0;
      constexpr std::ptrdiff_t m_nLevel = 0x12d4;
      constexpr std::ptrdiff_t m_nCurrencies = 0x12d8;
      constexpr std::ptrdiff_t m_nSpentCurrencies = 0x12f0;
      constexpr std::ptrdiff_t m_flLastSpawnTime = 0x1308;
      constexpr std::ptrdiff_t m_flRespawnTime = 0x130c;
      constexpr std::ptrdiff_t m_bInRegenerationZone = 0x1310;
      constexpr std::ptrdiff_t m_bInItemShopZone = 0x1311;
      constexpr std::ptrdiff_t m_bInHideoutZone = 0x1312;
      constexpr std::ptrdiff_t m_timeRevealedOnMinimapByNPC = 0x1314;
      constexpr std::ptrdiff_t m_vecFullSellPriceItems = 0x1318;
      constexpr std::ptrdiff_t m_vecFullSellPriceAbilityUpgrades = 0x1330;
      constexpr std::ptrdiff_t m_vecQuickbuyQueue = 0x1348;
      constexpr std::ptrdiff_t m_vecQuickbuySellQueue = 0x1360;
      constexpr std::ptrdiff_t m_unQuickbuyAutoPurchaseRequest = 0x1378;
      constexpr std::ptrdiff_t m_bQuickbuyAutoPurchase = 0x137c;
      constexpr std::ptrdiff_t m_bQuickbuyAutoQueueBuild = 0x137d;
      constexpr std::ptrdiff_t m_bHasQuickbuyBeenUsed = 0x137e;
      constexpr std::ptrdiff_t m_vecRestrictedToItems = 0x1380;
      constexpr std::ptrdiff_t m_unHeroBuildID = 0x1398;
      constexpr std::ptrdiff_t m_sHeroBuildSerialized = 0x13a0;
      constexpr std::ptrdiff_t m_hViewEntityForObserver = 0x13a8;
      constexpr std::ptrdiff_t m_bNetworkDisconnected = 0x13ac;
      constexpr std::ptrdiff_t m_bLearningAbility = 0x13ad;
      constexpr std::ptrdiff_t m_nFlashStartTick = 0x13b0;
      constexpr std::ptrdiff_t m_nFlashMaxStartTick = 0x13b4;
      constexpr std::ptrdiff_t m_nFlashFadeStartTick = 0x13b8;
      constexpr std::ptrdiff_t m_nFlashEndTick = 0x13bc;
      constexpr std::ptrdiff_t m_nFlashMaxAlpha = 0x13c0;
      constexpr std::ptrdiff_t m_nDeducedLane = 0x13c4;
      constexpr std::ptrdiff_t m_hEnemyPlayerAimTarget = 0x13c8;
      constexpr std::ptrdiff_t m_arrPreventAbilityLearning = 0x13cc;
      constexpr std::ptrdiff_t m_ItemDraftRoundState = 0x13d0;
      constexpr std::ptrdiff_t m_sInCombat = 0x1458;
      constexpr std::ptrdiff_t m_sPlayerDamageTaken = 0x1470;
      constexpr std::ptrdiff_t m_sPlayerDamageDealt = 0x1488;
      constexpr std::ptrdiff_t m_nSuccessiveDucks = 0x14a0;
      constexpr std::ptrdiff_t m_flLastDuckTime = 0x14a4;
      constexpr std::ptrdiff_t m_bDismissedReportCard = 0x14a8;
      constexpr std::ptrdiff_t m_flCurrentHealingAmount = 0x14ac;
      constexpr std::ptrdiff_t m_angLockedEyeAngles = 0x14b0;
      constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0x14c0;
      constexpr std::ptrdiff_t m_CCitadelHeroComponent = 0x16a8;
      constexpr std::ptrdiff_t m_vLastVelocity = 0x175c;
      constexpr std::ptrdiff_t m_flRichPresenceUpdateInterval = 0x178c;
      constexpr std::ptrdiff_t m_nQueuedAbility = 0x1880;
      constexpr std::ptrdiff_t m_QueuedAbilityEndTime = 0x1888;
      constexpr std::ptrdiff_t m_bAnimGraphMovementClipped = 0x1890;
      constexpr std::ptrdiff_t m_bAnimGraphMovementDisableGravity = 0x1891;
      constexpr std::ptrdiff_t m_bAnimGraphMovementDirectAirControl = 0x1892;
      constexpr std::ptrdiff_t m_flPredTimeSlowedStart = 0x1894;
      constexpr std::ptrdiff_t m_flPredTimeSlowedEnd = 0x1898;
      constexpr std::ptrdiff_t m_flPredSlowSpeed = 0x189c;
      constexpr std::ptrdiff_t m_flTimeSlowedStart = 0x18a0;
      constexpr std::ptrdiff_t m_flTimeSlowedEnd = 0x18b0;
      constexpr std::ptrdiff_t m_flSlowSpeed = 0x18c0;
      constexpr std::ptrdiff_t m_flForceInCombatAnimsUntilTime = 0x18d0;
      constexpr std::ptrdiff_t m_iCurSlowSlot = 0x18d4;
      constexpr std::ptrdiff_t m_bLocoLeanTriggeredForDirection = 0x18d8;
      constexpr std::ptrdiff_t m_bLocoRunToStopCanTrigger = 0x18d9;
      constexpr std::ptrdiff_t m_flCrouchFraction = 0x18dc;
      constexpr std::ptrdiff_t m_flCrouchSpeed = 0x18e0;
      constexpr std::ptrdiff_t m_fidgetTime = 0x18e4;
      constexpr std::ptrdiff_t m_vShootTestOffsetStanding = 0x18e8;
      constexpr std::ptrdiff_t m_vShootTestOffsetCrouching = 0x18f4;
      constexpr std::ptrdiff_t m_leanStartTime = 0x1900;
      constexpr std::ptrdiff_t m_nAudioEnclosure = 0x1984;
      constexpr std::ptrdiff_t m_bAudioHasSkyExposure = 0x1985;
    }
    namespace C_CitadelProjectile {
      constexpr std::ptrdiff_t m_flMaxDistance = 0x9e0;
      constexpr std::ptrdiff_t m_nCachedExcludeFlags = 0x9e8;
      constexpr std::ptrdiff_t m_bInPortalEnvironment = 0x9f0;
      constexpr std::ptrdiff_t m_bHandlingPortalResult = 0x9f1;
      constexpr std::ptrdiff_t m_flArmingTime = 0x9f4;
      constexpr std::ptrdiff_t m_flChargeAmount = 0x9f8;
      constexpr std::ptrdiff_t m_bCollideWithThrower = 0x9fc;
      constexpr std::ptrdiff_t m_bNewCollideWithThrower = 0x9fd;
      constexpr std::ptrdiff_t m_flTickSoundInterval = 0xa08;
      constexpr std::ptrdiff_t m_vInitialVelocity = 0xa10;
      constexpr std::ptrdiff_t m_vInitialPosition = 0xa1c;
      constexpr std::ptrdiff_t m_abilityID = 0xa28;
      constexpr std::ptrdiff_t m_sParticleName = 0xa30;
      constexpr std::ptrdiff_t m_vecSpawnPosition = 0xa38;
      constexpr std::ptrdiff_t m_flProjectileSpeed = 0xa44;
      constexpr std::ptrdiff_t m_flMaxLifetime = 0xa48;
      constexpr std::ptrdiff_t m_flParticleRadius = 0xa50;
      constexpr std::ptrdiff_t m_flPreviousTimeScale = 0xac8;
    }
    namespace C_CitadelProjectile_ImmobilizeTrap {
      constexpr std::ptrdiff_t m_bShouldDraw = 0xad0;
    }
    namespace C_CitadelShopTunnelTrigger {
    }
    namespace C_CitadelSpawnBlocker {
    }
    namespace C_CitadelTeam {
      constexpr std::ptrdiff_t m_flBaseObjectiveHealth = 0x6a8;
      constexpr std::ptrdiff_t m_vecBaseLocationX = 0x6ac;
      constexpr std::ptrdiff_t m_vecBaseLocationY = 0x6b0;
      constexpr std::ptrdiff_t m_bHasValidBaseLocation = 0x6b4;
      constexpr std::ptrdiff_t m_nBossesAlive = 0x6b8;
      constexpr std::ptrdiff_t m_nBossesMax = 0x6bc;
      constexpr std::ptrdiff_t m_nFlexSlotsUnlocked = 0x6c0;
      constexpr std::ptrdiff_t m_nBaseGuardianLanesCleared = 0x6c4;
      constexpr std::ptrdiff_t m_vecFOWEntities = 0x6c8;
      constexpr std::ptrdiff_t m_nStreetBrawlScore = 0x730;
      constexpr std::ptrdiff_t m_nStreetBrawlScoreLastRound = 0x734;
    }
    namespace C_CitadelTeleportTrigger {
      constexpr std::ptrdiff_t m_vExitOrigin = 0xa70;
    }
    namespace C_CitadelTrackedProjectile {
    }
    namespace C_CitadelTriggerHideout {
    }
    namespace C_CitadelViscousBall {
      constexpr std::ptrdiff_t m_hAbility = 0x9a8;
      constexpr std::ptrdiff_t m_flBallRadius = 0x9ac;
      constexpr std::ptrdiff_t m_bNeedsPhysicsUpdate = 0x9b0;
    }
    namespace C_CitadelZiplinePath {
      constexpr std::ptrdiff_t m_iLaneNumber = 0x700;
      constexpr std::ptrdiff_t m_bUseBaseLaneColor = 0x704;
    }
    namespace C_Citadel_BaseProp_MidStairs {
      constexpr std::ptrdiff_t m_eLocation = 0x5f0;
    }
    namespace C_Citadel_Bounce_Pad {
      constexpr std::ptrdiff_t m_flUpFactor = 0xca8;
      constexpr std::ptrdiff_t m_flBounceVelocity = 0xcac;
      constexpr std::ptrdiff_t m_tDeactivationTime = 0xcb0;
      constexpr std::ptrdiff_t m_bDeactivated = 0xcb4;
      constexpr std::ptrdiff_t m_flBarrelBounceVelocity = 0xcb8;
      constexpr std::ptrdiff_t m_flBarrelUpFactor = 0xcbc;
      constexpr std::ptrdiff_t m_bSpeedOnLand = 0xcc0;
      constexpr std::ptrdiff_t m_vBouncedPlayerBefore = 0xcc8;
    }
    namespace C_Citadel_BreakableDroppedGoldPickup {
    }
    namespace C_Citadel_BreakableDroppedNecroPickup {
    }
    namespace C_Citadel_BreakableProp {
      constexpr std::ptrdiff_t m_nHitIndex = 0xca0;
    }
    namespace C_Citadel_BreakablePropPickup {
      constexpr std::ptrdiff_t m_bActive = 0xca0;
      constexpr std::ptrdiff_t m_sPickupName = 0xca8;
      constexpr std::ptrdiff_t m_nNameOffset = 0xcb0;
      constexpr std::ptrdiff_t m_sAmbientNoise = 0xcb8;
      constexpr std::ptrdiff_t m_vVacuumStartPos = 0xcc0;
      constexpr std::ptrdiff_t m_vInitialVacuumVel = 0xccc;
      constexpr std::ptrdiff_t m_hVacuumTarget = 0xcd8;
      constexpr std::ptrdiff_t m_flVacuumStartTime = 0xdd8;
      constexpr std::ptrdiff_t m_vVacuumPos = 0xddc;
      constexpr std::ptrdiff_t m_flLastFrameTime = 0xde8;
      constexpr std::ptrdiff_t m_bVacuumFinished = 0xdec;
    }
    namespace C_Citadel_BreakableProp_GraphController {
      constexpr std::ptrdiff_t m_bSetInit = 0x90;
      constexpr std::ptrdiff_t m_flDamageReceived = 0xb8;
      constexpr std::ptrdiff_t m_bOnRespawn = 0xe0;
      constexpr std::ptrdiff_t m_bHitTrigger = 0x108;
    }
    namespace C_Citadel_BreakblePropGoldPickup {
      constexpr std::ptrdiff_t m_iGoldReward = 0xdf0;
    }
    namespace C_Citadel_BreakblePropHealthPickup {
    }
    namespace C_Citadel_BreakblePropModifierPickup {
    }
    namespace C_Citadel_CatAnimating {
    }
    namespace C_Citadel_DeployablePreview {
    }
    namespace C_Citadel_DeployablePreview_GraphController {
      constexpr std::ptrdiff_t m_bDeploying = 0x90;
    }
    namespace C_Citadel_Destroyable_Building {
      constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0xca8;
      constexpr std::ptrdiff_t m_vecWeakPoints = 0xe90;
      constexpr std::ptrdiff_t m_bDestroyed = 0xef8;
      constexpr std::ptrdiff_t m_bActive = 0xef9;
      constexpr std::ptrdiff_t m_bFinal = 0xefa;
    }
    namespace C_Citadel_DruidHealingFruit {
    }
    namespace C_Citadel_DruidHealingTree {
      constexpr std::ptrdiff_t m_strFruitModelName = 0xcc8;
      constexpr std::ptrdiff_t m_vStartPos = 0xcd0;
      constexpr std::ptrdiff_t m_vEndPos = 0xcdc;
      constexpr std::ptrdiff_t m_flGrowDuration = 0xce8;
    }
    namespace C_Citadel_DruidPlantShield {
      constexpr std::ptrdiff_t m_bSolid = 0xca8;
      constexpr std::ptrdiff_t m_vStartPos = 0xcac;
      constexpr std::ptrdiff_t m_vEndPos = 0xcb8;
      constexpr std::ptrdiff_t m_flStartGrowTime = 0xcc4;
      constexpr std::ptrdiff_t m_flEndGrowTime = 0xcc8;
    }
    namespace C_Citadel_DynamicProp {
      constexpr std::ptrdiff_t m_nPlayerTeamEvent = 0xef0;
      constexpr std::ptrdiff_t m_strDefaultSkin = 0xef8;
      constexpr std::ptrdiff_t m_strFriendlySkin = 0xf00;
      constexpr std::ptrdiff_t m_strEnemySkin = 0xf08;
      constexpr std::ptrdiff_t m_bIsWorld = 0xf10;
    }
    namespace C_Citadel_FissureWall {
      constexpr std::ptrdiff_t m_vStartPos = 0xca0;
      constexpr std::ptrdiff_t m_vEndPos = 0xcac;
      constexpr std::ptrdiff_t m_flStartEmitTime = 0xcb8;
      constexpr std::ptrdiff_t m_flEndEmitTime = 0xcbc;
      constexpr std::ptrdiff_t m_bSolid = 0xcc0;
      constexpr std::ptrdiff_t m_nTouchCount = 0xcc4;
    }
    namespace C_Citadel_GraveStone_Blocker {
      constexpr std::ptrdiff_t m_hAbility = 0xca8;
      constexpr std::ptrdiff_t m_iGravestoneState = 0xcac;
      constexpr std::ptrdiff_t m_flLifetime = 0xcb0;
    }
    namespace C_Citadel_Hideout_Ball {
    }
    namespace C_Citadel_Hideout_Clock {
    }
    namespace C_Citadel_Ice_Dome_Blocker {
      constexpr std::ptrdiff_t m_flTurnSolidTime = 0xca0;
    }
    namespace C_Citadel_Ice_Path_Shard_Physics {
      constexpr std::ptrdiff_t m_ShardDesc = 0x9a0;
      constexpr std::ptrdiff_t m_qForward = 0x9d8;
      constexpr std::ptrdiff_t m_flStartTime = 0x9e4;
      constexpr std::ptrdiff_t m_flEndTime = 0x9e8;
      constexpr std::ptrdiff_t m_flShardWidth = 0x9ec;
    }
    namespace C_Citadel_Magic_Beam_Blocker {
      constexpr std::ptrdiff_t m_flTurnSolidTime = 0xca0;
    }
    namespace C_Citadel_Nano_Predatory_Statue {
      constexpr std::ptrdiff_t m_hAbility = 0xcc0;
      constexpr std::ptrdiff_t m_flLifetime = 0xcc4;
    }
    namespace C_Citadel_PestilenceDroneDispenser {
    }
    namespace C_Citadel_PickupItemSpawner {
      constexpr std::ptrdiff_t m_tNextDropTime = 0xca8;
      constexpr std::ptrdiff_t m_bPowerupActive = 0xcac;
    }
    namespace C_Citadel_Projectile_Archer_ChargedShot {
    }
    namespace C_Citadel_Projectile_Bebop_Hook {
      constexpr std::ptrdiff_t m_iChainEffect = 0xad0;
    }
    namespace C_Citadel_Projectile_BloodBomb {
    }
    namespace C_Citadel_Projectile_DustStorm {
    }
    namespace C_Citadel_Projectile_Guided_Arrow {
    }
    namespace C_Citadel_Projectile_SettingSun {
    }
    namespace C_Citadel_Projectile_Viscous_GooGrenade {
      constexpr std::ptrdiff_t m_nBounces = 0xad0;
      constexpr std::ptrdiff_t m_tNextDetonateTime = 0xad4;
      constexpr std::ptrdiff_t m_vecLastHitTargets = 0xad8;
      constexpr std::ptrdiff_t m_vecProjectileHitTargets = 0xaf0;
    }
    namespace C_Citadel_Projectile_Wrecker_Teleport {
    }
    namespace C_Citadel_Projectile_WreckingBall {
    }
    namespace C_Citadel_PunchablePowerup {
    }
    namespace C_Citadel_RestorativeGooCube {
    }
    namespace C_Citadel_Shield {
      constexpr std::ptrdiff_t m_bAllowRotatingUp = 0x9a8;
      constexpr std::ptrdiff_t m_bFixedPosition = 0x9a9;
      constexpr std::ptrdiff_t m_flShieldOffset = 0x9ac;
    }
    namespace C_Citadel_SmokeGrenade_Blocker {
      constexpr std::ptrdiff_t m_flTurnSolidTime = 0xca0;
    }
    namespace C_Citadel_SpiderAnimating {
    }
    namespace C_ClientRagdoll {
      constexpr std::ptrdiff_t m_bFadeOut = 0xca0;
      constexpr std::ptrdiff_t m_bImportant = 0xca1;
      constexpr std::ptrdiff_t m_flEffectTime = 0xca4;
      constexpr std::ptrdiff_t m_gibDespawnTime = 0xca8;
      constexpr std::ptrdiff_t m_iCurrentFriction = 0xcac;
      constexpr std::ptrdiff_t m_iMinFriction = 0xcb0;
      constexpr std::ptrdiff_t m_iMaxFriction = 0xcb4;
      constexpr std::ptrdiff_t m_iFrictionAnimState = 0xcb8;
      constexpr std::ptrdiff_t m_bReleaseRagdoll = 0xcbc;
      constexpr std::ptrdiff_t m_iEyeAttachment = 0xcbd;
      constexpr std::ptrdiff_t m_bFadingOut = 0xcbe;
      constexpr std::ptrdiff_t m_flScaleEnd = 0xcc0;
      constexpr std::ptrdiff_t m_flScaleTimeStart = 0xce8;
      constexpr std::ptrdiff_t m_flScaleTimeEnd = 0xd10;
    }
    namespace C_ColorCorrection {
      constexpr std::ptrdiff_t m_vecOrigin = 0x5f0;
      constexpr std::ptrdiff_t m_MinFalloff = 0x5fc;
      constexpr std::ptrdiff_t m_MaxFalloff = 0x600;
      constexpr std::ptrdiff_t m_flFadeInDuration = 0x604;
      constexpr std::ptrdiff_t m_flFadeOutDuration = 0x608;
      constexpr std::ptrdiff_t m_flMaxWeight = 0x60c;
      constexpr std::ptrdiff_t m_flCurWeight = 0x610;
      constexpr std::ptrdiff_t m_netlookupFilename = 0x614;
      constexpr std::ptrdiff_t m_bEnabled = 0x814;
      constexpr std::ptrdiff_t m_bMaster = 0x815;
      constexpr std::ptrdiff_t m_bClientSide = 0x816;
      constexpr std::ptrdiff_t m_bExclusive = 0x817;
      constexpr std::ptrdiff_t m_bEnabledOnClient = 0x818;
      constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x81c;
      constexpr std::ptrdiff_t m_bFadingIn = 0x820;
      constexpr std::ptrdiff_t m_flFadeStartWeight = 0x824;
      constexpr std::ptrdiff_t m_flFadeStartTime = 0x828;
      constexpr std::ptrdiff_t m_flFadeDuration = 0x82c;
    }
    namespace C_ColorCorrectionVolume {
      constexpr std::ptrdiff_t m_LastEnterWeight = 0xa70;
      constexpr std::ptrdiff_t m_LastEnterTime = 0xa74;
      constexpr std::ptrdiff_t m_LastExitWeight = 0xa78;
      constexpr std::ptrdiff_t m_LastExitTime = 0xa7c;
      constexpr std::ptrdiff_t m_bEnabled = 0xa80;
      constexpr std::ptrdiff_t m_MaxWeight = 0xa84;
      constexpr std::ptrdiff_t m_FadeDuration = 0xa88;
      constexpr std::ptrdiff_t m_Weight = 0xa8c;
      constexpr std::ptrdiff_t m_lookupFilename = 0xa90;
    }
    namespace C_CommandContext {
      constexpr std::ptrdiff_t needsprocessing = 0x0;
      constexpr std::ptrdiff_t command_number = 0xb0;
    }
    namespace C_ConditionalCollidable {
    }
    namespace C_DynamicLight {
      constexpr std::ptrdiff_t m_Flags = 0x9a0;
      constexpr std::ptrdiff_t m_LightStyle = 0x9a1;
      constexpr std::ptrdiff_t m_Radius = 0x9a4;
      constexpr std::ptrdiff_t m_Exponent = 0x9a8;
      constexpr std::ptrdiff_t m_InnerAngle = 0x9ac;
      constexpr std::ptrdiff_t m_OuterAngle = 0x9b0;
      constexpr std::ptrdiff_t m_SpotRadius = 0x9b4;
    }
    namespace C_DynamicProp {
      constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xe10;
      constexpr std::ptrdiff_t m_bUseAnimGraph = 0xe11;
      constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xe18;
      constexpr std::ptrdiff_t m_pOutputAnimOver = 0xe30;
      constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xe48;
      constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xe60;
      constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xe78;
      constexpr std::ptrdiff_t m_iszIdleAnim = 0xe90;
      constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xe98;
      constexpr std::ptrdiff_t m_bRandomizeCycle = 0xe9c;
      constexpr std::ptrdiff_t m_bStartDisabled = 0xe9d;
      constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xe9e;
      constexpr std::ptrdiff_t m_bForceNpcExclude = 0xe9f;
      constexpr std::ptrdiff_t m_bCreateNonSolid = 0xea0;
      constexpr std::ptrdiff_t m_bIsOverrideProp = 0xea1;
      constexpr std::ptrdiff_t m_iInitialGlowState = 0xea4;
      constexpr std::ptrdiff_t m_nGlowRange = 0xea8;
      constexpr std::ptrdiff_t m_nGlowRangeMin = 0xeac;
      constexpr std::ptrdiff_t m_glowColor = 0xeb0;
      constexpr std::ptrdiff_t m_nGlowTeam = 0xeb4;
      constexpr std::ptrdiff_t m_iCachedFrameCount = 0xeb8;
      constexpr std::ptrdiff_t m_vecCachedRenderMins = 0xebc;
      constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0xec8;
    }
    namespace C_DynamicPropAlias_cable_dynamic {
    }
    namespace C_DynamicPropAlias_dynamic_prop {
    }
    namespace C_DynamicPropAlias_prop_dynamic_override {
    }
    namespace C_EconEntity {
      constexpr std::ptrdiff_t m_AttributeManager = 0xe68;
      constexpr std::ptrdiff_t m_bClientside = 0xfc0;
      constexpr std::ptrdiff_t m_nDisableMode = 0xfc4;
      constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0xfc8;
      constexpr std::ptrdiff_t m_bForceDestroyAttachedParticlesImmediately = 0xfc9;
      constexpr std::ptrdiff_t m_vecAttachedParticles = 0xfd0;
      constexpr std::ptrdiff_t m_hViewmodelAttachment = 0xfe8;
      constexpr std::ptrdiff_t m_iOldTeam = 0xfec;
      constexpr std::ptrdiff_t m_bAttachmentDirty = 0xff0;
      constexpr std::ptrdiff_t m_iOldStyle = 0xff1;
      constexpr std::ptrdiff_t m_hOldProvidee = 0xff4;
      constexpr std::ptrdiff_t m_vecAttachedModels = 0xff8;
    }
    namespace C_EconEntity__AttachedModelData_t {
      constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0;
    }
    namespace C_EconEntity__AttachedParticleInfo_t {
      constexpr std::ptrdiff_t m_nAttachedParticleIndex = 0x0;
      constexpr std::ptrdiff_t m_customType = 0x4;
      constexpr std::ptrdiff_t m_bShouldDestroyImmediately = 0x8;
    }
    namespace C_EconItemAttribute {
      constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30;
      constexpr std::ptrdiff_t m_flValue = 0x34;
    }
    namespace C_EconItemView {
      constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x8;
      constexpr std::ptrdiff_t m_iEntityQuality = 0xc;
      constexpr std::ptrdiff_t m_iEntityLevel = 0x10;
      constexpr std::ptrdiff_t m_iItemID = 0x18;
      constexpr std::ptrdiff_t m_iAccountID = 0x20;
      constexpr std::ptrdiff_t m_iInventoryPosition = 0x24;
      constexpr std::ptrdiff_t m_bInitialized = 0x30;
      constexpr std::ptrdiff_t m_nOverrideStyle = 0x31;
      constexpr std::ptrdiff_t m_bIsStoreItem = 0x32;
      constexpr std::ptrdiff_t m_bIsTradeItem = 0x33;
      constexpr std::ptrdiff_t m_bHasComputedAttachedParticles = 0x34;
      constexpr std::ptrdiff_t m_bHasAttachedParticles = 0x35;
      constexpr std::ptrdiff_t m_iEntityQuantity = 0x38;
      constexpr std::ptrdiff_t m_unClientFlags = 0x3c;
      constexpr std::ptrdiff_t m_unOverrideOrigin = 0x40;
      constexpr std::ptrdiff_t m_AttributeList = 0x58;
    }
    namespace C_EconWearable {
    }
    namespace C_EntityDissolve {
      constexpr std::ptrdiff_t m_flStartTime = 0x9a8;
      constexpr std::ptrdiff_t m_flFadeInStart = 0x9ac;
      constexpr std::ptrdiff_t m_flFadeInLength = 0x9b0;
      constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x9b4;
      constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x9b8;
      constexpr std::ptrdiff_t m_flFadeOutStart = 0x9bc;
      constexpr std::ptrdiff_t m_flFadeOutLength = 0x9c0;
      constexpr std::ptrdiff_t m_flNextSparkTime = 0x9c4;
      constexpr std::ptrdiff_t m_nDissolveType = 0x9c8;
      constexpr std::ptrdiff_t m_vDissolverOrigin = 0x9cc;
      constexpr std::ptrdiff_t m_nMagnitude = 0x9d8;
      constexpr std::ptrdiff_t m_bCoreExplode = 0x9dc;
      constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0x9dd;
    }
    namespace C_EntityFlame {
      constexpr std::ptrdiff_t m_hEntAttached = 0x5f0;
      constexpr std::ptrdiff_t m_hOldAttached = 0x618;
      constexpr std::ptrdiff_t m_bCheapEffect = 0x61c;
    }
    namespace C_EnvCombinedLightProbeVolume {
      constexpr std::ptrdiff_t m_Entity_Color = 0x1668;
      constexpr std::ptrdiff_t m_Entity_flBrightness = 0x166c;
      constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1670;
      constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1678;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1680;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1688;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1690;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1698;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x16a0;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x16a8;
      constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x16b0;
      constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x16b8;
      constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x16c0;
      constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x16c8;
      constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x16d4;
      constexpr std::ptrdiff_t m_Entity_bMoveable = 0x16e0;
      constexpr std::ptrdiff_t m_Entity_nHandshake = 0x16e4;
      constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x16e8;
      constexpr std::ptrdiff_t m_Entity_nPriority = 0x16ec;
      constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x16f0;
      constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x16f4;
      constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x16f8;
      constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1704;
      constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1708;
      constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x170c;
      constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1710;
      constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1714;
      constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1718;
      constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1731;
    }
    namespace C_EnvCubemap {
      constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x670;
      constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x678;
      constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x67c;
      constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x680;
      constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x68c;
      constexpr std::ptrdiff_t m_Entity_bMoveable = 0x698;
      constexpr std::ptrdiff_t m_Entity_nHandshake = 0x69c;
      constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x6a0;
      constexpr std::ptrdiff_t m_Entity_nPriority = 0x6a4;
      constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x6a8;
      constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x6ac;
      constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x6b8;
      constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x6bc;
      constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x6bd;
      constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x6be;
      constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x6bf;
      constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x6c0;
      constexpr std::ptrdiff_t m_Entity_bEnabled = 0x6d0;
    }
    namespace C_EnvCubemapBox {
    }
    namespace C_EnvCubemapFog {
      constexpr std::ptrdiff_t m_flEndDistance = 0x5f0;
      constexpr std::ptrdiff_t m_flStartDistance = 0x5f4;
      constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x5f8;
      constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x5fc;
      constexpr std::ptrdiff_t m_flFogHeightWidth = 0x600;
      constexpr std::ptrdiff_t m_flFogHeightEnd = 0x604;
      constexpr std::ptrdiff_t m_flFogHeightStart = 0x608;
      constexpr std::ptrdiff_t m_flFogHeightExponent = 0x60c;
      constexpr std::ptrdiff_t m_flLODBias = 0x610;
      constexpr std::ptrdiff_t m_bActive = 0x614;
      constexpr std::ptrdiff_t m_bStartDisabled = 0x615;
      constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x618;
      constexpr std::ptrdiff_t m_nCubemapSourceType = 0x61c;
      constexpr std::ptrdiff_t m_hSkyMaterial = 0x620;
      constexpr std::ptrdiff_t m_iszSkyEntity = 0x628;
      constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x630;
      constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x638;
      constexpr std::ptrdiff_t m_bFirstTime = 0x639;
    }
    namespace C_EnvDecal {
      constexpr std::ptrdiff_t m_hDecalMaterial = 0x9a0;
      constexpr std::ptrdiff_t m_flWidth = 0x9a8;
      constexpr std::ptrdiff_t m_flHeight = 0x9ac;
      constexpr std::ptrdiff_t m_flDepth = 0x9b0;
      constexpr std::ptrdiff_t m_nRenderOrder = 0x9b4;
      constexpr std::ptrdiff_t m_bProjectOnWorld = 0x9b8;
      constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x9b9;
      constexpr std::ptrdiff_t m_bProjectOnWater = 0x9ba;
      constexpr std::ptrdiff_t m_flDepthSortBias = 0x9bc;
    }
    namespace C_EnvDetailController {
      constexpr std::ptrdiff_t m_flFadeStartDist = 0x5f0;
      constexpr std::ptrdiff_t m_flFadeEndDist = 0x5f4;
    }
    namespace C_EnvLightProbeVolume {
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x15e8;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x15f0;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x15f8;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1600;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1608;
      constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1610;
      constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1618;
      constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1620;
      constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1628;
      constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1630;
      constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x163c;
      constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1648;
      constexpr std::ptrdiff_t m_Entity_nHandshake = 0x164c;
      constexpr std::ptrdiff_t m_Entity_nPriority = 0x1650;
      constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1654;
      constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1658;
      constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x165c;
      constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1660;
      constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1664;
      constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1668;
      constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x166c;
      constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1679;
    }
    namespace C_EnvParticleGlow {
      constexpr std::ptrdiff_t m_flAlphaScale = 0xf50;
      constexpr std::ptrdiff_t m_flRadiusScale = 0xf54;
      constexpr std::ptrdiff_t m_flSelfIllumScale = 0xf58;
      constexpr std::ptrdiff_t m_ColorTint = 0xf5c;
      constexpr std::ptrdiff_t m_hTextureOverride = 0xf60;
    }
    namespace C_EnvSky {
      constexpr std::ptrdiff_t m_hSkyMaterial = 0x9a0;
      constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x9a8;
      constexpr std::ptrdiff_t m_bStartDisabled = 0x9b0;
      constexpr std::ptrdiff_t m_vTintColor = 0x9b1;
      constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x9b5;
      constexpr std::ptrdiff_t m_flBrightnessScale = 0x9bc;
      constexpr std::ptrdiff_t m_nFogType = 0x9c0;
      constexpr std::ptrdiff_t m_flFogMinStart = 0x9c4;
      constexpr std::ptrdiff_t m_flFogMinEnd = 0x9c8;
      constexpr std::ptrdiff_t m_flFogMaxStart = 0x9cc;
      constexpr std::ptrdiff_t m_flFogMaxEnd = 0x9d0;
      constexpr std::ptrdiff_t m_bEnabled = 0x9d4;
    }
    namespace C_EnvVolumetricFogController {
      constexpr std::ptrdiff_t m_flScattering = 0x5f0;
      constexpr std::ptrdiff_t m_TintColor = 0x5f4;
      constexpr std::ptrdiff_t m_flAnisotropy = 0x5f8;
      constexpr std::ptrdiff_t m_flFadeSpeed = 0x5fc;
      constexpr std::ptrdiff_t m_flDrawDistance = 0x600;
      constexpr std::ptrdiff_t m_flFadeInStart = 0x604;
      constexpr std::ptrdiff_t m_flFadeInEnd = 0x608;
      constexpr std::ptrdiff_t m_flIndirectStrength = 0x60c;
      constexpr std::ptrdiff_t m_nVolumeDepth = 0x610;
      constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x614;
      constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x618;
      constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x61c;
      constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x620;
      constexpr std::ptrdiff_t m_vBoxMins = 0x624;
      constexpr std::ptrdiff_t m_vBoxMaxs = 0x630;
      constexpr std::ptrdiff_t m_bActive = 0x63c;
      constexpr std::ptrdiff_t m_flStartAnisoTime = 0x640;
      constexpr std::ptrdiff_t m_flStartScatterTime = 0x644;
      constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x648;
      constexpr std::ptrdiff_t m_flStartAnisotropy = 0x64c;
      constexpr std::ptrdiff_t m_flStartScattering = 0x650;
      constexpr std::ptrdiff_t m_flStartDrawDistance = 0x654;
      constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x658;
      constexpr std::ptrdiff_t m_flDefaultScattering = 0x65c;
      constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x660;
      constexpr std::ptrdiff_t m_bStartDisabled = 0x664;
      constexpr std::ptrdiff_t m_bEnableIndirect = 0x665;
      constexpr std::ptrdiff_t m_bIsMaster = 0x666;
      constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x668;
      constexpr std::ptrdiff_t m_nForceRefreshCount = 0x670;
      constexpr std::ptrdiff_t m_fNoiseSpeed = 0x674;
      constexpr std::ptrdiff_t m_fNoiseStrength = 0x678;
      constexpr std::ptrdiff_t m_vNoiseScale = 0x67c;
      constexpr std::ptrdiff_t m_fWindSpeed = 0x688;
      constexpr std::ptrdiff_t m_vWindDirection = 0x68c;
      constexpr std::ptrdiff_t m_bFirstTime = 0x698;
    }
    namespace C_EnvVolumetricFogVolume {
      constexpr std::ptrdiff_t m_bActive = 0x5f0;
      constexpr std::ptrdiff_t m_vBoxMins = 0x5f4;
      constexpr std::ptrdiff_t m_vBoxMaxs = 0x600;
      constexpr std::ptrdiff_t m_bStartDisabled = 0x60c;
      constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x60d;
      constexpr std::ptrdiff_t m_flStrength = 0x610;
      constexpr std::ptrdiff_t m_nFalloffShape = 0x614;
      constexpr std::ptrdiff_t m_flFalloffExponent = 0x618;
      constexpr std::ptrdiff_t m_flHeightFogDepth = 0x61c;
      constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x620;
      constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x624;
      constexpr std::ptrdiff_t m_fSunLightStrength = 0x628;
      constexpr std::ptrdiff_t m_fNoiseStrength = 0x62c;
      constexpr std::ptrdiff_t m_TintColor = 0x630;
      constexpr std::ptrdiff_t m_bOverrideTintColor = 0x634;
      constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x635;
      constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x636;
      constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x637;
    }
    namespace C_EnvWind {
      constexpr std::ptrdiff_t m_EnvWindShared = 0x5f0;
    }
    namespace C_EnvWindClientside {
      constexpr std::ptrdiff_t m_EnvWindShared = 0x5f0;
    }
    namespace C_EnvWindController {
      constexpr std::ptrdiff_t m_EnvWindShared = 0x5f0;
      constexpr std::ptrdiff_t m_fDirectionVariation = 0x6e8;
      constexpr std::ptrdiff_t m_fSpeedVariation = 0x6ec;
      constexpr std::ptrdiff_t m_fTurbulence = 0x6f0;
      constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x6f4;
      constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x6f8;
      constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x6fc;
      constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x700;
      constexpr std::ptrdiff_t m_nClipmapLevels = 0x704;
      constexpr std::ptrdiff_t m_bIsMaster = 0x708;
      constexpr std::ptrdiff_t m_bFirstTime = 0x709;
    }
    namespace C_EnvWindShared {
      constexpr std::ptrdiff_t m_flStartTime = 0x8;
      constexpr std::ptrdiff_t m_iWindSeed = 0xc;
      constexpr std::ptrdiff_t m_iMinWind = 0x10;
      constexpr std::ptrdiff_t m_iMaxWind = 0x12;
      constexpr std::ptrdiff_t m_windRadius = 0x14;
      constexpr std::ptrdiff_t m_iMinGust = 0x18;
      constexpr std::ptrdiff_t m_iMaxGust = 0x1a;
      constexpr std::ptrdiff_t m_flMinGustDelay = 0x1c;
      constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20;
      constexpr std::ptrdiff_t m_flGustDuration = 0x24;
      constexpr std::ptrdiff_t m_iGustDirChange = 0x28;
      constexpr std::ptrdiff_t m_iInitialWindDir = 0x2a;
      constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x2c;
      constexpr std::ptrdiff_t m_location = 0x30;
      constexpr std::ptrdiff_t m_hEntOwner = 0x3c;
    }
    namespace C_EnvWindVolume {
      constexpr std::ptrdiff_t m_bActive = 0x5f0;
      constexpr std::ptrdiff_t m_vBoxMins = 0x5f4;
      constexpr std::ptrdiff_t m_vBoxMaxs = 0x600;
      constexpr std::ptrdiff_t m_bStartDisabled = 0x60c;
      constexpr std::ptrdiff_t m_nShape = 0x610;
      constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x614;
      constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x618;
      constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x61c;
      constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x620;
    }
    namespace C_Fish {
      constexpr std::ptrdiff_t m_pos = 0xca0;
      constexpr std::ptrdiff_t m_vel = 0xcac;
      constexpr std::ptrdiff_t m_angles = 0xcb8;
      constexpr std::ptrdiff_t m_localLifeState = 0xcc4;
      constexpr std::ptrdiff_t m_deathDepth = 0xcc8;
      constexpr std::ptrdiff_t m_deathAngle = 0xccc;
      constexpr std::ptrdiff_t m_buoyancy = 0xcd0;
      constexpr std::ptrdiff_t m_wiggleTimer = 0xcd8;
      constexpr std::ptrdiff_t m_wigglePhase = 0xcf0;
      constexpr std::ptrdiff_t m_wiggleRate = 0xcf4;
      constexpr std::ptrdiff_t m_actualPos = 0xcf8;
      constexpr std::ptrdiff_t m_actualAngles = 0xd04;
      constexpr std::ptrdiff_t m_poolOrigin = 0xd10;
      constexpr std::ptrdiff_t m_waterLevel = 0xd1c;
      constexpr std::ptrdiff_t m_gotUpdate = 0xd20;
      constexpr std::ptrdiff_t m_x = 0xd24;
      constexpr std::ptrdiff_t m_y = 0xd28;
      constexpr std::ptrdiff_t m_z = 0xd2c;
      constexpr std::ptrdiff_t m_angle = 0xd30;
      constexpr std::ptrdiff_t m_errorHistory = 0xd34;
      constexpr std::ptrdiff_t m_errorHistoryIndex = 0xd84;
      constexpr std::ptrdiff_t m_errorHistoryCount = 0xd88;
      constexpr std::ptrdiff_t m_averageError = 0xd8c;
    }
    namespace C_FogController {
      constexpr std::ptrdiff_t m_fog = 0x5f0;
      constexpr std::ptrdiff_t m_bUseAngles = 0x658;
      constexpr std::ptrdiff_t m_iChangedVariables = 0x65c;
    }
    namespace C_FuncBrush {
    }
    namespace C_FuncElectrifiedVolume {
      constexpr std::ptrdiff_t m_nAmbientEffect = 0x9a0;
      constexpr std::ptrdiff_t m_EffectName = 0x9a8;
      constexpr std::ptrdiff_t m_bState = 0x9b0;
    }
    namespace C_FuncLadder {
      constexpr std::ptrdiff_t m_vecLadderDir = 0x9a0;
      constexpr std::ptrdiff_t m_Dismounts = 0x9b0;
      constexpr std::ptrdiff_t m_vecLocalTop = 0x9c8;
      constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x9d4;
      constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x9e0;
      constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x9ec;
      constexpr std::ptrdiff_t m_bDisabled = 0x9f0;
      constexpr std::ptrdiff_t m_bFakeLadder = 0x9f1;
      constexpr std::ptrdiff_t m_bHasSlack = 0x9f2;
    }
    namespace C_FuncMonitor {
      constexpr std::ptrdiff_t m_targetCamera = 0x9a0;
      constexpr std::ptrdiff_t m_nResolutionEnum = 0x9a8;
      constexpr std::ptrdiff_t m_bRenderShadows = 0x9ac;
      constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x9ad;
      constexpr std::ptrdiff_t m_brushModelName = 0x9b0;
      constexpr std::ptrdiff_t m_hTargetCamera = 0x9b8;
      constexpr std::ptrdiff_t m_bEnabled = 0x9bc;
      constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x9bd;
    }
    namespace C_FuncMoveLinear {
    }
    namespace C_FuncMover {
    }
    namespace C_FuncRotating {
    }
    namespace C_FuncTrackTrain {
      constexpr std::ptrdiff_t m_nLongAxis = 0x9a0;
      constexpr std::ptrdiff_t m_flRadius = 0x9a4;
      constexpr std::ptrdiff_t m_flLineLength = 0x9a8;
    }
    namespace C_GameRules {
      constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
      constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30;
      constexpr std::ptrdiff_t m_nPauseStartTick = 0x34;
      constexpr std::ptrdiff_t m_bGamePaused = 0x38;
    }
    namespace C_GameRulesProxy {
    }
    namespace C_GlobalLight {
      constexpr std::ptrdiff_t m_WindClothForceHandle = 0xab0;
    }
    namespace C_GradientFog {
      constexpr std::ptrdiff_t m_hGradientFogTexture = 0x5f0;
      constexpr std::ptrdiff_t m_flFogStartDistance = 0x5f8;
      constexpr std::ptrdiff_t m_flFogEndDistance = 0x5fc;
      constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x600;
      constexpr std::ptrdiff_t m_flFogStartHeight = 0x604;
      constexpr std::ptrdiff_t m_flFogEndHeight = 0x608;
      constexpr std::ptrdiff_t m_flFarZ = 0x60c;
      constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x610;
      constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x614;
      constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x618;
      constexpr std::ptrdiff_t m_fogColor = 0x61c;
      constexpr std::ptrdiff_t m_flFogStrength = 0x620;
      constexpr std::ptrdiff_t m_flFadeTime = 0x624;
      constexpr std::ptrdiff_t m_bStartDisabled = 0x628;
      constexpr std::ptrdiff_t m_bIsEnabled = 0x629;
      constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x62a;
    }
    namespace C_HandleTest {
      constexpr std::ptrdiff_t m_Handle = 0x5f0;
      constexpr std::ptrdiff_t m_bSendHandle = 0x5f4;
    }
    namespace C_HeroPreview {
      constexpr std::ptrdiff_t m_CCitadelHeroComponent = 0x5f0;
    }
    namespace C_InWorldKeyBindPanel {
      constexpr std::ptrdiff_t m_hPlayer = 0xbf0;
    }
    namespace C_InfoLadderDismount {
    }
    namespace C_InfoPortalLink {
    }
    namespace C_InfoVisibilityBox {
      constexpr std::ptrdiff_t m_nMode = 0x5f4;
      constexpr std::ptrdiff_t m_vBoxSize = 0x5f8;
      constexpr std::ptrdiff_t m_bEnabled = 0x604;
    }
    namespace C_ItemAmmo {
    }
    namespace C_ItemCrate {
      constexpr std::ptrdiff_t m_eLootType = 0xe20;
    }
    namespace C_ItemFlare {
    }
    namespace C_ItemParachute {
    }
    namespace C_ItemWeaponParts {
      constexpr std::ptrdiff_t m_hTouchedPlayeres = 0xcc0;
    }
    namespace C_LightCapsuleEntity {
    }
    namespace C_LightDirectionalEntity {
    }
    namespace C_LightEntity {
      constexpr std::ptrdiff_t m_CLightComponent = 0x9a0;
    }
    namespace C_LightEnvironmentEntity {
    }
    namespace C_LightOrthoEntity {
    }
    namespace C_LightSpotEntity {
    }
    namespace C_LocalTempEntity {
      constexpr std::ptrdiff_t flags = 0xca0;
      constexpr std::ptrdiff_t die = 0xca4;
      constexpr std::ptrdiff_t m_flFrameMax = 0xca8;
      constexpr std::ptrdiff_t x = 0xcac;
      constexpr std::ptrdiff_t y = 0xcb0;
      constexpr std::ptrdiff_t fadeSpeed = 0xcb4;
      constexpr std::ptrdiff_t bounceFactor = 0xcb8;
      constexpr std::ptrdiff_t hitSound = 0xcbc;
      constexpr std::ptrdiff_t priority = 0xcc0;
      constexpr std::ptrdiff_t tentOffset = 0xcc4;
      constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0xcd0;
      constexpr std::ptrdiff_t tempent_renderamt = 0xcdc;
      constexpr std::ptrdiff_t m_vecNormal = 0xce0;
      constexpr std::ptrdiff_t m_flSpriteScale = 0xcec;
      constexpr std::ptrdiff_t m_nFlickerFrame = 0xcf0;
      constexpr std::ptrdiff_t m_flFrameRate = 0xcf4;
      constexpr std::ptrdiff_t m_flFrame = 0xcf8;
      constexpr std::ptrdiff_t m_pszImpactEffect = 0xd00;
      constexpr std::ptrdiff_t m_pszParticleEffect = 0xd08;
      constexpr std::ptrdiff_t m_bParticleCollision = 0xd10;
      constexpr std::ptrdiff_t m_iLastCollisionFrame = 0xd14;
      constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0xd18;
      constexpr std::ptrdiff_t m_vecTempEntVelocity = 0xd24;
      constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0xd30;
      constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0xd3c;
    }
    namespace C_MiniMapMarker {
      constexpr std::ptrdiff_t m_eType = 0x5f0;
    }
    namespace C_ModelPointEntity {
    }
    namespace C_MultiplayRules {
    }
    namespace C_NPC_BarrackBoss {
      constexpr std::ptrdiff_t m_CCitadelPlayerClipComponent = 0x1bc8;
      constexpr std::ptrdiff_t m_iLane = 0x1bf4;
      constexpr std::ptrdiff_t m_flFadeOutStart = 0x1bf8;
      constexpr std::ptrdiff_t m_flFadeOutEnd = 0x1bfc;
    }
    namespace C_NPC_BaseDefenseSentry {
      constexpr std::ptrdiff_t m_vecUnitStatusOffset = 0xcb0;
    }
    namespace C_NPC_Boss_Tier2 {
      constexpr std::ptrdiff_t m_iLane = 0x1be4;
      constexpr std::ptrdiff_t m_flFadeOutStart = 0x1be8;
      constexpr std::ptrdiff_t m_flFadeOutEnd = 0x1bec;
      constexpr std::ptrdiff_t m_flLastWeakpointHitTime = 0x1bf0;
      constexpr std::ptrdiff_t m_hTargetedEnemy = 0x1bf4;
      constexpr std::ptrdiff_t m_vecElectricBeamLookTarget = 0x1bf8;
      constexpr std::ptrdiff_t m_nElectricBeamCasts = 0x1c88;
    }
    namespace C_NPC_Boss_Tier2_Sidelanes {
    }
    namespace C_NPC_Boss_Tier3 {
      constexpr std::ptrdiff_t m_iLane = 0x1bc8;
      constexpr std::ptrdiff_t m_vecElectricBeamTargetEnd = 0x1bcc;
      constexpr std::ptrdiff_t m_eAliveState = 0x1bd8;
      constexpr std::ptrdiff_t m_ePhase = 0x1bdc;
      constexpr std::ptrdiff_t m_vShrineAttackTargetPos = 0x1be0;
    }
    namespace C_NPC_CarpetBombDrone {
    }
    namespace C_NPC_Escort {
    }
    namespace C_NPC_FieldSentry {
      constexpr std::ptrdiff_t m_flAttackRange = 0xcb4;
      constexpr std::ptrdiff_t m_flAimPitch = 0xcb8;
    }
    namespace C_NPC_FlyingDrone {
    }
    namespace C_NPC_HornetDrone {
    }
    namespace C_NPC_MidBoss {
    }
    namespace C_NPC_MortarSentry {
    }
    namespace C_NPC_NanoRollermine {
      constexpr std::ptrdiff_t m_flForwardSpeed = 0x1bf0;
      constexpr std::ptrdiff_t m_hOwnerPawn = 0x1bf4;
    }
    namespace C_NPC_Neutral_Bug {
    }
    namespace C_NPC_Neutral_Flying_Pigeon {
    }
    namespace C_NPC_Neutral_Flying_Weakpoint {
    }
    namespace C_NPC_Neutral_Hideout_Cat {
    }
    namespace C_NPC_Neutral_Hideout_Rabbit {
    }
    namespace C_NPC_Neutral_SinnersSacrifice {
      constexpr std::ptrdiff_t m_iVaultState = 0x1c08;
    }
    namespace C_NPC_Neutral_SinnersSacrifice_Hideout {
    }
    namespace C_NPC_Neutral_Weakpoint {
    }
    namespace C_NPC_PestilenceDrone {
    }
    namespace C_NPC_ShieldedSentry {
      constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0xcb0;
      constexpr std::ptrdiff_t m_flAttackRange = 0xe9c;
      constexpr std::ptrdiff_t m_flAimPitch = 0xea0;
      constexpr std::ptrdiff_t m_bHasRecentlyAttacked = 0xea4;
      constexpr std::ptrdiff_t m_flLifeTime = 0xea8;
      constexpr std::ptrdiff_t m_flSpawnTime = 0xeac;
    }
    namespace C_NPC_SimpleAnimatingAI {
      constexpr std::ptrdiff_t m_hEnemy = 0xca0;
      constexpr std::ptrdiff_t m_hAbilityOwner = 0xca4;
    }
    namespace C_NPC_SurveillanceDrone {
    }
    namespace C_NPC_TeslaCoil {
      constexpr std::ptrdiff_t m_CCitadelAbilityComponent = 0xcb0;
    }
    namespace C_NPC_Trooper {
      constexpr std::ptrdiff_t m_iLane = 0x1bc8;
      constexpr std::ptrdiff_t m_hTargetedEnemy = 0x1bcc;
      constexpr std::ptrdiff_t m_flHealingChargeParticlePct = 0x1bd0;
    }
    namespace C_NPC_TrooperBoss {
      constexpr std::ptrdiff_t m_CCitadelPlayerClipComponent = 0x1bc8;
      constexpr std::ptrdiff_t m_iLane = 0x1bf4;
      constexpr std::ptrdiff_t m_flFadeOutStart = 0x1bf8;
      constexpr std::ptrdiff_t m_flFadeOutEnd = 0x1bfc;
    }
    namespace C_NPC_TrooperNeutral {
      constexpr std::ptrdiff_t m_bPlayingIdle = 0x1bc8;
      constexpr std::ptrdiff_t m_bShieldActive = 0x1bc9;
    }
    namespace C_NPC_TrooperNeutralNodeMover {
    }
    namespace C_NetTestBaseCombatCharacter {
    }
    namespace C_OmniLight {
      constexpr std::ptrdiff_t m_flInnerAngle = 0xcb0;
      constexpr std::ptrdiff_t m_flOuterAngle = 0xcb4;
      constexpr std::ptrdiff_t m_bShowLight = 0xcb8;
    }
    namespace C_ParticleSystem {
      constexpr std::ptrdiff_t m_szSnapshotFileName = 0x9a0;
      constexpr std::ptrdiff_t m_bActive = 0xba0;
      constexpr std::ptrdiff_t m_bFrozen = 0xba1;
      constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xba4;
      constexpr std::ptrdiff_t m_nStopType = 0xba8;
      constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xbac;
      constexpr std::ptrdiff_t m_iEffectIndex = 0xbb0;
      constexpr std::ptrdiff_t m_flStartTime = 0xbb8;
      constexpr std::ptrdiff_t m_flPreSimTime = 0xbbc;
      constexpr std::ptrdiff_t m_vServerControlPoints = 0xbc0;
      constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xbf0;
      constexpr std::ptrdiff_t m_hControlPointEnts = 0xbf4;
      constexpr std::ptrdiff_t m_bNoSave = 0xcf4;
      constexpr std::ptrdiff_t m_bNoFreeze = 0xcf5;
      constexpr std::ptrdiff_t m_bNoRamp = 0xcf6;
      constexpr std::ptrdiff_t m_bStartActive = 0xcf7;
      constexpr std::ptrdiff_t m_iszEffectName = 0xcf8;
      constexpr std::ptrdiff_t m_iszControlPointNames = 0xd00;
      constexpr std::ptrdiff_t m_nDataCP = 0xf00;
      constexpr std::ptrdiff_t m_vecDataCPValue = 0xf04;
      constexpr std::ptrdiff_t m_nTintCP = 0xf10;
      constexpr std::ptrdiff_t m_clrTint = 0xf14;
      constexpr std::ptrdiff_t m_bOldActive = 0xf38;
      constexpr std::ptrdiff_t m_bOldFrozen = 0xf39;
    }
    namespace C_PathParticleRope {
      constexpr std::ptrdiff_t m_bStartActive = 0x5f8;
      constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x5fc;
      constexpr std::ptrdiff_t m_iszEffectName = 0x600;
      constexpr std::ptrdiff_t m_PathNodes_Name = 0x608;
      constexpr std::ptrdiff_t m_flParticleSpacing = 0x620;
      constexpr std::ptrdiff_t m_flSlack = 0x624;
      constexpr std::ptrdiff_t m_flRadius = 0x628;
      constexpr std::ptrdiff_t m_ColorTint = 0x62c;
      constexpr std::ptrdiff_t m_nEffectState = 0x630;
      constexpr std::ptrdiff_t m_iEffectIndex = 0x638;
      constexpr std::ptrdiff_t m_PathNodes_Position = 0x640;
      constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x658;
      constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x670;
      constexpr std::ptrdiff_t m_PathNodes_Color = 0x688;
      constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x6a0;
      constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x6b8;
    }
    namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
    }
    namespace C_PhysBox {
    }
    namespace C_PhysMagnet {
      constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0xca0;
      constexpr std::ptrdiff_t m_aAttachedObjects = 0xcb8;
    }
    namespace C_PhysPropClientside {
      constexpr std::ptrdiff_t m_flTouchDelta = 0xe10;
      constexpr std::ptrdiff_t m_fDeathTime = 0xe14;
      constexpr std::ptrdiff_t m_vecDamagePosition = 0xe18;
      constexpr std::ptrdiff_t m_vecDamageDirection = 0xe24;
      constexpr std::ptrdiff_t m_nDamageType = 0xe30;
    }
    namespace C_PhysicsProp {
      constexpr std::ptrdiff_t m_bAwake = 0xe10;
    }
    namespace C_PlayerSprayDecal {
      constexpr std::ptrdiff_t m_nUniqueID = 0x9a0;
      constexpr std::ptrdiff_t m_unAccountID = 0x9a4;
      constexpr std::ptrdiff_t m_unTraceID = 0x9a8;
      constexpr std::ptrdiff_t m_vecEndPos = 0x9ac;
      constexpr std::ptrdiff_t m_vecStart = 0x9b8;
      constexpr std::ptrdiff_t m_vecLeft = 0x9c4;
      constexpr std::ptrdiff_t m_vecNormal = 0x9d0;
      constexpr std::ptrdiff_t m_nPlayerSlot = 0x9dc;
      constexpr std::ptrdiff_t m_nEntity = 0x9e0;
      constexpr std::ptrdiff_t m_nHitbox = 0x9e4;
      constexpr std::ptrdiff_t m_flCreationTime = 0x9e8;
      constexpr std::ptrdiff_t m_nTintID = 0x9ec;
      constexpr std::ptrdiff_t m_nVersion = 0x9f0;
      constexpr std::ptrdiff_t m_sTextureName = 0x9f8;
      constexpr std::ptrdiff_t m_sTextureNameDamaged = 0xa00;
      constexpr std::ptrdiff_t m_sSoundNameDamaged = 0xa08;
      constexpr std::ptrdiff_t m_bDamaged = 0xa10;
      constexpr std::ptrdiff_t m_SprayRenderHelper = 0xa20;
    }
    namespace C_PlayerVisibility {
      constexpr std::ptrdiff_t m_flVisibilityStrength = 0x5f0;
      constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x5f4;
      constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x5f8;
      constexpr std::ptrdiff_t m_flFadeTime = 0x5fc;
      constexpr std::ptrdiff_t m_bStartDisabled = 0x600;
      constexpr std::ptrdiff_t m_bIsEnabled = 0x601;
    }
    namespace C_PointCamera {
      constexpr std::ptrdiff_t m_FOV = 0x5f0;
      constexpr std::ptrdiff_t m_Resolution = 0x5f4;
      constexpr std::ptrdiff_t m_bFogEnable = 0x5f8;
      constexpr std::ptrdiff_t m_FogColor = 0x5f9;
      constexpr std::ptrdiff_t m_flFogStart = 0x600;
      constexpr std::ptrdiff_t m_flFogEnd = 0x604;
      constexpr std::ptrdiff_t m_flFogMaxDensity = 0x608;
      constexpr std::ptrdiff_t m_bActive = 0x60c;
      constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x60d;
      constexpr std::ptrdiff_t m_flAspectRatio = 0x610;
      constexpr std::ptrdiff_t m_bNoSky = 0x614;
      constexpr std::ptrdiff_t m_fBrightness = 0x618;
      constexpr std::ptrdiff_t m_flZFar = 0x61c;
      constexpr std::ptrdiff_t m_flZNear = 0x620;
      constexpr std::ptrdiff_t m_bCanHLTVUse = 0x624;
      constexpr std::ptrdiff_t m_bAlignWithParent = 0x625;
      constexpr std::ptrdiff_t m_bDofEnabled = 0x626;
      constexpr std::ptrdiff_t m_flDofNearBlurry = 0x628;
      constexpr std::ptrdiff_t m_flDofNearCrisp = 0x62c;
      constexpr std::ptrdiff_t m_flDofFarCrisp = 0x630;
      constexpr std::ptrdiff_t m_flDofFarBlurry = 0x634;
      constexpr std::ptrdiff_t m_flDofTiltToGround = 0x638;
      constexpr std::ptrdiff_t m_TargetFOV = 0x63c;
      constexpr std::ptrdiff_t m_DegreesPerSecond = 0x640;
      constexpr std::ptrdiff_t m_bIsOn = 0x644;
      constexpr std::ptrdiff_t m_pNext = 0x648;
    }
    namespace C_PointCameraVFOV {
      constexpr std::ptrdiff_t m_flVerticalFOV = 0x650;
    }
    namespace C_PointClientUIDialog {
      constexpr std::ptrdiff_t m_hActivator = 0x9d0;
      constexpr std::ptrdiff_t m_bStartEnabled = 0x9d4;
    }
    namespace C_PointClientUIHUD {
      constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x9d8;
      constexpr std::ptrdiff_t m_bIgnoreInput = 0xb50;
      constexpr std::ptrdiff_t m_flWidth = 0xb54;
      constexpr std::ptrdiff_t m_flHeight = 0xb58;
      constexpr std::ptrdiff_t m_flDPI = 0xb5c;
      constexpr std::ptrdiff_t m_flInteractDistance = 0xb60;
      constexpr std::ptrdiff_t m_flDepthOffset = 0xb64;
      constexpr std::ptrdiff_t m_unOwnerContext = 0xb68;
      constexpr std::ptrdiff_t m_unHorizontalAlign = 0xb6c;
      constexpr std::ptrdiff_t m_unVerticalAlign = 0xb70;
      constexpr std::ptrdiff_t m_unOrientation = 0xb74;
      constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xb78;
      constexpr std::ptrdiff_t m_vecCSSClasses = 0xb80;
    }
    namespace C_PointClientUIWorldPanel {
      constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0x9d8;
      constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0x9d9;
      constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x9da;
      constexpr std::ptrdiff_t m_anchorDeltaTransform = 0x9e0;
      constexpr std::ptrdiff_t m_pOffScreenIndicator = 0xb70;
      constexpr std::ptrdiff_t m_bIgnoreInput = 0xb98;
      constexpr std::ptrdiff_t m_bLit = 0xb99;
      constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xb9a;
      constexpr std::ptrdiff_t m_flWidth = 0xb9c;
      constexpr std::ptrdiff_t m_flHeight = 0xba0;
      constexpr std::ptrdiff_t m_flDPI = 0xba4;
      constexpr std::ptrdiff_t m_flInteractDistance = 0xba8;
      constexpr std::ptrdiff_t m_flDepthOffset = 0xbac;
      constexpr std::ptrdiff_t m_unOwnerContext = 0xbb0;
      constexpr std::ptrdiff_t m_unHorizontalAlign = 0xbb4;
      constexpr std::ptrdiff_t m_unVerticalAlign = 0xbb8;
      constexpr std::ptrdiff_t m_unOrientation = 0xbbc;
      constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xbc0;
      constexpr std::ptrdiff_t m_vecCSSClasses = 0xbc8;
      constexpr std::ptrdiff_t m_bOpaque = 0xbe0;
      constexpr std::ptrdiff_t m_bNoDepth = 0xbe1;
      constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0xbe2;
      constexpr std::ptrdiff_t m_bRenderBackface = 0xbe3;
      constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xbe4;
      constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xbe5;
      constexpr std::ptrdiff_t m_bGrabbable = 0xbe6;
      constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xbe7;
      constexpr std::ptrdiff_t m_bDisableMipGen = 0xbe8;
      constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xbec;
    }
    namespace C_PointClientUIWorldTextPanel {
      constexpr std::ptrdiff_t m_messageText = 0xbf0;
    }
    namespace C_PointCommentaryNode {
      constexpr std::ptrdiff_t m_bActive = 0xcb8;
      constexpr std::ptrdiff_t m_bWasActive = 0xcb9;
      constexpr std::ptrdiff_t m_flEndTime = 0xcbc;
      constexpr std::ptrdiff_t m_flStartTime = 0xcc0;
      constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xcc4;
      constexpr std::ptrdiff_t m_iszCommentaryFile = 0xcc8;
      constexpr std::ptrdiff_t m_iszTitle = 0xcd0;
      constexpr std::ptrdiff_t m_iszSpeakers = 0xcd8;
      constexpr std::ptrdiff_t m_iNodeNumber = 0xce0;
      constexpr std::ptrdiff_t m_iNodeNumberMax = 0xce4;
      constexpr std::ptrdiff_t m_bListenedTo = 0xce8;
      constexpr std::ptrdiff_t m_sndCommentary = 0xcf0;
      constexpr std::ptrdiff_t m_hViewPosition = 0xcf8;
      constexpr std::ptrdiff_t m_bRestartAfterRestore = 0xcfc;
    }
    namespace C_PointEntity {
    }
    namespace C_PointEntityAlias_info_target_portrait_root {
    }
    namespace C_PointValueRemapper {
      constexpr std::ptrdiff_t m_bDisabled = 0x5f0;
      constexpr std::ptrdiff_t m_bDisabledOld = 0x5f1;
      constexpr std::ptrdiff_t m_bUpdateOnClient = 0x5f2;
      constexpr std::ptrdiff_t m_nInputType = 0x5f4;
      constexpr std::ptrdiff_t m_hRemapLineStart = 0x5f8;
      constexpr std::ptrdiff_t m_hRemapLineEnd = 0x5fc;
      constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x600;
      constexpr std::ptrdiff_t m_flDisengageDistance = 0x604;
      constexpr std::ptrdiff_t m_flEngageDistance = 0x608;
      constexpr std::ptrdiff_t m_bRequiresUseKey = 0x60c;
      constexpr std::ptrdiff_t m_nOutputType = 0x610;
      constexpr std::ptrdiff_t m_hOutputEntities = 0x618;
      constexpr std::ptrdiff_t m_nHapticsType = 0x630;
      constexpr std::ptrdiff_t m_nMomentumType = 0x634;
      constexpr std::ptrdiff_t m_flMomentumModifier = 0x638;
      constexpr std::ptrdiff_t m_flSnapValue = 0x63c;
      constexpr std::ptrdiff_t m_flCurrentMomentum = 0x640;
      constexpr std::ptrdiff_t m_nRatchetType = 0x644;
      constexpr std::ptrdiff_t m_flRatchetOffset = 0x648;
      constexpr std::ptrdiff_t m_flInputOffset = 0x64c;
      constexpr std::ptrdiff_t m_bEngaged = 0x650;
      constexpr std::ptrdiff_t m_bFirstUpdate = 0x651;
      constexpr std::ptrdiff_t m_flPreviousValue = 0x654;
      constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x658;
      constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x65c;
    }
    namespace C_PointWorldText {
      constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0x9a8;
      constexpr std::ptrdiff_t m_nTextWidthPx = 0x9c0;
      constexpr std::ptrdiff_t m_nTextHeightPx = 0x9c4;
      constexpr std::ptrdiff_t m_messageText = 0x9c8;
      constexpr std::ptrdiff_t m_FontName = 0xbc8;
      constexpr std::ptrdiff_t m_BackgroundMaterialName = 0xc08;
      constexpr std::ptrdiff_t m_bEnabled = 0xc48;
      constexpr std::ptrdiff_t m_bFullbright = 0xc49;
      constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xc4c;
      constexpr std::ptrdiff_t m_flFontSize = 0xc50;
      constexpr std::ptrdiff_t m_flDepthOffset = 0xc54;
      constexpr std::ptrdiff_t m_bDrawBackground = 0xc58;
      constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0xc5c;
      constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0xc60;
      constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0xc64;
      constexpr std::ptrdiff_t m_Color = 0xc68;
      constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xc6c;
      constexpr std::ptrdiff_t m_nJustifyVertical = 0xc70;
      constexpr std::ptrdiff_t m_nReorientMode = 0xc74;
    }
    namespace C_PortraitWorldCallbackHandler {
    }
    namespace C_PortraitWorldUnit {
      constexpr std::ptrdiff_t m_bSuppressIntroEffects = 0xee0;
      constexpr std::ptrdiff_t m_bIsAlternateLoadout = 0xee1;
      constexpr std::ptrdiff_t m_bSpawnBackgroundModels = 0xee2;
      constexpr std::ptrdiff_t m_bAnimateCloth = 0xee3;
      constexpr std::ptrdiff_t m_bDeferredPortrait = 0xee4;
      constexpr std::ptrdiff_t m_bShowParticleAssetModifiers = 0xee5;
      constexpr std::ptrdiff_t m_bIgnorePortraitInfo = 0xee6;
      constexpr std::ptrdiff_t m_BodyGroup = 0xee8;
      constexpr std::ptrdiff_t m_flStartingAnimationCycle = 0xef0;
      constexpr std::ptrdiff_t m_flRareLoadoutAnimChance = 0xef4;
      constexpr std::ptrdiff_t m_environment = 0xf08;
      constexpr std::ptrdiff_t m_nStartupBehavior = 0xf0c;
      constexpr std::ptrdiff_t m_cameraName = 0x1080;
      constexpr std::ptrdiff_t m_nPortraitParticle = 0x10b8;
      constexpr std::ptrdiff_t m_nAmbientParticle = 0x10bc;
      constexpr std::ptrdiff_t m_heroID = 0x10c0;
      constexpr std::ptrdiff_t m_strGraphBaseState = 0x10c8;
      constexpr std::ptrdiff_t m_sceneName = 0x10d0;
      constexpr std::ptrdiff_t m_nThinksUntilPresent = 0x10d8;
    }
    namespace C_PortraitWorldUnit_GraphController {
      constexpr std::ptrdiff_t m_BaseState = 0x90;
      constexpr std::ptrdiff_t m_ShopState = 0xa8;
    }
    namespace C_PostProcessingVolume {
      constexpr std::ptrdiff_t m_hPostSettings = 0xa80;
      constexpr std::ptrdiff_t m_flFadeDuration = 0xa88;
      constexpr std::ptrdiff_t m_flMinLogExposure = 0xa8c;
      constexpr std::ptrdiff_t m_flMaxLogExposure = 0xa90;
      constexpr std::ptrdiff_t m_flMinExposure = 0xa94;
      constexpr std::ptrdiff_t m_flMaxExposure = 0xa98;
      constexpr std::ptrdiff_t m_flExposureCompensation = 0xa9c;
      constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xaa0;
      constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xaa4;
      constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xaa8;
      constexpr std::ptrdiff_t m_bMaster = 0xaac;
      constexpr std::ptrdiff_t m_bExposureControl = 0xaad;
    }
    namespace C_Precipitation {
      constexpr std::ptrdiff_t m_flDensity = 0xa70;
      constexpr std::ptrdiff_t m_flParticleInnerDist = 0xa80;
      constexpr std::ptrdiff_t m_pParticleDef = 0xa88;
      constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0xab0;
      constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0xab8;
      constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0xab9;
      constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xaba;
      constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xabc;
    }
    namespace C_PrecipitationBlocker {
    }
    namespace C_Projectile_Airheart_FloatingBomb {
    }
    namespace C_Projectile_Airheart_Package {
      constexpr std::ptrdiff_t m_pAbility = 0xca0;
      constexpr std::ptrdiff_t m_flStunDuration = 0xca8;
      constexpr std::ptrdiff_t m_flStunRadius = 0xcac;
    }
    namespace C_Projectile_Doorman_Cart_Projectile {
    }
    namespace C_Projectile_GraveStone_Projectile {
      constexpr std::ptrdiff_t m_flWidth = 0xad0;
      constexpr std::ptrdiff_t m_tDieTime = 0xad4;
    }
    namespace C_Projectile_KnightCharge_Projectile {
    }
    namespace C_Projectile_Necro_ZombieWall_Projectile {
    }
    namespace C_Projectile_Perched_Predator {
    }
    namespace C_Projectile_PunkgoatTether {
    }
    namespace C_Projectile_Rolling_FireBall {
    }
    namespace C_Projectile_Stomp_Projectile {
      constexpr std::ptrdiff_t m_flWidth = 0xad0;
      constexpr std::ptrdiff_t m_tDieTime = 0xad4;
    }
    namespace C_Projectile_Synth_Barrage {
    }
    namespace C_PropDoorRotating {
    }
    namespace C_RagdollProp {
      constexpr std::ptrdiff_t m_ragEnabled = 0xca8;
      constexpr std::ptrdiff_t m_ragPos = 0xcc0;
      constexpr std::ptrdiff_t m_ragAngles = 0xcd8;
      constexpr std::ptrdiff_t m_flBlendWeight = 0xcf0;
      constexpr std::ptrdiff_t m_hRagdollSource = 0xcf4;
      constexpr std::ptrdiff_t m_iEyeAttachment = 0xcf8;
      constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0xcfc;
      constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0xd00;
      constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0xd18;
    }
    namespace C_RagdollPropAttached {
      constexpr std::ptrdiff_t m_boneIndexAttached = 0xd30;
      constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xd34;
      constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xd38;
      constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xd44;
      constexpr std::ptrdiff_t m_vecOffset = 0xd50;
      constexpr std::ptrdiff_t m_parentTime = 0xd5c;
      constexpr std::ptrdiff_t m_bHasParent = 0xd60;
    }
    namespace C_RectLight {
      constexpr std::ptrdiff_t m_bShowLight = 0xcb0;
    }
    namespace C_RenderPortal {
      constexpr std::ptrdiff_t m_hLocalPortalLink = 0x9a0;
      constexpr std::ptrdiff_t m_hRemotePortalLink = 0x9a4;
      constexpr std::ptrdiff_t m_brushModelName = 0x9a8;
      constexpr std::ptrdiff_t m_flFadeStartDist = 0x9b0;
      constexpr std::ptrdiff_t m_flFadeEndDist = 0x9b4;
      constexpr std::ptrdiff_t m_flFadeStartAngle = 0x9b8;
      constexpr std::ptrdiff_t m_flFadeEndAngle = 0x9bc;
      constexpr std::ptrdiff_t m_flRemoteViewForwardOffset = 0x9c0;
      constexpr std::ptrdiff_t m_fadeToColor = 0x9c4;
    }
    namespace C_RopeKeyframe {
      constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0;
      constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0;
      constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0;
      constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0;
      constexpr std::ptrdiff_t m_LinksTouchingSomething = 0x9a8;
      constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0x9ac;
      constexpr std::ptrdiff_t m_bApplyWind = 0x9b0;
      constexpr std::ptrdiff_t m_fPrevLockedPoints = 0x9b4;
      constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0x9b8;
      constexpr std::ptrdiff_t m_bPrevEndPointPos = 0x9bc;
      constexpr std::ptrdiff_t m_vPrevEndPointPos = 0x9c0;
      constexpr std::ptrdiff_t m_flCurScroll = 0x9d8;
      constexpr std::ptrdiff_t m_flScrollSpeed = 0x9dc;
      constexpr std::ptrdiff_t m_RopeFlags = 0x9e0;
      constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x9e8;
      constexpr std::ptrdiff_t m_nSegments = 0xc60;
      constexpr std::ptrdiff_t m_hStartPoint = 0xc64;
      constexpr std::ptrdiff_t m_hEndPoint = 0xc68;
      constexpr std::ptrdiff_t m_iStartAttachment = 0xc6c;
      constexpr std::ptrdiff_t m_iEndAttachment = 0xc6d;
      constexpr std::ptrdiff_t m_Subdiv = 0xc6e;
      constexpr std::ptrdiff_t m_RopeLength = 0xc70;
      constexpr std::ptrdiff_t m_Slack = 0xc72;
      constexpr std::ptrdiff_t m_TextureScale = 0xc74;
      constexpr std::ptrdiff_t m_fLockedPoints = 0xc78;
      constexpr std::ptrdiff_t m_nChangeCount = 0xc79;
      constexpr std::ptrdiff_t m_Width = 0xc7c;
      constexpr std::ptrdiff_t m_PhysicsDelegate = 0xc80;
      constexpr std::ptrdiff_t m_hMaterial = 0xc90;
      constexpr std::ptrdiff_t m_TextureHeight = 0xc98;
      constexpr std::ptrdiff_t m_vecImpulse = 0xc9c;
      constexpr std::ptrdiff_t m_vecPreviousImpulse = 0xca8;
      constexpr std::ptrdiff_t m_flCurrentGustTimer = 0xcb4;
      constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0xcb8;
      constexpr std::ptrdiff_t m_flTimeToNextGust = 0xcbc;
      constexpr std::ptrdiff_t m_vWindDir = 0xcc0;
      constexpr std::ptrdiff_t m_vColorMod = 0xccc;
      constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0xcd8;
      constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0xcf0;
      constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0xd08;
    }
    namespace C_RopeKeyframe__CPhysicsDelegate {
      constexpr std::ptrdiff_t m_pKeyframe = 0x8;
    }
    namespace C_SceneEntity {
      constexpr std::ptrdiff_t m_bIsPlayingBack = 0x5f8;
      constexpr std::ptrdiff_t m_bPaused = 0x5f9;
      constexpr std::ptrdiff_t m_bMultiplayer = 0x5fa;
      constexpr std::ptrdiff_t m_bAutogenerated = 0x5fb;
      constexpr std::ptrdiff_t m_bAllRequirementsComplete = 0x5fc;
      constexpr std::ptrdiff_t m_flForceClientTime = 0x600;
      constexpr std::ptrdiff_t m_nSceneStringIndex = 0x604;
      constexpr std::ptrdiff_t m_bClientOnly = 0x606;
      constexpr std::ptrdiff_t m_hOwner = 0x608;
      constexpr std::ptrdiff_t m_hActorList = 0x610;
      constexpr std::ptrdiff_t m_bWasPlaying = 0x628;
      constexpr std::ptrdiff_t m_QueuedEvents = 0x638;
      constexpr std::ptrdiff_t m_flCurrentTime = 0x650;
    }
    namespace C_SceneEntity__QueuedEvents_t {
      constexpr std::ptrdiff_t starttime = 0x0;
    }
    namespace C_ShatterGlassShardPhysics {
      constexpr std::ptrdiff_t m_ShardDesc = 0xe28;
    }
    namespace C_SingleplayRules {
    }
    namespace C_SkyCamera {
      constexpr std::ptrdiff_t m_skyboxData = 0x5f0;
      constexpr std::ptrdiff_t m_skyboxSlotToken = 0x680;
      constexpr std::ptrdiff_t m_bUseAngles = 0x684;
      constexpr std::ptrdiff_t m_pNext = 0x688;
    }
    namespace C_SoundAreaEntityBase {
      constexpr std::ptrdiff_t m_bDisabled = 0x5f0;
      constexpr std::ptrdiff_t m_bWasEnabled = 0x5f8;
      constexpr std::ptrdiff_t m_iszSoundAreaType = 0x600;
      constexpr std::ptrdiff_t m_vPos = 0x608;
    }
    namespace C_SoundAreaEntityOrientedBox {
      constexpr std::ptrdiff_t m_vMin = 0x618;
      constexpr std::ptrdiff_t m_vMax = 0x624;
    }
    namespace C_SoundAreaEntitySphere {
      constexpr std::ptrdiff_t m_flRadius = 0x618;
    }
    namespace C_SoundEventAABBEntity {
      constexpr std::ptrdiff_t m_vMins = 0x6b0;
      constexpr std::ptrdiff_t m_vMaxs = 0x6bc;
    }
    namespace C_SoundEventConeEntity {
      constexpr std::ptrdiff_t m_flEmitterAngle = 0x6b0;
      constexpr std::ptrdiff_t m_flSweetSpotAngle = 0x6b4;
      constexpr std::ptrdiff_t m_flAttenMin = 0x6b8;
      constexpr std::ptrdiff_t m_flAttenMax = 0x6bc;
      constexpr std::ptrdiff_t m_iszParameterName = 0x6c0;
    }
    namespace C_SoundEventEntity {
      constexpr std::ptrdiff_t m_bClientSideOnly = 0x0;
      constexpr std::ptrdiff_t m_bStartOnSpawn = 0x5f0;
      constexpr std::ptrdiff_t m_bToLocalPlayer = 0x5f1;
      constexpr std::ptrdiff_t m_bStopOnNew = 0x5f2;
      constexpr std::ptrdiff_t m_bSaveRestore = 0x5f3;
      constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x5f4;
      constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x5f8;
      constexpr std::ptrdiff_t m_iszSourceEntityName = 0x600;
      constexpr std::ptrdiff_t m_iszAttachmentName = 0x608;
      constexpr std::ptrdiff_t m_onGUIDChanged = 0x610;
      constexpr std::ptrdiff_t m_onSoundFinished = 0x640;
      constexpr std::ptrdiff_t m_flClientCullRadius = 0x658;
      constexpr std::ptrdiff_t m_iszSoundName = 0x688;
      constexpr std::ptrdiff_t m_hSource = 0x6a4;
      constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x6a8;
    }
    namespace C_SoundEventEntityAlias_snd_event_point {
    }
    namespace C_SoundEventOBBEntity {
      constexpr std::ptrdiff_t m_vMins = 0x6b0;
      constexpr std::ptrdiff_t m_vMaxs = 0x6bc;
    }
    namespace C_SoundEventPathCornerEntity {
      constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x6b0;
    }
    namespace C_SoundEventSphereEntity {
      constexpr std::ptrdiff_t m_flRadius = 0x6b0;
    }
    namespace C_SoundOpvarSetAABBEntity {
    }
    namespace C_SoundOpvarSetAutoRoomEntity {
    }
    namespace C_SoundOpvarSetOBBEntity {
    }
    namespace C_SoundOpvarSetOBBWindEntity {
    }
    namespace C_SoundOpvarSetPathCornerEntity {
    }
    namespace C_SoundOpvarSetPointBase {
      constexpr std::ptrdiff_t m_iszStackName = 0x5f0;
      constexpr std::ptrdiff_t m_iszOperatorName = 0x5f8;
      constexpr std::ptrdiff_t m_iszOpvarName = 0x600;
      constexpr std::ptrdiff_t m_iOpvarIndex = 0x608;
      constexpr std::ptrdiff_t m_bUseAutoCompare = 0x60c;
      constexpr std::ptrdiff_t m_bFastRefresh = 0x60d;
    }
    namespace C_SoundOpvarSetPointEntity {
    }
    namespace C_SpotlightEnd {
      constexpr std::ptrdiff_t m_flLightScale = 0x9a0;
      constexpr std::ptrdiff_t m_Radius = 0x9a4;
    }
    namespace C_Sprite {
      constexpr std::ptrdiff_t m_hSpriteMaterial = 0x9a0;
      constexpr std::ptrdiff_t m_hAttachedToEntity = 0x9a8;
      constexpr std::ptrdiff_t m_nAttachment = 0x9ac;
      constexpr std::ptrdiff_t m_flSpriteFramerate = 0x9b0;
      constexpr std::ptrdiff_t m_flFrame = 0x9b4;
      constexpr std::ptrdiff_t m_flDieTime = 0x9b8;
      constexpr std::ptrdiff_t m_nBrightness = 0x9c8;
      constexpr std::ptrdiff_t m_flBrightnessDuration = 0x9cc;
      constexpr std::ptrdiff_t m_flSpriteScale = 0x9d0;
      constexpr std::ptrdiff_t m_flScaleDuration = 0x9d4;
      constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x9d8;
      constexpr std::ptrdiff_t m_flGlowProxySize = 0x9dc;
      constexpr std::ptrdiff_t m_flHDRColorScale = 0x9e0;
      constexpr std::ptrdiff_t m_flLastTime = 0x9e4;
      constexpr std::ptrdiff_t m_flMaxFrame = 0x9e8;
      constexpr std::ptrdiff_t m_flStartScale = 0x9ec;
      constexpr std::ptrdiff_t m_flDestScale = 0x9f0;
      constexpr std::ptrdiff_t m_flScaleTimeStart = 0x9f4;
      constexpr std::ptrdiff_t m_nStartBrightness = 0x9f8;
      constexpr std::ptrdiff_t m_nDestBrightness = 0x9fc;
      constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xa00;
      constexpr std::ptrdiff_t m_nSpriteWidth = 0xa10;
      constexpr std::ptrdiff_t m_nSpriteHeight = 0xa14;
    }
    namespace C_Team {
      constexpr std::ptrdiff_t m_aPlayerControllers = 0x5f0;
      constexpr std::ptrdiff_t m_aPlayers = 0x608;
      constexpr std::ptrdiff_t m_iScore = 0x620;
      constexpr std::ptrdiff_t m_szTeamname = 0x624;
    }
    namespace C_TeamRelativeParticleSystem {
      constexpr std::ptrdiff_t m_iszFriendlyEffectName = 0xf68;
      constexpr std::ptrdiff_t m_iszEnemyEffectName = 0xf70;
      constexpr std::ptrdiff_t m_iFriendlyEffectIndex = 0xf78;
      constexpr std::ptrdiff_t m_iEnemyEffectIndex = 0xf80;
    }
    namespace C_TeamplayRules {
    }
    namespace C_TextureBasedAnimatable {
      constexpr std::ptrdiff_t m_bLoop = 0x9a0;
      constexpr std::ptrdiff_t m_flFPS = 0x9a4;
      constexpr std::ptrdiff_t m_hPositionKeys = 0x9a8;
      constexpr std::ptrdiff_t m_hRotationKeys = 0x9b0;
      constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x9b8;
      constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x9c4;
      constexpr std::ptrdiff_t m_flStartTime = 0x9d0;
      constexpr std::ptrdiff_t m_flStartFrame = 0x9d4;
    }
    namespace C_TintController {
    }
    namespace C_TonemapController2 {
      constexpr std::ptrdiff_t m_flAutoExposureMin = 0x5f0;
      constexpr std::ptrdiff_t m_flAutoExposureMax = 0x5f4;
      constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x5f8;
      constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x5fc;
      constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x600;
    }
    namespace C_TonemapController2Alias_env_tonemap_controller2 {
    }
    namespace C_TrackedProjectile_Synth_PlasmaFlux {
      constexpr std::ptrdiff_t m_bSpawnedInNoTeleportArea = 0xad0;
    }
    namespace C_TriggerItemShop {
      constexpr std::ptrdiff_t m_iszSoundName = 0xa70;
    }
    namespace C_TriggerLerpObject {
    }
    namespace C_TriggerMultiple {
    }
    namespace C_TriggerNeutralShield {
    }
    namespace C_TriggerPhysics {
      constexpr std::ptrdiff_t m_gravityScale = 0xa70;
      constexpr std::ptrdiff_t m_linearLimit = 0xa74;
      constexpr std::ptrdiff_t m_linearDamping = 0xa78;
      constexpr std::ptrdiff_t m_angularLimit = 0xa7c;
      constexpr std::ptrdiff_t m_angularDamping = 0xa80;
      constexpr std::ptrdiff_t m_linearForce = 0xa84;
      constexpr std::ptrdiff_t m_flFrequency = 0xa88;
      constexpr std::ptrdiff_t m_flDampingRatio = 0xa8c;
      constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0xa90;
      constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0xa9c;
      constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0xaa0;
      constexpr std::ptrdiff_t m_vecLinearForceDirection = 0xaac;
      constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0xab8;
    }
    namespace C_TriggerTier3Phase2Shield {
      constexpr std::ptrdiff_t m_nNumEnemyPlayers = 0xa70;
    }
    namespace C_TriggerVolume {
    }
    namespace C_WaterBullet {
    }
    namespace C_World {
    }
    namespace C_fogplayerparams_t {
      constexpr std::ptrdiff_t m_hCtrl = 0x8;
      constexpr std::ptrdiff_t m_flTransitionTime = 0xc;
      constexpr std::ptrdiff_t m_OldColor = 0x10;
      constexpr std::ptrdiff_t m_flOldStart = 0x14;
      constexpr std::ptrdiff_t m_flOldEnd = 0x18;
      constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1c;
      constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20;
      constexpr std::ptrdiff_t m_flOldFarZ = 0x24;
      constexpr std::ptrdiff_t m_NewColor = 0x28;
      constexpr std::ptrdiff_t m_flNewStart = 0x2c;
      constexpr std::ptrdiff_t m_flNewEnd = 0x30;
      constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34;
      constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38;
      constexpr std::ptrdiff_t m_flNewFarZ = 0x3c;
    }
    namespace CitadelAbilityVData {
      constexpr std::ptrdiff_t m_eAbilityType = 0x28;
      constexpr std::ptrdiff_t m_eItemSlotType = 0x29;
      constexpr std::ptrdiff_t m_bDisabled = 0x2a;
      constexpr std::ptrdiff_t m_bDisabledOnExperimental = 0x2b;
      constexpr std::ptrdiff_t m_bInDevelopment = 0x2c;
      constexpr std::ptrdiff_t m_bStartTrained = 0x2d;
      constexpr std::ptrdiff_t m_iMaxLevel = 0x30;
      constexpr std::ptrdiff_t m_nAbilityPointsCost = 0x34;
      constexpr std::ptrdiff_t m_nAbillityUnlocksCost = 0x38;
      constexpr std::ptrdiff_t m_iUpdateTime = 0x40;
      constexpr std::ptrdiff_t m_AbilityBehaviorsBits = 0x4c;
      constexpr std::ptrdiff_t m_eAbilityTargetingLocation = 0x58;
      constexpr std::ptrdiff_t m_eAbilityTargetingShape = 0x5c;
      constexpr std::ptrdiff_t m_flTargetingConeAngle = 0x60;
      constexpr std::ptrdiff_t m_flTargetingConeHalfWidth = 0x64;
      constexpr std::ptrdiff_t m_bIncludeExtra2DCone = 0x68;
      constexpr std::ptrdiff_t m_bUseCameraOffsetsForCone = 0x69;
      constexpr std::ptrdiff_t m_bCollectNearbyTargetsWithCone = 0x6a;
      constexpr std::ptrdiff_t m_flNearbySweepOffset = 0x6c;
      constexpr std::ptrdiff_t m_flNearbySweepRadius = 0x70;
      constexpr std::ptrdiff_t m_eAbilityActivation = 0x74;
      constexpr std::ptrdiff_t m_TriggerButtonPreReqButton = 0x78;
      constexpr std::ptrdiff_t m_TriggerButtonOverride = 0x80;
      constexpr std::ptrdiff_t m_eAbilitySpectatePriority = 0x88;
      constexpr std::ptrdiff_t m_bitsInterruptingStates = 0x8c;
      constexpr std::ptrdiff_t m_IncompatibleFilter = 0xb4;
      constexpr std::ptrdiff_t m_nAbilityTargetTypes = 0xc8;
      constexpr std::ptrdiff_t m_nAbilityTargetFlags = 0xcc;
      constexpr std::ptrdiff_t m_eTargettingLOSCheck = 0xd0;
      constexpr std::ptrdiff_t m_bitsPreCastEnabledStateMask = 0xd4;
      constexpr std::ptrdiff_t m_bitsChannelEnabledStateMask = 0xfc;
      constexpr std::ptrdiff_t m_bitsPostCastEnabledStateMask = 0x124;
      constexpr std::ptrdiff_t m_TargetAbilityEffectsToApply = 0x14c;
      constexpr std::ptrdiff_t m_flBossDamageScale = 0x150;
      constexpr std::ptrdiff_t m_bShowTargetingPreviewWhileChanneling = 0x154;
      constexpr std::ptrdiff_t m_bShowTargetingPreviewWhileCasting = 0x155;
      constexpr std::ptrdiff_t m_WeaponInfo = 0x158;
      constexpr std::ptrdiff_t m_projectileInfo = 0x8d0;
      constexpr std::ptrdiff_t m_deploymentInfo = 0xc68;
      constexpr std::ptrdiff_t m_mapAbilityProperties = 0xe68;
      constexpr std::ptrdiff_t m_mapDependentAbilities = 0xe90;
      constexpr std::ptrdiff_t m_vecAbilityUpgrades = 0xeb8;
      constexpr std::ptrdiff_t m_strCastAnimGraphParam = 0xed0;
      constexpr std::ptrdiff_t m_strSelectionNameOverride = 0xed8;
      constexpr std::ptrdiff_t m_strCastAnimSequenceName = 0xee0;
      constexpr std::ptrdiff_t m_bSuppressOutOfCombatOnCast = 0xee8;
      constexpr std::ptrdiff_t m_bSuppressOutOfCombatWhileChanneling = 0xee9;
      constexpr std::ptrdiff_t m_strAG2SourceName = 0xef0;
      constexpr std::ptrdiff_t m_strAG2CastingAction = 0xef8;
      constexpr std::ptrdiff_t m_strAG2ChannelingAction = 0xf00;
      constexpr std::ptrdiff_t m_strAG2CastCompletedAction = 0xf08;
      constexpr std::ptrdiff_t m_AbilityTooltipDetails = 0xf10;
      constexpr std::ptrdiff_t m_strCSSClass = 0xf40;
      constexpr std::ptrdiff_t m_strAbilityImage = 0xf48;
      constexpr std::ptrdiff_t m_strMoviePreviewPath = 0xf58;
      constexpr std::ptrdiff_t m_HUDPanel = 0xf60;
      constexpr std::ptrdiff_t m_bShowInPassiveItemsArea = 0xf98;
      constexpr std::ptrdiff_t m_bForceHideHUDPanel = 0xf99;
      constexpr std::ptrdiff_t m_bForceShowHUDPanel = 0xf9a;
      constexpr std::ptrdiff_t m_bUsesFlightControls = 0xf9b;
      constexpr std::ptrdiff_t m_strFlyUpLocString = 0xfa0;
      constexpr std::ptrdiff_t m_strFlyDownLocString = 0xfa8;
      constexpr std::ptrdiff_t m_strSubCastUICSSClass = 0xfb0;
      constexpr std::ptrdiff_t m_additionalAbilities = 0xfb8;
      constexpr std::ptrdiff_t m_strSecondaryStatName = 0xfd8;
      constexpr std::ptrdiff_t m_strCastButtonLocToken = 0xfe0;
      constexpr std::ptrdiff_t m_strAltCastButtonLocToken = 0xfe8;
      constexpr std::ptrdiff_t m_cameraSequenceCastStart = 0xff0;
      constexpr std::ptrdiff_t m_bEndCastStartSequenceOnCastComplete = 0x1078;
      constexpr std::ptrdiff_t m_cameraSequenceCastComplete = 0x1080;
      constexpr std::ptrdiff_t m_cameraSequenceChannelStart = 0x1108;
      constexpr std::ptrdiff_t m_bEndChannelStartSequenceOnChannelComplete = 0x1190;
      constexpr std::ptrdiff_t m_flCameraPreviewOffset = 0x1194;
      constexpr std::ptrdiff_t m_flCameraPreviewDistance = 0x1198;
      constexpr std::ptrdiff_t m_flCameraPreviewSpeed = 0x119c;
      constexpr std::ptrdiff_t m_previewParticle = 0x11a0;
      constexpr std::ptrdiff_t m_strPreviewParticleEffectConfig = 0x1280;
      constexpr std::ptrdiff_t m_PreviewPathParticle = 0x1288;
      constexpr std::ptrdiff_t m_mapCastEventParticles = 0x1368;
      constexpr std::ptrdiff_t m_skillshotHitParticle = 0x1390;
      constexpr std::ptrdiff_t m_skillshotMissParticle = 0x1470;
      constexpr std::ptrdiff_t m_TargetingPreviewParticle = 0x1550;
      constexpr std::ptrdiff_t m_HudSharedStyle = 0x1630;
      constexpr std::ptrdiff_t m_strSelectedSound = 0x1710;
      constexpr std::ptrdiff_t m_strUnselectedSound = 0x1720;
      constexpr std::ptrdiff_t m_strSelectedLoopSound = 0x1730;
      constexpr std::ptrdiff_t m_strCastSound = 0x1740;
      constexpr std::ptrdiff_t m_strChannelSound = 0x1750;
      constexpr std::ptrdiff_t m_strChannelLoopSound = 0x1760;
      constexpr std::ptrdiff_t m_strCastDelaySound = 0x1770;
      constexpr std::ptrdiff_t m_strCastDelayLoopSound = 0x1780;
      constexpr std::ptrdiff_t m_strHitConfirmationSound = 0x1790;
      constexpr std::ptrdiff_t m_strDamageTakenSound = 0x17a0;
      constexpr std::ptrdiff_t m_strAbilityOffCooldownSound = 0x17b0;
      constexpr std::ptrdiff_t m_strAbilityChargeReadySound = 0x17c0;
      constexpr std::ptrdiff_t m_bPlayMeepMop = 0x17d0;
      constexpr std::ptrdiff_t m_AutoChannelModifier = 0x17d8;
      constexpr std::ptrdiff_t m_AutoCastDelayModifier = 0x17e8;
      constexpr std::ptrdiff_t m_AutoIntrinsicModifiers = 0x17f8;
      constexpr std::ptrdiff_t m_cosmeticInfo = 0x1810;
    }
    namespace CitadelHeroData_t {
      constexpr std::ptrdiff_t m_vecAnimGraphDefaultValueOverrides = 0x8;
      constexpr std::ptrdiff_t m_HeroID = 0x28;
      constexpr std::ptrdiff_t m_strHeroSortName = 0x30;
      constexpr std::ptrdiff_t m_strHeroSearchName = 0x38;
      constexpr std::ptrdiff_t m_hDamageTakenParticle = 0x40;
      constexpr std::ptrdiff_t m_hGroundDamageTakenParticle = 0x120;
      constexpr std::ptrdiff_t m_hDeathParticle = 0x200;
      constexpr std::ptrdiff_t m_hLowHealthParticle = 0x2e0;
      constexpr std::ptrdiff_t m_strIconImageSmall = 0x3c0;
      constexpr std::ptrdiff_t m_strIconHeroCard = 0x3d0;
      constexpr std::ptrdiff_t m_strIconHeroCardCritical = 0x3e0;
      constexpr std::ptrdiff_t m_strIconHeroCardGloat = 0x3f0;
      constexpr std::ptrdiff_t m_strMinimapImage = 0x400;
      constexpr std::ptrdiff_t m_strTopBarVertical = 0x410;
      constexpr std::ptrdiff_t m_strLogoImageEnglish = 0x420;
      constexpr std::ptrdiff_t m_strLogoImageLocalized = 0x430;
      constexpr std::ptrdiff_t m_hRespawnParticle = 0x440;
      constexpr std::ptrdiff_t m_colorUI = 0x520;
      constexpr std::ptrdiff_t m_strModelName = 0x528;
      constexpr std::ptrdiff_t m_nModelSkin = 0x608;
      constexpr std::ptrdiff_t m_strWIPModelName = 0x610;
      constexpr std::ptrdiff_t m_strMainOnlyModelName = 0x6f0;
      constexpr std::ptrdiff_t m_bUseMainOnlyModelForExperimental = 0x7d0;
      constexpr std::ptrdiff_t m_strUIPortraitMap = 0x7d8;
      constexpr std::ptrdiff_t m_strUIShoppingMap = 0x7e0;
      constexpr std::ptrdiff_t m_strUITeamRevealMap = 0x7e8;
      constexpr std::ptrdiff_t m_strUIPostgamePortraitMap = 0x7f0;
      constexpr std::ptrdiff_t m_heroStatsUI = 0x7f8;
      constexpr std::ptrdiff_t m_heroStatsDisplay = 0x828;
      constexpr std::ptrdiff_t m_ShopStatDisplay = 0x8b8;
      constexpr std::ptrdiff_t m_strDeathVOSound = 0x960;
      constexpr std::ptrdiff_t m_strDeathSound = 0x970;
      constexpr std::ptrdiff_t m_strLastHitSound = 0x980;
      constexpr std::ptrdiff_t m_strRosterSelectedSound = 0x990;
      constexpr std::ptrdiff_t m_strRosterRemovedSound = 0x9a0;
      constexpr std::ptrdiff_t m_strVoteRevealSound = 0x9b0;
      constexpr std::ptrdiff_t m_strLowHealthSound = 0x9c0;
      constexpr std::ptrdiff_t m_strHeroSpecificLowHealthSound = 0x9d0;
      constexpr std::ptrdiff_t m_strMovementLoop = 0x9e0;
      constexpr std::ptrdiff_t m_strPostGameVictorySound = 0x9f0;
      constexpr std::ptrdiff_t m_strPostGameDefeatSound = 0xa00;
      constexpr std::ptrdiff_t m_hGameSoundEventScript = 0xa10;
      constexpr std::ptrdiff_t m_hGeneratedVOEventScript = 0xaf0;
      constexpr std::ptrdiff_t m_flStealthSpeedMetersPerSecond = 0xbd0;
      constexpr std::ptrdiff_t m_bInDevelopment = 0xbd4;
      constexpr std::ptrdiff_t m_bAssignedPlayersOnly = 0xbd5;
      constexpr std::ptrdiff_t m_bNewPlayerRecommended = 0xbd6;
      constexpr std::ptrdiff_t m_bLaneTestingRecommended = 0xbd7;
      constexpr std::ptrdiff_t m_bNeedsTesting = 0xbd8;
      constexpr std::ptrdiff_t m_bLimitedTesting = 0xbd9;
      constexpr std::ptrdiff_t m_bDisabled = 0xbda;
      constexpr std::ptrdiff_t m_bPlayerSelectable = 0xbdb;
      constexpr std::ptrdiff_t m_bPrereleaseOnly = 0xbdc;
      constexpr std::ptrdiff_t m_nComplexity = 0xbe0;
      constexpr std::ptrdiff_t m_nAllyBotDifficulty = 0xbe4;
      constexpr std::ptrdiff_t m_nEnemyBotDifficulty = 0xbe8;
      constexpr std::ptrdiff_t m_flMinLowHealthPercentage = 0xbec;
      constexpr std::ptrdiff_t m_flMaxLowHealthPercentage = 0xbf0;
      constexpr std::ptrdiff_t m_flMinMidHealthPercentage = 0xbf4;
      constexpr std::ptrdiff_t m_flMaxMidHealthPercentage = 0xbf8;
      constexpr std::ptrdiff_t m_flMinHealthForThreshold = 0xbfc;
      constexpr std::ptrdiff_t m_flMaxHealthForThreshold = 0xc00;
      constexpr std::ptrdiff_t m_flInCombatWithHeroDuration = 0xc04;
      constexpr std::ptrdiff_t m_flInCombatWithNonHeroDuration = 0xc08;
      constexpr std::ptrdiff_t m_flInCombatWithNeutralDuration = 0xc0c;
      constexpr std::ptrdiff_t m_bNAGunFalloffRange = 0xc10;
      constexpr std::ptrdiff_t m_mapStartingStats = 0xc18;
      constexpr std::ptrdiff_t m_mapScalingStats = 0xc40;
      constexpr std::ptrdiff_t m_groundDashPositionCurve = 0xc68;
      constexpr std::ptrdiff_t m_mapModCostBonuses = 0xca8;
      constexpr std::ptrdiff_t m_mapBoundAbilities = 0xce8;
      constexpr std::ptrdiff_t m_mapWIPAbilities = 0xd10;
      constexpr std::ptrdiff_t m_mapItemSlotInfo = 0xd38;
      constexpr std::ptrdiff_t m_eAbilityResourceType = 0xdb0;
      constexpr std::ptrdiff_t m_strGunTag = 0xdb8;
      constexpr std::ptrdiff_t m_vecHeroTags = 0xdc0;
      constexpr std::ptrdiff_t m_eHeroType = 0xdd8;
      constexpr std::ptrdiff_t m_strRosterBackgroundLayout = 0xde0;
      constexpr std::ptrdiff_t m_strHideoutRichPresence = 0xde8;
      constexpr std::ptrdiff_t m_mapItemDraftCounterWeights = 0xdf0;
      constexpr std::ptrdiff_t m_mapStandardLevelUpUpgrades = 0xe30;
      constexpr std::ptrdiff_t m_mapLevelInfo = 0xe58;
      constexpr std::ptrdiff_t m_mapPurchaseBonuses = 0xe80;
      constexpr std::ptrdiff_t m_mapItemDraftBucketing = 0xea8;
    }
    namespace CitadelHeroSpawnData_t {
      constexpr std::ptrdiff_t m_nHeroID = 0x8;
      constexpr std::ptrdiff_t m_unHeroBadgeXP = 0xc;
    }
    namespace CitadelItemVData {
      constexpr std::ptrdiff_t m_iItemTier = 0x181c;
      constexpr std::ptrdiff_t m_nUpgradeSlotCost = 0x181d;
      constexpr std::ptrdiff_t m_bWarnIfNoAffectedAbilities = 0x181e;
      constexpr std::ptrdiff_t m_bShowTextDescription = 0x181f;
      constexpr std::ptrdiff_t m_eShopFilters = 0x1820;
      constexpr std::ptrdiff_t m_eAbilityRequirements = 0x1822;
      constexpr std::ptrdiff_t m_strShopIconLarge = 0x1828;
      constexpr std::ptrdiff_t m_strLocSearchString = 0x1838;
      constexpr std::ptrdiff_t m_vecTooltipSectionInfo = 0x1840;
      constexpr std::ptrdiff_t m_sCustomTooltipID = 0x1858;
      constexpr std::ptrdiff_t m_bCustomTooltipInteractive = 0x1860;
      constexpr std::ptrdiff_t m_bDisabledForBots = 0x1861;
      constexpr std::ptrdiff_t m_sCustomStackLabel = 0x1868;
      constexpr std::ptrdiff_t m_vecComponentItems = 0x1888;
      constexpr std::ptrdiff_t m_vecDisabledOnHeroes = 0x18a0;
    }
    namespace CitadelPingWheelMessagesVDATA_t {
      constexpr std::ptrdiff_t m_mapPingMessages = 0x0;
    }
    namespace CitadelStolenAbilitySlot_t {
      constexpr std::ptrdiff_t m_eStolenSlot = 0x8;
      constexpr std::ptrdiff_t m_bIsActivelyStolen = 0xa;
    }
    namespace ConsumedComponentState_t {
      constexpr std::ptrdiff_t m_unComponentID = 0x30;
      constexpr std::ptrdiff_t m_nRefCount = 0x34;
      constexpr std::ptrdiff_t m_bPurchased = 0x38;
    }
    namespace CountdownTimer {
      constexpr std::ptrdiff_t m_duration = 0x8;
      constexpr std::ptrdiff_t m_timestamp = 0xc;
      constexpr std::ptrdiff_t m_timescale = 0x10;
      constexpr std::ptrdiff_t m_nWorldGroupId = 0x14;
    }
    namespace DynamicAbilityValues_t {
      constexpr std::ptrdiff_t m_SourceAbilityID = 0x30;
      constexpr std::ptrdiff_t m_vecImbuedAbilities = 0x38;
      constexpr std::ptrdiff_t m_eValType = 0x50;
      constexpr std::ptrdiff_t m_flValue = 0x54;
    }
    namespace EngineCountdownTimer {
      constexpr std::ptrdiff_t m_duration = 0x8;
      constexpr std::ptrdiff_t m_timestamp = 0xc;
      constexpr std::ptrdiff_t m_timescale = 0x10;
    }
    namespace EntityRenderAttribute_t {
      constexpr std::ptrdiff_t m_ID = 0x30;
      constexpr std::ptrdiff_t m_Values = 0x34;
    }
    namespace FilterDamageType {
      constexpr std::ptrdiff_t m_iDamageType = 0x628;
    }
    namespace FilterHealth {
      constexpr std::ptrdiff_t m_bAdrenalineActive = 0x628;
      constexpr std::ptrdiff_t m_iHealthMin = 0x62c;
      constexpr std::ptrdiff_t m_iHealthMax = 0x630;
    }
    namespace IClientAlphaProperty {
    }
    namespace IntervalTimer {
      constexpr std::ptrdiff_t m_timestamp = 0x8;
      constexpr std::ptrdiff_t m_nWorldGroupId = 0xc;
    }
    namespace ItemDraftItem_t {
      constexpr std::ptrdiff_t m_unItemID = 0x30;
      constexpr std::ptrdiff_t m_nUpgradeBits = 0x34;
    }
    namespace ItemDraftOption_t {
      constexpr std::ptrdiff_t m_Item = 0x30;
      constexpr std::ptrdiff_t m_BonusItem1 = 0x68;
      constexpr std::ptrdiff_t m_BonusItem2 = 0xa0;
      constexpr std::ptrdiff_t m_bHasBeenDrafted = 0xd8;
      constexpr std::ptrdiff_t m_bRare = 0xd9;
    }
    namespace ItemDraftRoundState_t {
      constexpr std::ptrdiff_t m_vecOptions = 0x8;
      constexpr std::ptrdiff_t m_nID = 0x70;
      constexpr std::ptrdiff_t m_nDraftsRemaining = 0x74;
      constexpr std::ptrdiff_t m_nDraftsTotal = 0x78;
      constexpr std::ptrdiff_t m_nRoundsRemaining = 0x7c;
      constexpr std::ptrdiff_t m_nRoundsTotal = 0x80;
      constexpr std::ptrdiff_t m_flCompletedTime = 0x84;
    }
    namespace ItemImbuementPair_t {
      constexpr std::ptrdiff_t m_SourceItemID = 0x30;
      constexpr std::ptrdiff_t m_vecImbuedAbilities = 0x38;
    }
    namespace LockonTarget_t {
      constexpr std::ptrdiff_t m_flGainRate = 0x30;
      constexpr std::ptrdiff_t m_flDrainRate = 0x34;
      constexpr std::ptrdiff_t m_flMaxValue = 0x38;
      constexpr std::ptrdiff_t m_nPrevFullStacks = 0x3c;
      constexpr std::ptrdiff_t m_flLatchedValue = 0x40;
      constexpr std::ptrdiff_t m_flLatchedTime = 0x44;
      constexpr std::ptrdiff_t m_eLockonState = 0x48;
      constexpr std::ptrdiff_t m_hTarget = 0x4c;
    }
    namespace NewSettingsDefinition_t {
      constexpr std::ptrdiff_t m_nID = 0x0;
      constexpr std::ptrdiff_t m_sTitle = 0x10;
      constexpr std::ptrdiff_t m_sDescription = 0x18;
      constexpr std::ptrdiff_t sIcon = 0x20;
      constexpr std::ptrdiff_t m_sCreationDate = 0x30;
      constexpr std::ptrdiff_t m_eNewSettingsBadge = 0x3c;
    }
    namespace NewSettingsID_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace OutflowWithRequirements_t {
      constexpr std::ptrdiff_t m_Connection = 0x0;
      constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48;
      constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50;
      constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68;
    }
    namespace PhysicsRagdollPose_t {
      constexpr std::ptrdiff_t m_Transforms = 0x8;
      constexpr std::ptrdiff_t m_hOwner = 0x20;
      constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24;
    }
    namespace PlayOfTheGamePlaybackData_t {
      constexpr std::ptrdiff_t m_vecParticipants = 0x8;
      constexpr std::ptrdiff_t m_vecTriggers = 0x20;
      constexpr std::ptrdiff_t m_tBeginTimeWithPrewarm = 0x88;
      constexpr std::ptrdiff_t m_tEndTime = 0x8c;
    }
    namespace PlayOfTheGameTrigger_t {
      constexpr std::ptrdiff_t m_tTriggerTime = 0x30;
      constexpr std::ptrdiff_t m_eType = 0x34;
      constexpr std::ptrdiff_t m_nTarget = 0x38;
    }
    namespace PlayerDataGlobal_t {
      constexpr std::ptrdiff_t m_iLevel = 0x8;
      constexpr std::ptrdiff_t m_iMaxAmmo = 0xc;
      constexpr std::ptrdiff_t m_iHealthMax = 0x10;
      constexpr std::ptrdiff_t m_flHealthRegen = 0x14;
      constexpr std::ptrdiff_t m_flRespawnTime = 0x18;
      constexpr std::ptrdiff_t m_nHeroID = 0x1c;
      constexpr std::ptrdiff_t m_unHeroBadgeXP = 0x20;
      constexpr std::ptrdiff_t m_iGoldNetWorth = 0x24;
      constexpr std::ptrdiff_t m_iAPNetWorth = 0x28;
      constexpr std::ptrdiff_t m_iCreepGold = 0x2c;
      constexpr std::ptrdiff_t m_iCreepGoldSoloBonus = 0x30;
      constexpr std::ptrdiff_t m_iCreepGoldKill = 0x34;
      constexpr std::ptrdiff_t m_iCreepGoldAirOrb = 0x38;
      constexpr std::ptrdiff_t m_iCreepGoldGroundOrb = 0x3c;
      constexpr std::ptrdiff_t m_iCreepGoldDeny = 0x40;
      constexpr std::ptrdiff_t m_iCreepGoldNeutral = 0x44;
      constexpr std::ptrdiff_t m_iFarmBaseline = 0x48;
      constexpr std::ptrdiff_t m_iHealth = 0x4c;
      constexpr std::ptrdiff_t m_iPlayerKills = 0x50;
      constexpr std::ptrdiff_t m_iPlayerAssists = 0x54;
      constexpr std::ptrdiff_t m_iDeaths = 0x58;
      constexpr std::ptrdiff_t m_iDenies = 0x5c;
      constexpr std::ptrdiff_t m_iLastHits = 0x60;
      constexpr std::ptrdiff_t m_iKillStreak = 0x64;
      constexpr std::ptrdiff_t m_bAlive = 0x68;
      constexpr std::ptrdiff_t m_nHeroDraftPosition = 0x6c;
      constexpr std::ptrdiff_t m_bUltimateTrained = 0x70;
      constexpr std::ptrdiff_t m_flUltimateCooldownStart = 0x74;
      constexpr std::ptrdiff_t m_flUltimateCooldownEnd = 0x78;
      constexpr std::ptrdiff_t m_bHasRejuvenator = 0x7c;
      constexpr std::ptrdiff_t m_bHasRebirth = 0x7d;
      constexpr std::ptrdiff_t m_bFlaggedAsCheater = 0x7e;
      constexpr std::ptrdiff_t m_iHeroDamage = 0x80;
      constexpr std::ptrdiff_t m_iHeroHealing = 0x84;
      constexpr std::ptrdiff_t m_iSelfHealing = 0x88;
      constexpr std::ptrdiff_t m_iObjectiveDamage = 0x8c;
      constexpr std::ptrdiff_t m_vecUpgrades = 0x90;
      constexpr std::ptrdiff_t m_vecBonusCounterAbilities = 0xa8;
      constexpr std::ptrdiff_t m_vecBonusCounterValues = 0xc0;
      constexpr std::ptrdiff_t m_vecBonusCounterModifiers = 0xd8;
      constexpr std::ptrdiff_t m_vecModifierBonusCounterValues = 0xf0;
      constexpr std::ptrdiff_t m_tHeldItem = 0x108;
      constexpr std::ptrdiff_t m_vecImbuements = 0x110;
      constexpr std::ptrdiff_t m_vecDynamicAbilityValues = 0x178;
      constexpr std::ptrdiff_t m_vecStatViewerModifierValues = 0x1e0;
      constexpr std::ptrdiff_t m_vecStolenAbilities = 0x248;
      constexpr std::ptrdiff_t m_vecAbilityUpgradeState = 0x2b0;
      constexpr std::ptrdiff_t m_strIconHeroCardOverride = 0x318;
      constexpr std::ptrdiff_t m_strIconHeroCardCriticalOverride = 0x320;
      constexpr std::ptrdiff_t m_strIconHeroCardGloatOverride = 0x328;
    }
    namespace PulseNodeDynamicOutflows_t {
      constexpr std::ptrdiff_t m_Outflows = 0x0;
    }
    namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
      constexpr std::ptrdiff_t m_OutflowID = 0x0;
      constexpr std::ptrdiff_t m_Connection = 0x8;
    }
    namespace PulseObservableBoolExpression_t {
      constexpr std::ptrdiff_t m_EvaluateConnection = 0x0;
      constexpr std::ptrdiff_t m_DependentObservableVars = 0x48;
      constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60;
    }
    namespace PulseSelectorOutflowList_t {
      constexpr std::ptrdiff_t m_Outflows = 0x0;
    }
    namespace STeamFOWEntity {
      constexpr std::ptrdiff_t m_nEntIndex = 0x30;
      constexpr std::ptrdiff_t m_nTeam = 0x34;
      constexpr std::ptrdiff_t m_eClass = 0x38;
      constexpr std::ptrdiff_t m_iLane = 0x3c;
      constexpr std::ptrdiff_t m_eHeight = 0x40;
      constexpr std::ptrdiff_t m_bVisibleOnMap = 0x41;
      constexpr std::ptrdiff_t m_bBackdoorProtectionActive = 0x42;
      constexpr std::ptrdiff_t m_nTickHidden = 0x44;
      constexpr std::ptrdiff_t m_strEntityName = 0x48;
      constexpr std::ptrdiff_t m_nHealthPercent = 0x50;
      constexpr std::ptrdiff_t m_nPositionX = 0x51;
      constexpr std::ptrdiff_t m_nPositionY = 0x52;
    }
    namespace STrooperFOWEntity {
      constexpr std::ptrdiff_t m_nEntIndex = 0x30;
      constexpr std::ptrdiff_t m_nTeam = 0x34;
      constexpr std::ptrdiff_t m_nPositionXY = 0x36;
    }
    namespace SequenceHistory_t {
      constexpr std::ptrdiff_t m_hSequence = 0x0;
      constexpr std::ptrdiff_t m_flSeqStartTime = 0x4;
      constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8;
      constexpr std::ptrdiff_t m_nSeqLoopMode = 0xc;
      constexpr std::ptrdiff_t m_flPlaybackRate = 0x10;
      constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14;
    }
    namespace SettingsSearchDataIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace SettingsSectionIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace SettingsSubSectionIndex_t {
      constexpr std::ptrdiff_t m_Value = 0x0;
    }
    namespace SignatureOutflow_Continue {
    }
    namespace SignatureOutflow_Resume {
    }
    namespace StatViewerModifierValues_t {
      constexpr std::ptrdiff_t m_SourceModifierID = 0x30;
      constexpr std::ptrdiff_t m_eValType = 0x34;
      constexpr std::ptrdiff_t m_flValue = 0x38;
    }
    namespace StolenAbilityPair_t {
      constexpr std::ptrdiff_t m_ItemSlotType = 0x30;
      constexpr std::ptrdiff_t m_StolenAbilityID = 0x34;
    }
    namespace TimedEvent {
      constexpr std::ptrdiff_t m_TimeBetweenEvents = 0x0;
      constexpr std::ptrdiff_t m_fNextEvent = 0x4;
    }
    namespace TrackedStatNetworkData_t {
      constexpr std::ptrdiff_t unStatID = 0x30;
      constexpr std::ptrdiff_t unStatValue = 0x34;
    }
    namespace VPhysicsCollisionAttribute_t {
      constexpr std::ptrdiff_t m_nInteractsAs = 0x8;
      constexpr std::ptrdiff_t m_nInteractsWith = 0x10;
      constexpr std::ptrdiff_t m_nInteractsExclude = 0x18;
      constexpr std::ptrdiff_t m_nEntityId = 0x20;
      constexpr std::ptrdiff_t m_nOwnerId = 0x24;
      constexpr std::ptrdiff_t m_nHierarchyId = 0x28;
      constexpr std::ptrdiff_t m_nDetailLayerMask = 0x2a;
      constexpr std::ptrdiff_t m_nDetailLayerMaskType = 0x2c;
      constexpr std::ptrdiff_t m_nTargetDetailLayer = 0x2d;
      constexpr std::ptrdiff_t m_nCollisionGroup = 0x2e;
      constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2f;
    }
    namespace ViewAngleServerChange_t {
      constexpr std::ptrdiff_t nType = 0x30;
      constexpr std::ptrdiff_t qAngle = 0x34;
      constexpr std::ptrdiff_t nIndex = 0x40;
    }
    namespace WeakPoint_t {
      constexpr std::ptrdiff_t m_bRegistered = 0x3c;
      constexpr std::ptrdiff_t m_hOuter = 0x40;
      constexpr std::ptrdiff_t m_nCritHitGroup = 0x44;
      constexpr std::ptrdiff_t m_nBodyGroup = 0x48;
      constexpr std::ptrdiff_t m_bPermanentlyBroken = 0x4c;
      constexpr std::ptrdiff_t m_nBrokenBodygroupIndex = 0x50;
    }
    namespace audioparams_t {
      constexpr std::ptrdiff_t localSound = 0x8;
      constexpr std::ptrdiff_t soundscapeIndex = 0x68;
      constexpr std::ptrdiff_t localBits = 0x6c;
      constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70;
      constexpr std::ptrdiff_t soundEventHash = 0x74;
    }
    namespace fogparams_t {
      constexpr std::ptrdiff_t dirPrimary = 0x8;
      constexpr std::ptrdiff_t colorPrimary = 0x14;
      constexpr std::ptrdiff_t colorSecondary = 0x18;
      constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1c;
      constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20;
      constexpr std::ptrdiff_t start = 0x24;
      constexpr std::ptrdiff_t end = 0x28;
      constexpr std::ptrdiff_t farz = 0x2c;
      constexpr std::ptrdiff_t maxdensity = 0x30;
      constexpr std::ptrdiff_t exponent = 0x34;
      constexpr std::ptrdiff_t HDRColorScale = 0x38;
      constexpr std::ptrdiff_t skyboxFogFactor = 0x3c;
      constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40;
      constexpr std::ptrdiff_t startLerpTo = 0x44;
      constexpr std::ptrdiff_t endLerpTo = 0x48;
      constexpr std::ptrdiff_t maxdensityLerpTo = 0x4c;
      constexpr std::ptrdiff_t lerptime = 0x50;
      constexpr std::ptrdiff_t duration = 0x54;
      constexpr std::ptrdiff_t blendtobackground = 0x58;
      constexpr std::ptrdiff_t scattering = 0x5c;
      constexpr std::ptrdiff_t locallightscale = 0x60;
      constexpr std::ptrdiff_t enable = 0x64;
      constexpr std::ptrdiff_t blend = 0x65;
      constexpr std::ptrdiff_t m_bPadding2 = 0x66;
      constexpr std::ptrdiff_t m_bPadding = 0x67;
    }
    namespace ice_path_shard_model_desc_t {
      constexpr std::ptrdiff_t m_nModelID = 0x8;
      constexpr std::ptrdiff_t m_vecPanelSize = 0xc;
      constexpr std::ptrdiff_t m_vecPanelVertices = 0x18;
      constexpr std::ptrdiff_t m_flThickness = 0x30;
      constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x34;
    }
    namespace shard_model_desc_t {
      constexpr std::ptrdiff_t m_nModelID = 0x8;
      constexpr std::ptrdiff_t m_hMaterialBase = 0x10;
      constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18;
      constexpr std::ptrdiff_t m_solid = 0x20;
      constexpr std::ptrdiff_t m_vecPanelSize = 0x24;
      constexpr std::ptrdiff_t m_vecStressPositionA = 0x2c;
      constexpr std::ptrdiff_t m_vecStressPositionB = 0x34;
      constexpr std::ptrdiff_t m_vecPanelVertices = 0x40;
      constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58;
      constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70;
      constexpr std::ptrdiff_t m_bHasParent = 0x74;
      constexpr std::ptrdiff_t m_bParentFrozen = 0x75;
      constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78;
    }
    namespace sky3dparams_t {
      constexpr std::ptrdiff_t scale = 0x8;
      constexpr std::ptrdiff_t origin = 0xc;
      constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18;
      constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1c;
      constexpr std::ptrdiff_t fog = 0x20;
      constexpr std::ptrdiff_t m_nWorldGroupID = 0x88;
    }
  }
}
