class CEnvParticleScript {
public:
    float m_flSequenceScale; // 0x0A3C
};

class CEnvScreenEffect {
public:
    float m_flDuration; // 0x0638
    uint32_t m_nType; // 0x063C
};

class CTerrorWeapon {
public:
    fVector4 LocalL4DWeaponData; // 0x0000
    uint32_t m_nUpgradedPrimaryAmmoLoaded; // 0x0CB8
    fVector4 m_attackTimer; // 0x0A7C
    fVector4 m_swingTimer; // 0x0A88
};

class CTEBeamRing {
public:
    uint32_t m_nStartEntity; // 0x004C
    uint32_t m_nEndEntity; // 0x0050
};

class Witch {
public:
    float m_rage; // 0x12EC
    float m_wanderRage; // 0x12F8
};

class CPlantedC4 {
public:
    float m_flTimerLength; // 0x0968
    uint32_t m_bBombTicking; // 0x0958
    float m_flDefuseCountDown; // 0x0970
    float m_flC4Blow; // 0x0964
    float m_flDefuseLength; // 0x096C
};

class CSceneEntity {
public:
    uint32_t m_nSceneStringIndex; // 0x0648
    uint32_t m_bIsPlayingBack; // 0x063C
    uint32_t m_bMultiplayer; // 0x063E
    uint32_t m_bPaused; // 0x063D
    float m_flForceClientTime; // 0x0644
    fVector4 m_hActorList; // 0x0000
};

class CTankClaw {
public:
    uint32_t m_isLowAttack; // 0x0CFC
    fVector4 m_lowAttackDurationTimer; // 0x0D00
};

class CTEFootprintDecal {
public:
    uint32_t m_nIndex; // 0x0038
    fVector3 m_vecOrigin; // 0x0010
    fVector3 m_vecDirection; // 0x001C
    uint32_t m_nEntity; // 0x0034
    uint32_t m_chMaterialType; // 0x003C
};

class CWeaponSpawn {
public:
    uint32_t m_weaponID; // 0x0958
    float m_flGlowRange; // 0x095C
};

class Infected {
public:
    uint32_t m_clientLookatTarget; // 0x12AC
    fVector4 m_clientAnimatedOverlay; // 0x0000
    uint32_t m_fFlags; // 0x00F0
    uint32_t m_nWaterLevel; // 0x0146
    float m_sequenceStartTime; // 0x1254
    float m_vecOrigin[2]; // 0x012C
    float m_clientLeanYaw; // 0x12B0
    fVector2 m_vecOrigin; // 0x0124
    float m_angRotation[0]; // 0x0118
    float m_angRotation[1]; // 0x011C
    float m_angRotation[2]; // 0x0120
    fVector3 m_gibbedLimbForce; // 0x117C
    uint32_t m_originalBody; // 0x1188
    uint32_t m_mobRush; // 0x118C
    uint32_t m_bIsBurning; // 0x118D
    uint32_t m_iRequestedWound1; // 0x123C
    uint32_t m_iRequestedWound2; // 0x1240
    uint32_t m_nFallenFlags; // 0x1198
};

class CTerrorMeleeWeapon {
public:
    float m_flLastAttackTime; // 0x0D38
    uint32_t m_hMeleeWeaponInfo; // 0x0CEC
    uint32_t m_iNextSecondaryAttackIndex; // 0x0D10
    uint32_t m_iNextPrimaryAttackIndex; // 0x0D08
    uint32_t m_iNextStrongAttackIndex; // 0x0D0C
    fVector4 m_meleeSwingTimer; // 0x0D18
    uint32_t m_bInMeleeSwing; // 0x0D14
};

class CSoundMixLayer {
public:
    const char* m_iszMixLayerName; // 0x0638
    float m_fMixLayerLevel; // 0x073C
};

class CPropMinigun {
public:
    uint32_t m_overheated; // 0x0991
    float m_heat; // 0x0994
};

class CTerrorGun {
public:
    uint32_t m_inInitialPickup; // 0x0CEE
    uint32_t m_hasDualWeapons; // 0x0CED
    uint32_t m_isDualWielding; // 0x0CEC
    uint32_t m_upgradeBitVec; // 0x0CF0
    uint32_t m_reloadFromEmpty; // 0x0CEF
    uint32_t m_partialReloadStage; // 0x0CE8
};

class CTEBullets {
public:
    float m_flSoundTime; // 0x0038
    uint32_t m_iMode; // 0x0030
    fVector3 m_vecOrigin; // 0x0014
    uint32_t m_iWeaponID; // 0x002C
    float m_vecAngles[0]; // 0x0020
    float m_vecAngles[1]; // 0x0024
    uint32_t m_iPlayer; // 0x0010
    uint32_t m_iSeed; // 0x0034
};

class CBaseMountedWeapon {
public:
    float m_heat; // 0x0994
    float m_minPitch; // 0x098C
    fVector3 m_initialAngles; // 0x0998
    uint32_t m_overheated; // 0x0991
    float m_maxYaw; // 0x0984
    uint32_t m_owner; // 0x0980
    float m_maxPitch; // 0x0988
    uint32_t m_firing; // 0x0990
};

class CSurvivorRescue {
public:
    uint32_t m_survivor; // 0x0F20
};

class CChainsaw {
public:
    uint32_t m_iState; // 0x0D28
    uint32_t m_bHitting; // 0x0D2C
    fVector4 m_PoseParameterTargets; // 0x0D70
};

class CTEPlayerDecal {
public:
    fVector3 m_vecOrigin; // 0x0014
    uint32_t m_nEntity; // 0x0020
    uint32_t m_nPlayer; // 0x0010
};

class CPointPropUseTarget {
public:
    uint32_t m_useActionOwner; // 0x0638
    uint32_t m_hGasNozzle; // 0x063C
};

class CBaseShotgun {
public:
    fVector4 LocalShotgunData; // 0x0000
};

class CFireTrail {
public:
    float m_flLifetime; // 0x0728
    uint32_t m_nAttachment; // 0x0724
};

class CBaseBackpackItem {
public:
    uint32_t m_bPerformingAction; // 0x0CE8
};

class CBaseCSGrenadeProjectile {
public:
    fVector3 m_vInitialVelocity; // 0x1130
};

class SurvivorBot {
public:
    uint32_t m_humanSpectatorUserID; // 0x2940
    uint32_t m_humanSpectatorEntIndex; // 0x2944
};

class CInferno {
public:
    fVector4 m_fireXDelta; // 0x0644
    fVector4 m_fireYDelta; // 0x07D4
    fVector4 m_fireZDelta; // 0x0964
    uint32_t m_fireCount; // 0x1134
};

class CFuncRagdollFader {
public:
    uint32_t m_bDisabled; // 0x0638
};

class CTEGaussExplosion {
public:
    uint32_t m_nType; // 0x001C
    fVector3 m_vecDirection; // 0x0020
};

class CVomit {
public:
    uint32_t m_isSpraying; // 0x0658
    fVector4 m_nextSpray; // 0x0668
    fVector4 m_attackDuration; // 0x065C
};

class CTongue {
public:
    uint32_t m_tongueGrabStartingHealth; // 0x0658
    float m_tongueHitRange; // 0x065C
    uint32_t m_tongueHitWasAmbush; // 0x0664
    float m_tongueVictimDistance; // 0x0668
    float m_tongueHitTimestamp; // 0x0660
    float m_tongueVictimPositionTime; // 0x066C
    uint32_t m_currentTipTarget; // 0x0678
    float m_tongueVictimLastOnGroundTime; // 0x0670
    uint32_t m_potentialTarget; // 0x0674
    uint32_t m_tongueState; // 0x06A4
    uint32_t m_bendPointCount; // 0x0720
    fVector3 m_tipPosition; // 0x0724
    fVector3 m_bendPositions[0]; // 0x06A8
    void* m_bendPositions; // 0x0000
};

class CClientPath {
public:
    fVector4 m_posX; // 0x0A3C
    uint32_t m_posCount; // 0x163C
    fVector4 m_posY; // 0x0E3C
    fVector4 m_posZ; // 0x123C
};

class CSpitAbility {
public:
    uint32_t m_bHasBeenActivated; // 0x0658
};

class CBaseUpgradeItem {
public:
    uint32_t m_iUsedBySurvivorsMask; // 0x0960
};

class CPhysicsProp {
public:
    uint32_t m_bAwake; // 0x0960
    uint32_t m_hasTankGlow; // 0x0962
    uint32_t m_isCarryable; // 0x0963
    uint32_t m_spawnflags; // 0x0968
};

class CFuncSimpleLadder {
public:
    fVector3 m_climbableNormal; // 0x0638
};

class CTransitioningPlayer {
public:
    uint32_t m_loadingProgress; // 0x1120
    uint32_t m_userID; // 0x1110
    uint32_t m_healthBuffer; // 0x111C
    uint32_t m_score; // 0x1114
    uint32_t m_isDying; // 0x1125
    uint32_t m_iHealth; // 0x00EC
    uint32_t m_deaths; // 0x1118
    uint32_t m_isAlive; // 0x1124
    uint32_t m_isIncapacitated; // 0x1126
    uint32_t m_isIT; // 0x1127
    uint32_t m_hasMolotov; // 0x114C
    const char* m_playerName; // 0x1128
    uint32_t m_primaryWeaponID; // 0x1150
    uint32_t m_character; // 0x1148
    uint32_t m_hasGrenade; // 0x114D
    uint32_t m_hasFirstAidKit; // 0x114E
    uint32_t m_hasPainPills; // 0x114F
    uint32_t m_secondaryWeaponID; // 0x1154
};

class CSelfDestruct {
public:
    uint32_t m_bHasBeenActivated; // 0x0658
};

class CLunge {
public:
    float m_lungeStartTime; // 0x0664
    fVector4 m_lungeAgainTimer; // 0x0658
    uint32_t m_isLunging; // 0x0674
    fVector3 m_queuedLunge; // 0x0668
};

class CLeap {
public:
    fVector3 m_queuedLeap; // 0x0668
    fVector4 m_leapAgainTimer; // 0x0658
    uint32_t m_isLeaping; // 0x0674
    float m_leapStartTime; // 0x0664
};

class CCharge {
public:
    float m_chargeStartTime; // 0x0658
    uint32_t m_isCharging; // 0x065C
    uint32_t m_hPotentialTarget; // 0x0660
};

class RocketTrail {
public:
    float m_MinSpeed; // 0x074C
    float m_SpawnRate; // 0x0724
    float m_StartSize; // 0x0754
    float m_SpawnRadius; // 0x075C
    fVector3 m_StartColor; // 0x0728
    fVector3 m_EndColor; // 0x0734
    float m_MaxSpeed; // 0x0750
    float m_ParticleLifetime; // 0x0744
    float m_StopEmitTime; // 0x0748
    float m_EndSize; // 0x0758
    uint32_t m_bEmit; // 0x076C
    uint32_t m_nAttachment; // 0x0770
    float m_Opacity; // 0x0740
    uint32_t m_bDamaged; // 0x076D
    float m_flFlareScale; // 0x0780
};

class CBaseAbility {
public:
    fVector4 m_nextActivationTimer; // 0x0648
    uint32_t m_hOwnerEntity; // 0x0138
    uint32_t m_owner; // 0x0644
    uint32_t m_hasBeenUsed; // 0x0654
    fVector4 m_activationSupressedTimer; // 0x0638
};

class CFuncElevator {
public:
    fVector3 m_vecOrigin; // 0x0124
    float m_movementStartSpeed; // 0x0658
    float m_movementStartTime; // 0x0654
    float m_acceleration; // 0x064C
    float m_currentSpeed; // 0x0650
    float m_movementStartZ; // 0x065C
    float m_destinationFloorPosition; // 0x0644
    float m_maxSpeed; // 0x0648
    uint32_t m_isMoving; // 0x0660
};

class CMaterialModifyControl {
public:
    const char* m_szMaterialVar; // 0x0737
    const char* m_szMaterialName; // 0x0638
    uint32_t m_iFrameStart; // 0x0940
    const char* m_szMaterialVarValue; // 0x0836
    uint32_t m_iFrameEnd; // 0x0944
    float m_flFramerate; // 0x094C
    uint32_t m_bWrap; // 0x0948
    uint32_t m_bNewAnimCommandsSemaphore; // 0x0950
    float m_flFloatLerpStartValue; // 0x0954
    float m_flFloatLerpEndValue; // 0x0958
    uint32_t m_nModifyMode; // 0x0968
    float m_flFloatLerpTransitionTime; // 0x095C
    uint32_t m_bFloatLerpWrap; // 0x0960
};

class CTEKillPlayerAttachments {
public:
    uint32_t m_nPlayer; // 0x0010
};

class CTESmoke {
public:
    fVector3 m_vecOrigin; // 0x0010
    uint32_t m_nModelIndex; // 0x001C
    float m_fScale; // 0x0020
    uint32_t m_nFrameRate; // 0x0024
};

class CTutorLesson {
public:
    uint32_t m_lesson; // 0x0010
    uint32_t m_subject; // 0x0014
};

class CSurvivorPosition {
public:
    uint32_t m_order; // 0x0638
};

class CFinaleTrigger {
public:
    uint32_t m_triggerState; // 0x0964
    uint32_t m_bDisabled; // 0x0960
};

class CTerrorGameRulesProxy {
public:
    fVector4 terror_gamerules_data; // 0x0000
};

class CTeamplayRoundBasedRulesProxy {
public:
    fVector4 teamplayroundbased_gamerules_data; // 0x0000
};

class CScavengeProgressDisplay {
public:
    uint32_t m_bActive; // 0x063C
};

class CTEPhysicsProp {
public:
    float m_angRotation[2]; // 0x0024
    fVector3 m_vecOrigin; // 0x0010
    float m_angRotation[0]; // 0x001C
    float m_angRotation[1]; // 0x0020
    uint32_t m_nSkin; // 0x0038
    uint32_t m_nModelIndex; // 0x0034
    fVector3 m_vecVelocity; // 0x0028
    uint32_t m_nFlags; // 0x003C
    uint32_t m_nEffects; // 0x0040
    uint32_t r; // 0x0044
    uint32_t g; // 0x0048
    uint32_t b; // 0x004C
};

class CCSGameRulesProxy {
public:
    fVector4 cs_gamerules_data; // 0x0000
};

class CPropHealthCabinet {
public:
    uint32_t m_isUsed; // 0x0980
};

class CTerrorPlayerResource {
public:
    uint32_t m_missionWipes; // 0x10F8
    fVector4 m_listenServerHost; // 0x0EA0
    fVector4 m_maxHealth; // 0x0AA0
    fVector4 m_wantsToPlay; // 0x0D76
    fVector4 m_isIncapacitated; // 0x0D55
    fVector4 m_grenade; // 0x0BA8
    fVector4 m_primaryWeapon; // 0x0B24
    fVector4 m_nSurvivalTopMedal; // 0x0FCC
    fVector4 m_firstAidSlot; // 0x0C2C
    float m_tankLotterySelectionRatio; // 0x10D8
    fVector4 m_pillsSlot; // 0x0CB0
    fVector4 m_isGhost; // 0x0D34
    fVector4 m_zombieClass; // 0x0D98
    uint32_t m_sharedRandomSeed; // 0x1100
    uint32_t m_isTeamFrozen; // 0x10F1
    fVector4 m_tankTickets; // 0x0E1C
    uint32_t m_isFinale; // 0x10E0
    fVector4 m_teamSwitchRule; // 0x0EC4
    float m_tankLotteryEntryRatio; // 0x10D4
    fVector4 m_flSurvivalRecordTime; // 0x0F48
    fVector4 m_flBecomeGhostAt; // 0x1050
    uint32_t m_pendingTankPlayerIndex; // 0x10DC
    uint32_t m_isSurvivorTeamReadyTime; // 0x10E1
    uint32_t m_hasAnySurvivorLeftSafeArea; // 0x10F0
    uint32_t m_survivorTeamReadyTime; // 0x10E4
    uint32_t m_nRoundSetupTimeRemaining; // 0x10E8
    uint32_t m_tempoState; // 0x10EC
    uint32_t m_missionDuration; // 0x10F4
    float m_starRating; // 0x10FC
};

class CTESpriteSpray {
public:
    fVector3 m_vecOrigin; // 0x0010
    uint32_t m_nModelIndex; // 0x0028
    fVector3 m_vecDirection; // 0x001C
    float m_fNoise; // 0x0030
    uint32_t m_nCount; // 0x0034
    uint32_t m_nSpeed; // 0x002C
};

class CFuncConveyor {
public:
    float m_flConveyorSpeed; // 0x0638
};

class CTerrorPlayer {
public:
    uint32_t m_checkpointAwardCounts[0]; // 0x1FE0
    fVector4 m_tongueVictimTimer; // 0x1F70
    fVector4 terrorlocaldata; // 0x0000
    void* m_checkpointZombieKills; // 0x0000
    uint32_t m_checkpointPZLongestSmokerGrab; // 0x25D4
    float m_mainSequenceStartTime; // 0x1A84
    uint32_t m_reloadLayerSequence; // 0x1A90
    uint32_t m_nSequence; // 0x08A4
    uint32_t m_grenadeLayerSequence; // 0x1A98
    uint32_t m_isProneTongueDrag; // 0x1F86
    uint32_t m_checkpointReviveOtherCount; // 0x2548
    uint32_t m_missionMolotovsUsed; // 0x251C
    uint32_t m_fireLayerSequence; // 0x1A8C
    uint32_t m_classSpawnCount[0]; // 0x24D8
    uint32_t m_flinchLayerSequence; // 0x1A9C
    fVector4 m_knockdownTimer; // 0x276C
    uint32_t m_checkpointAdrenalinesUsed; // 0x2530
    uint32_t m_checkpointPillsUsed; // 0x2510
    uint32_t m_fidgetLayerSequence; // 0x1AA0
    uint32_t m_reloadAltLayerSequence; // 0x1A94
    uint32_t m_reachedTongueOwner; // 0x1F85
    uint32_t m_reloadLayerNumShells; // 0x1AA4
    uint32_t m_useActionTarget; // 0x1BA0
    float m_grenadeLayerStartTime; // 0x1AB4
    float m_fireLayerStartTime; // 0x1AA8
    uint32_t m_hBuildableButtonUseEnt; // 0x1AC0
    float m_flinchLayerStartTime; // 0x1AB8
    float m_fidgetLayerStartTime; // 0x1ABC
    float m_reloadLayerStartTime; // 0x1AAC
    uint32_t m_tongueVictim; // 0x1F68
    float m_reloadAltLayerStartTime; // 0x1AB0
    uint32_t m_lookatPlayer; // 0x2924
    fVector4 m_NetGestureSequence; // 0x1AFC
    fVector4 m_NetGestureActivity; // 0x1B18
    fVector4 m_NetGestureStartTime; // 0x1B34
    uint32_t m_hasVisibleThreats; // 0x1BBE
    float m_fServerAnimStartTime; // 0x1B54
    uint32_t m_noiseLevelLatch; // 0x1FBC
    uint32_t m_useActionOwner; // 0x1BA4
    float m_burnPercent; // 0x1BB4
    float m_bbqPercent; // 0x1BB8
    uint32_t m_holdingObject; // 0x1FA8
    float m_healthBuffer; // 0x1FAC
    float m_healthBufferTime; // 0x1FB0
    uint32_t m_checkpointHeadshots; // 0x2568
    uint32_t m_iCurrentUseAction; // 0x1BA8
    uint32_t m_isGoingToDie; // 0x1FB4
    float m_noiseLevel; // 0x1FB8
    uint32_t m_iBloodyHandsLevel; // 0x1FC8
    uint32_t m_zombieClass; // 0x1C90
    fVector4 m_itTimer; // 0x1FCC
    uint32_t m_bAdrenalineActive; // 0x1FD8
    void* m_checkpointAwardCounts; // 0x0000
    uint32_t m_zombieState; // 0x1C94
    uint32_t m_isCalm; // 0x1EB9
    uint32_t m_survivorCharacter; // 0x1C8C
    uint32_t m_checkpointPZSpitterDamage; // 0x25A4
    uint32_t m_isIncapacitated; // 0x1EA9
    uint32_t m_iVersusTeam; // 0x291C
    uint32_t m_reviveOwner; // 0x1F88
    fVector3 m_initialTonguePullDir; // 0x1F78
    uint32_t m_reviveTarget; // 0x1F8C
    uint32_t m_positionEntity; // 0x1F98
    uint32_t m_customAbility; // 0x1ED4
    uint32_t m_checkpointSurvivorDamage; // 0x24D0
    uint32_t m_tongueOwner; // 0x1F6C
    uint32_t m_isHangingFromTongue; // 0x1F84
    uint32_t m_missionAwardCounts[0]; // 0x2234
    void* m_missionAwardCounts; // 0x0000
    uint32_t m_checkpointZombieKills[0]; // 0x2488
    uint32_t m_missionZombieKills[0]; // 0x24AC
    uint32_t m_missionSurvivorDamage; // 0x24D4
    void* m_missionZombieKills; // 0x0000
    void* m_classSpawnCount; // 0x0000
    uint32_t m_iMaxHealth; // 0x1FDC
    uint32_t m_bSurvivorGlowEnabled; // 0x2939
    float m_maxDeadDuration; // 0x24FC
    float m_totalDeadDuration; // 0x2500
    float m_jumpSupressedUntil; // 0x2504
    uint32_t m_checkpointMedkitsUsed; // 0x2508
    uint32_t m_missionMedkitsUsed; // 0x250C
    uint32_t m_missionPillsUsed; // 0x2514
    uint32_t m_checkpointMolotovsUsed; // 0x2518
    uint32_t m_usingMountedWeapon; // 0x1EBB
    uint32_t m_checkpointPipebombsUsed; // 0x2520
    uint32_t m_missionPipebombsUsed; // 0x2524
    uint32_t m_checkpointBoomerBilesUsed; // 0x2528
    fVector3 m_tugStart; // 0x1C70
    uint32_t m_missionBoomerBilesUsed; // 0x252C
    uint32_t m_missionAdrenalinesUsed; // 0x2534
    uint32_t m_checkpointDefibrillatorsUsed; // 0x2538
    uint32_t m_missionDefibrillatorsUsed; // 0x253C
    uint32_t m_checkpointDamageTaken; // 0x2540
    uint32_t m_missionDamageTaken; // 0x2544
    uint32_t m_missionReviveOtherCount; // 0x254C
    uint32_t m_checkpointFirstAidShared; // 0x2550
    uint32_t m_missionFirstAidShared; // 0x2554
    uint32_t m_checkpointIncaps; // 0x2558
    uint32_t m_missionIncaps; // 0x255C
    uint32_t m_checkpointPZTankPunches; // 0x25B8
    uint32_t m_checkpointDamageToTank; // 0x2560
    uint32_t m_checkpointDamageToWitch; // 0x2564
    uint32_t m_missionAccuracy; // 0x2578
    uint32_t m_checkpointHeadshotAccuracy; // 0x256C
    uint32_t m_missionHeadshotAccuracy; // 0x2570
    uint32_t m_checkpointDeaths; // 0x257C
    uint32_t m_missionDeaths; // 0x2580
    uint32_t m_checkpointMeleeKills; // 0x2584
    uint32_t m_missionMeleeKills; // 0x2588
    uint32_t m_knockdownReason; // 0x2768
    uint32_t m_checkpointPZIncaps; // 0x258C
    uint32_t m_checkpointPZTankDamage; // 0x2590
    uint32_t m_checkpointPZHunterDamage; // 0x2594
    uint32_t m_checkpointPZSmokerDamage; // 0x2598
    uint32_t m_checkpointPZBoomerDamage; // 0x259C
    uint32_t m_checkpointPZJockeyDamage; // 0x25A0
    uint32_t m_checkpointPZChargerDamage; // 0x25A8
    uint32_t m_checkpointPZKills; // 0x25AC
    uint32_t m_checkpointPZPounces; // 0x25B0
    uint32_t m_checkpointPZPushes; // 0x25B4
    uint32_t m_checkpointPZTankThrows; // 0x25BC
    uint32_t m_checkpointPZHung; // 0x25C0
    uint32_t m_checkpointPZPulled; // 0x25C4
    uint32_t m_checkpointPZBombed; // 0x25C8
    uint32_t m_checkpointPZVomited; // 0x25CC
    uint32_t m_checkpointPZHighestDmgPounce; // 0x25D0
    uint32_t m_checkpointPZLongestJockeyRide; // 0x25D8
    uint32_t m_checkpointPZNumChargeVictims; // 0x25DC
    uint32_t m_isHangingFromLedge; // 0x25EC
    uint32_t m_isFallingFromLedge; // 0x25ED
    fVector3 m_hangNormal; // 0x2624
    fVector4 m_hangTimer; // 0x25F0
    fVector3 m_hangAirPos; // 0x2600
    fVector3 m_hangPos; // 0x260C
    fVector3 m_hangStandPos; // 0x2618
    uint32_t m_frustration; // 0x2678
    uint32_t m_clientIntensity; // 0x1EC4
    uint32_t m_pummelVictim; // 0x271C
    uint32_t m_pummelAttacker; // 0x2720
    uint32_t m_queuedPummelVictim; // 0x2724
    uint32_t m_carryAttacker; // 0x2714
    uint32_t m_carryVictim; // 0x2718
    uint32_t m_pounceVictim; // 0x2728
    uint32_t m_pounceAttacker; // 0x272C
    uint32_t m_jockeyVictim; // 0x2748
    uint32_t m_jockeyAttacker; // 0x274C
    fVector3 m_jockeyDesiredMove; // 0x2758
    uint32_t m_jockeyFirmAttach; // 0x2764
    uint32_t m_jockeyRotatedDesire; // 0x2765
    fVector4 m_staggerTimer; // 0x1C3C
    fVector3 m_staggerStart; // 0x1C48
    fVector3 m_staggerDir; // 0x1C54
    float m_staggerDist; // 0x1C60
    fVector4 m_tugTimer; // 0x1C64
    fVector3 m_tugDir; // 0x1C7C
    float m_tugDist; // 0x1C88
    uint32_t m_currentReviveCount; // 0x1EBC
    uint32_t m_bIsOnThirdStrike; // 0x1EC0
    uint32_t m_bIsFirstManOut; // 0x1EC1
    fVector4 m_music; // 0x267C
    uint32_t m_usingMountedGun; // 0x1EBA
    uint32_t m_isGhost; // 0x1C9A
    uint32_t m_bWasPresentAtSurvivalStart; // 0x2938
    uint32_t m_vocalizationSubject; // 0x1C20
    fVector4 m_vocalizationSubjectTimer; // 0x1C24
    fVector3 m_pounceStartPosition; // 0x2734
    uint32_t m_isAttemptingToPounce; // 0x2730
    float m_vomitStart; // 0x27F0
    float m_vomitFadeStart; // 0x27F8
    float m_bashedStart; // 0x27FC
    float m_salivaStart; // 0x2800
    uint32_t m_scrimmageType; // 0x1CCC
    uint32_t m_bSurvivorPositionHidingWeapons; // 0x1F9C
};

class CSurvivorDeathModel {
public:
    uint32_t m_nCharacterType; // 0x0F20
};

class CWeaponCSBase {
public:
    uint32_t m_iExtraPrimaryAmmo; // 0x0A28
};

class CTEDust {
public:
    float m_flSize; // 0x001C
    fVector3 m_vecDirection; // 0x0024
    float m_flSpeed; // 0x0020
};

class CPointCommentaryNode {
public:
    uint32_t m_bActive; // 0x0958
    float m_flStartTime; // 0x095C
    const char* m_iszCommentaryFile; // 0x0960
    uint32_t m_hViewPosition; // 0x0C74
    uint32_t m_iNodeNumberMax; // 0x0C6C
    const char* m_iszCommentaryFileNoHDR; // 0x0A64
    const char* m_iszSpeakers; // 0x0B68
    uint32_t m_iNodeNumber; // 0x0C68
};

class CEnvWeaponFire {
public:
    uint32_t m_iShotsTaken; // 0x063C
    uint32_t m_iWeaponType; // 0x0638
    fVector3 m_vecShotDest; // 0x0640
};

class CTeamTrainWatcher {
public:
    float m_flRecedeTime; // 0x0648
    float m_flTotalProgress; // 0x0638
    uint32_t m_iTrainSpeedLevel; // 0x0640
    uint32_t m_nNumCappers; // 0x0650
};

class CPropVehicleDriveable {
public:
    uint32_t m_hPlayer; // 0x095C
    uint32_t m_nBoostTimeLeft; // 0x096C
    uint32_t m_nSpeed; // 0x0960
    uint32_t m_nHasBoost; // 0x0970
    uint32_t m_nScannerDisabledWeapons; // 0x0974
    uint32_t m_nRPM; // 0x0964
    float m_flThrottle; // 0x0968
    fVector3 m_vecGunCrosshair; // 0x09A0
    uint32_t m_nScannerDisabledVehicle; // 0x0978
    uint32_t m_bEnterAnimOn; // 0x0998
    uint32_t m_bExitAnimOn; // 0x0999
    uint32_t m_bHasGun; // 0x09E4
    uint32_t m_bUnableToFire; // 0x09E5
    fVector3 m_vecEyeExitEndpoint; // 0x09D8
};

class CPointScriptUseTarget {
public:
    const char* m_sUseSubString; // 0x0678
    const char* m_sUseString; // 0x0638
    uint32_t m_bCanShowBuildPanel; // 0x06BC
    float m_flPreviousProgressPercent; // 0x06B8
};

class CTestTraceline {
public:
    uint32_t m_clrRender; // 0x0064
    float m_angRotation[2]; // 0x0120
    fVector3 m_vecOrigin; // 0x0124
    float m_angRotation[0]; // 0x0118
    uint32_t moveparent; // 0x0134
    float m_angRotation[1]; // 0x011C
};

class CBaseCSGrenade {
public:
    float m_fThrowTime; // 0x0CEC
    uint32_t m_bPinPulled; // 0x0CE9
    uint32_t m_bRedraw; // 0x0CE8
    uint32_t m_isGoingToRoll; // 0x0CF0
};

class CCSPlayer {
public:
    uint32_t m_iPlayerState; // 0x1874
    fVector3 m_lastLadderNormal; // 0x191C
    uint32_t m_iThrowGrenadeCounter; // 0x187C
    uint32_t m_iAddonBits; // 0x1880
    fVector4 cslocaldata; // 0x0000
    fVector4 csnonlocaldata; // 0x0000
    float m_flStamina; // 0x18A0
    uint32_t m_iClass; // 0x1964
    uint32_t m_bInBombZone; // 0x1879
    fVector4 m_AddonModelWeaponIDs; // 0x1884
    uint32_t m_iAccount; // 0x195C
    uint32_t m_bInHostageRescueZone; // 0x1979
    uint32_t m_bInBuyZone; // 0x187A
    uint32_t m_ArmorValue; // 0x1968
    float m_angEyeAngles[0]; // 0x196C
    float m_angEyeAngles[1]; // 0x1970
    uint32_t m_bHasDefuser; // 0x1978
    uint32_t m_bNightVisionOn; // 0x18AD
    uint32_t m_bHasNightVision; // 0x18AE
    uint32_t m_bIsDefusing; // 0x1878
    uint32_t m_iNightVisionScale; // 0x18B0
    uint32_t m_bHasHelmet; // 0x1960
    fVector3 m_vecRagdollVelocity; // 0x1980
    float m_flFlashDuration; // 0x18D8
    float m_flFlashMaxAlpha; // 0x18D4
    float m_flProgressBarDuration; // 0x1898
    float m_flProgressBarStartTime; // 0x189C
    uint32_t m_hRagdoll; // 0x18BC
    uint32_t m_cycleLatch; // 0x1A6C
};

class CPoseController {
public:
    fVector4 m_hProps; // 0x0638
    uint32_t m_nFModType; // 0x0660
    float m_fCycleFrequency; // 0x065C
    float m_fPoseValue; // 0x0650
    fVector4 m_chPoseIndex; // 0x0648
    float m_fFModAmplitude; // 0x066C
    uint32_t m_bPoseValueParity; // 0x064C
    float m_fInterpolationTime; // 0x0654
    uint32_t m_bInterpolationWrap; // 0x0658
    float m_fFModTimeOffset; // 0x0664
    float m_fFModRate; // 0x0668
};

class CTESparks {
public:
    uint32_t m_nMagnitude; // 0x001C
    uint32_t m_nTrailLength; // 0x0020
    fVector3 m_vecDir; // 0x0024
};

class CCSRagdoll {
public:
    fVector3 m_vecOrigin; // 0x0124
    fVector3 m_vecRagdollOrigin; // 0x0BB0
    uint32_t m_nModelIndex; // 0x0140
    uint32_t m_nForceBone; // 0x06A4
    uint32_t m_hPlayer; // 0x0BA0
    fVector3 m_vecForce; // 0x0698
    uint32_t m_iDeathPose; // 0x0BBC
    fVector3 m_vecRagdollVelocity; // 0x0BA4
    uint32_t m_iDeathFrame; // 0x0BC0
    uint32_t m_iTeamNum; // 0x00E4
    uint32_t m_bClientSideAnimation; // 0x087C
    uint32_t m_bOnFire; // 0x0BC4
    uint32_t m_bInterpOrigin; // 0x0BC5
    uint32_t m_ragdollType; // 0x0BC8
    uint32_t m_zombieClass; // 0x0BCC
    uint32_t m_survivorCharacter; // 0x0BD0
};

class CBaseGrenade {
public:
    float m_flDamage; // 0x1120
    float m_DmgRadius; // 0x1114
    uint32_t m_bIsLive; // 0x1111
    fVector3 m_vecVelocity; // 0x0100
    uint32_t m_hThrower; // 0x1128
    uint32_t m_fFlags; // 0x00F0
};

class CTEPlayerAnimEvent {
public:
    uint32_t m_hPlayer; // 0x0010
    uint32_t m_iEvent; // 0x0014
    uint32_t m_nData; // 0x0018
};

class CTEWorldDecal {
public:
    uint32_t m_nIndex; // 0x001C
    fVector3 m_vecOrigin; // 0x0010
};

class CTESprite {
public:
    fVector3 m_vecOrigin; // 0x0010
    uint32_t m_nModelIndex; // 0x001C
    float m_fScale; // 0x0020
    uint32_t m_nBrightness; // 0x0024
};

class CTEShowLine {
public:
    fVector3 m_vecEnd; // 0x001C
};

class CTEParticleSystem {
public:
    float m_vecOrigin[0]; // 0x0010
    float m_vecOrigin[1]; // 0x0014
    float m_vecOrigin[2]; // 0x0018
};

class CTEProjectedDecal {
public:
    uint32_t m_nIndex; // 0x002C
    fVector3 m_vecOrigin; // 0x0010
    fVector3 m_angRotation; // 0x001C
    float m_flDistance; // 0x0028
};

class CTEBloodSprite {
public:
    fVector3 m_vecOrigin; // 0x0010
    fVector3 m_vecDirection; // 0x001C
    uint32_t b; // 0x0030
    uint32_t m_nDropModel; // 0x0038
    uint32_t r; // 0x0028
    uint32_t g; // 0x002C
    uint32_t a; // 0x0034
    uint32_t m_nSprayModel; // 0x003C
    uint32_t m_nSize; // 0x0040
};

class CTEMuzzleFlash {
public:
    float m_flScale; // 0x0028
    fVector3 m_vecOrigin; // 0x0010
    uint32_t m_nType; // 0x002C
    fVector3 m_vecAngles; // 0x001C
};

class CTEExplosion {
public:
    fVector3 m_vecNormal; // 0x002C
    uint32_t m_nModelIndex; // 0x001C
    float m_fScale; // 0x0020
    uint32_t m_nFlags; // 0x0028
    uint32_t m_nFrameRate; // 0x0024
    uint32_t m_chMaterialType; // 0x0038
    uint32_t m_nRadius; // 0x003C
    uint32_t m_nMagnitude; // 0x0040
};

class CTELargeFunnel {
public:
    uint32_t m_nModelIndex; // 0x001C
    uint32_t m_nReversed; // 0x0020
};

class CTEImpact {
public:
    fVector3 m_vecOrigin; // 0x0010
    fVector3 m_vecNormal; // 0x001C
    uint32_t m_iType; // 0x0028
    uint32_t m_ucFlags; // 0x002C
};

class CTEGlowSprite {
public:
    fVector3 m_vecOrigin; // 0x0010
    uint32_t m_nModelIndex; // 0x001C
    float m_fScale; // 0x0020
    float m_fLife; // 0x0024
    uint32_t m_nBrightness; // 0x0028
};

class CTEShatterSurface {
public:
    uint32_t m_uchFrontColor[2]; // 0x0056
    fVector3 m_vecOrigin; // 0x0010
    float m_flWidth; // 0x0040
    fVector3 m_vecAngles; // 0x001C
    fVector3 m_vecForce; // 0x0028
    fVector3 m_vecForcePos; // 0x0034
    uint32_t m_nSurfaceType; // 0x0050
    float m_flShardSize; // 0x0048
    float m_flHeight; // 0x0044
    uint32_t m_uchFrontColor[0]; // 0x0054
    uint32_t m_uchFrontColor[1]; // 0x0055
    uint32_t m_uchBackColor[0]; // 0x0057
    uint32_t m_uchBackColor[1]; // 0x0058
    uint32_t m_uchBackColor[2]; // 0x0059
};

class CTEFizz {
public:
    uint32_t m_nCurrent; // 0x001C
    uint32_t m_nEntity; // 0x0010
    uint32_t m_nModelIndex; // 0x0014
    uint32_t m_nDensity; // 0x0018
};

class CTEEnergySplash {
public:
    fVector3 m_vecPos; // 0x0010
    uint32_t m_bExplosive; // 0x0028
    fVector3 m_vecDir; // 0x001C
};

class CTEEffectDispatch {
public:
    fVector4 m_EffectData; // 0x0010
};

class CTEDynamicLight {
public:
    float m_fRadius; // 0x001C
    fVector3 m_vecOrigin; // 0x0010
    uint32_t b; // 0x0028
    uint32_t r; // 0x0020
    uint32_t exponent; // 0x002C
    uint32_t g; // 0x0024
    float m_fTime; // 0x0030
    float m_fDecay; // 0x0034
};

class CEntityDissolve {
public:
    float m_flFadeOutModelStart; // 0x0648
    float m_flFadeOutModelLength; // 0x064C
    float m_flStartTime; // 0x063C
    float m_flFadeOutStart; // 0x0640
    float m_flFadeOutLength; // 0x0644
    float m_flFadeInStart; // 0x0650
    uint32_t m_nDissolveType; // 0x0658
    fVector3 m_vDissolverOrigin; // 0x0660
    float m_flFadeInLength; // 0x0654
    uint32_t m_nMagnitude; // 0x066C
};

class CTEDecal {
public:
    uint32_t m_nIndex; // 0x0030
    fVector3 m_vecStart; // 0x001C
    fVector3 m_vecOrigin; // 0x0010
    uint32_t m_nEntity; // 0x0028
    uint32_t m_nHitbox; // 0x002C
};

class CTEClientProjectile {
public:
    fVector3 m_vecOrigin; // 0x0010
    uint32_t m_hOwner; // 0x0030
    uint32_t m_nLifeTime; // 0x002C
    uint32_t m_nModelIndex; // 0x0028
    fVector3 m_vecVelocity; // 0x001C
};

class CTEBubbleTrail {
public:
    float m_fSpeed; // 0x0034
    float m_flWaterZ; // 0x0028
    fVector3 m_vecMins; // 0x0010
    fVector3 m_vecMaxs; // 0x001C
    uint32_t m_nModelIndex; // 0x002C
    uint32_t m_nCount; // 0x0030
};

class CTEBubbles {
public:
    float m_fSpeed; // 0x0034
    fVector3 m_vecMins; // 0x0010
    float m_fHeight; // 0x0028
    fVector3 m_vecMaxs; // 0x001C
    uint32_t m_nModelIndex; // 0x002C
    uint32_t m_nCount; // 0x0030
};

class CTEBSPDecal {
public:
    uint32_t m_nIndex; // 0x0020
    fVector3 m_vecOrigin; // 0x0010
    uint32_t m_nEntity; // 0x001C
};

class CTEBreakModel {
public:
    float m_angRotation[2]; // 0x0024
    fVector3 m_vecOrigin; // 0x0010
    float m_angRotation[0]; // 0x001C
    float m_angRotation[1]; // 0x0020
    fVector3 m_vecSize; // 0x0028
    uint32_t m_nModelIndex; // 0x0044
    fVector3 m_vecVelocity; // 0x0034
    uint32_t m_nRandomization; // 0x0040
    uint32_t m_nCount; // 0x0048
    float m_fTime; // 0x004C
    uint32_t m_nFlags; // 0x0050
};

class CFuncSmokeVolume {
public:
    float m_MovementSpeed; // 0x083C
    const char* m_MaterialName; // 0x072C
    uint32_t m_Color1; // 0x0724
    float m_DensityRampSpeed; // 0x0834
    uint32_t m_Color2; // 0x0728
    float m_ParticleSpacingDistance; // 0x0830
    float m_ParticleDrawWidth; // 0x082C
    float m_RotationSpeed; // 0x0838
    float m_Density; // 0x0840
    float m_maxDrawDistance; // 0x0844
    uint32_t m_spawnflags; // 0x0848
    fVector4 m_Collision; // 0x021C
};

class CTEBloodStream {
public:
    fVector3 m_vecDirection; // 0x001C
    uint32_t m_nAmount; // 0x0038
    uint32_t b; // 0x0030
    uint32_t r; // 0x0028
    uint32_t g; // 0x002C
    uint32_t a; // 0x0034
};

class CTEBeamSpline {
public:
    uint32_t m_nPoints; // 0x00D0
    fVector3 m_vecPoints[0]; // 0x0010
    void* m_vecPoints; // 0x0000
};

class CTEBeamRingPoint {
public:
    fVector3 m_vecCenter; // 0x004C
    float m_flStartRadius; // 0x0058
    float m_flEndRadius; // 0x005C
};

class CSmokeStack {
public:
    fVector3 m_AmbientLight.m_vPos; // 0x0794
    float m_flBaseSpread; // 0x0790
    float m_SpreadSpeed; // 0x0774
    float m_JetLength; // 0x0788
    float m_Speed; // 0x0778
    float m_flTwist; // 0x07E4
    float m_StartSize; // 0x077C
    float m_EndSize; // 0x0780
    float m_Rate; // 0x0784
    uint32_t m_bEmit; // 0x078C
    float m_flRollSpeed; // 0x0820
    uint32_t m_iMaterialModel; // 0x07E8
    fVector3 m_AmbientLight.m_vColor; // 0x07A0
    float m_AmbientLight.m_flIntensity; // 0x07AC
    fVector3 m_DirLight.m_vPos; // 0x07B0
    fVector3 m_DirLight.m_vColor; // 0x07BC
    float m_DirLight.m_flIntensity; // 0x07C8
    fVector3 m_vWind; // 0x07D8
};

class CTEBeamPoints {
public:
    fVector3 m_vecStartPoint; // 0x004C
    fVector3 m_vecEndPoint; // 0x0058
};

class CTEBeamLaser {
public:
    uint32_t m_nStartEntity; // 0x004C
    uint32_t m_nEndEntity; // 0x0050
};

class CTEBeamFollow {
public:
    uint32_t m_iEntIndex; // 0x004C
};

class CTEBeamEnts {
public:
    uint32_t m_nStartEntity; // 0x004C
    uint32_t m_nEndEntity; // 0x0050
};

class CPropJeep {
public:
    uint32_t m_bHeadlightIsOn; // 0x0AA4
};

class CTEBeamEntPoint {
public:
    fVector3 m_vecEndPoint; // 0x0060
    uint32_t m_nStartEntity; // 0x004C
    uint32_t m_nEndEntity; // 0x0050
    fVector3 m_vecStartPoint; // 0x0054
};

class CBaseViewModel {
public:
    uint32_t m_nLayer; // 0x0BB8
    uint32_t m_nModelIndex; // 0x0140
    uint32_t m_nSkin; // 0x0664
    uint32_t m_nSequence; // 0x08A4
    uint32_t m_nBody; // 0x0668
    uint32_t m_nLayerSequence; // 0x0BB4
    uint32_t m_nViewModelIndex; // 0x0BAC
    float m_flPlaybackRate; // 0x0660
    uint32_t m_fEffects; // 0x00E0
    uint32_t m_nAnimationParity; // 0x0BB0
    uint32_t m_hWeapon; // 0x0BC0
    uint32_t m_hOwner; // 0x0BC4
    uint32_t m_nNewSequenceParity; // 0x066C
    uint32_t m_nResetEventsParity; // 0x0670
    uint32_t m_nMuzzleFlashParity; // 0x0684
    float m_flLayerStartTime; // 0x0BBC
};

class CTEBaseBeam {
public:
    float m_fEndWidth; // 0x0028
    uint32_t m_nModelIndex; // 0x0010
    uint32_t m_nHaloIndex; // 0x0014
    uint32_t m_nFrameRate; // 0x001C
    uint32_t m_nStartFrame; // 0x0018
    float m_fWidth; // 0x0024
    float m_fLife; // 0x0020
    uint32_t m_nFadeLength; // 0x002C
    float m_fAmplitude; // 0x0030
    uint32_t m_nSpeed; // 0x0044
    uint32_t r; // 0x0034
    uint32_t g; // 0x0038
    uint32_t b; // 0x003C
    uint32_t a; // 0x0040
    uint32_t m_nFlags; // 0x0048
};

class CTEMetalSparks {
public:
    fVector3 m_vecPos; // 0x0010
    fVector3 m_vecDir; // 0x001C
};

class CSteamJet {
public:
    float m_SpreadSpeed; // 0x0724
    float m_JetLength; // 0x0738
    float m_Speed; // 0x0728
    float m_StartSize; // 0x072C
    float m_EndSize; // 0x0730
    float m_Rate; // 0x0734
    uint32_t m_bEmit; // 0x073C
    uint32_t m_bFaceLeft; // 0x0744
    uint32_t m_nType; // 0x0740
    uint32_t m_spawnflags; // 0x0748
    float m_flRollSpeed; // 0x074C
    const char* m_NoiseStart; // 0x0750
};

class CTeam {
public:
    uint32_t m_iTeamNum; // 0x0680
    uint32_t m_iScore; // 0x066C
    uint32_t m_iRoundsWon; // 0x0670
    const char* m_szTeamname; // 0x064C
    uint32_t player_array_element; // 0x0000
    void* "player_array"; // 0x0000
};

class DustTrail {
public:
    float m_SpawnRate; // 0x0724
    float m_MinDirectedSpeed; // 0x074C
    float m_MinSpeed; // 0x0744
    fVector3 m_Color; // 0x0728
    float m_MaxSpeed; // 0x0748
    float m_MaxDirectedSpeed; // 0x0750
    float m_ParticleLifetime; // 0x0738
    float m_StopEmitTime; // 0x0740
    float m_StartSize; // 0x0754
    float m_EndSize; // 0x0758
    float m_SpawnRadius; // 0x075C
    uint32_t m_bEmit; // 0x076C
    float m_Opacity; // 0x0734
};

class SporeTrail {
public:
    float m_flSpawnRadius; // 0x073C
    float m_flSpawnRate; // 0x072C
    float m_flEndSize; // 0x0738
    fVector3 m_vecEndColor; // 0x0720
    uint32_t m_bEmit; // 0x074C
    float m_flParticleLifetime; // 0x0730
    float m_flStartSize; // 0x0734
};

class SporeExplosion {
public:
    float m_flSpawnRadius; // 0x0734
    float m_flSpawnRate; // 0x0724
    uint32_t m_bDontRemove; // 0x073D
    uint32_t m_bEmit; // 0x073C
    float m_flParticleLifetime; // 0x0728
    float m_flStartSize; // 0x072C
    float m_flEndSize; // 0x0730
};

class SmokeTrail {
public:
    float m_SpawnRate; // 0x0724
    float m_MinDirectedSpeed; // 0x0754
    float m_MinSpeed; // 0x074C
    float m_SpawnRadius; // 0x0764
    fVector3 m_StartColor; // 0x0728
    fVector3 m_EndColor; // 0x0734
    float m_MaxDirectedSpeed; // 0x0758
    float m_MaxSpeed; // 0x0750
    float m_ParticleLifetime; // 0x0744
    float m_StopEmitTime; // 0x0748
    float m_StartSize; // 0x075C
    float m_EndSize; // 0x0760
    uint32_t m_bEmit; // 0x0774
    uint32_t m_nAttachment; // 0x0778
    float m_Opacity; // 0x0740
};

class ParticleSmokeGrenade {
public:
    float m_flSpawnTime; // 0x0734
    float m_FadeStartTime; // 0x0738
    float m_FadeEndTime; // 0x073C
    uint32_t m_CurrentStage; // 0x0724
};

class CParticleFire {
public:
    fVector3 m_vOrigin; // 0x072C
    fVector3 m_vDirection; // 0x0738
};

class CEnvQuadraticBeam {
public:
    fVector3 m_targetPosition; // 0x0638
    float m_flWidth; // 0x0654
    fVector3 m_controlPosition; // 0x0644
    float m_scrollRate; // 0x0650
};

class CBasePlayer {
public:
    uint32_t m_fFlags; // 0x00F0
    uint32_t m_iDefaultFOV; // 0x141C
    fVector4 localdata; // 0x0000
    float m_vecViewOffset[2]; // 0x00FC
    fVector4 pl; // 0x137C
    float m_vecViewOffset[0]; // 0x00F4
    float m_flFOVTime; // 0x13B4
    uint32_t m_hLastWeapon; // 0x140C
    uint32_t m_iFOV; // 0x1390
    float m_vecViewOffset[1]; // 0x00F8
    uint32_t m_iFOVStart; // 0x1394
    uint32_t m_hPostProcessCtrl; // 0x1800
    uint32_t m_hZoomOwner; // 0x1404
    uint32_t m_hVehicle; // 0x1408
    uint32_t m_hUseEntity; // 0x1480
    uint32_t m_hViewEntity; // 0x142C
    uint32_t m_hGroundEntity; // 0x013C
    uint32_t m_hElevator; // 0x1478
    uint32_t m_iHealth; // 0x00EC
    uint32_t m_lifeState; // 0x0147
    uint32_t m_iBonusProgress; // 0x13F8
    uint32_t m_iBonusChallenge; // 0x13FC
    float m_flMaxspeed; // 0x1400
    uint32_t m_iObserverMode; // 0x1450
    uint32_t m_hObserverTarget; // 0x1454
    uint32_t m_hViewModel[0]; // 0x1410
    void* m_hViewModel; // 0x0000
    const char* m_szLastPlaceName; // 0x1644
    fVector3 m_vecLadderNormal; // 0x13C8
    uint32_t m_ladderSurfaceProps; // 0x13AC
    uint32_t m_ubEFNoInterpParity; // 0x1668
    uint32_t m_nWaterLevel; // 0x0146
    uint32_t m_hColorCorrectionCtrl; // 0x1804
    uint32_t m_PlayerFog.m_hCtrl; // 0x180C
};

class CEmbers {
public:
    uint32_t m_nDensity; // 0x0638
    uint32_t m_bEmit; // 0x0644
    uint32_t m_nLifetime; // 0x063C
    uint32_t m_nSpeed; // 0x0640
};

class CEnvWind {
public:
    fVector4 m_EnvWindShared; // 0x0638
};

class CPrecipitation {
public:
    float m_minSpeed; // 0x066C
    uint32_t m_nPrecipType; // 0x0660
    float m_maxSpeed; // 0x0670
};

class CHandleTest {
public:
    uint32_t m_Handle; // 0x0638
    uint32_t m_bSendHandle; // 0x063C
};

class CSpriteTrail {
public:
    float m_flLifeTime; // 0x0CCC
    float m_flMinFadeLength; // 0x0CE0
    float m_flStartWidth; // 0x0CD0
    float m_flTextureRes; // 0x0CDC
    float m_flStartWidthVariance; // 0x0CD8
    float m_flEndWidth; // 0x0CD4
    fVector3 m_vecSkyboxOrigin; // 0x0CE4
    float m_flSkyboxScale; // 0x0CF0
};

class CSprite {
public:
    float m_flSpriteFramerate; // 0x0650
    uint32_t m_hAttachedToEntity; // 0x0648
    float m_flFrame; // 0x0654
    float m_flSpriteScale; // 0x0664
    uint32_t m_nAttachment; // 0x064C
    float m_flScaleTime; // 0x0668
    float m_flGlowProxySize; // 0x0670
    float m_flHDRColorScale; // 0x0674
    float m_flBrightnessTime; // 0x0660
    uint32_t m_nBrightness; // 0x065C
    uint32_t m_bWorldSpaceScale; // 0x066C
};

class CRagdollPropAttached {
public:
    uint32_t m_boneIndexAttached; // 0x0C90
    fVector3 m_attachmentPointRagdollSpace; // 0x0C80
    uint32_t m_ragdollAttachedObjectIndex; // 0x0C8C
    fVector3 m_attachmentPointBoneSpace; // 0x0C68
};

class CRagdollProp {
public:
    fVector3 m_ragPos[0]; // 0x0958
    fVector3 m_ragAngles[0]; // 0x0A78
    void* m_ragPos; // 0x0000
    void* m_ragAngles; // 0x0000
    uint32_t m_hUnragdoll; // 0x0C54
    uint32_t m_nOverlaySequence; // 0x0C60
    float m_flBlendWeight; // 0x0C58
};

class CFuncLadder {
public:
    fVector3 m_vecPlayerMountPositionTop; // 0x0658
    fVector3 m_vecPlayerMountPositionBottom; // 0x0664
    uint32_t m_bFakeLadder; // 0x0671
    fVector3 m_vecLadderDir; // 0x0638
};

class CTEFoundryHelpers {
public:
    uint32_t m_iEntity; // 0x0010
};

class CEnvDetailController {
public:
    float m_flFadeStartDist; // 0x0638
    float m_flFadeEndDist; // 0x063C
};

class CWorld {
public:
    float m_flWaveHeight; // 0x0638
    fVector3 m_WorldMins; // 0x063C
    float m_flMinPropScreenSpaceWidth; // 0x0660
    fVector3 m_WorldMaxs; // 0x0648
    float m_flMaxOccludeeArea; // 0x0658
    uint32_t m_bStartDark; // 0x0654
    float m_flMinOccluderArea; // 0x065C
    float m_flMaxPropScreenSpaceWidth; // 0x0664
    const char* m_iszDetailSpriteMaterial; // 0x0674
    uint32_t m_bColdWorld; // 0x0668
    uint32_t m_iTimeOfDay; // 0x066C
    const char* m_iszMusicPostFix; // 0x0774
    uint32_t m_iStartMusicType; // 0x0670
};

class CParticleSystem {
public:
    uint32_t m_bActive; // 0x063C
    fVector3 m_vecOrigin; // 0x0124
    uint32_t m_iParentAttachment; // 0x01F8
    uint32_t m_hOwnerEntity; // 0x0138
    float m_flStartTime; // 0x0640
    uint32_t moveparent; // 0x0134
    fVector3 m_angRotation; // 0x0118
    uint32_t m_iEffectIndex; // 0x0638
    fVector4 m_iServerControlPointAssignments; // 0x0674
    fVector4 m_vServerControlPoints; // 0x0644
    fVector4 m_hControlPointEnts; // 0x0684
    fVector4 m_iControlPointParents; // 0x0780
};

class CWaterLODControl {
public:
    float m_flCheapWaterStartDistance; // 0x0638
    float m_flCheapWaterEndDistance; // 0x063C
};

class CVoteController {
public:
    uint32_t m_potentialVotes; // 0x0654
    uint32_t m_activeIssueIndex; // 0x0644
    uint32_t m_onlyTeamToVote; // 0x0648
    uint32_t m_votesYes; // 0x064C
    uint32_t m_votesNo; // 0x0650
};

class CVGuiScreen {
public:
    uint32_t m_hPlayerOwner; // 0x06C8
    float m_flWidth; // 0x0640
    uint32_t m_nAttachmentIndex; // 0x0664
    float m_flHeight; // 0x0644
    uint32_t m_fScreenFlags; // 0x066C
    uint32_t m_nPanelName; // 0x0648
    uint32_t m_nOverlayMaterial; // 0x0668
};

class CPropVehicleChoreoGeneric {
public:
    uint32_t m_hPlayer; // 0x0984
    float m_vehicleView.flPitchCurveZero; // 0x0A20
    uint32_t m_bExitAnimOn; // 0x098D
    uint32_t m_bEnterAnimOn; // 0x098C
    fVector3 m_vecEyeExitEndpoint; // 0x0990
    uint32_t m_vehicleView.bClampEyeAngles; // 0x0A1C
    float m_vehicleView.flRollCurveZero; // 0x0A28
    float m_vehicleView.flPitchCurveLinear; // 0x0A24
    float m_vehicleView.flRollCurveLinear; // 0x0A2C
    float m_vehicleView.flFOV; // 0x0A30
    float m_vehicleView.flYawMin; // 0x0A34
    float m_vehicleView.flYawMax; // 0x0A38
    float m_vehicleView.flPitchMin; // 0x0A3C
    float m_vehicleView.flPitchMax; // 0x0A40
};

class CBaseTrigger {
public:
    uint32_t m_spawnflags; // 0x01CC
    uint32_t m_bClientSidePredicted; // 0x0638
};

class CTest_ProxyToggle_Networkable {
public:
    fVector4 blah; // 0x0000
};

class CBaseTeamObjectiveResource {
public:
    uint32_t m_bPlayingMiniRounds; // 0x0648
    uint32_t m_iTimerToShowInHUD; // 0x0638
    uint32_t m_iStopWatchTimer; // 0x063C
    uint32_t m_bControlPointsReset; // 0x0649
    fVector3 m_vCPPositions[0]; // 0x0654
    fVector4 m_iPreviousPoints; // 0x0AFC
    void* m_vCPPositions; // 0x0000
    uint32_t m_iNumControlPoints; // 0x0640
    uint32_t m_iUpdateCapHudParity; // 0x064C
    fVector4 m_bCPIsVisible; // 0x06B4
    fVector4 m_flLazyCapPerc; // 0x06BC
    fVector4 m_iTeamIcons; // 0x06FC
    fVector4 m_iTeamInZone; // 0x189C
    fVector4 m_iTeamOverlays; // 0x07FC
    fVector4 m_iTeamReqCappers; // 0x08FC
    fVector4 m_flTeamCapTime; // 0x09FC
    fVector4 m_bTeamCanCap; // 0x0DFC
    fVector4 m_iTeamBaseIcons; // 0x0E3C
    fVector4 m_iBaseControlPoints; // 0x0EBC
    fVector4 m_iWarnOnCap; // 0x0F44
    fVector4 m_bInMiniRound; // 0x0F3C
    const char* m_iszWarnSound[0]; // 0x0F64
    fVector4 m_iNumTeamMembers; // 0x177C
    void* m_iszWarnSound; // 0x0000
    fVector4 m_flPathDistance; // 0x175C
    fVector4 m_iCappingTeam; // 0x187C
    fVector4 m_bBlocked; // 0x18BC
    fVector4 m_iOwner; // 0x18C4
    const char* m_pszCapLayoutInHUD; // 0x194C
};

class CFlare {
public:
    float m_flTimeBurnOut; // 0x1218
    uint32_t m_bLight; // 0x1220
    float m_flScale; // 0x121C
    uint32_t m_bSmoke; // 0x1221
    uint32_t m_bPropFlare; // 0x1222
};

class CSun {
public:
    uint32_t m_nSize; // 0x078C
    uint32_t m_bOn; // 0x07A0
    uint32_t m_clrOverlay; // 0x0788
    uint32_t m_clrRender; // 0x0064
    uint32_t m_nOverlaySize; // 0x0790
    uint32_t m_nOverlayMaterial; // 0x07A8
    fVector3 m_vDirection; // 0x0794
    uint32_t m_nMaterial; // 0x07A4
    float HDRColorScale; // 0x0000
};

class CParticlePerformanceMonitor {
public:
    uint32_t m_bMeasurePerf; // 0x0639
    uint32_t m_bDisplayPerf; // 0x0638
};

class CSpotlightEnd {
public:
    float m_flLightScale; // 0x0638
    float m_Radius; // 0x063C
};

class CSlideshowDisplay {
public:
    uint32_t m_bNoListRepeats; // 0x0778
    uint32_t m_bEnabled; // 0x0638
    float m_fMinSlideTime; // 0x0768
    const char* m_szDisplayText; // 0x0639
    float m_fMaxSlideTime; // 0x076C
    const char* m_szSlideshowDirectory; // 0x06B9
    fVector4 m_chCurrentSlideLists; // 0x0750
    uint32_t m_iCycleType; // 0x0774
};

class CShadowControl {
public:
    fVector3 m_shadowDirection; // 0x0638
    uint32_t m_bEnableLocalLightShadows; // 0x064D
    uint32_t m_shadowColor; // 0x0644
    float m_flShadowMaxDist; // 0x0648
    uint32_t m_bDisableShadows; // 0x064C
};

class CRopeKeyframe {
public:
    uint32_t m_nChangeCount; // 0x0924
    uint32_t m_hEndPoint; // 0x0908
    uint32_t m_iRopeMaterialModelIndex; // 0x0674
    uint32_t m_hStartPoint; // 0x0904
    uint32_t m_iStartAttachment; // 0x090C
    uint32_t m_fLockedPoints; // 0x0920
    uint32_t moveparent; // 0x0134
    uint32_t m_bConstrainBetweenEndpoints; // 0x09A8
    uint32_t m_iEndAttachment; // 0x090E
    uint32_t m_nMinCPULevel; // 0x05E8
    uint32_t m_Slack; // 0x0918
    uint32_t m_RopeLength; // 0x0914
    uint32_t m_RopeFlags; // 0x0670
    float m_TextureScale; // 0x091C
    uint32_t m_nSegments; // 0x0900
    uint32_t m_Subdiv; // 0x0910
    float m_Width; // 0x0928
    uint32_t m_nMaxCPULevel; // 0x05E9
    float m_flScrollSpeed; // 0x066C
    fVector3 m_vecOrigin; // 0x0124
    uint32_t m_iParentAttachment; // 0x01F8
    uint32_t m_nMinGPULevel; // 0x05EA
    uint32_t m_nMaxGPULevel; // 0x05EB
};

class CRagdollManager {
public:
    uint32_t m_iCurrentMaxRagdollCount; // 0x0638
};

class CPhysBoxMultiplayer {
public:
    uint32_t m_iPhysicsMode; // 0x0644
    float m_fMass; // 0x0648
};

class CPropDoorRotatingCheckpoint {
public:
    uint32_t m_bLocked; // 0x0989
    uint32_t m_spawnflags; // 0x0984
    uint32_t m_eDoorState; // 0x0980
    uint32_t m_isRescueDoor; // 0x098A
};

class CBasePropDoor {
public:
    uint32_t m_bLocked; // 0x0989
    uint32_t m_spawnflags; // 0x0984
    uint32_t m_hMaster; // 0x098C
    uint32_t m_eDoorState; // 0x0980
    uint32_t m_isRescueDoor; // 0x098A
};

class CDynamicProp {
public:
    uint32_t m_bUseHitboxesForRenderBox; // 0x0960
};

class CPostProcessController {
public:
    float m_fLocalContrastStrength; // 0x0638
    float m_fLocalContrastEdgeStrength; // 0x063C
    float m_fVignetteStart; // 0x0640
    float m_fVignetteEnd; // 0x0644
    float m_fTopVignetteStrength; // 0x0654
    float m_fVignetteBlurStrength; // 0x0648
    float m_fFadeToBlackStrength; // 0x064C
    float m_fGrainStrength; // 0x0650
    float m_fFadeTime; // 0x0658
    uint32_t m_bMaster; // 0x065C
};

class CPlayerResource {
public:
    fVector4 m_iPing; // 0x06C0
    fVector4 m_bAlive; // 0x0978
    fVector4 m_iScore; // 0x0744
    fVector4 m_iTankTickets; // 0x07C8
    fVector4 m_iDeaths; // 0x084C
    fVector4 m_bConnected; // 0x08D0
    fVector4 m_iTeam; // 0x08F4
    fVector4 m_iHealth; // 0x099C
};

class CPlasma {
public:
    float m_flStartScale; // 0x0638
    float m_flScale; // 0x063C
    float m_flScaleTime; // 0x0640
    uint32_t m_nFlags; // 0x0644
    uint32_t m_nPlasmaModelIndex; // 0x0648
    uint32_t m_nPlasmaModelIndex2; // 0x064C
    uint32_t m_nGlowModelIndex; // 0x0650
};

class CPhysBox {
public:
    float m_mass; // 0x0638
};

class CFuncAreaPortalWindow {
public:
    uint32_t m_iBackgroundModelIndex; // 0x0644
    float m_flFadeStartDist; // 0x0638
    float m_flFadeDist; // 0x063C
    float m_flTranslucencyLimit; // 0x0640
};

class CLightGlow {
public:
    uint32_t m_clrRender; // 0x0064
    uint32_t m_nHorizontalSize; // 0x0638
    uint32_t m_nVerticalSize; // 0x063C
    uint32_t m_nMinDist; // 0x0640
    uint32_t m_spawnflags; // 0x064C
    uint32_t m_nMaxDist; // 0x0644
    uint32_t m_nOuterMaxDist; // 0x0648
    fVector3 m_vecOrigin; // 0x0124
    fVector3 m_angRotation; // 0x0118
    uint32_t moveparent; // 0x0134
    float m_flGlowProxySize; // 0x071C
    float HDRColorScale; // 0x0000
};

class CInfoOverlayAccessor {
public:
    uint32_t m_iTextureFrameIndex; // 0x05EC
    uint32_t m_iOverlayID; // 0x0638
};

class CFuncMoveLinear {
public:
    fVector3 m_vecVelocity; // 0x0100
    uint32_t m_fFlags; // 0x00F0
};

class CFuncRotating {
public:
    float m_angRotation[2]; // 0x0120
    fVector3 m_vecOrigin; // 0x0124
    float m_angRotation[0]; // 0x0118
    float m_angRotation[1]; // 0x011C
    uint32_t m_flSimulationTime; // 0x0150
};

class CFuncOccluder {
public:
    uint32_t m_bActive; // 0x063C
    uint32_t m_nOccluderIndex; // 0x0638
};

class CFunc_LOD {
public:
    uint32_t m_nDisappearMinDist; // 0x0638
    uint32_t m_nDisappearMaxDist; // 0x063C
};

class CFunc_Dust {
public:
    uint32_t m_LifetimeMax; // 0x0650
    float m_flSizeMax; // 0x0644
    uint32_t m_Color; // 0x0638
    uint32_t m_LifetimeMin; // 0x064C
    float m_flSizeMin; // 0x0640
    uint32_t m_SpawnRate; // 0x063C
    uint32_t m_DustFlags; // 0x065C
    uint32_t m_SpeedMax; // 0x0648
    uint32_t m_DistMax; // 0x0654
    uint32_t m_nModelIndex; // 0x0140
    float m_FallSpeed; // 0x0658
    fVector4 m_Collision; // 0x021C
};

class CBreakableSurface {
public:
    uint32_t m_nSurfaceType; // 0x0668
    uint32_t m_bIsBroken; // 0x0664
    float m_flPanelHeight; // 0x0648
    uint32_t m_nNumWide; // 0x063C
    uint32_t m_nNumHigh; // 0x0640
    float m_flPanelWidth; // 0x0644
    fVector3 m_vNormal; // 0x064C
    fVector3 m_vCorner; // 0x0658
    uint32_t m_noGhostCollision; // 0x0A68
    fVector4 m_RawPanelBitVec; // 0x068C
};

class CFish {
public:
    float m_z; // 0x09A8
    fVector3 m_poolOrigin; // 0x09B8
    float m_x; // 0x09A0
    float m_y; // 0x09A4
    uint32_t m_lifeState; // 0x0147
    float m_angle; // 0x09B0
    uint32_t m_nModelIndex; // 0x0140
    float m_waterLevel; // 0x09C4
};

class CBaseButton {
public:
    uint32_t m_glowEntity; // 0x0638
    uint32_t m_usable; // 0x063C
};

class CFireSmoke {
public:
    float m_flStartScale; // 0x0638
    uint32_t m_nFlameModelIndex; // 0x0648
    float m_flScale; // 0x063C
    uint32_t m_nFlameFromAboveModelIndex; // 0x064C
    float m_flScaleTime; // 0x0640
    uint32_t m_nFlags; // 0x0644
};

class CEnvTonemapController {
public:
    uint32_t m_bUseCustomAutoExposureMin; // 0x0638
    float m_flTonemapPercentBrightPixels; // 0x0658
    uint32_t m_bUseCustomAutoExposureMax; // 0x0639
    float m_flCustomAutoExposureMax; // 0x0640
    uint32_t m_bUseCustomBloomScale; // 0x063A
    float m_flCustomAutoExposureMin; // 0x063C
    float m_flCustomBloomScale; // 0x0644
    float m_flBloomExponent; // 0x064C
    float m_flCustomBloomScaleMinimum; // 0x0648
    float m_flBloomSaturation; // 0x0650
    float m_flTonemapPercentTarget; // 0x0654
    float m_flTonemapMinAvgLum; // 0x065C
};

class CEnvScreenOverlay {
public:
    void* m_flOverlayTimes; // 0x0000
    const char* m_iszOverlayNames[0]; // 0x0638
    float m_flOverlayTimes[0]; // 0x1030
    void* m_iszOverlayNames; // 0x0000
    float m_flStartTime; // 0x1058
    uint32_t m_iDesiredOverlay; // 0x105C
    uint32_t m_bIsActive; // 0x1060
};

class CEnvProjectedTexture {
public:
    fVector3 m_LinearFloatLightColor; // 0x064C
    float m_flAmbient; // 0x0658
    uint32_t m_hTargetEntity; // 0x063C
    uint32_t m_nShadowQuality; // 0x076C
    uint32_t m_bState; // 0x0640
    uint32_t m_bCameraSpace; // 0x064B
    float m_flLightFOV; // 0x0644
    uint32_t m_bEnableShadows; // 0x0648
    uint32_t m_bLightOnlyTarget; // 0x0649
    uint32_t m_bLightWorld; // 0x064A
    const char* m_SpotlightTextureName; // 0x0664
    uint32_t m_nSpotlightTextureFrame; // 0x0768
    float m_flNearZ; // 0x065C
    float m_flFarZ; // 0x0660
};

class CFogController {
public:
    uint32_t m_fog.colorSecondary; // 0x064C
    float m_fog.skyboxFogFactor; // 0x0668
    fVector3 m_fog.dirPrimary; // 0x063C
    uint32_t m_fog.colorPrimary; // 0x0648
    float m_fog.skyboxFogFactorLerpTo; // 0x066C
    uint32_t m_fog.colorPrimaryLerpTo; // 0x0650
    uint32_t m_fog.enable; // 0x0684
    uint32_t m_fog.blend; // 0x0685
    float m_fog.maxdensityLerpTo; // 0x0678
    float m_fog.start; // 0x0658
    float m_fog.end; // 0x065C
    float m_fog.farz; // 0x0660
    float m_fog.maxdensity; // 0x0664
    uint32_t m_fog.colorSecondaryLerpTo; // 0x0654
    float m_fog.startLerpTo; // 0x0670
    float m_fog.endLerpTo; // 0x0674
    float m_fog.lerptime; // 0x067C
    float m_fog.duration; // 0x0680
    float m_fog.HDRColorScale; // 0x0688
};

class CEnvDOFController {
public:
    float m_flFarBlurRadius; // 0x0650
    uint32_t m_bDOFEnabled; // 0x0638
    float m_flFarFocusDepth; // 0x0644
    float m_flNearBlurDepth; // 0x063C
    float m_flNearFocusDepth; // 0x0640
    float m_flNearBlurRadius; // 0x064C
    float m_flFarBlurDepth; // 0x0648
};

class CEnvPhysicsBlocker {
public:
    fVector3 m_vMins; // 0x0638
    fVector3 m_vMaxs; // 0x0644
    uint32_t m_bBlocked; // 0x0650
    uint32_t m_nBlockType; // 0x0654
};

class CEntityParticleTrail {
public:
    uint32_t m_iMaterialName; // 0x0720
    fVector4 m_Info; // 0x0724
    uint32_t m_hConstraintEntity; // 0x0738
};

class CEntityFlame {
public:
    uint32_t m_hEntAttached; // 0x0638
    uint32_t m_bCheapEffect; // 0x064C
};

class CDynamicLight {
public:
    uint32_t m_Flags; // 0x0638
    uint32_t m_LightStyle; // 0x0639
    float m_SpotRadius; // 0x064C
    float m_Radius; // 0x063C
    float m_InnerAngle; // 0x0644
    uint32_t m_Exponent; // 0x0640
    float m_OuterAngle; // 0x0648
};

class CColorCorrectionVolume {
public:
    const char* m_lookupFilename; // 0x0660
    uint32_t m_bEnabled; // 0x0650
    float m_MaxWeight; // 0x0654
    float m_FadeDuration; // 0x0658
};

class CColorCorrection {
public:
    float m_flFadeOutDuration; // 0x0650
    float m_flCurWeight; // 0x0658
    fVector3 m_vecOrigin; // 0x0638
    const char* m_netLookupFilename; // 0x065C
    float m_flMaxWeight; // 0x0654
    uint32_t m_bMaster; // 0x0761
    float m_minFalloff; // 0x0644
    float m_maxFalloff; // 0x0648
    float m_flFadeInDuration; // 0x064C
    uint32_t m_bEnabled; // 0x0760
    uint32_t m_bClientSide; // 0x0762
    uint32_t m_bExclusive; // 0x0763
};

class CBreakableProp {
public:
    uint32_t m_noGhostCollision; // 0x0958
    uint32_t m_bClientPhysics; // 0x0959
};

class CBeamSpotlight {
public:
    uint32_t m_nHaloIndex; // 0x0638
    uint32_t m_bNoFog; // 0x0646
    uint32_t m_bSpotlightOn; // 0x0644
    uint32_t m_bHasDynamicLight; // 0x0645
    float m_flSpotlightMaxLength; // 0x0648
    uint32_t m_nRotationAxis; // 0x063C
    float m_flSpotlightGoalWidth; // 0x064C
    float m_flHDRColorScale; // 0x0650
    float m_flRotationSpeed; // 0x0640
};

class CButtonTimed {
public:
    const char* m_sUseSubString; // 0x0680
    const char* m_sUseString; // 0x0640
};

class CBaseFlex {
public:
    fVector4 m_flexWeight; // 0x0BD8
    fVector3 m_viewtarget; // 0x0BA0
    uint32_t m_blinktoggle; // 0x0D84
};

class CBaseEntity {
public:
    uint32_t m_iParentAttachment; // 0x01F8
    uint32_t m_cellbits; // 0x0068
    uint32_t m_nMaxCPULevel; // 0x05E9
    uint32_t m_hOwnerEntity; // 0x0138
    fVector4 AnimTimeMustBeFirst; // 0x0000
    uint32_t m_cellZ; // 0x0078
    uint32_t m_bSimulatedEveryTick; // 0x05E5
    uint32_t m_flSimulationTime; // 0x0150
    uint32_t m_nRenderMode; // 0x0143
    float m_flCreateTime; // 0x0158
    fVector3 m_vecOrigin; // 0x0124
    uint32_t m_cellX; // 0x0070
    uint32_t m_cellY; // 0x0074
    fVector3 m_angRotation; // 0x0118
    uint32_t m_nModelIndex; // 0x0140
    uint32_t m_fEffects; // 0x00E0
    uint32_t m_nRenderFX; // 0x0142
    uint32_t m_clrRender; // 0x0064
    float m_flShadowCastDistance; // 0x02D4
    uint32_t m_iTeamNum; // 0x00E4
    uint32_t m_hScriptUseTarget; // 0x0014
    uint32_t m_CollisionGroup; // 0x0380
    float m_flElasticity; // 0x02D0
    uint32_t m_hEffectEntity; // 0x05F8
    fVector4 m_Glow; // 0x0278
    uint32_t movetype; // 0x0000
    uint32_t moveparent; // 0x0134
    uint32_t movecollide; // 0x0000
    fVector4 m_Collision; // 0x021C
    uint32_t m_iTextureFrameIndex; // 0x05EC
    uint32_t m_bAnimatedEveryTick; // 0x05E6
    uint32_t m_bAlternateSorting; // 0x05E7
    uint32_t m_bGlowBackfaceMult; // 0x02CC
    uint32_t m_Gender; // 0x0034
    float m_fadeMinDist; // 0x01E8
    float m_fadeMaxDist; // 0x01EC
    float m_flFadeScale; // 0x01F0
    uint32_t m_nMinCPULevel; // 0x05E8
    uint32_t m_nMinGPULevel; // 0x05EA
    uint32_t m_nMaxGPULevel; // 0x05EB
};

class CBaseDoor {
public:
    float m_flWaveHeight; // 0x0638
};

class CBaseCombatCharacter {
public:
    fVector4 bcc_localdata; // 0x0000
    uint32_t m_hActiveWeapon; // 0x1084
    fVector4 m_hMyWeapons; // 0x0FA4
};

class CBaseAnimatingOverlay {
public:
    fVector4 overlay_vars; // 0x0000
};

class CBoneFollower {
public:
    uint32_t m_modelIndex; // 0x0638
    uint32_t m_solidIndex; // 0x063C
};

class CBaseAnimating {
public:
    uint32_t m_nSequence; // 0x08A4
    uint32_t m_nSkin; // 0x0664
    fVector3 m_vecForce; // 0x0698
    float m_flModelScale; // 0x0728
    uint32_t m_nForceBone; // 0x06A4
    fVector4 m_flPoseParameter; // 0x072C
    uint32_t m_nHitboxSet; // 0x0640
    uint32_t m_hLightingOrigin; // 0x092C
    uint32_t m_bClientSideFrameReset; // 0x06D8
    uint32_t m_nBody; // 0x0668
    float m_flPlaybackRate; // 0x0660
    fVector4 m_flEncodedController; // 0x0674
    uint32_t m_nNewSequenceParity; // 0x066C
    uint32_t m_bClientSideAnimation; // 0x087C
    uint32_t m_bClientSideRagdoll; // 0x0165
    uint32_t m_nResetEventsParity; // 0x0670
    uint32_t m_nMuzzleFlashParity; // 0x0684
    fVector4 serveranimdata; // 0x0000
    float m_flFrozen; // 0x06DC
};

class CAI_BaseNPC {
public:
    uint32_t m_iSpeedModSpeed; // 0x1120
    uint32_t m_lifeState; // 0x0147
    uint32_t m_bPerformAvoidance; // 0x1124
    uint32_t m_iDeathFrame; // 0x1118
    uint32_t m_bIsMoving; // 0x1125
    uint32_t m_bFadeCorpse; // 0x1126
    uint32_t m_iSpeedModRadius; // 0x111C
    uint32_t m_iDeathPose; // 0x1114
    uint32_t m_bSpeedModActive; // 0x1127
    uint32_t m_bImportanRagdoll; // 0x1128
    float m_flTimePingEffect; // 0x1110
};

class CBeam {
public:
    uint32_t m_nRenderMode; // 0x0143
    uint32_t m_nBeamType; // 0x0654
    uint32_t m_nHaloIndex; // 0x0650
    uint32_t m_nBeamFlags; // 0x0658
    fVector4 m_hAttachEntity; // 0x065C
    float m_fEndWidth; // 0x06B0
    uint32_t m_nNumBeamEnts; // 0x0648
    fVector4 m_nAttachIndex; // 0x0684
    float m_fWidth; // 0x06AC
    float m_fHaloScale; // 0x06B8
    fVector3 m_vecOrigin; // 0x0124
    float m_fFadeLength; // 0x06B4
    float m_fAmplitude; // 0x06BC
    float m_fStartFrame; // 0x06C0
    float m_fSpeed; // 0x06C4
    float m_flFrameRate; // 0x0638
    float m_flHDRColorScale; // 0x063C
    uint32_t m_clrRender; // 0x0064
    uint32_t m_nRenderFX; // 0x0142
    float m_flFrame; // 0x06C8
    fVector3 m_vecEndPos; // 0x06CC
    uint32_t m_nModelIndex; // 0x0140
    uint32_t moveparent; // 0x0134
};

class CBaseCombatWeapon {
public:
    fVector4 LocalWeaponData; // 0x0000
    uint32_t m_hOwner; // 0x0958
    fVector4 LocalActiveWeaponData; // 0x0000
    uint32_t m_iViewModelIndex; // 0x0970
    uint32_t m_bInReload; // 0x09BD
    uint32_t m_iWorldModelIndex; // 0x0974
    uint32_t m_iClip1; // 0x0984
    uint32_t m_iState; // 0x0978
};

