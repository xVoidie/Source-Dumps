class CAI_BaseNPC {
public:
    void* statuseffectsdata_npc; // 0x0000
    void* DT_AI_BaseNPC; // 0x0000
    uint32_t m_isHologram; // 0x1E40
    uint32_t m_iHealth; // 0x0324
    uint32_t m_lifeState; // 0x0690
    uint32_t m_fireteamSlotIndex; // 0x1CA0
    uint32_t m_iMaxHealth; // 0x0468
    void* m_inventory; // 0x1948
    const char* m_title; // 0x1E41
    uint32_t m_aiSettingsIndex; // 0x1E64
    uint32_t m_subclass; // 0x1E68
    uint32_t m_aiSprinting; // 0x1E1A
    uint32_t m_aiNetworkFlags; // 0x1E3C
    fVector3 m_localOrigin; // 0x0004
    fVector3 m_localAngles; // 0x0384
    uint32_t m_hGroundEntity; // 0x0320
};

class CTitanSoul {
public:
    uint32_t m_titan; // 0x0950
    int64_t m_lastRodeoHitTime; // 0x0AF0
    uint32_t m_shieldHealth; // 0x01A0
    int64_t m_coreChargeExpireTime; // 0x0B00
    uint32_t m_shieldHealthMax; // 0x01A4
    uint32_t m_doomed; // 0x0CDC
    uint32_t m_stance; // 0x0CD8
    int64_t m_playerSettingsNum; // 0x0CE0
    uint32_t m_invalidHealthBarEnt; // 0x0CE8
    uint32_t m_bEjecting; // 0x0CE9
    uint32_t m_isValidRodeoTarget; // 0x0CEA
    int64_t m_nextCoreChargeAvailable; // 0x0AF8
    int64_t m_coreChargeStartTime; // 0x0B08
    int64_t m_coreUseDuration; // 0x0B0C
    int64_t m_damageComboLatestUpdateTime; // 0x0B10
    uint32_t m_damageComboStartHealth; // 0x0B14
    uint32_t m_poiseAmount; // 0x0B18
    uint32_t m_nextPoiseThreshold; // 0x0B1C
    uint32_t m_poiseState; // 0x0B20
    void* statuseffectsdata_soul; // 0x0000
    uint32_t m_bossPlayer; // 0x0154
    uint32_t m_titanSoulScriptNetData; // 0x0958
    uint32_t m_networkedFlags; // 0x02D4
};

class CAmbientGeneric {
public:
    float m_radius; // 0x0958
    uint32_t m_networkTableSoundID; // 0x0974
    void* DT_AmbientGeneric; // 0x0000
    uint32_t m_isEnabled; // 0x0970
    fVector3 m_networkedSegmentEndpointWorldSpace; // 0x097C
    uint32_t m_hasPolylineSegments; // 0x0971
};

class CPlayer {
public:
    void* m_passives; // 0x0000
    uint32_t m_fIsSprinting; // 0x2B58
    void* DT_Player; // 0x0000
    uint32_t m_crossPlayChatFriends; // 0x2719
    uint32_t m_lastJumpPadTouched; // 0x3298
    void* localdata; // 0x0000
    uint32_t m_lifeState; // 0x0690
    uint32_t m_extraShieldTier; // 0x3104
    void* m_selectedOffhandsPendingHybridAction; // 0x19C9
    fVector3 m_laserSightColor; // 0x271C
    void* pl; // 0x2580
    uint32_t m_communicationsAutoBlocked; // 0x3416
    void* teamshareddata; // 0x0000
    uint32_t m_launchCount; // 0x32A0
    float m_skywardLaunchFastEndTime; // 0x4A00
    int64_t m_jumpPadDebounceExpireTime; // 0x034C
    uint32_t m_hasMic; // 0x3414
    uint32_t m_bZooming; // 0x1CA1
    uint32_t m_leanState; // 0x2BA8
    uint32_t m_launcherAirControlActive; // 0x32A4
    void* m_inventory; // 0x1948
    void* m_rodeo; // 0x2600
    const char* m_title; // 0x4298
    uint32_t m_ammoPoolCapacity; // 0x26F4
    uint32_t m_ziplineState; // 0x3030
    uint32_t m_playerSettingForHoldToSprint; // 0x2B5B
    uint32_t m_hColorCorrectionCtrl; // 0x4274
    void* m_melee; // 0x33D0
    void* m_grapple; // 0x2E08
    float m_bleedoutStartTime; // 0x28A4
    uint32_t m_lastJumpWasWallHighJump; // 0x3804
    uint32_t m_grappleActive; // 0x2E90
    int64_t m_flDeathTime; // 0x37B8
    int64_t m_grappleDetachTime; // 0x2E94
    uint32_t m_titanSoul; // 0x1A88
    uint32_t m_extraShieldHealth; // 0x3100
    uint32_t m_tempShieldHealth; // 0x30FC
    int64_t m_lastDodgeTime; // 0x3808
    void* m_selectedOffhands; // 0x19C6
    uint32_t m_laserSightColorCustomized; // 0x271A
    int64_t m_stickySprintForwardDisableTime; // 0x2B64
    uint32_t m_fFlags; // 0x00C8
    int64_t m_platformUserId; // 0x2708
    int64_t m_timeJetpackHeightActivateCheckPassed; // 0x3830
    int64_t m_nucleusId; // 0x2710
    uint32_t m_crossPlayChat; // 0x2718
    uint32_t m_hardware; // 0x2700
    void* connectionQualityIndex; // 0x0000
    void* m_classModsActive; // 0x0000
    uint32_t m_playerFlags; // 0x340C
    fVector3 m_upDir; // 0x2BE4
    uint32_t m_turret; // 0x2EDC
    fVector3 m_ragdollCreationOrigin; // 0x37BC
    uint32_t m_hGroundEntity; // 0x0320
    uint32_t m_skydiveFromSkywardLaunch; // 0x49CD
    uint32_t m_petTitan; // 0x38DC
    uint32_t m_iHealth; // 0x0324
    uint32_t m_iMaxHealth; // 0x0468
    void* m_gestureSequences; // 0x2A64
    uint32_t m_bleedoutState; // 0x28A0
    uint32_t m_iSpawnParity; // 0x36CC
    uint32_t m_shadowShieldActive; // 0x30F8
    int64_t m_damageComboLatestUpdateTime; // 0x2A5C
    float m_ragdollCreationYaw; // 0x37C8
    float m_skydivePlayerYaw; // 0x4990
    uint32_t m_inPartyChat; // 0x3415
    void* m_gestureBlendInDuration; // 0x2A94
    uint32_t m_damageComboStartHealth; // 0x2A60
    void* m_hViewModels; // 0x2EE0
    float m_flMaxspeed; // 0x0328
    float m_skydiveScriptInputOverride; // 0x49D0
    uint32_t m_ubEFNoInterpParity; // 0x4270
    uint32_t m_bShouldDrawPlayerWhileUsingViewEntity; // 0x3660
    uint32_t m_useCredit; // 0x3408
    int64_t m_damageImpulseNoDecelEndTime; // 0x2B7C
    float m_playerMoveSpeedScale; // 0x3418
    uint32_t m_wallClimbSetUp; // 0x2CFC
    uint32_t m_wallHanging; // 0x2CFD
    float m_nextTitanRespawnAvailable; // 0x3914
    uint32_t m_traversalType; // 0x2C70
    uint32_t m_traversalState; // 0x2C6C
    fVector3 m_traversalRefPos; // 0x2CA8
    fVector3 m_traversalForwardDir; // 0x2C9C
    fVector3 m_StandHullMax; // 0x2BBC
    float m_traversalYawDelta; // 0x2CD8
    uint32_t m_traversalYawPoseParameter; // 0x2CDC
    uint32_t m_grappleHook; // 0x38D8
    uint32_t m_autoSprintForced; // 0x2B54
    uint32_t m_playerSettingForStickySprintForward; // 0x2B5A
    int64_t m_lastSprintPressTime; // 0x2B5C
    uint32_t m_reviveTarget; // 0x4AD8
    int64_t m_stickySprintForwardEnableTime; // 0x2B60
    void* m_statusEffectsTimedPlayerNV; // 0x28A8
    void* m_statusEffectsEndlessPlayerNV; // 0x2998
    uint32_t m_activeZipline; // 0x3020
    uint32_t m_duckState; // 0x2BA4
    uint32_t m_canStand; // 0x2BAD
    float m_skydiveContraintRadius; // 0x49E0
    fVector3 m_StandHullMin; // 0x2BB0
    void* m_playerVehicles; // 0x2B88
    fVector3 m_DuckHullMin; // 0x2BC8
    fVector3 m_DuckHullMax; // 0x2BD4
    uint32_t m_xp; // 0x3904
    float m_skill_mu; // 0x390C
    uint32_t m_bHasMatchAdminRole; // 0x3910
    uint32_t m_playerVehicleCount; // 0x2B90
    uint32_t m_playerVehicleDriven; // 0x2B94
    int64_t m_playerVehicleUseTime; // 0x2B98
    uint32_t m_titanSoulBeingRodeoed; // 0x2B9C
    uint32_t m_entitySyncingWithMe; // 0x2BE0
    uint32_t m_hasBadReputation; // 0x26F8
    void* m_currentFramePlayer; // 0x2158
    void* m_gestureStartTimes; // 0x2A74
    void* m_gestureBlendOutDuration; // 0x2AB4
    void* m_gestureFadeOutStartTime; // 0x2AD4
    void* m_gestureFadeOutDuration; // 0x2AF4
    uint32_t m_gestureAutoKillBitfield; // 0x2B14
    void* m_viewOffsetEntity; // 0x2EF0
    void* m_animViewEntity; // 0x2F30
    uint32_t m_pilotClassIndex; // 0x465C
    fVector3 m_vecAbsOrigin; // 0x0004
    uint32_t isLocalOriginLocal; // 0x0010
    void* portalnonlocaldata; // 0x0000
    void* m_Shared; // 0x4608
    uint32_t m_isPerformingBoostAction; // 0x313C
    uint32_t m_ziplineValid3pWeaponLayerAnim; // 0x302C
    uint32_t m_playerScriptNetDataGlobal; // 0x48E8
    int64_t m_zoomToggleOnStartTime; // 0x1CA4
    float m_zoomBaseFrac; // 0x1CA8
    int64_t m_zoomBaseTime; // 0x1CAC
    int64_t m_zoomFullStartTime; // 0x1CB0
    uint32_t m_armorType; // 0x48F4
    uint32_t m_helmetType; // 0x48F0
    uint32_t m_controllerModeActive; // 0x48FC
    uint32_t m_ziplineGrenadeBeginStationEntity; // 0x30CC
    uint32_t m_ziplineGrenadeBeginStationAttachmentId; // 0x30D0
    uint32_t m_skydiveState; // 0x4954
    float m_skydiveForwardPoseValueTarget; // 0x4920
    float m_skydiveSidePoseValueTarget; // 0x492C
    float m_skydiveDiveAngle; // 0x496C
    float m_skydiveSpeed; // 0x4974
    float m_skydiveStrafeAngle; // 0x4978
    float m_skydivePlayerPitch; // 0x498C
    uint32_t m_skydiveIsDiving; // 0x4970
    fVector3 m_skydiveContraintPostion; // 0x49D4
    void* m_overlayEventParity; // 0x16E1
    uint32_t m_skywardLaunchState; // 0x49E4
    fVector3 m_skywardOffset; // 0x4A18
    float m_skywardLaunchEndTime; // 0x4A08
    uint32_t m_skywardLaunchInterrupted; // 0x4A28
    uint32_t m_skywardLaunchFollowing; // 0x4A29
    float m_skywardLaunchSlowStartTime; // 0x49F8
    float m_skywardLaunchSlowEndTime; // 0x49FC
    float m_skywardLaunchSlowSpeed; // 0x4A10
    float m_skywardLaunchFastSpeed; // 0x4A14
    fVector3 m_skywardObstacleAvoidanceEndPos; // 0x4A2C
    uint32_t m_skywardWeaponsEnabled; // 0x4A38
    int64_t m_armoredLeapStartTime; // 0x4A60
    fVector3 m_armoredLeapAirPos; // 0x4A40
    fVector3 m_armoredLeapEndPos; // 0x4A4C
    uint32_t m_armoredLeapType; // 0x4A58
    uint32_t m_armoredLeapPhase; // 0x4A5C
    uint32_t m_dragReviveState; // 0x4AD0
    float m_dragReviveOutroStartTime; // 0x4AD4
    float m_glideMeter; // 0x3114
    int64_t m_lastMoveInputTime; // 0x3D70
    void* stickerinventory; // 0x0000
    int64_t m_lastTimeKilledOtherPlayer; // 0x4C10
};

class CSkyCamera {
public:
    void* DT_SkyCamera; // 0x0000
};

class CBaseEntity {
public:
    uint32_t m_cellX; // 0x0048
    uint32_t m_cellY; // 0x004C
    uint32_t m_parentAttachmentModel; // 0x0750
    uint32_t m_cellZ; // 0x0050
    uint32_t m_nModelIndex; // 0x0060
    fVector3 m_localOrigin; // 0x0054
    uint32_t m_collideWithOwner; // 0x0438
    fVector3 m_localAngles; // 0x0384
    uint32_t m_fEffects; // 0x0040
    float m_usableDistanceOverride; // 0x081C
    uint32_t m_nRenderMode; // 0x03A9
    const char* m_iName; // 0x0479
    uint32_t m_nRenderFX; // 0x039D
    uint32_t m_passThroughFlags; // 0x0350
    uint32_t m_clrRender; // 0x0080
    uint32_t m_clIntensity; // 0x0084
    uint32_t m_bRenderWithViewModels; // 0x039C
    uint32_t m_iTeamNum; // 0x0334
    uint32_t m_grade; // 0x0344
    uint32_t m_ignorePredictedTriggerFlags; // 0x0348
    uint32_t m_passThroughThickness; // 0x0354
    uint32_t m_CollisionGroup; // 0x0430
    float m_passThroughDirection; // 0x0358
    float m_fadeDist; // 0x075C
    fVector3 m_attachmentLerpStartAngles; // 0x0740
    uint32_t m_contents; // 0x0434
    uint32_t m_hOwnerEntity; // 0x0398
    uint32_t m_dissolveEffectEntityHandle; // 0x0804
    uint32_t movetype; // 0x0000
    uint32_t moveparent; // 0x001C
    uint32_t m_parentAttachment; // 0x0020
    uint32_t m_bIsSoundCodeControllerValueSet; // 0x0370
    void* HighlightSettings; // 0x0000
    int64_t m_attachmentLerpStartTime; // 0x072C
    int64_t m_attachmentLerpEndTime; // 0x0730
    uint32_t m_usablePriority; // 0x0818
    fVector3 m_attachmentLerpStartOrigin; // 0x0734
    uint32_t m_scriptNameIndex; // 0x0580
    void* m_Collision; // 0x03B0
    uint32_t m_instanceNameIndex; // 0x0584
    const char* m_holdUsePrompt; // 0x0608
    const char* m_pressUsePrompt; // 0x0610
    uint32_t m_exclusiveUseEnt; // 0x0618
    const char* m_iSignifierName; // 0x0470
    uint32_t movecollide; // 0x0000
    void* predictable_id; // 0x0000
    uint32_t m_visibilityFlags; // 0x032C
    uint32_t m_usableType; // 0x0044
    uint32_t m_bossPlayer; // 0x0154
    uint32_t m_wantsScopeHighlight; // 0x02D0
    float m_usableFOV; // 0x0820
    float m_usePromptSize; // 0x0824
    uint32_t m_networkedFlags; // 0x02D4
    uint32_t m_phaseShiftFlags; // 0x06B0
    uint32_t m_baseTakeDamage; // 0x06B4
    uint32_t m_invulnerableToDamageCount; // 0x06B8
    uint32_t m_firstChildEntityLink; // 0x0910
    uint32_t m_firstParentEntityLink; // 0x0914
    float m_flSoundCodeControllerValue; // 0x0374
    uint32_t m_ignoreParentRotation; // 0x02DC
    int64_t m_realmsBitMask; // 0x0918
};

class CInfoPlacementHelper {
public:
    fVector3 m_localOrigin; // 0x0004
    uint32_t m_parentAttachment; // 0x0020
    fVector3 m_localAngles; // 0x0384
    uint32_t moveparent; // 0x001C
    uint32_t m_parentAttachmentModel; // 0x0750
};

class CBaseAnimating {
public:
    void* DT_BaseAnimating; // 0x0000
    uint32_t m_animModelIndex; // 0x0014
    uint32_t m_nForceBone; // 0x0DA8
    uint32_t m_bSequenceFinished; // 0x0E0C
    float m_lockedAnimDeltaYaw; // 0x0E10
    uint32_t m_skinMod; // 0x0D5C
    uint32_t m_nSkin; // 0x0D58
    fVector3 m_vecForce; // 0x0020
    uint32_t m_nBody; // 0x0D64
    uint32_t m_camoIndex; // 0x0D68
    uint32_t m_itemFlavorGUID; // 0x0D4C
    float m_flModelScale; // 0x0E18
    void* m_flPoseParameter; // 0x002C
    float m_animPlaybackRate; // 0x0010
    uint32_t m_animActive; // 0x097C
    uint32_t m_animFrozen; // 0x001E
    uint32_t m_animPlantingEnabled; // 0x0981
    float m_flSkyScaleEndValue; // 0x0B04
    uint32_t m_bClientSideRagdoll; // 0x001F
    uint32_t m_syncingWithEntity; // 0x0A74
    uint32_t m_nRagdollImpactFXTableId; // 0x0AFC
    float m_flSkyScaleStartValue; // 0x0B00
    uint32_t m_animRelativeToGroundEnabled; // 0x0980
    int64_t m_flSkyScaleStartTime; // 0x0B08
    int64_t m_flSkyScaleEndTime; // 0x0B0C
    void* serveranimdata; // 0x0000
    uint32_t m_passDamageToParent; // 0x06BC
    void* m_SequenceTransitioner; // 0x0B28
    float m_flEstIkOffset; // 0x008C
    uint32_t m_animCollisionEnabled; // 0x097F
    uint32_t m_animNetworkFlags; // 0x0978
    void* m_animRelativeData; // 0x0984
    void* m_predictedAnimEventData; // 0x0A78
};

class CZiprail {
public:
    void* DT_Ziprail; // 0x0000
    fVector3 m_pathExtentsMins; // 0x1288
    uint32_t m_numZiprailPathNodes; // 0x0F80
    void* m_tangentTypesForPathNodes; // 0x1004
    float m_ziprailPathLen; // 0x1284
    void* m_positionsForPathNodes; // 0x1084
    void* m_numSmoothPointsForPathNodes; // 0x0F84
    fVector3 m_pathExtentsMaxs; // 0x1294
    uint32_t m_ziprailUseAutoDetachSpeed; // 0x12A0
    void* m_smoothDistanceToNode; // 0x1204
};

class CZipline {
public:
    void* m_ziplinePhysics; // 0x0B60
    uint32_t m_ziplineVerticalPreserveVelocity; // 0x095D
    void* DT_Zipline; // 0x0000
    uint32_t m_ziplineMaterialIndex; // 0x0EA8
    void* m_ziplinePositions; // 0x000C
    fVector3 m_ropeColorModulation; // 0x0970
    uint32_t m_prevZipline; // 0x0B50
    uint32_t m_detachEndOnUse; // 0x0950
    uint32_t m_nextZipline; // 0x0B54
    uint32_t m_dropToBottom; // 0x0951
    float m_ziplineAutoDetachDistance; // 0x0954
    float m_ziplineMountReverseDistance; // 0x0958
    uint32_t m_ziplineVerticalPushOffInDirectionX; // 0x095C
    float m_ziplineWidth; // 0x0960
    uint32_t m_ziplineEnabled; // 0x0964
    uint32_t m_ziplinePreventManualDetach; // 0x0965
    void* m_ziplineRestPositions; // 0x0EAC
    uint32_t m_numZiplineRestPositions; // 0x0F6C
    float m_ziplineFadeDist; // 0x0968
    float m_ziplineSpeedScale; // 0x096C
    uint32_t m_numZiplinePoints; // 0x0008
};

class CZiplineEnd {
public:
    uint32_t m_verticalPushOffInDirectionX; // 0x0954
    void* DT_ZiplineEnd; // 0x0000
    float m_autoDetachDistance; // 0x0950
    uint32_t m_prevZipline; // 0x0958
};

class CWeaponX {
public:
    void* DT_WeaponX; // 0x0000
    uint32_t m_forcedADS; // 0x161C
    uint32_t m_worldModelIndexOverride; // 0x15E4
    void* LocalWeaponData; // 0x0000
    uint32_t m_idealSequence; // 0x15F4
    uint32_t m_holsterModelIndex; // 0x15EC
    uint32_t m_tossRelease; // 0x1620
    uint32_t m_iWorldModelIndex; // 0x15E8
    uint32_t m_droppedModelIndex; // 0x15F0
    uint32_t m_skinOverride; // 0x1748
    uint32_t m_weaponOwner; // 0x15D0
    int64_t m_energizedEndTime; // 0x1630
    uint32_t m_ActiveState; // 0x15FC
    uint32_t m_networkedFlags; // 0x02D4
    uint32_t m_idealActivity; // 0x15F6
    uint32_t m_curReactiveSkinKnockdownCount; // 0x17F0
    uint32_t m_weaponActivity; // 0x15F8
    uint32_t m_weaponNameIndex; // 0x1820
    uint32_t m_energizeState; // 0x1628
    uint32_t m_scriptActivated; // 0x17EE
    uint32_t m_sustainedLaserNextRandomSeed; // 0x1791
    uint32_t m_lockedSet; // 0x1810
    void* m_modBitfieldCurrent; // 0x17A4
    uint32_t m_targetingLaserEnabledScript; // 0x1744
    uint32_t m_isLoadoutPickup; // 0x1814
    uint32_t m_weapState; // 0x1614
    uint32_t m_fullyHeated; // 0x163C
    uint32_t m_utilityEnt; // 0x1818
    uint32_t m_allowedToUse; // 0x1618
    float m_sustainedLaserCurrentSpread; // 0x178C
    uint32_t m_discarded; // 0x1619
    uint32_t m_offhandSwitchSlot; // 0x1624
    float m_lastChargeFrac; // 0x1758
    uint32_t m_lastEnergizeState; // 0x1629
    float m_heatValue; // 0x1634
    float m_heatValueOnLastFire; // 0x1638
    int64_t m_startEnergizingTime; // 0x162C
    uint32_t m_customActivity; // 0x163E
    uint32_t m_skinOverrideIsValid; // 0x174C
    uint32_t m_customActivitySequence; // 0x1640
    uint32_t m_curReactiveSkinKillCount; // 0x17EF
    uint32_t m_customActivityOwner; // 0x1644
    int64_t m_customActivityEndTime; // 0x1648
    void* m_emissiveEventData; // 0x17F8
    uint32_t m_customActivityFlags; // 0x164C
    void* m_playerData; // 0x1650
    uint32_t m_oaActiveOverride; // 0x182C
    void* predictingClientOnly; // 0x0000
    uint32_t m_lastTossedGrenade; // 0x1740
    uint32_t m_needsReloadCheck; // 0x1745
    uint32_t m_needsEmptyCycleCheck; // 0x1746
    uint32_t m_shouldPlayIdleAnims; // 0x17EC
    uint32_t m_shouldPlaySprintAnims; // 0x17ED
    uint32_t m_sharedWeaponXp; // 0x1834
    float m_scriptVectorTransitionStartTime; // 0x17C4
    int64_t m_chargeEndTime; // 0x1754
    uint32_t m_parentTurret; // 0x1830
    uint32_t m_bClientSideAnimation; // 0x0F0E
    int64_t m_chargeStartTime; // 0x1750
    int64_t m_sustainedDischargeEndTime; // 0x1788
    uint32_t m_sustainedDischargeIsInPrimaryAttack; // 0x1790
    float m_lastEnergizeFrac; // 0x175C
    void* m_modBitfieldInternal; // 0x179C
    void* m_modBitfieldFromPlayer; // 0x1794
    void* m_modBitfieldDisabled; // 0x17AC
    uint32_t m_curSharedEnergyCost; // 0x17B4
    uint32_t m_grappleWeaponNeedsDryfire; // 0x17B8
    float m_scriptFloat0; // 0x17BC
    float m_scriptVectorTransitionDuration; // 0x17C0
    fVector3 m_scriptVectorTransitionStart; // 0x17C8
    fVector3 m_scriptVectorTransitionEnd; // 0x17D4
    fVector3 m_scriptVector; // 0x17E0
};

class CTEProjectileTrail {
public:
    uint32_t m_projectileTrailIndex; // 0x0050
    void* m_modBitfield; // 0x0048
    void* DT_TEProjectileTrail; // 0x0000
    uint32_t m_owner; // 0x0028
    fVector3 m_startPos; // 0x002C
    fVector3 m_endPos; // 0x0038
    uint32_t m_weaponClassIndex; // 0x0044
    uint32_t m_impactEffectTable; // 0x0054
};

class CProjectile {
public:
    uint32_t m_cellX; // 0x0048
    uint32_t m_cellY; // 0x004C
    uint32_t m_cellZ; // 0x0050
    void* m_passThroughPoints; // 0x1608
    uint32_t m_nModelIndex; // 0x0060
    fVector3 m_localOrigin; // 0x0054
    void* m_overrideMods; // 0x15E8
    uint32_t m_passThroughDepthTotal; // 0x15DC
    fVector3 m_localAngles; // 0x0384
    uint32_t m_passThroughModCount; // 0x1604
    uint32_t m_CollisionGroup; // 0x0430
    uint32_t m_iTeamNum; // 0x0334
    uint32_t m_PredictableID; // 0x06C4
    uint32_t m_hOwnerEntity; // 0x0398
    uint32_t m_weaponDataIsSet; // 0x15D0
    uint32_t m_forceAdjustToGunBarrelDisabled; // 0x15D1
    uint32_t m_weaponClassIndex; // 0x15D4
    float m_destructionDistance; // 0x15D8
    uint32_t m_impactEffectTable; // 0x15F4
    uint32_t m_reducedEffects; // 0x15F8
    void* m_modBitfield; // 0x15E0
    uint32_t m_projectileTrailIndex; // 0x15F0
    int64_t m_projectileCreationTimeServer; // 0x15FC
    uint32_t m_weaponSource; // 0x1600
    void* m_preModdedTrailEffectIndices1p; // 0x1614
    void* m_preModdedTrailEffectIndices3p; // 0x1618
    fVector3 m_launchOrigin; // 0x161C
    fVector3 m_vecVelocity; // 0x0378
    uint32_t m_networkedFlags; // 0x02D4
    int64_t m_realmsBitMask; // 0x0918
};

class CMissile {
public:
    uint32_t m_useTargetPosition; // 0x2F80
    void* DT_Missile; // 0x0000
    uint32_t m_hSpecificTarget; // 0x2F64
    fVector3 m_targetPosition; // 0x2F74
};

class CCrossbowBolt {
public:
    void* DT_CrossbowBolt; // 0x0000
};

class CVortexSphere {
public:
    float m_radius; // 0x0954
    uint32_t m_spawnflags; // 0x00C4
    void* DT_VortexSphere; // 0x0000
    uint32_t m_enabled; // 0x0950
    float m_height; // 0x0958
    float m_bulletFov; // 0x095C
    uint32_t m_bulletAbsorbedCount; // 0x0960
    uint32_t m_projectileAbsorbedCount; // 0x0964
    uint32_t m_iMaxHealth; // 0x0468
    uint32_t m_ownerWeapon; // 0x0968
    uint32_t m_vortexEffect; // 0x096C
    fVector3 m_vortexLocalAngles; // 0x0970
    const char* m_gunAttachment; // 0x0980
    uint32_t m_iHealth; // 0x0324
};

class CHealthKit {
public:
    void* DT_HealthKit; // 0x0000
    void* m_minimapData; // 0x0838
};

class CTurret {
public:
    float m_forceAimYaw; // 0x1958
    uint32_t m_iMaxHealth; // 0x0468
    void* DT_Turret; // 0x0000
    uint32_t m_settingsIndex; // 0x1918
    uint32_t m_driver; // 0x192C
    uint32_t m_iHealth; // 0x0324
    float m_driverDetachTime; // 0x195C
    float m_forceAimPitch; // 0x1954
    uint32_t m_driverState; // 0x1960
    uint32_t m_turretWeapon; // 0x1964
    void* m_overlayEventParity; // 0x16E1
    const char* m_title; // 0x1970
};

class CScriptTraceVolume {
public:
    void* DT_ScriptTraceVolume; // 0x0000
    float m_sphereRadius; // 0x0954
    uint32_t m_shapeType; // 0x0950
    fVector3 m_boxMins; // 0x0958
    fVector3 m_boxMaxs; // 0x0964
    uint32_t m_drawDebug; // 0x0970
};

class CGrappleHook {
public:
    uint32_t m_cellX; // 0x0048
    uint32_t moveparent; // 0x001C
    uint32_t m_cellY; // 0x004C
    uint32_t m_cellZ; // 0x0050
    fVector3 m_localOrigin; // 0x0054
    uint32_t m_parentAttachment; // 0x0020
    fVector3 m_localAngles; // 0x0384
    uint32_t m_grappleZipline; // 0x15D0
    uint32_t m_hOwnerEntity; // 0x0398
    uint32_t m_nModelIndex; // 0x0060
    uint32_t m_visibilityFlags; // 0x032C
    int64_t m_realmsBitMask; // 0x0918
};

class CPredictedFirstPersonProxy {
public:
    void* DT_PredictedFirstPersonProxy; // 0x0000
};

class CFirstPersonProxy {
public:
    void* DT_FirstPersonProxy; // 0x0000
    uint32_t m_viewModelOwner; // 0x1600
};

class CPortal_PointPush {
public:
    void* DT_PortalPointPush; // 0x0000
    uint32_t m_bEnabled; // 0x0950
    float m_flMagnitude; // 0x0954
    float m_flRadius; // 0x0958
    float m_flInnerRadius; // 0x095C
    float m_flConeOfInfluence; // 0x0960
};

