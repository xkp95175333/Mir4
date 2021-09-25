// Enum MirMobile.EFSM_TYPE
enum class EFSM_TYPE : uint8 {
	EFSM_NONE,
	EFSM_INIT,
	EFSM_IDLE,
	EFSM_WALK,
	EFSM_MOVE,
	EFSM_ATTACK,
	EFSM_DIE,
	EFSM_TRACE,
	EFSM_RUNAWAY,
	EFSM_ROLL,
	EFSM_RIDE,
	EFSM_NORMAL_ATTACK,
	EFSM_SKILL,
	EFSM_AIRWALK,
	EFSM_GATHER,
	EFSM_HIT,
	EFSM_STUN,
	EFSM_TAUNT,
	EFSM_LAPIDFICATION,
	EFSM_PUSHPULL,
	EFSM_CLIFFMOVE,
	EFSM_TURN,
	EFSM_SLEEP,
	EFSM_AWAKE,
	EFSM_WARP,
	EFSM_EMOTION,
	EFSM_COMEBACK,
	EFSM_AUTOAIRWALK,
	EFSM_CCSLEEP,
	EFSM_AUTOMOVE,
	EFSM_CHANGEPOS,
	EFSM_EMOTE,
	EFSM_MAX,
};

// Enum MirMobile.EPKModeType
enum class EPKModeType : uint8 {
	BP_DefaultNone,
	Peace,
	GoodEvil,
	Enemy,
	ALLKill,
	Duel,
	Siege,
	War,
	Peace_ServerVisit,
	GoodEvil_ServerVisit,
	Enemy_ServerVisit,
	ALLKill_ServerVisit,
	EPKModeType_MAX,
};

// Enum MirMobile.ERegionCode
enum class ERegionCode : uint8 {
	ASIA,
	EU,
	NA,
	ASIA2,
	NA2,
	SA,
	ASIA3,
	ERegionCode_MAX,
};

// Enum MirMobile.ELanguage
enum class ELanguage : uint8 {
	KOR,
	CHT,
	CHS,
	JPN,
	ENG,
	THA,
	IND,
	VIE,
	GER,
	SPA,
	POR,
	RUS,
	MAX,
};

// Enum MirMobile.ETriggerType
enum class ETriggerType : uint8 {
	NONE,
	BEGINPLAY,
	ENDPLAY,
	MOVE,
	MONSTER_GROUP,
	MONSTER_KILL_CHECK,
	WALL,
	FIXEDCAMERA,
	GUARD_NPC_SPAWNER,
	GUARD_NPC_MOVE,
	GUARD_NPC_ENTER_CHECK,
	DIRECTING,
	CREATEWIDGET,
	QUESTCOMPLETE,
	TIMER,
	QUEST_STATUS_CHECK,
	SCRIPT,
	MONSTER_MOVE,
	COUNT,
	PLAYSOUND,
	CONDITIONCHECK,
	PHASEAREA,
	MONSTER_KILL,
	SCRIPT_MONSTER_KILL_CHECK,
	OPOBJECT,
	MISSION_FAIL,
	NPCSHOW,
	EFFECTSHOW,
	PCWARP,
	DO_ONCE,
	INVINCIBILITY,
	OTHER,
	ETriggerType_MAX,
};

// Enum MirMobile.EAutoFlightGroup
enum class EAutoFlightGroup : uint8 {
	GROUP_A,
	GROUP_B,
	GROUP_C,
	GROUP_MAX,
};

// Enum MirMobile.CAM_POSTPROCESS_TYPE
enum class CAM_POSTPROCESS_TYPE : uint8 {
	BLIND,
	FASTRUN,
	DASH_HIT,
	CAM_POSTPROCESS_MAX,
};

// Enum MirMobile.ECameraModeType
enum class ECameraModeType : uint8 {
	FIELD_AUTO,
	FIELD_QUATERVIEW,
	MANUAL_CONTROL,
	CAMERASET,
	NPCDIALOGUE,
	MONSTERSKILL,
	LOCKON_TARGET,
	ECameraModeType_MAX,
};

// Enum MirMobile.EAutoCameraType
enum class EAutoCameraType : uint8 {
	NONE,
	DEFAULT,
	MANUAL_MOVING,
	WALK_AUTO_MOVING,
	RIDE_AUTO_MOVING,
	AIR_WALK,
	MANUAL_BATTLE,
	AUTO_BATTLE,
	SKILL_ING,
	SKILL_END,
	EAutoCameraType_MAX,
};

// Enum MirMobile.EBoneVectorType
enum class EBoneVectorType : uint8 {
	X,
	Y,
	Z,
	EBoneVectorType_MAX,
};

// Enum MirMobile.EBoneDataType
enum class EBoneDataType : uint8 {
	LOCATION,
	ROTATION,
	SCALE,
	EBoneDataType_MAX,
};

// Enum MirMobile.ECharMaterialParameterType
enum class ECharMaterialParameterType : uint8 {
	eCharMaterialParamType_Vector,
	eCharMaterialParamType_Scalar,
	eCharMaterialParamType_MAX,
};

// Enum MirMobile.EPlayAniType
enum class EPlayAniType : uint8 {
	NONE,
	MOVING,
	FIRST,
	SECOND,
	IDLE,
	EPlayAniType_MAX,
};

// Enum MirMobile.EWarpState
enum class EWarpState : uint8 {
	None,
	Cast,
	Start,
	End,
	EWarpState_MAX,
};

// Enum MirMobile.EAIRWALK_STATE
enum class EAIRWALK_STATE : uint8 {
	AIR_NONE,
	AIR_JUMP01,
	AIR_JUMP02,
	AIR_JUMP03,
	AIR_JUMP04,
	AIR_FALL01,
	AIR_FALL02,
	AIR_WALLJUMP,
	AIR_DASH_READY1,
	AIR_DASH_READY2,
	AIR_FLY,
	AIR_FLY2,
	AIR_LAND,
	AIR_MAX,
};

// Enum MirMobile.ChanegeInfoReason
enum class ChanegeInfoReason : uint8 {
	Sync,
	AutoRecovery,
	Buff,
	Skill,
	ChanegeInfoReason_MAX,
};

// Enum MirMobile.HeightState
enum class HeightState : uint8 {
	None,
	Airwalk,
	CliffMove,
	RideMonster,
	HeightState_MAX,
};

// Enum MirMobile.ACTION_STATE
enum class ACTION_STATE : uint8 {
	BP_DefaultNone,
	None,
	Ride,
	Casting,
	ACTION_MAX,
};

// Enum MirMobile.AIRWALKBAN
enum class AIRWALKBAN : uint8 {
	AIRWALK_NOLIMITE,
	AIRWALK_FIRSTJUMP,
	AIRWALK_SECONDJUMP,
	AIRWALK_DISABLE,
	AIRWALK_MAX,
};

// Enum MirMobile.EBroadCastType
enum class EBroadCastType : uint8 {
	Normal,
	Wide,
	VeryWide,
	NoLimit,
	EBroadCastType_MAX,
};

// Enum MirMobile.FFadeState
enum class FFadeState : uint8 {
	StopFade,
	StartFadeIn,
	StartFadeOut,
	FFadeState_MAX,
};

// Enum MirMobile.EGenderType
enum class EGenderType : uint8 {
	NEUTRAL,
	MALE,
	FEMALE,
	EGenderType_MAX,
};

// Enum MirMobile.AIRWALK_TYPE
enum class AIRWALK_TYPE : uint8 {
	None,
	First,
	FirstEnd,
	Second,
	WallJump,
	Dash,
	DashJumpReady,
	DashJump,
	Land,
	LandEnd,
	Fall,
	Max,
};

// Enum MirMobile.EAutoMoveState
enum class EAutoMoveState : uint8 {
	None,
	AutoMove_Map,
	AutoMove_Quest,
	AutoMove_ReturnToCenter,
	AutoMove_Gather,
	AutoMove_ForceMove,
	AutoMove_GroupMeditation,
	AutoMove_Unknown,
	AutoMove_Trace,
	AutoMove_SelfComebackbyBattle,
	AutoMove_SelfComebackbyCounter,
	EAutoMoveState_MAX,
};

// Enum MirMobile.EBehaviorType
enum class EBehaviorType : uint8 {
	Default,
	Counter,
	AutoBattle,
	AutoGather,
	EBehaviorType_MAX,
};

// Enum MirMobile.EAutoBattleState
enum class EAutoBattleState : uint8 {
	None,
	AutoBattle_NoSkill,
	AutoBattle_Skill,
	AutoBattle_Gather,
	EAutoBattleState_MAX,
};

// Enum MirMobile.AUTO_STATE
enum class AUTO_STATE : uint8 {
	None,
	BATTLE_AUTO,
	GATHER_AUTO,
	BATTLE_GATHER_AUTO,
	PLAY_AUTO,
	MAPMOVE_AUTO,
	QUEST_AUTO,
	AUTO_COUNTER,
	AUTO_MAX,
};

// Enum MirMobile.ECharacterType
enum class ECharacterType : uint8 {
	None,
	PC,
	Monster,
	NPC,
	ECharacterType_MAX,
};

// Enum MirMobile.SKILL_PRODUCTTYPE
enum class SKILL_PRODUCTTYPE : uint8 {
	None,
	ChainMove,
	RotationMove,
	ChainAttack,
	AutoTargetMove,
	SKILL_MAX,
};

// Enum MirMobile.MON_GRADE
enum class MON_GRADE : uint8 {
	None,
	Normal,
	Elite,
	MidBoss,
	StageBoss,
	MON_MAX,
};

// Enum MirMobile.SKILL_STATE_TYPE
enum class SKILL_STATE_TYPE : uint8 {
	Hit,
	StateControl,
	MoveControl,
	SKILL_STATE_MAX,
};

// Enum MirMobile.HIT_REACTION_TYPE
enum class HIT_REACTION_TYPE : uint8 {
	None,
	Hit00,
	Hit01,
	Hit02,
	HIT_REACTION_MAX,
};

// Enum MirMobile.CROWD_CONTROL_TYPE
enum class CROWD_CONTROL_TYPE : uint8 {
	None,
	Hit,
	Stun,
	Taunt,
	LapidifiCation,
	KnockBack,
	KnockDown,
	KnockFront,
	PushToPoint,
	Sleep,
	AttackBack,
	CROWD_CONTROL_MAX,
};

// Enum MirMobile.CCSTANCE
enum class CCSTANCE : uint8 {
	None,
	Hit01,
	Hit02,
	Hit03,
	Stu01,
	Down01,
	Down02,
	Down03,
	HOV01,
	Air01,
	StateEnd,
	CCSTANCE_MAX,
};

// Enum MirMobile.ACT_TYPE
enum class ACT_TYPE : uint8 {
	None,
	TargetAct,
	ZoneAct,
	ACT_MAX,
};

// Enum MirMobile.DAMAGE_ATTRIBUTE
enum class DAMAGE_ATTRIBUTE : uint8 {
	None,
	FireDmg,
	FrozenDmg,
	LightningDmg,
	PoisonDmg,
	HolyDmg,
	DAMAGE_MAX,
};

// Enum MirMobile.PIERCE_TYPE
enum class PIERCE_TYPE : uint8 {
	None,
	PierceAtk,
	ChainAtk,
	PIERCE_MAX,
};

// Enum MirMobile.BULLET_MOVE_TYPE
enum class BULLET_MOVE_TYPE : uint8 {
	None,
	TargetMove,
	GroundMove,
	TargetCurve,
	DirectMove,
	BULLET_MOVE_MAX,
};

// Enum MirMobile.BULLET_TYPE
enum class BULLET_TYPE : uint8 {
	None,
	SingleTarget,
	EachTarget,
	BULLET_MAX,
};

// Enum MirMobile.IMPACT_SPAWN_TYPE
enum class IMPACT_SPAWN_TYPE : uint8 {
	None,
	RandomPos,
	CurrentPos,
	AttackStartPos,
	IMPACT_SPAWN_MAX,
};

// Enum MirMobile.IMPACT_TYPE
enum class IMPACT_TYPE : uint8 {
	Target,
	TargetCircle,
	SelfCircle,
	SelfDirect,
	Cross,
	IMPACT_MAX,
};

// Enum MirMobile.GUIDE_EFFECT_APPLY_TYPE
enum class GUIDE_EFFECT_APPLY_TYPE : uint8 {
	ForSelf,
	ForEnemy,
	ForAlly,
	ForAll,
	GUIDE_EFFECT_APPLY_MAX,
};

// Enum MirMobile.GUIDE_TYPE
enum class GUIDE_TYPE : uint8 {
	None,
	SectorForm,
	Circle,
	Direct,
	Cross,
	GUIDE_MAX,
};

// Enum MirMobile.ATTACK_USE_TYPE
enum class ATTACK_USE_TYPE : uint8 {
	TargetAtk,
	InstantAtk,
	ATTACK_USE_MAX,
};

// Enum MirMobile.ATTACK_VIEW_TARGE
enum class ATTACK_VIEW_TARGE : uint8 {
	TargetView,
	AttackStand,
	Stand,
	ATTACK_VIEW_MAX,
};

// Enum MirMobile.ATTACK_MOVE_TYPE
enum class ATTACK_MOVE_TYPE : uint8 {
	None,
	TargetMov,
	DirectMov,
	ForwardMov,
	ATTACK_MOVE_MAX,
};

// Enum MirMobile.ATTACK_TYPE
enum class ATTACK_TYPE : uint8 {
	None,
	DefaultAttack,
	DashAttack,
	JumpAttack,
	TeleportAttack,
	ATTACK_MAX,
};

// Enum MirMobile.ATTACK_ANI_TYPE
enum class ATTACK_ANI_TYPE : uint8 {
	None,
	NormalAttack,
	SkillAttack,
	EventAttack,
	ATTACK_ANI_MAX,
};

// Enum MirMobile.DAMAGE_TYPE
enum class DAMAGE_TYPE : uint8 {
	None,
	Physical,
	Magic,
	DAMAGE_MAX,
};

// Enum MirMobile.SKILLCOST_TYPE
enum class SKILLCOST_TYPE : uint8 {
	None,
	Rage,
	Mana,
	Psychic,
	Vitality,
	Madness,
	SKILLCOST_MAX,
};

// Enum MirMobile.DISTANCE_TYPE
enum class DISTANCE_TYPE : uint8 {
	None,
	Aggro,
	Near,
	Far,
	Random,
	DISTANCE_MAX,
};

// Enum MirMobile.TARGET_SUBTYPE
enum class TARGET_SUBTYPE : uint8 {
	AliveOnly,
	DeadOnly,
	All,
	TARGET_MAX,
};

// Enum MirMobile.TARGET_TYPE
enum class TARGET_TYPE : uint8 {
	ALL,
	Enemy,
	Myself,
	Friend,
	FriendAll,
	TARGET_MAX,
};

// Enum MirMobile.USE_CONTROL_TYPE
enum class USE_CONTROL_TYPE : uint8 {
	None,
	ChargingControl,
	DodgeControl,
	DirectionControl,
	USE_CONTROL_MAX,
};

// Enum MirMobile.EPlayerClassID
enum class EPlayerClassID : uint8 {
	NONE,
	PCW,
	PCM,
	PCT,
	PCA,
	PCZ,
	EPlayerClassID_MAX,
};

// Enum MirMobile.EDungeonTicketType
enum class EDungeonTicketType : uint8 {
	TYPE_NONE,
	TYPE_SECRET_TICKET,
	TYPE_SQUARE_TICKET,
	TYPE_INDUN_TICKET,
	TYPE_BOSS_INDUN_TICKET,
	TYPE_WORLD_BOSS_TICKET,
	TYPE_MAX,
};

// Enum MirMobile.ETimeTicketType
enum class ETimeTicketType : uint8 {
	TYPE_NONE,
	TYPE_ACTION_POINT,
	TYPE_HEART,
	GUILD_DONATE,
	ETimeTicketType_MAX,
};

// Enum MirMobile.ECostType
enum class ECostType : uint8 {
	TYPE_NONE,
	TYPE_COIN,
	TYPE_SILVER_COIN,
	TYPE_GOLD_COIN,
	TYPE_GOLD_COIN_FREE,
	TYPE_SAPPHIRE,
	TYPE_GOLD_COIN_EVENT,
	TYPE_ENERGY_POINT,
	TYPE_BLACK_IRON,
	TYPE_GUILD_POINT,
	TYPE_ACCELERATION_POINT,
	TYPE_DRAGON_JADE,
	TYPE_ANCIENT_COIN,
	TYPE_GUILD_GOLD,
	TYPE_GUILD_COIN,
	TYPE_GUILD_BLACKIRON,
	TYPE_GUILD_SPIRIT,
	TYPE_MAX,
};

// Enum MirMobile.ECostMainType
enum class ECostMainType : uint8 {
	TYPE_NONE,
	TYPE_MONEY,
	TYPE_TIME_TICKET,
	TYPE_DUNGEON_TICKET,
	TYPE_MAX,
};

// Enum MirMobile.EConditionTriggerTargetType
enum class EConditionTriggerTargetType : uint8 {
	PC,
	MONSTER,
	EConditionTriggerTargetType_MAX,
};

// Enum MirMobile.ECondtionTriggerType
enum class ECondtionTriggerType : uint8 {
	HP,
	ECondtionTriggerType_MAX,
};

// Enum MirMobile.EContentsLightType
enum class EContentsLightType : uint8 {
	NONE,
	CUSTOMIZING_CHARACTER,
	UI_CHARACTER,
	UI_FORCE,
	VEHICLE,
	PET_DARK,
	PET_BRIGHT,
	EContentsLightType_MAX,
};

// Enum MirMobile.EQuestDialogueType
enum class EQuestDialogueType : uint8 {
	None,
	MainQuest,
	RelationQuest,
	RequestQuest,
	EQuestDialogueType_MAX,
};

// Enum MirMobile.EDEBUG
enum class EDEBUG : uint8 {
	NONE,
	GAME_MODE,
	WIDGET_VISIBLE,
	TEMPITEM_CREATE,
	CHAR_STAT,
	NET_PC,
	PC_STATE,
	BATTLE,
	ITEM_WIDGET_SORT,
	EDEBUG_MAX,
};

// Enum MirMobile.ELOGTYPE
enum class ELOGTYPE : uint8 {
	FIXED,
	LIST,
	ELOGTYPE_MAX,
};

// Enum MirMobile.EWorld_Type
enum class EWorld_Type : uint8 {
	None,
	Game,
	Editor,
	PIE,
	EditorPreview,
	GamePreview,
	GameRPC,
	Inactive,
	EWorld_MAX,
};

// Enum MirMobile.EDirectingTriggerType
enum class EDirectingTriggerType : uint8 {
	SMALL_TALK,
	CINEMATIC_DIALOGUE,
	LEVEL_SEQUENCE,
	EDirectingTriggerType_MAX,
};

// Enum MirMobile.EContentsSceneType
enum class EContentsSceneType : uint8 {
	NONE,
	Force,
	Equip,
	Mastery,
	Vehicle,
	Customizing,
	Costume,
	CharacterSelect,
	ClassSelect,
	Pet,
	Costume_Uniform,
	EContentsSceneType_MAX,
};

// Enum MirMobile.EClassType
enum class EClassType : uint8 {
	NONE,
	PCW,
	PCM,
	PCT,
	PCA,
	PCZ,
	EClassType_MAX,
};

// Enum MirMobile.EBattlePassRewardGroup
enum class EBattlePassRewardGroup : uint8 {
	eGroup_Normal,
	eGroup_Preminum1,
	eGroup_Preminum2,
	eGroup_All,
	eGroup_MAX,
};

// Enum MirMobile.EBuffSocketType
enum class EBuffSocketType : uint8 {
	NONE,
	Root,
	Buff_Mid,
	Buff_Top,
	EBuffSocketType_MAX,
};

// Enum MirMobile.COSTUME_PARTS
enum class COSTUME_PARTS : uint8 {
	PARTS_NONE,
	PARTS_WEAPON,
	PARTS_HAIR,
	PARTS_CLOTHES,
	PARTS_SHOULDERS,
	PARTS_BACK,
	PARTS_WAIST,
	PARTS_MAX,
};

// Enum MirMobile.ECustomizingComponentType
enum class ECustomizingComponentType : uint8 {
	LIST,
	PALETTE,
	SLIDER,
	PICKER,
	LIST_MESH,
	LIST_COSTUME,
	LIST_ANI,
	COSTUME_DYE,
	NONE,
	ECustomizingComponentType_MAX,
};

// Enum MirMobile.EGameOptionDefaultSettingType
enum class EGameOptionDefaultSettingType : uint8 {
	Table,
	Device,
	EGameOptionDefaultSettingType_MAX,
};

// Enum MirMobile.EGameOptionDataType
enum class EGameOptionDataType : uint8 {
	DEVICE,
	CHARACTER,
	DEFAULT,
	EGameOptionDataType_MAX,
};

// Enum MirMobile.EGameOptionType
enum class EGameOptionType : uint8 {
	None,
	G_AutoBattleFunction,
	G_AutoBattleRange,
	G_AutoSkill,
	G_LeaderCenteredBattle,
	G_AutoReturnOnDeath,
	G_AutoLockOn,
	G_AutoCounterAttack,
	G_QuickSlotAutoPotion_1,
	G_QuickSlotAutoPotion_2,
	G_QuickSlotAutoPotion_3,
	G_AutoPotionHpPercent,
	G_AutoPotionMpPercent,
	G_QuickSlotAutoEquip,
	G_GuildMarkOption,
	G_UserMarkOption,
	G_MyNameOption,
	G_UserNameOption,
	G_MonNameOption,
	G_EffectVisual,
	G_SleepModeStartTime,
	G_UnSleepModeWhenAttacked,
	G_PartyUIAutoVisible,
	G_BuddyRequestAutoReject,
	G_BuddyLoginNotice,
	G_ComplateQuestSort,
	G_WorldChatItemAsk,
	G_Simple,
	G_ScreenEffect,
	G_Texture,
	G_Resolution,
	G_FrameSpeed,
	G_Visual,
	G_SkillEffect,
	G_MasterVolume,
	G_BGMVolume,
	G_SFXVolume,
	G_VoiceVolume,
	G_AmbientVolume,
	G_QuickSlotInvenSort,
	G_QuickSlotInvenOrder,
	G_ARejectParty,
	G_ARejectSquad,
	G_CameraShakeScale,
	G_AutoPlayUseSkill,
	G_StageSectorVisible,
	G_ComboCounterViewable,
	G_ItemFilterJunkItemFirst,
	G_ItemFilterItemGrade01,
	G_ItemFilterItemGrade02,
	G_ItemFilterItemGrade03,
	G_HideGuildGiftName,
	G_PartyBattleTargetShare,
	G_BattleTargetType,
	G_TargetBossMon,
	G_TargetNormalMon,
	G_TargetEnemyGuild,
	G_TargetEnemyUser,
	G_TargetmyGuild,
	G_TargetmyParty,
	G_TradeItemAsk,
	G_MiniMap,
	G_GatherPopUp,
	G_CharacterAlarm,
	G_QuestAlarm,
	G_GreatBuildingAlarm,
	G_ContentsOpenAlarm,
	G_ChattingRenderOpacity,
	G_PushAllAlarm,
	G_PushNightAlarm,
	G_Shadow,
	G_HeadLineMessageType_3,
	G_Pet,
	G_Battle_AutoCamera,
	G_QuickSlotAutoPotion_4,
	G_QuickSlotAutoPotion_5,
	G_QuickSlotAutoPotion_6,
	G_QuickSlotAutoPotion_7,
	G_QuickSlotAutoPotion_8,
	G_QuickSlotAutoPotion_9,
	G_MyGuildMark,
	G_MyAllianceGuildMark,
	G_OtherGuildMark,
	G_TargetEnemyGuildWar,
	G_PKAlarm,
	G_SkillDarkChange,
	G_SkillCameraZoom,
	G_CameraMode,
	G_ItemSmelting_Break_Hero,
	G_CharacterMaxLevelAlarm,
	G_ExpBoosterMaxLevelAlarm,
	G_CostumeTitleOption,
	G_FastUnsealingStart,
	G_HUDAutoResizing,
	G_PingVisible,
	EGameOptionType_MAX,
};

// Enum MirMobile.EOfficialType
enum class EOfficialType : uint8 {
	Master,
	Sub_Official_1,
	Sub_Official_2,
	Sub_Official_3,
	Sub_Official_4,
	Sub_Official_5,
	EOfficialType_MAX,
};

// Enum MirMobile.EGuildWarMonsterKind
enum class EGuildWarMonsterKind : uint8 {
	NONE,
	CAPTURE,
	BARRICADE,
	CASTLEGATE,
	LEVER,
	SIEGETOWER,
	CATAPULT,
	EGuildWarMonsterKind_MAX,
};

// Enum MirMobile.EGuildWarObjectOwnerShip
enum class EGuildWarObjectOwnerShip : uint8 {
	NEUTRAL,
	DEFENSE,
	OFFENSE,
	EGuildWarObjectOwnerShip_MAX,
};

// Enum MirMobile.EGuildWarObjectKind
enum class EGuildWarObjectKind : uint8 {
	NONE,
	RevivalFlag,
	EGuildWarObjectKind_MAX,
};

// Enum MirMobile.EMemberKind
enum class EMemberKind : uint8 {
	Member_6,
	Member_11,
	Member_16,
	Member_MAX,
};

// Enum MirMobile.EDungeonKind
enum class EDungeonKind : uint8 {
	Normal,
	Boss,
	EDungeonKind_MAX,
};

// Enum MirMobile.EDungeonCategory
enum class EDungeonCategory : uint8 {
	NONE,
	EXP,
	GOLD,
	MATERIAL,
	EQUIPMENT,
	VEHICLE,
	GEM,
	SKILLSTONE,
	EDungeonCategory_MAX,
};

// Enum MirMobile.EItemDataFeatureAvailability
enum class EItemDataFeatureAvailability : uint8 {
	NONE,
	EQUIPMENT_RECOMMEND,
	DEFAULT,
	EItemDataFeatureAvailability_MAX,
};

// Enum MirMobile.EItemGetWayMine
enum class EItemGetWayMine : uint8 {
	MineNormal,
	MineSpecial,
	Mine_BlockIron,
	EItemGetWayMine_MAX,
};

// Enum MirMobile.EItemGetWayNPCStore
enum class EItemGetWayNPCStore : uint8 {
	NPCStoreNormal,
	NPCStoreSpecial,
	EItemGetWayNPCStore_MAX,
};

// Enum MirMobile.EItemGetWayItemMake
enum class EItemGetWayItemMake : uint8 {
	ItemMakeUI,
	ItemMakeNPC,
	ItemMakeNPC_Exchange,
	EItemGetWayItemMake_MAX,
};

// Enum MirMobile.EItemGetWayGather
enum class EItemGetWayGather : uint8 {
	GatherNormal,
	GatherSpecial,
	EItemGetWayGather_MAX,
};

// Enum MirMobile.EItemGetWayMonster
enum class EItemGetWayMonster : uint8 {
	NONE,
	MonsterGrade12,
	MonsterGrade34,
	EItemGetWayMonster_MAX,
};

// Enum MirMobile.EGetItemWayType
enum class EGetItemWayType : uint8 {
	None,
	Store,
	Monster,
	NamedMonster,
	Gather,
	Dungeon_Hunt,
	Dungeon_Gather,
	ItemMake,
	Achievement,
	DictionaryMonster,
	OpenBox,
	NPCStore,
	MagicSquare,
	Boss_Monster,
	Quest_Mission,
	Quest_Relation,
	Mine,
	Box_Search,
	EGetItemWayType_MAX,
};

// Enum MirMobile.EItemGetWayLinkType
enum class EItemGetWayLinkType : uint8 {
	NONE,
	MONSTER,
	OBJECT,
	SHOP_GOODS,
	NPC_SHOP_GOODS,
	ITEM_MAKE,
	ACHIEVEMENT,
	ITEM_RANDOM_GET,
	ITEM_PACKAGE,
	QUEST_RELATION,
	QUEST_DAILY,
	QUEST_MISSION,
	QUEST_REQUEST,
	JEWEL_UPGRADE,
	INSTANCE_DUNGEON_INFO,
	GREAT_BUILDING_STEP,
	BOSS_WORLD,
	GUILD_EXPEDITION,
	ITEM,
	QUEST_DAILY_PLUS_REWARD,
	GACHA_INFO,
	ITEM_MATERIAL_COMPOSE,
	MAIN_QUEST,
	USER_EVENT,
	SHOP_GOODS_ITEM_PACKAGE,
	GUILD_SHOP,
	DUNGEON_SHOP,
	QUEST_DROP_ITEM,
	ITEM_TRANSCENDENCE_DEFINE,
	EItemGetWayLinkType_MAX,
};

// Enum MirMobile.EItemGetWayCategoryType
enum class EItemGetWayCategoryType : uint8 {
	None,
	Store,
	Cash_Store,
	Meditation,
	Monster,
	NamedMonster,
	Gather,
	Dungeon_Hunt,
	Dungeon_Gather,
	ItemMake,
	Achievement,
	ItemUpgrade,
	DictionaryMonster,
	OpenBox,
	NPCStore,
	MagicSquare,
	Boss_Monster,
	Quest_Mission,
	Quest_Relation,
	Mine,
	Box_Search,
	Quest_Request,
	Daily_Work,
	Great_Building,
	Secret_Dungeon,
	NPC_ItemMake,
	Daily_HomeWork,
	Gacha,
	Material_Compse,
	MainQuest,
	NPC_Exchange,
	Guild_SHOP,
	Dungeon_Shop,
	Quest_DropItem,
	Transcendence,
	MAX_ItemGetWayType,
	EItemGetWayCategoryType_MAX,
};

// Enum MirMobile.EItemGetWayType
enum class EItemGetWayType : uint8 {
	NONE,
	SHOP,
	HUNTING,
	COLLECTING,
	GUILD_GIFT,
	NPC_MAKE,
	UI_MAKE,
	ACHIEVEMENT,
	COLLECTION,
	RANDOMBOX,
	SHOP_NPC,
	QUEST_MISSION,
	RELATION,
	QUEST_DAILY,
	QUEST_REQUEST,
	NPC_BARTER,
	JEWEL_UPGRADE,
	GREAT_BUILDING,
	FIRST_CLEAR_REWARD,
	TRADE,
	GACHA,
	ITEM_MATERIAL_COMPOSE,
	MAIN_QUEST,
	USER_EVENT,
	GUILD_SHOP,
	DUNGEON_SHOP,
	QUEST_DROP,
	TRANSCENDENCE,
	GUILD_EXPEDITION_CHALLANGE,
	GUILD_GIFT_CONTRIBUTE,
	EItemGetWayType_MAX,
};

// Enum MirMobile.EItemGetWayIdType
enum class EItemGetWayIdType : uint8 {
	NONE,
	ITEM,
	COST,
	EItemGetWayIdType_MAX,
};

// Enum MirMobile.EItemGetWayFilterType
enum class EItemGetWayFilterType : uint8 {
	NONE,
	FILTER_COMBATPOINT,
	FILTER_LEVEL,
	EItemGetWayFilterType_MAX,
};

// Enum MirMobile.EItemMakeAgency_FailSlot
enum class EItemMakeAgency_FailSlot : uint8 {
	SLOT_1,
	SLOT_2,
	SLOT_3,
	SLOT_4,
	MAX,
};

// Enum MirMobile.EItemMakeAgency_FailType
enum class EItemMakeAgency_FailType : uint8 {
	NONE,
	COST,
	ITEM,
	EItemMakeAgency_MAX,
};

// Enum MirMobile.EItemMakeAgency_PeriodType
enum class EItemMakeAgency_PeriodType : uint8 {
	NO_PERIOD,
	PERIOD,
	EItemMakeAgency_MAX,
};

// Enum MirMobile.EItemMakeAgencyType
enum class EItemMakeAgencyType : uint8 {
	NO_LIMIT,
	SERVER_LIMIT,
	CHARACTER_LIMIT,
	EItemMakeAgencyType_MAX,
};

// Enum MirMobile.EGetWayType
enum class EGetWayType : uint8 {
	NONE,
	DISPLAY,
	EGetWayType_MAX,
};

// Enum MirMobile.EMakeType
enum class EMakeType : uint8 {
	NONE,
	MAKE_UI,
	MAKE_NPC,
	MAKE_NPC_EXCHANGE,
	MAKE_UI_SPECIAL,
	MAKE_NPC_SPECIAL_EXT,
	MAKE_UI_MATERIAL,
	MAKE_UI_USE,
	MAKE_UI_AGENCY,
	MAKE_NPC_SPECIAL,
	EMakeType_MAX,
};

// Enum MirMobile.EMakeItemType
enum class EMakeItemType : uint8 {
	Normal,
	Normal_Agency,
	Special_UI_Item,
	Special_NPC_Item,
	EMakeItemType_MAX,
};

// Enum MirMobile.EMapMiniInfoStringPosType
enum class EMapMiniInfoStringPosType : uint8 {
	None,
	Top,
	Bottom,
	Left,
	Right,
	EMapMiniInfoStringPosType_MAX,
};

// Enum MirMobile.EMapMiniInfoWayPointType
enum class EMapMiniInfoWayPointType : uint8 {
	None,
	Default,
	Monster,
	MiningZone,
	NPC,
	FixedNPC,
	SummonArea,
	EventNPC,
	Max,
};

// Enum MirMobile.EMapMiniInfoDefSubType
enum class EMapMiniInfoDefSubType : uint8 {
	None,
	Portal,
	Area,
	ShopNPC,
	Max,
};

// Enum MirMobile.EMapMiniInfoMainType
enum class EMapMiniInfoMainType : uint8 {
	None,
	Default,
	Waypoint,
	SafetyArea,
	Max,
};

// Enum MirMobile.EMoneyGetWayType
enum class EMoneyGetWayType : uint8 {
	None,
	Cash_Store,
	Gather,
	Daily_Work,
	Meditation,
	MagicSquare,
	Quest_Mission,
	Event,
	TreasureGoblin,
	Trade,
	EMoneyGetWayType_MAX,
};

// Enum MirMobile.EMONSTER_FACTION
enum class EMONSTER_FACTION : uint8 {
	Neutral,
	Friendly,
	Hostile,
	Hostile2,
	Hostile3,
	Hostile4,
	Hostile5,
	EMONSTER_MAX,
};

// Enum MirMobile.ENPCShopGoodsLimitType
enum class ENPCShopGoodsLimitType : uint8 {
	None,
	Permanent,
	EveryDay,
	Weekend,
	Month,
	ENPCShopGoodsLimitType_MAX,
};

// Enum MirMobile.EObject_GetWayType
enum class EObject_GetWayType : uint8 {
	GATHER_NORMAL,
	GATHER_SPECIAL,
	GATHER_MAX,
};

// Enum MirMobile.EObject_GatherType
enum class EObject_GatherType : uint8 {
	NONE,
	PLANTS,
	ORE,
	BOX,
	JINKI,
	BLACKIRON,
	EObject_MAX,
};

// Enum MirMobile.ERecvOccupationAuction
enum class ERecvOccupationAuction : uint8 {
	RECV_OCCUPATION_INFO,
	RECV_OCCUPATION_AUCTION_BIDDING,
	RECV_OCCUPATION_BATTLE_STATUS,
	RECV_OCCUPATION_ALLIANCE_INVITE_LIST,
	RECV_OCCUPATION_ALLIANCE_INVITE,
	RECV_OCCUPATION_MAX,
};

// Enum MirMobile.EOccupationBidHistoryType
enum class EOccupationBidHistoryType : uint8 {
	NONE,
	BIDDING,
	OCCUPIED,
	BATTLE_RESULT,
	EOccupationBidHistoryType_MAX,
};

// Enum MirMobile.EOccupationBidState
enum class EOccupationBidState : uint8 {
	NONE,
	DEFENSE,
	OFFENSE,
	EOccupationBidState_MAX,
};

// Enum MirMobile.EOccupationAuctionState
enum class EOccupationAuctionState : uint8 {
	INIT,
	NONE,
	STANDBY_AUCTION,
	PROCEEDING_AUCTION,
	EXTEND_AUCTION,
	FAILURE_AUCTION,
	ALLIANCE_INVITE,
	STANDBY_BATTLE,
	START_BATTLE,
	END_BATTLE,
	CONTENTS_CLOSE,
	EOccupationAuctionState_MAX,
};

// Enum MirMobile.EOccupationBattleGuildType
enum class EOccupationBattleGuildType : uint8 {
	NONE,
	DEFENSE_MAIN,
	OFFENSE_MAIN,
	DEFENSE_ALLIANCE_2,
	DEFENSE_ALLIANCE_3,
	OFFENSE_ALLIANCE_2,
	OFFENSE_ALLIANCE_3,
	DEFENSE_GUILD,
	OFFENSE_GUILD,
	MAIN_GUILD,
	ALLIANCE_GUILD,
	ALLIANCE_TO_ALL,
	EOccupationBattleGuildType_MAX,
};

// Enum MirMobile.EFootStepSoundType
enum class EFootStepSoundType : uint8 {
	None,
	Player,
	Horse,
	Tiger,
	Pig,
	WoodenFish,
	EFootStepSoundType_MAX,
};

// Enum MirMobile.EQuestDropItemType
enum class EQuestDropItemType : uint8 {
	MAIN,
	MISSION_NORMAL,
	MISSION_REPEAT,
	DAILY_WORK,
	RELATION,
	REQUEST,
	GUILD,
	EQuestDropItemType_MAX,
};

// Enum MirMobile.ERevivalKillerType
enum class ERevivalKillerType : uint8 {
	UNKNOWN,
	USER,
	MONSTER,
	FALL_DEATH,
	SELF_DEATH,
	ERevivalKillerType_MAX,
};

// Enum MirMobile.ERevivalOptionType
enum class ERevivalOptionType : uint8 {
	NONE,
	SAFE_REVIVAL,
	IMMEDIATE_REVIVAL,
	HELP_REVIVAL,
	ANOTHER_POSITION_REVIVAL,
	MOVE_REVIVAL_ROOM,
	NEED_HEART,
	PK_PENALTY,
	SITUATION_BOARD,
	ERevivalOptionType_MAX,
};

// Enum MirMobile.ERevivalExceptionType
enum class ERevivalExceptionType : uint8 {
	NONE,
	CINEMATIC,
	DUNGEON_REWARD,
	SLEEP_MODE,
	SIEGE_SITUATION_BOARD,
	SIEGE_BATTLERESULT,
	ERevivalExceptionType_MAX,
};

// Enum MirMobile.EDialoguePostion
enum class EDialoguePostion : uint8 {
	NONE,
	BOTTOM,
	MIDDLE,
	BOTTOM_UP,
	EDialoguePostion_MAX,
};

// Enum MirMobile.ESkillCoolState
enum class ESkillCoolState : uint8 {
	None,
	Global_Init,
	Global_After,
	Waiting,
	Cool,
	ESkillCoolState_MAX,
};

// Enum MirMobile.EInitialEntrySequenceType
enum class EInitialEntrySequenceType : uint8 {
	None,
	Sequence,
	Movie,
	EInitialEntrySequenceType_MAX,
};

// Enum MirMobile.EStageFunctionFlag
enum class EStageFunctionFlag : uint8 {
	NONE,
	GUILD_WAR,
	COMBAT_UNIFORM,
	NAMETAG_CLASS,
	MISSION_QUEST_STAGE,
	FIELD,
	SINGLE_FIELD,
	CUSTOM,
	ELITE_DUNGEON,
	ELITE_STAGE,
	UNDER_WORLD,
	BIDO,
	STRONGPOINT,
	OCCUPATION,
	SIEGE,
	WORLD_BOSS,
	SOLO_INSTANCE_DUNGEON,
	PARTY_INSTANCE_DUNGEON,
	MAGIC_SQUEAR,
	SECRET_DUNGEON,
	ARENA_PVP,
	EStageFunctionFlag_MAX,
};

// Enum MirMobile.EItemGetWayStageType
enum class EItemGetWayStageType : uint8 {
	None,
	Normal,
	MagicSquare,
	Gather,
	Mine,
	CombatPower,
	NormalAndCombatPower,
	MineAndCombatPower,
	EItemGetWayStageType_MAX,
};

// Enum MirMobile.EStageType
enum class EStageType : uint8 {
	None,
	Field,
	SingleField,
	Fight,
	Custom,
	EliteDungeon,
	Labyrinth,
	UnderWorld,
	Bido,
	StrongPoint,
	Siege,
	WorldBoss,
	GuildExpedition,
	GuildBossWave,
	Boss_Indun,
	Party_Indun,
	Magic_Square,
	SecretDungeon,
	ArenaPvP,
	Magic_square_StartMap,
	Salon,
	DungeonScript,
	EStageType_MAX,
};

// Enum MirMobile.EToolTipLocation
enum class EToolTipLocation : uint8 {
	Auto,
	LeftTop,
	LeftBottom,
	RightTop,
	RightBottom,
	LeftCenter,
	RightCenter,
	CenterTop,
	CenterBottom,
	EToolTipLocation_MAX,
};

// Enum MirMobile.EVerticalItemGrade
enum class EVerticalItemGrade : uint8 {
	None,
	AutoMake,
	AutoMake_No_Normal,
	Only_Normal,
	Only_Magic,
	Only_Rare,
	Only_Epic,
	Only_Legend,
	EVerticalItemGrade_MAX,
};

// Enum MirMobile.EUIGuideType
enum class EUIGuideType : uint8 {
	COMMENT,
	MINITALK,
	EUIGuideType_MAX,
};

// Enum MirMobile.ETutorialProgressType
enum class ETutorialProgressType : uint8 {
	PAGE,
	SEQUENCEPLAY,
	EFFECTWIDGET,
	ETutorialProgressType_MAX,
};

// Enum MirMobile.EUserEventRewardType
enum class EUserEventRewardType : uint8 {
	RewardType_Money,
	RewardType_Item,
	RewardType_MAX,
};

// Enum MirMobile.EWidgetPopupType
enum class EWidgetPopupType : uint8 {
	NOT_POPUP,
	DEFAULT_POPUP,
	ONLY_ONE_POPUP,
	NOT_MANAGED_POPUP,
	EWidgetPopupType_MAX,
};

// Enum MirMobile.EWidgetOpenAllowTable
enum class EWidgetOpenAllowTable : uint8 {
	DEFAULT,
	ALL,
	CINEMA,
	HUD,
	MESSAGE,
	CHEAT,
	REVIVAL,
	QUEST_POPUP,
	EWidgetOpenAllowTable_MAX,
};

// Enum MirMobile.EGachaResultType
enum class EGachaResultType : uint8 {
	NONE,
	PET,
	SKILLBOOK,
	DRAGON_HEART,
	DRAGON_SCALE,
	DRAGON_CLAW,
	DRAGON_MATERIAL,
	FIXED_PET,
	EGachaResultType_MAX,
};

// Enum MirMobile.EGachaBoxType
enum class EGachaBoxType : uint8 {
	NONE,
	PET,
	SKILLBOOK,
	ITEM,
	EGachaBoxType_MAX,
};

// Enum MirMobile.EGachaType
enum class EGachaType : uint8 {
	NONE,
	PET,
	SKILLBOOK,
	ITEM,
	EGachaType_MAX,
};

// Enum MirMobile.EGalaxyStoreErrorCode
enum class EGalaxyStoreErrorCode : uint8 {
	IAP_ERROR_NONE,
	IAP_PAYMENT_IS_CANCELED,
	IAP_ERROR_INITIALIZATION,
	IAP_ERROR_NEED_APP_UPGRADE,
	IAP_ERROR_COMMON,
	IAP_ERROR_ALREADY_PURCHASED,
	IAP_ERROR_WHILE_RUNNING,
	IAP_ERROR_PRODUCT_DOES_NOT_EXIST,
	IAP_ERROR_CONFIRM_INBOX,
	IAP_ERROR_ITEM_GROUP_DOES_NOT_EXIST,
	IAP_ERROR_NETWORK_NOT_AVAILABLE,
	IAP_ERROR_IOEXCEPTION_ERROR,
	IAP_ERROR_SOCKET_TIMEOUT,
	IAP_ERROR_CONNECT_TIMEOUT,
	IAP_ERROR_NOT_EXIST_LOCAL_PRICE,
	IAP_ERROR_NOT_AVAILABLE_SHOP,
	IAP_ERROR_NEED_SA_LOGIN,
	IAP_MAX,
};

// Enum MirMobile.EOneStoreResponseCode
enum class EOneStoreResponseCode : uint8 {
	IAP_SUCCESS,
	IAP_ERROR_USER_CANCELED,
	IAP_ERROR_SERVICE_UNAVAILABLE,
	IAP_ERROR_BILLING_UNAVAILABLE,
	IAP_ERROR_ITEM_UNAVAILABLE,
	IAP_ERROR_DEVELOPER_ERROR,
	IAP_ERROR_ERROR,
	IAP_ERROR_ITEM_ALREADY_OWNED,
	IAP_ERROR_ITEM_NOT_OWNED,
	IAP_ERROR_FAIL,
	IAP_ERROR_NEED_LOGIN,
	IAP_ERROR_NEED_UPDATE,
	IAP_ERROR_SECURITY_ERROR,
	IAP_ERROR_DATA_PARSING,
	IAP_ERROR_SIGNATURE_VERIFICATION,
	IAP_ERROR_ILLEGAL_ARGUMENT,
	IAP_ERROR_UNDEFINED_CODE,
	IAP_MAX,
};

// Enum MirMobile.EWebPageMode
enum class EWebPageMode : uint8 {
	DEFAULT,
	MODAL,
	EWebPageMode_MAX,
};

// Enum MirMobile.EIAPLogLevel
enum class EIAPLogLevel : uint8 {
	None,
	Trace,
	Information,
	Debug,
	ALL,
	EIAPLogLevel_MAX,
};

// Enum MirMobile.EWSPaymentStep
enum class EWSPaymentStep : uint8 {
	NONE,
	STORE_PURCHASE_ERROR,
	REQUEST_PAY_VERIFY,
	RESPONSE_PAY_VERIFY,
	UNKNOWN_RECEIPT,
	EWSPaymentStep_MAX,
};

// Enum MirMobile.EIAPPurchaseState
enum class EIAPPurchaseState : uint8 {
	NONE,
	START_PURCHASE_PRODUCT,
	CHECK_OWNED_PRODUCT,
	RETRY_PURCHASE_PRODUCT,
	QUERY_RECEIPT,
	REQUEST_PRODUCT_DETAILS,
	RESPONSE_PRODUCT_DETAILS,
	REQUEST_CASH_ITEM_START,
	RESPONSE_CASH_ITEM_START,
	REQUEST_PURCHASE_PRODUCT,
	RESPONSE_PURCHASE_PRODUCT,
	REQUEST_CASH_ITEM_VERIFY,
	RESPONSE_CASH_ITEM_VERIFY,
	REQUEST_CONSUME_PRODUCT,
	RESPONSE_CONSUME_PRODUCT,
	REQUEST_CASH_ITEM_PRE_VERIFY,
	RESPONSE_CASH_ITEM_PRE_VERIFY,
	REQUEST_CASH_ITEM_PROMO_VERIFY,
	RESPONSE_CASH_ITEM_PROMO_VERIFY,
	CONSUME_RECEIPT,
	EIAPPurchaseState_MAX,
};

// Enum MirMobile.EQueryReceiptEntryCode
enum class EQueryReceiptEntryCode : uint8 {
	INITED,
	LOAD_STREAM_LEVEL_END_PROCESS,
	UNEXPECTED_PURCHASE_RECEIPT,
	UPDATE_UNEXPECTED_PURCHASE_RECEIPT,
	RECONNECTED_GAME_SERVER,
	APP_RESUMED,
	REFUNDING_USER,
	EQueryReceiptEntryCode_MAX,
};

// Enum MirMobile.ECompleteIAPEntryCode
enum class ECompleteIAPEntryCode : uint8 {
	CHECK_OWNED_PRODUCT,
	USER_REQUEST_PURCHASE_PRODUCT,
	CHASH_ITEM_START_FAIL,
	REQUEST_PRODUCT_DETAILS,
	REQUEST_PURCHASE_PRODUCT,
	REQUEST_PURCHASE_PRODUCT_CHECKOUT,
	REQUEST_CASH_ITEM_VERIFY,
	RESPONSE_CASH_ITEM_VERIFY,
	REQUEST_CASH_ITEM_PRE_VERIFY,
	RESPONSE_CASH_ITEM_PRE_VERIFY,
	REQUEST_CASH_ITEM_PROMO_VERIFY,
	RESPONSE_CASH_ITEM_PROMO_VERIFY,
	REQUEST_STORE_LOGIN,
	REQUEST_STORE_UPDATE,
	UNEXPECTED_PURCHASE_RECEIPT_FAIL,
	UNEXPECTED_PURCHASE_RECEIPT_FAIL_TIMEOUT,
	RESPONSE_PAY_REFUND,
	ECompleteIAPEntryCode_MAX,
};

// Enum MirMobile.ECheckOwnedProductCode
enum class ECheckOwnedProductCode : uint8 {
	NONE,
	EMPTY_RECEIPT,
	EMPTY_PAY_ID,
	REQUEST_PURCHASE_VERIFY,
	REQUEST_PURCHASE_VERIFY_RECEIPT_DUPLICATED,
	INVALID_PURCHASE,
	ECheckOwnedProductCode_MAX,
};

// Enum MirMobile.EMiniGameSoundType
enum class EMiniGameSoundType : uint8 {
	Bgm_Wait,
	Bgm_Battle,
	Player_Atk1,
	Player_Atk2,
	Player_Atk3,
	Player_Avoid,
	Player_Hit,
	Monster_Atk1,
	Monster_Atk2,
	Monster_Hit,
	System_NextWave,
	EMiniGameSoundType_MAX,
};

// Enum MirMobile.EMiniGameMonsterGrade
enum class EMiniGameMonsterGrade : uint8 {
	Normal,
	Advenced,
	Boss,
	EMiniGameMonsterGrade_MAX,
};

// Enum MirMobile.EMiniGameMonsterMoveDirection
enum class EMiniGameMonsterMoveDirection : uint8 {
	None,
	Left,
	Right,
	EMiniGameMonsterMoveDirection_MAX,
};

// Enum MirMobile.EMiniGameMonsterState
enum class EMiniGameMonsterState : uint8 {
	Idle,
	Run,
	Atk1,
	Atk2,
	Atk3,
	Hit,
	Die,
	EMiniGameMonsterState_MAX,
};

// Enum MirMobile.EMiniGamePlayerMoveDirection
enum class EMiniGamePlayerMoveDirection : uint8 {
	None,
	Left,
	Right,
	EMiniGamePlayerMoveDirection_MAX,
};

// Enum MirMobile.EMiniGamePlayerState
enum class EMiniGamePlayerState : uint8 {
	Idle,
	Run,
	Atk1,
	Atk2,
	Atk3,
	Hit,
	Avoid,
	Stu,
	EMiniGamePlayerState_MAX,
};

// Enum MirMobile.EStyle_MirButton
enum class EStyle_MirButton : uint8 {
	CustomStyle,
	EmptyStyle,
	EStyle_MAX,
};

// Enum MirMobile.EStyle_MirListView
enum class EStyle_MirListView : uint8 {
	CustomStyle,
	EmptyStyle,
	EStyle_MAX,
};

// Enum MirMobile.EPakSearchOrder
enum class EPakSearchOrder : uint8 {
	DlcPakFirst,
	AppPakFirst,
	EPakSearchOrder_MAX,
};

// Enum MirMobile.EStyle_MirScrollBox
enum class EStyle_MirScrollBox : uint8 {
	CustomStyle,
	EmptyStyle,
	EStyle_MAX,
};

// Enum MirMobile.EMirSoundClass
enum class EMirSoundClass : uint8 {
	MASTER,
	BGM,
	AMBIENT,
	SFX,
	UI,
	VOICE,
	VOICE_DIALOGUE,
	VOICE_MALE,
	VOICE_FEMALE,
	MAX,
};

// Enum MirMobile.EMirSoundDataType
enum class EMirSoundDataType : uint8 {
	VEHICLE_OFF,
	GET_ENERGY,
	PC_REVIVAL,
	BUTTON_CLICK_COMMON,
	DROP_COIN,
	EMirSoundDataType_MAX,
};

// Enum MirMobile.EStyle_MirTextBlock
enum class EStyle_MirTextBlock : uint8 {
	CustomStyle,
	DefaultStyle,
	DefaultStyle_Shadow,
	EStyle_MAX,
};

// Enum MirMobile.EStyle_MirTileView
enum class EStyle_MirTileView : uint8 {
	CustomStyle,
	EmptyStyle,
	EStyle_MAX,
};

// Enum MirMobile.EAlignmentType
enum class EAlignmentType : uint8 {
	None,
	Fill,
	Center,
	Left,
	Right,
	CenterTop,
	LeftTop,
	RightTop,
	CenterBottom,
	LeftBottom,
	RightBottom,
	EAlignmentType_MAX,
};

// Enum MirMobile.ECommonBtnType
enum class ECommonBtnType : uint8 {
	None,
	MAIN_PRACTICE_2,
	MAIN_PRACTICE_3,
	SUB_POSITIVE,
	SUB_NEGATIVE,
	SUB_PRACTICE_2,
	SUB_PRACTICE_3,
	SUB_UNSEAL,
	OTHER_RECT_2,
	OTHER_RECT_3,
	OTHER_CIRCLE_2,
	OTHER_CIRCLE_3,
	OTHER_ROUND_2,
	PARTY_2,
	SUB_POSITIVE_GLOW,
	SUB_POSITIVE_GOLD,
	ECommonBtnType_MAX,
};

// Enum MirMobile.EStyle_MirWrapScrollBox
enum class EStyle_MirWrapScrollBox : uint8 {
	CustomStyle,
	EmptyStyle,
	EStyle_MAX,
};

// Enum MirMobile.E_FACTION_TYPE
enum class E_FACTION_TYPE : uint8 {
	Neutral,
	Friendly,
	Hostile,
	E_FACTION_MAX,
};

// Enum MirMobile.E_TARGET_TYPE
enum class E_TARGET_TYPE : uint8 {
	AnyOne,
	Monter,
	User,
	Npc,
	E_TARGET_MAX,
};

// Enum MirMobile.E_NOTICE_TARGET
enum class E_NOTICE_TARGET : uint8 {
	None,
	AllUser,
	TargetOnly,
	Party,
	E_NOTICE_MAX,
};

// Enum MirMobile.E_CARDINALPOINTS
enum class E_CARDINALPOINTS : uint8 {
	None,
	RightSide,
	LeftSide,
	RearSide,
	FrontSide,
	E_MAX,
};

// Enum MirMobile.E_ACTION_STATE
enum class E_ACTION_STATE : uint8 {
	None,
	Idle,
	Chase,
	Attack,
	Run,
	Move,
	Stop,
	Roam,
	Heal,
	Warp,
	E_ACTION_MAX,
};

// Enum MirMobile.EClearSkillReserveReason
enum class EClearSkillReserveReason : uint8 {
	ChangeTarget_Character,
	ChangeTarget_Object,
	ChangeAutoState,
	NormalAttackEnd,
	SkillAttackEnd,
	ManualInput,
	Unknown,
	EClearSkillReserveReason_MAX,
};

// Enum MirMobile.ECounterAttackState
enum class ECounterAttackState : uint8 {
	Disable,
	Enable_NoSkill,
	Enable_Skill,
	ECounterAttackState_MAX,
};

// Enum MirMobile.ESkillState
enum class ESkillState : uint8 {
	Normal,
	EnableSkill,
	EnableSmite,
	ESkillState_MAX,
};

// Enum MirMobile.EConditionType
enum class EConditionType : uint8 {
	None,
	Less_HP,
	More_HP,
	Less_MP,
	More_MP,
	Less_Distance,
	More_Distance,
	NoEnemyWithin,
	Buff_Exists,
	Buff_NotExists,
	DeadPlayerInParty,
	Less_HPInParty,
	EConditionType_MAX,
};

// Enum MirMobile.EConditionTarget
enum class EConditionTarget : uint8 {
	Me,
	Target,
	EConditionTarget_MAX,
};

// Enum MirMobile.CHAT_CHANNEL_TYPE
enum class CHAT_CHANNEL_TYPE : uint8 {
	NONE,
	WORLD,
	GUILD,
	PARTY,
	SYSTEM,
	WHISPER,
	ALLIANCE,
	CHAT_CHANNEL_MAX,
};

// Enum MirMobile.ECheatSuccessOrFail
enum class ECheatSuccessOrFail : uint8 {
	SUCCESS,
	FAIL,
	ECheatSuccessOrFail_MAX,
};

// Enum MirMobile.ESwitchBox
enum class ESwitchBox : uint8 {
	SWITCH_OFF,
	SWITCH_ON,
	SWITCH_MAX,
};

// Enum MirMobile.ECommonBtnDesignType
enum class ECommonBtnDesignType : uint8 {
	NONE,
	MAIN,
	SUB,
	RECT,
	CIRCLE,
	ROUND,
	ECommonBtnDesignType_MAX,
};

// Enum MirMobile.ECommonBtnStateType
enum class ECommonBtnStateType : uint8 {
	Able,
	Unable,
	ECommonBtnStateType_MAX,
};

// Enum MirMobile.ECountState
enum class ECountState : uint8 {
	Count,
	Start,
	Name,
	End,
	ECountState_MAX,
};

// Enum MirMobile.EProgressTextType
enum class EProgressTextType : uint8 {
	Empty,
	Slash,
	Percent,
	EProgressTextType_MAX,
};

// Enum MirMobile.EProgressGuageState
enum class EProgressGuageState : uint8 {
	Same,
	Increase,
	Decrease,
	EProgressGuageState_MAX,
};

// Enum MirMobile.EContentsGetItemMsgType
enum class EContentsGetItemMsgType : uint8 {
	Single_Item,
	Single_Cost,
	Multiple,
	Special,
	MakeSuccess_Item,
	MakeSuccessBonus_Item,
	MakeFail_Item,
	EContentsGetItemMsgType_MAX,
};

// Enum MirMobile.ESLIDEBAR_TYPE
enum class ESLIDEBAR_TYPE : uint8 {
	NONE,
	ESLIDEBAR_CH1,
	ESLIDEBAR_CH2,
	ESLIDEBAR_MAX,
};

// Enum MirMobile.ESELECTE_STATE
enum class ESELECTE_STATE : uint8 {
	NONE,
	SELECTTING,
	SELECTED,
	ESELECTE_MAX,
};

// Enum MirMobile.ESlotSmeltingLevelType
enum class ESlotSmeltingLevelType : uint8 {
	NONE,
	LEFT,
	RIGHT,
	ESlotSmeltingLevelType_MAX,
};

// Enum MirMobile.EFirstTutorialType
enum class EFirstTutorialType : uint8 {
	NONE,
	VirtualJoyStick,
	QuestTracker,
	NpcQuestMark,
	HudHideQuest,
	Battle,
	EFirstTutorialType_MAX,
};

// Enum MirMobile.EFrameType
enum class EFrameType : uint8 {
	Basic,
	SkillExtend,
	EFrameType_MAX,
};

// Enum MirMobile.ESearhCircleType
enum class ESearhCircleType : uint8 {
	Self,
	Target,
	ESearhCircleType_MAX,
};

// Enum MirMobile.ECheckPhaseImpactReason
enum class ECheckPhaseImpactReason : uint8 {
	BasicEndAttackAnim,
	BasicNextAttack,
	ExtendEndAttackAnim,
	PCUpdateNextSkill,
	ECheckPhaseImpactReason_MAX,
};

// Enum MirMobile.EGachaSkipButtonType
enum class EGachaSkipButtonType : uint8 {
	None,
	ShowAll,
	ResultImmediately,
	EGachaSkipButtonType_MAX,
};

// Enum MirMobile.EGachaViewType
enum class EGachaViewType : uint8 {
	None,
	Tombstone,
	Full,
	Interaction,
	EGachaViewType_MAX,
};

// Enum MirMobile.EPrerequisiteLoadState
enum class EPrerequisiteLoadState : uint8 {
	START,
	ALL_TABLE,
	ASYNC_PRELOAD_TABLE,
	PREREQUISITE_ASSET,
	MAX,
};

// Enum MirMobile.EGameOptionSliderTitleLocation
enum class EGameOptionSliderTitleLocation : uint8 {
	None,
	Top,
	Left,
	EGameOptionSliderTitleLocation_MAX,
};

// Enum MirMobile.EGameOptionSliderType
enum class EGameOptionSliderType : uint8 {
	Default,
	Sound,
	EGameOptionSliderType_MAX,
};

// Enum MirMobile.EGuildemberSlotBits
enum class EGuildemberSlotBits : uint8 {
	Slot1,
	Slot2,
	Master,
	EGuildemberSlotBits_MAX,
};

// Enum MirMobile.EGateFactionType
enum class EGateFactionType : uint8 {
	None,
	DefenseGate,
	OffenseGate,
	EGateFactionType_MAX,
};

// Enum MirMobile.CHAT_AREA_FLAG
enum class CHAT_AREA_FLAG : uint8 {
	NONE,
	WORLD,
	GUILD,
	PARTY,
	SYSTEM,
	WHISPER,
	ALLIANCE,
	DEFAULT_MENU,
	MACRO_MENU,
	VOICE_CHAT_MENU,
	CHAT_AREA_MAX,
};

// Enum MirMobile.EChatIndicatorType
enum class EChatIndicatorType : uint8 {
	DEFAULT,
	COUNT,
	EChatIndicatorType_MAX,
};

// Enum MirMobile.BTNACTION_INDEX
enum class BTNACTION_INDEX : uint8 {
	BUTTON_DISABLE,
	BUTTON_ENABLE,
	MAX_INDEX,
	BTNACTION_MAX,
};

// Enum MirMobile.ELeftTabMenuSlotType
enum class ELeftTabMenuSlotType : uint8 {
	OpenInfo,
	OpenPartyList,
	ELeftTabMenuSlotType_MAX,
};

// Enum MirMobile.ETargetGaugeState
enum class ETargetGaugeState : uint8 {
	Same,
	Increase,
	Decrease,
	ETargetGaugeState_MAX,
};

// Enum MirMobile.ERefundState
enum class ERefundState : uint8 {
	REFUNDED,
	REPAYMENT_COMPLETED,
	ERefundState_MAX,
};

// Enum MirMobile.EIAPType
enum class EIAPType : uint8 {
	NONE,
	DEFAULT,
	PRE_REWARD,
	PROMOTION,
	EIAPType_MAX,
};

// Enum MirMobile.EIAPState
enum class EIAPState : uint8 {
	NONE,
	PRODUCT_DETAILS,
	PURCHASING,
	PAY_START,
	PAY_VERIFY,
	CONSUME_PRODUCT,
	EIAPState_MAX,
};

// Enum MirMobile.EWSIAPResponseCode
enum class EWSIAPResponseCode : uint8 {
	SUCCESS,
	ERROR_PAY_START_PARAMETER,
	ERROR_PAY_START_DB_ERROR,
	ERROR_PAY_START_IS_REFUND_USER,
	ERROR_PAY_VERIFY_PARAMETER,
	ERROR_PAY_VERIFY_NO_IAP_DATA,
	ERROR_PAY_VERIFY_RECEIPT_FAILED,
	ERROR_PAY_VERIFY_RECEIPT_DUPLICATED,
	ERROR_PAY_VERIFY_RECEIPT_ALREADY_CONSUMED,
	ERROR_PAY_VERIFY_CANCELED_RECEIPT,
	ERROR_PAY_VERIFY_DB_ERROR,
	ERROR_PAY_VERIFY_COMPLATED,
	ERROR_PAY_VERIFY_NOT_ALLOWED_REGION,
	ERROR_PAY_END_PARAMETER,
	ERROR_PAY_END_NO_IAP_DATA,
	ERROR_PAY_END_DB_ERROR,
	ERROR_REFUND_LIST_NOT_AOS,
	ERROR_REFUND_LIST_NO_REFUND,
	ERROR_REFUND_LIST_DB_ERROR,
	ERROR_PAY_REFUND_PARAMETER,
	ERROR_PAY_REFUND_NO_REFUND,
	ERROR_PAY_REFUND_ALREADY_PAY,
	ERROR_PAY_REFUND_RECEIPT_FAILED,
	ERROR_PAY_REFUND_DB_ERROR,
	ERROR_PAY_VERIFY_GAME_SERVER_TIMEOUT,
	ERROR_PAY_VERIFY_GAME_SERVER_FAIL,
	ERROR_PAY_VERIFY_GAME_SERVER_INVALID_ACCOUNT,
	ERROR_PAY_VERIFY_GAME_SERVER_DB_ERROR,
	ERROR_PAY_VERIFY_GAME_SERVER_NO_PRODUCT,
	ERROR_PAY_VERIFY_GAME_SERVER_NO_PAY_ID,
	ERROR_PAY_VERIFY_GAME_SERVER_PAY_AMOUNT_OVER,
	EWSIAPResponseCode_MAX,
};

// Enum MirMobile.EIOSGoogleSignInStatusCode
enum class EIOSGoogleSignInStatusCode : uint8 {
	SUCCESS,
	ERROR_UNKNOWN,
	ERROR_KEYCHAIN,
	ERROR_HAS_NO_AUTH_IN_KEYCHAIN,
	ERROR_CANCELED,
	ERROR_EMM,
	EIOSGoogleSignInStatusCode_MAX,
};

// Enum MirMobile.EAndroidGoogleSignInStatusCode
enum class EAndroidGoogleSignInStatusCode : uint8 {
	SUCCESS,
	ERROR_FAILED,
	ERROR_CANCELED,
	ERROR_CURRENTLY_IN_PROGRESS,
	EAndroidGoogleSignInStatusCode_MAX,
};

// Enum MirMobile.EWin64GoogleSignInStatusCode
enum class EWin64GoogleSignInStatusCode : uint8 {
	SUCCESS,
	ERROR_FAILED,
	ERROR_CANCELED,
	EWin64GoogleSignInStatusCode_MAX,
};

// Enum MirMobile.EMarketUpdateStatus
enum class EMarketUpdateStatus : uint8 {
	NONE,
	UPDATE_SELECT,
	UPDATE_FORCE,
	EMarketUpdateStatus_MAX,
};

// Enum MirMobile.EStoreType
enum class EStoreType : uint8 {
	NONE,
	GOOGLE_PLAY,
	APPLE_STORE,
	ONE_STORE,
	GALAXY_STORE,
	ONE_STORE_PC,
	STEAM,
	XSOLLA,
	MYCARD,
	EStoreType_MAX,
};

// Enum MirMobile.EServerStatus
enum class EServerStatus : uint8 {
	None,
	Open,
	Close,
	EServerStatus_MAX,
};

// Enum MirMobile.EReason_StopBehavior
enum class EReason_StopBehavior : uint8 {
	Unknown,
	AttackEnd,
	UpdateCounterAttack,
	AutoMoveFinished,
	OnDie,
	QuestTracker,
	InputProcess,
	TaskStopBehavior,
	PhaseMode,
	CommandScript,
	Occupation,
	ToggleUI,
	Debug,
	Sparring,
	Operating,
	Revival,
	ClickMenu,
	RecvServer,
	Cinematic,
	MissionHelper,
	StoryQuest,
	Warp,
	Trigger,
	LogOut,
	DisConnect,
	EReason_MAX,
};

// Enum MirMobile.EReason_UpdateTarget
enum class EReason_UpdateTarget : uint8 {
	Unknown,
	SharedTarget,
	TargetHide,
	Invalid,
	Clear,
	Search,
	HasInput,
	Renew,
	CounterClear,
	AttackMe,
	UneanbleRender,
	FindEnemy,
	Quest,
	Around,
	SkipTrace,
	Die,
	UneablePK,
	TargetList,
	TargetLock,
	SubMenuAttack,
	InSafeArea,
	SelfComeback,
	AttackHeightLimit,
	EReason_MAX,
};

// Enum MirMobile.ETownNPCPositionType
enum class ETownNPCPositionType : uint8 {
	NONE,
	POTION,
	GOODS,
	MAX,
};

// Enum MirMobile.EMonsterAttackType
enum class EMonsterAttackType : uint8 {
	None,
	Melee,
	Range,
	EMonsterAttackType_MAX,
};

// Enum MirMobile.EOccupationCommandSlotType
enum class EOccupationCommandSlotType : uint8 {
	NONE,
	CIRCLE,
	SQUARE,
	TRIANGLE,
	DIAMOND,
	STAR,
	ONE,
	TWO,
	THREE,
	EOccupationCommandSlotType_MAX,
};

// Enum MirMobile.EMinimapFeatureAvailability
enum class EMinimapFeatureAvailability : uint8 {
	NONE,
	VIEW_USER_INFO,
	VIEW_COMMAND_INFO,
	VIEW_OBJECT_INFO,
	VIEW_CHARACTER_DIE,
	VIEW_REVIVAL_LOCATION_INFO,
	FUNC_TOUCH_POSITION,
	DEFAULT_VIEW,
	DEFAULT_FUNC,
	DEFAULT,
	REVIVAL_SELECT,
	EMinimapFeatureAvailability_MAX,
};

// Enum MirMobile.KillLogCampType
enum class KillLogCampType : uint8 {
	None,
	Defence,
	Offence,
	KillLogCampType_MAX,
};

// Enum MirMobile.EUpdateWeaponReason
enum class EUpdateWeaponReason : uint8 {
	ChangeItemParts,
	UpdateCostume,
	ChangeFeature,
	SetMining,
	ClearMining,
	EnterIdle,
	EUpdateWeaponReason_MAX,
};

// Enum MirMobile.EBattleStateReason
enum class EBattleStateReason : uint8 {
	ExecuteSkill,
	RollEnter,
	RollExit,
	Hit,
	BuffHit,
	TimeOut,
	AppearUser,
	RecvServer,
	RecvAttack,
	EBattleStateReason_MAX,
};

// Enum MirMobile.ERideState
enum class ERideState : uint8 {
	None,
	Pending,
	Complete,
	ERideState_MAX,
};

// Enum MirMobile.EChangeIdleReason
enum class EChangeIdleReason : uint8 {
	Unknown,
	NotFindPath,
	UseInput,
	EmptyTarget,
	DeadTarget,
	EmptySkill,
	EnableAttack,
	Stalled,
	EChangeIdleReason_MAX,
};

// Enum MirMobile.EPopupContentsState_CurDisplay
enum class EPopupContentsState_CurDisplay : uint8 {
	None,
	Mastery,
	HolyStuff,
	Vehicle,
	Force,
	EPopupContentsState_MAX,
};

// Enum MirMobile.EMeetingViewGrade
enum class EMeetingViewGrade : uint8 {
	NONE,
	GRADE2,
	GRADE3,
	GRADE4,
	GRADE5,
	ALL,
	EMeetingViewGrade_MAX,
};

// Enum MirMobile.EMeetingJoinGrade
enum class EMeetingJoinGrade : uint8 {
	NONE,
	GRADE2,
	GRADE3,
	GRADE4,
	GRADE5,
	ALL,
	EMeetingJoinGrade_MAX,
};

// Enum MirMobile.PANEL_SIDE
enum class PANEL_SIDE : uint8 {
	NONE,
	SIDE_LEFT,
	SIDE_RIGHT,
	PANEL_MAX,
};

// Enum MirMobile.ESlotClassOption
enum class ESlotClassOption : uint8 {
	Slot_All,
	Slot_Warror,
	Slot_Magician,
	Slot_Taoist,
	Slot_Assassin,
	Slot_Berserker,
	Slot_Lock,
	Slot_MAX,
};

// Enum MirMobile.ESiegeCommandMacroType
enum class ESiegeCommandMacroType : uint8 {
	ATTACK,
	ASSEMBLE,
	DEFECNCE,
	RETREAT,
	WAIT,
	MAX,
};

// Enum MirMobile.EProgressState
enum class EProgressState : uint8 {
	Same,
	Increase,
	Decrease,
	EProgressState_MAX,
};

// Enum MirMobile.EStopAutoMissionMsgType
enum class EStopAutoMissionMsgType : uint8 {
	Normal,
	Main,
	AccountChange,
	InputDirection,
	Party,
	PartyAssemble,
	AutoSetting,
	ChannelChange,
	AutoBattle,
	AutoGather,
	AirWalk,
	ChatPosition,
	EStopAutoMissionMsgType_MAX,
};

// Enum MirMobile.EAutoMissionState
enum class EAutoMissionState : uint8 {
	None,
	Running,
	EAutoMissionState_MAX,
};

// Enum MirMobile.EDirectiveType
enum class EDirectiveType : uint8 {
	None,
	Circle,
	Square,
	Triangle,
	Diamond,
	Star,
	One,
	Two,
	Three,
	EDirectiveType_MAX,
};

// Enum MirMobile.ESlotEmptyType
enum class ESlotEmptyType : uint8 {
	NONE,
	DEFAULT_BG,
	COLLAPSED,
	DUMMY,
	ESlotEmptyType_MAX,
};

// Enum MirMobile.ESlotBackgroundType
enum class ESlotBackgroundType : uint8 {
	NONE,
	RECT,
	CIRCLE,
	ESlotBackgroundType_MAX,
};

// Enum MirMobile.ESortListBtn_Location
enum class ESortListBtn_Location : uint8 {
	LeftTop,
	LeftBottom,
	RightTop,
	RightBottom,
	ESortListBtn_MAX,
};

// Enum MirMobile.ESoundMode
enum class ESoundMode : uint8 {
	NONE,
	SCENE,
	OUT_GAME_CONETENT,
	MAX,
};

// Enum MirMobile.EBGMType
enum class EBGMType : uint8 {
	NONE,
	FIELD,
	QUEST,
	PHASING,
	EVENT,
	MAX,
};

// Enum MirMobile.EMMSoundType
enum class EMMSoundType : uint8 {
	NONE,
	MASTER,
	BGM,
	AMBIENT,
	SFX,
	UI,
	VOICE,
	VOICE_DIALOGUE,
	VOICE_MALE,
	VOICE_FEMALE,
	MAX,
};

// Enum MirMobile.EDuel_CountState
enum class EDuel_CountState : uint8 {
	None,
	Start,
	InSafeArea,
	RingOut,
	EDuel_MAX,
};

// Enum MirMobile.ETableType
enum class ETableType : uint8 {
	WIDGET_MASTER,
	ACHIEVEMENT,
	AIRWALK,
	AREANAME,
	AUTOFLIGHT_PATH,
	BUFF,
	BUFF_OVERLAPCALL,
	BOSS_WORLD,
	CAMERA_PRESET,
	CHARACTER_MASTERY,
	CHARACTER_MASTERY_SLOT,
	CHARACTER_MASTERY_LEVEL_LIMIT,
	CHARACTER_FORCE,
	CHARACTER_FORCE_BLOOD,
	CHARACTER_FORCE_LEVEL,
	CHARACTER_EMOTE,
	CLASS,
	CLASS_CREATE,
	COMBATPOINT,
	CINEMATIC_DIALOGUE,
	CHARACTER_GROW,
	CONTENTS_ALARM,
	CONTENTS_ADMIN,
	CHARACTER_PARTS_DEFINES,
	CONTENTS_OPEN,
	COLOR_INDEX,
	COSTUME,
	COSTUME_PRESET,
	COSTUME_PALETTE,
	CLIENT_ERROR_STRING,
	CLIENT_PRELOAD,
	COMBO,
	CUSTOMIZING_CAMERA,
	CUSTOMIZING_CATEGORY,
	CUSTOMIZING_COMPONENT,
	EFFECT,
	EFFECT_WIDGET,
	ELITEDUNGEON,
	EVENT_CONTENTS,
	GUILD_INFO,
	GUIDE_EFFECT,
	GUIDE_START,
	GUILD_MARK,
	GUILD_MEMBER_GRADE,
	GUILD_LEVEL,
	GUILD_DEV_UI,
	GUILD_DEV_LEVEL,
	GUILD_DEV_UNLOCK,
	GUILD_FAME_CATEGORY,
	GUILD_DAILY_MISSION,
	GUILD_STATUS,
	GUILD_EXPEDITION,
	GUILD_DOMINION,
	GUILD_DOMINION_BUFF,
	GUILD_DOMINION_PRIZE,
	GUILD_DOMINION_PBS,
	GUILD_DOMINION_PK_GRADE,
	GUILD_DOMINION_STORAGE_HISTORY,
	GUILD_POSITION,
	GUILD_WANTED,
	GUILD_GIFT,
	GUILD_GIFT_LEVEL,
	GUILD_SHOP,
	GUILD_HISTORY,
	GUILD_MONEY_EXCHANGE,
	GUILD_AUTHORITY,
	ITEM,
	ITEM_SET,
	ITEM_EQUIPSLOT,
	ITEM_SMELTING,
	ITEM_SMELTING_ATTRIBUTE,
	ITEM_MAKE,
	ITEM_OPTION,
	ITEM_OPTION_GRADE,
	ITEM_OPTION_RANDOM,
	ITEM_OPTION_PASSIVE,
	ITEM_SMELTING_EFFECT,
	ITEM_PACKAGE,
	ITEM_RANDOM_GET,
	ITEM_RANDOM_GET_INFO,
	ITEM_RANDOM_EXCHANGE,
	ITEM_RANDOM_EXCHANGE_EQUIP,
	ITEM_INFO_SUMMARY,
	ITEM_GETWAY,
	ITEM_GETWAY_INFO,
	ITEM_GETWAY_LIST,
	ITEM_DURABILITY_REPAIRCOST,
	ITEM_DURABILITY_BROKENLV,
	INSTANCE_DUNGEON_INFO,
	INSTANCE_DUNGEON_SETTING,
	ICON,
	INVENTORY,
	INVENTORY_EXTEND,
	INVENTORY_EXTEND_VALUE,
	INVENTORY_EXTEND_ITEM,
	ITEM_SUBCOOLTIME,
	LOADING,
	LEVEL,
	MAGICSQUARE,
	MAGICSQUARESTAGE,
	MOVIEPLAY,
	MAPUI_WORLD,
	MAPUI_AREA,
	MAPUI_MINI,
	MONEY,
	MONSTER,
	MONSTER_PHASING,
	MONSTER_RESOURCE,
	MONSTER_RAREACTION,
	MONSTER_COLOR_GROUP,
	GUILD_WAR_MONSTER,
	GUILD_WAR_OBJECT,
	MONTAGE,
	HIDDEN_PATH,
	NPC,
	NPCDIALOG,
	NPCSPAWN,
	NPCSHOWSCHEDULE,
	NICKNAME,
	NPC_ITEM_LIST,
	OBJECT,
	GUILD_WAR_STRONG_POINT,
	PLAYDATA,
	PHASING,
	PORTAL,
	PK_GRADE,
	QUEST_RELATION,
	QUEST_RELATION_REWARD,
	QUICK_SLOT_SETTING,
	QUESTDAILY_HOMEWORK,
	QUESTDAILY_HOMEWORK_PLUSREWARD,
	QUEST_MISSION,
	QUEST_COMBAT_DEVIATION,
	QUEST_REQUEST,
	REVIVAL,
	GUILD_WAR_REVIVAL,
	RESOURCE_MESH,
	RESOURCE_ABP,
	RESOURCE_ETC,
	SOUND,
	STATUS,
	STRING_ERROR,
	STATUS_LIMIT,
	STATUS_CALCULATE,
	STATUS_INFO,
	SKILL,
	SKILL_ATTACK,
	SKILL_STATE,
	SKILL_PASSIVE,
	SKILL_COST,
	STAGE,
	STAGE_SECTOR,
	STRING_BUILTIN,
	STRING_TEMPLATE,
	STRING_MESSAGE,
	STRING_MAIL,
	STRING_TOOLTIP,
	STD,
	STRING_NPC,
	STRING_QUESTTEMPLATE,
	SEQUENCEPLAY,
	SMALLTALK_SETTING,
	SMALLTALK_DIALOGUE,
	SEQUENCE_DIALOGUE,
	SLANG_NICKNAME,
	SLANG_CHATTING,
	SYSTEM_DATA,
	SHOP_GOODS,
	UI_SHOP_GOODS,
	UI_SHOP_IAP_INFO,
	GACHA_INFO,
	GACHA_GROUP,
	GACHA_LIST,
	TOTEM,
	TUTORIAL,
	TOTAL_MENU,
	TOTAL_MENU_FRAME,
	TOTAL_MENU_CONTENTS,
	ITEM_BLESS_INCREASERATE,
	TIMETICKET,
	TRIGGER_GROUPBASE,
	UNDERWORLD,
	VEHICLE_RIDE,
	WARP_LOCATION,
	SECRET_DUNGEON,
	GAMEOPTION_SETTING,
	GAMEOPTION_KEYSETTING,
	NPC_ITEM_MAKE_LIST,
	PK_MODE,
	PK_SYSTEM,
	LABYRINTH,
	EVENT_TIMELINE,
	ITEM_VIEWER,
	FAME_QUEST,
	FAME_CATEGORY,
	FAME_LEVEL,
	BUFF_ATTACK,
	QUEUE_UI,
	ITEM_UNSEALING,
	ITEM_UNSEALING_ACCELERATION,
	RANKING_CATEGORY,
	RANKING_REWARD,
	RANKING_SEASON_REWARD,
	RANKING_SCHEDULER,
	PET,
	PET_DECK,
	PET_SKILL,
	PET_LEVEL,
	GREAT_BUILDING,
	GREAT_BUILDING_STEP,
	ITEM_MATERIAL_COMPOSE,
	ITEM_MATERIAL_COMPOSE_LIST,
	ITEM_MATERIAL_COMPOSE_POINT,
	TRADE_MENU,
	USER_EVENT,
	USER_EVENT_GOAL,
	USEREVENT_BENEDICTION,
	USER_EVENT_SIEGEEVE,
	BATTLE_PASS_INFO,
	BATTLE_PASS_GROUP,
	BATTLE_PASS_MISSION,
	BATTLE_PASS_REWARD,
	CHANNEL,
	ITEM_COLLECTION,
	DUNGEON_TICKET,
	DUNGEON_TICKET_CHARGE,
	DUNGEON_SHOP,
	SKILL_SPECIAL_ABILITY,
	GUILD_WAR_SIEGE,
	GUILD_WAR_SIEGE_REWARD,
	GUILD_WAR_COSTUME,
	CHARACTER_EXPBOOSTER,
	CHARACTER_EXPBOOSTER_ITEM,
	DEATHPENALTY_EXP,
	COMMAND_MARK,
	BUFF_GUILD_DEV,
	GUIDE_LINK,
	NPC_SHOP_LIST,
	NPC_SHOP_GOODS,
	BROADCAST,
	GAME_DEFINE_OPTION,
	SCHEDULERCYCLE,
	BUFF_PARTY,
	UI_SHOP_PERIOD,
	SERVER_CHANGE_CONDITION,
	SERVER_CHANGE_COST,
	SERVER_CHANGE_UI,
	ITEM_MAGICSTONE_TRANCE,
	ITEM_TRANSCENDENCE_DEFINE,
	ITEM_SP_TREASURE_TRANCE,
	CLOSED_TRAINING,
	CLOSED_TRAINING_STATUS,
	CLOSED_TRAINING_LEVEL,
	CLOSED_TRAINING_COLLECT,
	CLASS_PHASE,
	QUEST_DROP_ITEM,
	MULTI_LANGUAGE,
	ITEM_MAKE_AGENCY,
	GLOBAL_FONT_RANGE,
	GLOBAL_REGION,
	MAX,
};

// Enum MirMobile.EStringTableType
enum class EStringTableType : uint8 {
	NONE,
	STRING_UI,
	STRING_TEMPLATE,
	STRING_BUILTIN,
	EStringTableType_MAX,
};

// Enum MirMobile.ETutorialStepEndType
enum class ETutorialStepEndType : uint8 {
	None,
	TouchTarget,
	TouchScreen,
	TouchScreenOrTimeEnd,
	Airwalk1stEnd,
	AirwalkLand,
	Airwalk2ndEnd,
	AirwalkDashReady,
	AirwalkDashJumpReady,
	AirwalkDash2Ready,
	SkillVirtualStickActive,
	BlockTouchTimer,
	SkillReleased,
	WallJumpReady,
	SpecialSkillReady,
	ToggleAutoSkill,
	VirtualStickMove,
	Max,
};

// Enum MirMobile.ETutorialGuidStrPosType
enum class ETutorialGuidStrPosType : uint8 {
	None,
	LeftTop,
	LeftBottom,
	RightTop,
	RightBottom,
	Left,
	Right,
	Top,
	Bottom,
	Max,
};

// Enum MirMobile.ETutorialUIGuideType
enum class ETutorialUIGuideType : uint8 {
	None,
	NoGuidBox,
	Circle,
	Rectangle,
	Max,
};

// Enum MirMobile.EPetGuidePosType
enum class EPetGuidePosType : uint8 {
	None,
	Left,
	Right,
	Top,
	Bottom,
	Max,
};

// Enum MirMobile.ETouchPositionType
enum class ETouchPositionType : uint8 {
	VIEWPORT_POSITION,
	VIEWPORT_PIXEL,
	LOCAL,
	TYPE_ABSOLUTE,
	ETouchPositionType_MAX,
};

// Enum MirMobile.EDragPosType
enum class EDragPosType : uint8 {
	DELTA_TYPE,
	POSITION_TYPE,
	EDragPosType_MAX,
};

// Enum MirMobile.ESortState
enum class ESortState : uint8 {
	NONE,
	ASCENDING,
	DESCENDING,
	ESortState_MAX,
};

// Enum MirMobile.EAuctionSortType
enum class EAuctionSortType : uint8 {
	EACH_PRICE,
	TOTAL_PRICE,
	WEAPON_PRICE,
	EAuctionSortType_MAX,
};

// Enum MirMobile.EAuctionTabType
enum class EAuctionTabType : uint8 {
	None,
	Search,
	Sale,
	Calculate,
	History,
	Max,
};

// Enum MirMobile.EFameType
enum class EFameType : uint8 {
	FAME_INFO,
	FAME_BOARD,
	FAME_MAX,
};

// Enum MirMobile.ERankInfo
enum class ERankInfo : uint8 {
	RANK_LEVEL,
	RANK_COMBAT,
	RANK_COLLECTION,
	RANK_GUILD,
	RANK_MAX,
};

// Enum MirMobile.ETabType
enum class ETabType : uint8 {
	CHARINFO,
	TAB_MAX,
	ETabType_MAX,
};

// Enum MirMobile.EProgressStep
enum class EProgressStep : uint8 {
	STEP_1,
	STEP_2,
	STEP_3,
	STEP_4,
	STEP_5,
	STEP_MAX,
	None,
	EProgressStep_MAX,
};

// Enum MirMobile.EAttGrade
enum class EAttGrade : uint8 {
	NONE,
	E,
	D,
	C,
	B,
	A,
	S,
	SS,
	SSS,
	EAttGrade_MAX,
};

// Enum MirMobile.VoiceDownState
enum class VoiceDownState : uint8 {
	None,
	NeedDownload,
	Downloading,
	VoiceDownState_MAX,
};

// Enum MirMobile.ECastleContents
enum class ECastleContents : uint8 {
	NONE,
	DOMINION_TITLE,
	DOMINION_ADMIN,
	DOMINION_WANTED,
	BUFF,
	PRIZE_MAIN,
	PRIZE_SUB,
	TAX_RATE_CHANGE,
	TAX_WITHDRAWAL,
	DONATION,
	STORAGE,
	GuildMember,
	ECastleContents_MAX,
};

// Enum MirMobile.EDominionID
enum class EDominionID : uint8 {
	MAIN_CASTLE_ID,
	SUB_CASTLE_ID,
	EDominionID_MAX,
};

// Enum MirMobile.EDominionTabType
enum class EDominionTabType : uint8 {
	STRONGPOINT,
	CASTLE_MAIN,
	CASTLE_SUB,
	MAX,
};

// Enum MirMobile.ESubMenuType
enum class ESubMenuType : uint8 {
	None,
	FieldBoss,
	WorldBoss,
	MAX_INDEX,
	ESubMenuType_MAX,
};

// Enum MirMobile.EUserGaugeState
enum class EUserGaugeState : uint8 {
	Same,
	Increase,
	Decrease,
	EUserGaugeState_MAX,
};

// Enum MirMobile.EControlButtonType
enum class EControlButtonType : uint8 {
	ControlBtn_Skill,
	ControlBtn_Jump,
	ControlBtn_Avoid,
	ControlBtn_MAX,
};

// Enum MirMobile.EActionButtonState
enum class EActionButtonState : uint8 {
	NONE_ACTIONBTNSTATE,
	DASH_ACTIONBTNSTATE,
	EActionButtonState_MAX,
};

// Enum MirMobile.EMail_AddressbookTab
enum class EMail_AddressbookTab : uint8 {
	eTab_None,
	eTab_Friend,
	eTab_Guild,
	eTab_MAX,
};

// Enum MirMobile.EUIActionMessageWidgetType
enum class EUIActionMessageWidgetType : uint8 {
	None,
	Headline,
	HudBottom,
	HudGetItem,
	Top,
	Screen,
	ContentsGetItem,
	QuickItemAction,
	GM_Message,
	Max,
};

// Enum MirMobile.EOccupationCategoryType
enum class EOccupationCategoryType : uint8 {
	NONE,
	State,
	Auction,
	GovernmentOffice,
	PayrollManagement,
	TaxInformation,
	AreaManagement,
	EOccupationCategoryType_MAX,
};

// Enum MirMobile.EOccupationRewardType
enum class EOccupationRewardType : uint8 {
	None,
	Buff,
	Item,
	EOccupationRewardType_MAX,
};

// Enum MirMobile.EOccupationAuctionReaction
enum class EOccupationAuctionReaction : uint8 {
	NONE,
	UPDATE_SIMPLEINFO,
	UPDATE_GUILDINFO,
	UPDATE_MINIMAP,
	UPDATE_AUCTION_STATE,
	UPDATE_BUTTON_STATE,
	UPDATE_REMAIN_TIME,
	UPDATE_MINIMUM_BID_AMOUNT,
	UPDATE_BID_HISTORY,
	UPDATE_GUILD_COST,
	REQUEST_AUCTION_INFO,
	UPDATE_INVITE_LIST,
	UPDATE_BID_POPUP_BUTTON_STATE,
	UPDATE_ALL,
	RECV_CHANGE_AUCTION_STATUS,
	RECV_AUCTION_INFO,
	RECV_AUCTION_BIDDING,
	OPEN_CONTENTS,
	CLOSE_CONTENTS,
	EOccupationAuctionReaction_MAX,
};

// Enum MirMobile.EOccupationAuctionButtonType
enum class EOccupationAuctionButtonType : uint8 {
	NONE,
	AUCTION_BIDDING,
	ALLIANCE_INVITE,
	START_BATTLE,
	EOccupationAuctionButtonType_MAX,
};

// Enum MirMobile.EOccupationAuctionProgress
enum class EOccupationAuctionProgress : uint8 {
	NONE,
	AUCTION_ENTRY,
	AUCTION_EXTEND,
	STANDBY_BATTLE,
	START_BATTLE,
	END,
	MAX,
};

// Enum MirMobile.EPartyHeaderType
enum class EPartyHeaderType : uint8 {
	eHeaderType_None,
	eHeaderType_Normal,
	eHeaderType_Elite,
	eHeaderType_Labyrinth,
	eHeaderType_UnderWorld,
	eHeaderType_MagicSquare,
	eHeaderType_Secret,
	eHeaderType_MAX,
};

// Enum MirMobile.EStageType_PartyLeftTab
enum class EStageType_PartyLeftTab : uint8 {
	Party,
	Boss_Dungeon,
	Party_Dungeon,
	Guild,
	EStageType_MAX,
};

// Enum MirMobile.EAutoQuestNormalState
enum class EAutoQuestNormalState : uint8 {
	None,
	Running,
	Pause,
	Complete,
	Wait,
	EAutoQuestNormalState_MAX,
};

// Enum MirMobile.ERankingRewardType
enum class ERankingRewardType : uint8 {
	Daily,
	Weekly,
	Season,
	ERankingRewardType_MAX,
};

// Enum MirMobile.ERevivalHelpState
enum class ERevivalHelpState : uint8 {
	UNKNOWN,
	NOT_TAOIST,
	NOT_HAVE_REVIVALSKILL,
	NOT_ENOUGH_SKILLLEVEL,
	NOT_NOT_IN_SKILLDECK,
	NOT_ENABLE_COOLTIME,
	ENABLE,
	ERevivalHelpState_MAX,
};

// Enum MirMobile.ERevivalReaction
enum class ERevivalReaction : uint8 {
	NONE,
	EXCUTE_HELP_REVIVAL,
	EXCUTE_SAFE_REVIVAL,
	EXCUTE_IMMEDIATE_REVIVAL,
	EXCUTE_REVIVAL_FREE,
	OPEN_CONTENTS,
	ERevivalReaction_MAX,
};

// Enum MirMobile.EBattlePassMenu
enum class EBattlePassMenu : uint8 {
	eMenu_Reward,
	eMenu_Mission,
	eMenu_Max,
};

// Enum MirMobile.ITEM_SLOT_SHOW_WIDGET
enum class ITEM_SLOT_SHOW_WIDGET : uint8 {
	NONE,
	IMG_PLUS,
	ITEM_SLOT_SHOW_MAX,
};

// Enum MirMobile.EMirUIActionType
enum class EMirUIActionType : uint8 {
	Goods,
	TotalMenu,
	Login,
	Message,
	Forge,
	Transfer,
	Mastery,
	MakeItem,
	Jewel,
	MagicStone,
	Forge_LevelUp,
	Forge_Smelting,
	Forge_OptionChange,
	Forge_Popup_OptionChange,
	Unsealing,
	HUD,
	HUD_SkillSet,
	HUD_Quest,
	HUD_Chat,
	HUD_QuickSlot,
	HUD_Total_QuickSlot,
	HUD_Total_QuickSlot_Potion,
	HUD_Total_QuickSlot_Battle,
	HUD_TargetList,
	Skill,
	NPCShop,
	UIShop,
	DailyWork,
	Achievement,
	CharInfo,
	CharInfoDetail,
	CharAbility,
	EquipInfo,
	Costume,
	Vehicle,
	Pet,
	QuestObtain,
	QuestAccept,
	PopUpQuestDelivery,
	QuestNormal,
	ReQuest,
	QuestRelation,
	PopupPackage,
	Force,
	CollectionBook,
	Dungeon,
	DungeonShop,
	Guild,
	GuildDev,
	GuildShop,
	GuildExpedition,
	EliteDungeon,
	Labyrinth,
	UnderWorld,
	CharacterSelect,
	ClassSelect,
	Customizing,
	Revival,
	Occupation,
	Occupation_Auction,
	Occupation_Board,
	Occupation_Observer,
	StrongPoint,
	Mail,
	ItemInfo,
	ItemInfo_Simple,
	WorldBoss,
	MagicSquare,
	SecretDungeon,
	WorldMap,
	NPCMaking,
	SleepMode,
	Friend,
	RecommendEquip,
	Party,
	ItemGetWay,
	GameOption,
	QuestNormalAuto,
	Npc_Exchange,
	PKRecord,
	Wanted,
	GreatBuilding,
	Ranking,
	PKPenalty,
	Durability,
	CollectionBookReward,
	Auction,
	Material_Change,
	FT_Exchange,
	Dominion,
	DominionWanted,
	DominionStorage,
	Synthesis,
	UserEvent,
	UserEvent_BattlePass,
	Teleport,
	TermItem,
	ItemCollection,
	ItemTooltip,
	ChannelWaiting,
	GatherList,
	ItemExchange,
	KeySetting,
	Guide,
	IndividualStorage,
	ServerChange,
	ItemTranscend,
	ServerVisit,
	ClosedTraining,
	ClassPhase,
	NFTCharacterTrade,
	EMirUIActionType_MAX,
};

// Enum MirMobile.EUserEvent_Siege_Team
enum class EUserEvent_Siege_Team : uint8 {
	SiegeTeam_Home,
	SiegeTeam_Away,
	SiegeTeam_MAX,
};

// Enum MirMobile.EWarpContentsType
enum class EWarpContentsType : uint8 {
	None,
	MapAuto,
	MapClick,
	MapNpc,
	PartyAssemble,
	GetPathHunting,
	GetPathGather,
	ChatSharedPos,
	Quest,
	QuestMainTracker,
	QuestMission,
	QuestRequestTracker,
	MoveToRequestNpc,
	QuestRelation,
	FieldDungeon,
	EliteDungeon,
	Labyrinth,
	UnderWorld,
	Occupation_Enter,
	Occupation_Exit,
	InstanceDungeon,
	MagicSquare_Enter,
	MagicSquare_Change,
	MagicSquare_Leave,
	WorldBoss,
	WorldBoss_Force,
	SecretDungeon_Enter,
	SecretDungeon_Leave,
	GuildExpedition,
	BossExpedition,
	BossWaveExpedition,
	EmergencyEscape,
	returnVillage,
	AutoBattleReturn,
	ChangeChannel,
	AutoMove_ReturnToCenter,
	UseInvenWarpItem,
	EWarpContentsType_MAX,
};

// Enum MirMobile.EWarpMethodType
enum class EWarpMethodType : uint8 {
	None,
	Script,
	Fail,
	EWarpMethodType_MAX,
};

// Enum MirMobile.WEMIX_METHOD
enum class WEMIX_METHOD : uint8 {
	NONE,
	exchangeToItem,
	exchangeToToken,
	seal,
	unseal,
	mint,
	WEMIX_MAX,
};

// Enum MirMobile.EWidgetOpenAllow
enum class EWidgetOpenAllow : uint8 {
	NONE,
	CINEMATIC,
	SLEEP_MODE,
	OUTGAME,
	INGAME,
	DEFAULT,
	ALL,
	CINEMA,
	HUD,
	MESSAGE,
	CHEAT,
	REVIVAL,
	QUEST_POPUP,
	EWidgetOpenAllow_MAX,
};

// Enum MirMobile.ETotalMenuSetPosition
enum class ETotalMenuSetPosition : uint8 {
	BP_DefaultNone,
	Top,
	Bottom,
	ETotalMenuSetPosition_MAX,
};

// Enum MirMobile.EWidgetLayer
enum class EWidgetLayer : uint8 {
	NONE,
	INGAME_1,
	INGAME_2,
	INGAME_3,
	HUD_DOWN_4,
	HUD_DOWN_3,
	HUD_DOWN_2,
	HUD_MAIN,
	HUD_1,
	HUD_POPUP_1,
	HUD_POPUP_2,
	HUD_POPUP_3,
	CONTENTS_BG,
	CONTENTS,
	CONTENTS_UPPER_1,
	CONTENTS_UPPER_2,
	CONTENTS_GOODS,
	CONTENTS_POPUP_UNDER_1,
	CONTENTS_POPUP_1,
	CONTENTS_POPUP_2,
	CONTENTS_POPUP_3,
	CONTENTS_POPUP_4,
	CONTENTS_POPUP_5,
	CONTENTS_POPUP_MSG,
	CONTENTS_POPUP_STRING_MSG,
	LOGIN_1,
	LOGIN_2,
	LOGIN_3,
	LOGIN_4,
	LOGIN_OPTION,
	TUTORIAL_1,
	TUTORIAL_2,
	NOTICE_CONTENTS_OPEN,
	NOTICE_POPUP,
	SCREEN_BLOCK,
	SCREEN_LOADING,
	SCREEN_FADE,
	SCREEN_CAPTION,
	SCREEN_SLEEPMODE,
	ITEM_TOOLTIP_INFO,
	ERROR_POPUP,
	DEBUG_LOG,
	MAX,
};

// Enum MirMobile.EWidgetID
enum class EWidgetID : uint8 {
	WIDGET_ID_NONE,
	MM_TEMP_IMAGE,
	MM_B_SKILL,
	MM_B_SET_SKILL,
	MM_SKILL_LIST_SLOT,
	MM_SKILL_DETAIL_LIST,
	MM_POPUP_SKILL_ITEM_EXCHANGE,
	MM_SKILL_AWAKEN_SLOT,
	MM_B_LOADING,
	MM_B_SHOP_NPC,
	MM_B_SHOP_NPC_MAKING,
	MM_B_COMMON_POPUP_INFO,
	MM_B_COMMON_POPUP_INGAME,
	MM_B_COMMON_POPUP_OUTGAME,
	MM_B_COMMON_POPUP_OUTGAME_ONESTOREPC,
	MM_B_COMMON_POPUP_CHECK,
	MM_B_COMMON_POPUP_EDITTEXT,
	MM_B_COMMON_POPUP_ERROR,
	MM_B_COMMON_POPUP_REWARD,
	MM_B_COMMON_POPUP_ITEMINFO,
	MM_B_COMMON_POPUP_COUNT,
	MM_B_POPUP_GAMEOPTION,
	MM_B_POPUP_GAMEOPTION_LOGIN,
	MM_POPUP_COUPON,
	MM_COMMON_HORIZONTAL_TAB_BTN,
	MM_COMMON_VERTICAL_TAB_BTN,
	MM_COMMON_VERTICAL_TAB_TREE_BTN,
	MM_COMMON_VERTICAL_TAB_TREE_SUB_BTN,
	MM_B_POPUP_ACQUIRED_ITEM,
	MM_B_POPUP_ACQUIRED_ITEM_SLOT,
	MM_COMMON_VERTICAL_TAB_SYMBOL_BTN,
	MM_PANEL_COMMON_LOADING,
	MM_POPUP_KEYPAD,
	MM_POPUP_KEYPAD_BIG_INTEGER,
	MM_POPUP_PARTY_PW_KEYPAD,
	MM_POPUP_FILTER,
	MM_POPUP_EXCHANGE_ITEM,
	MM_COMMON_TOOLTIP,
	MM_POPUP_DURABILITY,
	MM_SORT_BTN,
	MM_POPUP_ITEMTOLTIP,
	MM_CHARINFO_SLIM,
	MM_POPUP_DETAIL_INFO,
	MM_POPUP_WEBBROWSER,
	MM_POPUP_OPTION_SIMPLE,
	MM_POPUP_GUIDE_WEBBROWSER,
	MM_HEADLINE_MSG,
	MM_HUD_BOTTOM_MSG,
	MM_HUD_BOTTOM_MSG_SLOT,
	MM_HUD_GET_ITEM_MSG,
	MM_HUD_GET_ITEM_MSG_SLOT,
	MM_TOP_MSG,
	MM_TOP_MSG_SLOT,
	MM_SCREEN_MSG,
	MM_HUD_GET_SPECIAL_ITEM_MSG,
	MM_CONTENTS_GET_ITEM_MSG,
	MM_QUICK_ITEM_ACTION_MSG,
	MM_GM_MSG,
	MM_B_COMMON_BG,
	MM_B_GOODS,
	MM_TOTALMENU,
	MM_POPUP_CONTENTS_STATE,
	MM_POPUP_CONTENTS_ACTION_RESULT,
	MM_SLOT_INVENTORY,
	MM_SLOT_INVENTORY_BG,
	MM_SLOT_INVENTORY_DUMMY,
	MM_SLOT_INVENTORY_SCALE,
	WIDGET_ID_LOGO_MEDIA,
	WIDGET_ID_CONVENIENT_LOGIN,
	MM_B_LOGIN,
	MM_POPUP_TERMS_OF_SERVICE,
	MM_POPUP_VERSION_SELECT,
	MM_LOGIN_VERSION_SLOT,
	MM_POPUP_NEW_ACCOUNT,
	MM_POPUP_ACCOUNT_GUEST,
	MM_POPUP_ACCOUNT_INFO,
	MM_POPUP_ACCOUNT_SELECT,
	MM_POPUP_SERVER_SELECT,
	MM_SERVER_SLOT,
	MM_FINDCHAR_SLOT,
	MM_POPUP_SERVER_SELECT_GLOBAL,
	MM_SERVER_SLOT_GLOBAL,
	MM_FINDCHAR_SLOT_GLOBAL,
	MM_REGION_SLOT_GLOBAL,
	MM_SERVER_GROUP_GLOBAL,
	MM_CONNECTING_LOGIN,
	MM_CONNECTING_INGAME,
	MM_POPUP_GUEST_CONTINUE,
	MM_POPUP_GUEST_CONTINUESETTING,
	MM_POPUP_LOGIN_QUEUE,
	MM_POPUP_WEB_ONESTORE_IAP,
	MM_POPUP_WEB_XSOLLA_IAP,
	MM_POPUP_WEB_STEAM_IAP,
	MM_POPUP_REFUND_SANCTIONS,
	MM_SLOT_REFUND_SANCTIONS_LIST,
	MM_POPUP_SELECT_REGION,
	MM_B_MAGIC_STONE,
	MM_MAGIC_STONE_ATTRIEBUTE_SLOT,
	MM_JEWEL_POPUP_EQUIPED_JEWEL_INFO,
	MM_JEWEL_POPUP_EQUIPED_JEWEL_INFO_SLOT,
	MM_B_SMELT,
	MM_B_OPTION_CHANGE,
	MM_B_UNSEALING,
	MM_B_COMMON_ITEM_RESULT,
	MM_B_POPUP_OPTION_CHANGE,
	MM_B_POPUP_RANDOM_OPTION_LIST,
	MM_ITEM_OPTION_ABILITY_SLOT,
	MM_B_ITEM_MAKE,
	MM_ITEM_MAKE_SLOT,
	MM_ITEMMAKE_SLOT_RECT,
	MM_ITEM_MAKE_RESULT,
	MM_ITEM_STATE,
	MM_ITEM_OPTION_COMPARE,
	MM_ITEM_PACKAGE,
	MM_ITEM_PACKAGE_SLOT,
	MM_ITEM_SIMPLE_INFO,
	MM_B_POPUP_RECOMMENDEQUIP,
	MM_NPC_ITEM_EXCHANGE,
	MM_NPC_ITEM_EXCHANGE_SLOT,
	MM_ITEM_OPTION_PASSIVE,
	MM_POPUP_AUTO_OPTIONCHANGE,
	MM_B_ITEM_COLLECTION,
	MM_ITEM_COLLECT_LIST,
	MM_SLOT_ITEM_COLLECT,
	MM_SLOT_COLLECT_EFFECT,
	MM_POPUP_INFO_ITEM_COLLECT,
	MM_POPUP_REGISTER_COLLECT_ITEM,
	MM_POPUP_COMPLETE_COLLECT_ITEM,
	MM_ITEM_MATERIAL_SYNTHESIS,
	MM_SYSTHESIS_RESULT,
	MM_SYSTHESIS_RESULT_SLOT,
	MM_CENSER_RESULT,
	MM_ITEM_MAKE_SPECIAL_POPUP,
	MM_POPUP_MATERIAL_CHANGE,
	MM_POPUP_UNSEALING_ACCELERATION,
	MM_UNSEALING_ACCELERATION_SLOT,
	MM_UNSEALING_SLOT,
	MM_POPUP_GET_ITEM,
	MM_GET_ITEM_WAY_LIST_SLOT,
	MM_GET_ITEM_TYPE_SLOT,
	MM_GET_ITEM_CATEGORY_SLOT,
	MM_B_CHARINFO,
	MM_POPUP_OTHERUSERINFO,
	MM_B_EQUIPMENT,
	MM_DETAIL_STATUS_INFO,
	MM_SALE_ITEM_BASKET,
	MM_OPTION_ABILITY,
	MM_POPUP_EQUIP_AUTO,
	MM_GROWTH_PROGRESS,
	MM_POPUP_CUSTOMTITLE,
	MM_POPUP_CUSTOMTITLE_SWITCH,
	MM_FAME_LIST,
	MM_FAME_DETAILINFO_SLOT,
	MM_FAME_LIST_MAIN_SLOT,
	MM_FAME_LIST_SUB_SLOT,
	MM_POPUP_PROFILE,
	MM_POPUP_TREMITEM,
	MM_SLOT_TREMITEM,
	MM_POPUP_STATUS_INFO,
	MM_STATUS_INFO,
	MM_POPUP_STATUSCONTENTS,
	MM_SLOT_STATUSCONTENTS,
	MM_B_FORCE,
	MM_FORCE_TAB,
	MM_B_MASTERY,
	MM_B_ACHIEVEMENT,
	MM_ACHIEVEMENT_SLOT,
	MM_B_DUNGEON,
	MM_B_RAID_DUNGEON,
	MM_DUNGEON_LIST,
	MM_DUNGEON_LIST_SLOT,
	MM_ELITE_STAGE,
	MM_ELITE_STAGE_LIST,
	MM_ELITE_STAGE_SLOT,
	MM_B_ELITE_DUNGEON,
	MM_B_UNDER_WORLD,
	MM_DUNGEONSLOT_MATERIAL,
	MM_B_DAILYQUEST,
	MM_POPUP_QUEST_OBTAIN,
	MM_POPUP_QUEST_DELIVERY,
	MM_POPUP_QUEST_REPEAT,
	MM_POPUP_QUEST_NORMAL_AUTO,
	MM_QUEST_NORMAL_AUTO_SLOT,
	MM_QUEST_NORMAL_AUTOSLOT,
	MM_SLOT_QUEST,
	MM_SLOT_REQUEST,
	MM_B_QUESTNORMAL,
	MM_B_REQUEST,
	MM_POPUP_QUESTINFO,
	MM_POPUP_QUEST_ACCEPT,
	MM_B_QUESTRELATION,
	MM_QUEST_RELATION_SLOT,
	MM_QUEST_RELATION_DETAIL_SLOT,
	MM_QUEST_RELATION_GROUP_SLOT,
	MM_HUD_QUEST_MESSAGE,
	MM_HUD_ADD_RELATION,
	MM_HUD_COMPLETE_RELATION,
	MM_POPUP_RELATION_REWARDINFO,
	MM_RELATION_REWARDINFO_SLOT,
	MM_B_VEHICLE,
	MM_VEHICLE_SLOT,
	MM_B_COSTUME,
	MM_COSTUME_LIST_SLOT,
	MM_COSTUME_LIST_SLOT_LONG,
	MM_COSTUME_COLLECTIONLIST_SLOT,
	MM_COSTUME_POPUP_ABILITY_PART_OPTION,
	MM_COSTUME_PALETTE_SLOT,
	MM_COSTUME_PALETTE_SLOT_SMALL,
	MM_B_MAP,
	MM_MAP_PLAYER,
	MM_MAP_DEATH_ITEM,
	MM_MAP_DEST,
	MM_MAP_WAYPOINTDEST,
	MM_MAP_PARTY,
	MM_MAP_NAMETAG,
	MM_MAP_AREABTN,
	MM_MAP_WAYPOINT_LIST_SLOT,
	MM_MAP_CHANNEL_SLOT,
	MM_MAP_CHANNEL,
	MM_POPUP_IMMEDIATE_CONFIRM,
	MM_POPUP_MAP_GRADE_INFO,
	MM_POPUP_OCCUPATION_INFO,
	MM_B_HUD,
	MM_B_PKMode,
	MM_HUD_PARTY_USER,
	MM_HUD_PARTY_USER_SUBMENU,
	MM_LIMITTIME,
	MM_SKILL_VIRTUALPAD,
	MM_B_Growth,
	MM_B_GrowthPopup,
	MM_HUD_MINIMAP,
	MM_HUD_ALARM_TOWN,
	MM_HUD_PARTY_INVITE_POPUP,
	MM_B_HUD_FOLD_MAIN,
	MM_DAMAGE,
	MM_COMBO,
	MM_CROWDCONTROLTEXT,
	MM_SUBTARGET,
	MM_HUD_RIGHTMENU_DUNGEON,
	MM_HUD_RIGHTMENU_MAGICSQUARE,
	MM_HUD_RIGHTMENU_OCCUPATION,
	MM_HUD_RIGHTMENU_STRONGPOINT,
	MM_HUD_RIGHTMENU_SERVERVISIT,
	MM_POPUP_SALE_ITEM,
	MM_POPUP_ITEM_ORDER_OPTION,
	MM_POPUP_INVENTORY_EXTEND,
	MM_INVENTORY_SLOT,
	MM_ITEMSLOT_MATERIAL,
	MM_ITEMSLOT_SIMPLE_CNT,
	MM_SLOT_MATERIAL_RECT,
	MM_CONTENTS_OPEN_POPUP,
	MM_B_PARTY_INVITE,
	MM_B_PARTY_MANAGE,
	MM_B_PARTY_SEARCH,
	MM_B_PARTY_INFO,
	MM_B_SQUAD_INFO,
	MM_B_PARTY_ALARM,
	MM_B_PARTY_CREATE,
	MM_PARTY_LIST_SLOT,
	MM_PARTY_MEMBER_SLOT,
	MM_PARTY_INVITE_MEMBER_SLOT,
	MM_POPUP_PARTY_INFO,
	MM_POPUP_PARTY_INFO_SLOT,
	MM_PARTY_DUNGEON_LIST_SLOT,
	MM_PARTY_DUNGEON_MONSTER_SLOT_CREATE,
	MM_PARTY_DUNGEON_MONSTER_SLOT_MANAGE,
	MM_PARTY_DUNGEON_STAGE_LEVEL_SLOT,
	MM_POPUP_PARTY_SLOT_OPTION,
	MM_POPUP_PARTY_SLOT_OPTION_ITEM,
	MM_POPUP_DUNGEON_SEARCH,
	MM_POPUP_PARTY_MAKE,
	MM_POPUP_PARTY_PUBLICIZE,
	MM_DUNGEON_SEARCHLIST,
	MM_PARTY_MEMBERLIST,
	MM_PARTY_SEARCHLIST,
	MM_PARTY_INVITE_MEMBERLIST,
	MM_B_GUILD,
	MM_B_GUILD_CREATION,
	MM_B_GUILD_JOIN,
	MM_POPUP_GUILD_JOIN_OR_CREATION,
	MM_POPUP_GUILD_PERUSE,
	MM_GUILD_PERUSE_LIST_SLOT,
	MM_GUILD_JOIN_REQUEST_LIST_SLOT,
	MM_GUILD_MEMBER_SLOT_BY_GROUP,
	MM_GUILD_MEMBER_SLOT_LIST_01,
	MM_GUILD_MEMBER_SLOT_LIST_02,
	MM_GUILD_POPUP_MEMBERS,
	MM_GUILD_POPUP_GUILD_MEMBER_GRADE_SLOT,
	MM_GUILD_POPUP_GUILD_MEMBER_POSITION_SLOT,
	MM_GUILD_SHORT_CUT,
	MM_POPUP_GUILD_BOARD,
	MM_GUILD_ICON_SLOT,
	MM_GUILD_DIPLOMACY,
	MM_GUILD_DIPLOMACY_LIST_SLOT,
	MM_POPUP_GUILD_HOSTILITY,
	MM_POPUP_GUILD_CREATION,
	MM_POPUP_GUILD_SEARCH_EDIT,
	MM_POPUP_GUILD_SEARCH,
	MM_POPUP_GUILD_SEARCH_SLOT,
	MM_POPUP_CHARACTER_SEARCH_EDIT,
	MM_POPUP_CHARACTER_SEARCH,
	MM_POPUP_CHARACTER_SEARCH_SLOT,
	MM_POPUP_GUILD_INVITE,
	MM_POPUP_GUILD_INVITE_SLOT,
	MM_POPUP_EDIT,
	MM_POPUP_GUILD_NAME_CHANGE_EDIT,
	MM_GUILD_DEV,
	MM_POPUP_GUILD_DEV_INFO,
	MM_POPUP_GUILD_DEV_INFO_BENEFIT,
	MM_GUILD_DEV_BENEFIT_SLOT,
	MM_POPUP_GUILD_DEV_LEVELUP_RESULT,
	MM_POPUP_GUILD_DEV_SHORTCUT,
	MM_GUILD_SUPPORT,
	MM_GUILD_SUPPORT_SLOT,
	MM_GUILD_WANTED,
	MM_GUILD_WANTED_SLOT,
	MM_POPUP_GUILD_WANTED,
	MM_GUILD_SUPPLY,
	MM_GUILD_SUPPLY_SLOT,
	MM_GUILD_REPORT_SLOT,
	MM_GUILD_GIFT_SLOT,
	MM_GUILD_GIFT_RESULT,
	MM_GUILD_INVENTORY,
	MM_GUILD_INVENTORY_LIST_SLOT,
	MM_GUILD_HISTORY_SLOT,
	MM_B_GUILD_MARK_CHANGE,
	MM_POPUP_GUILD_REWARD_INFO,
	MM_POPUP_GUILD_PERMISSION,
	MM_GUILD_SHOP,
	MM_GUILD_SHOP_LIST,
	MM_POPUP_GUILD_SHOP_RECORD,
	MM_GUILD_SHOP_RECORD_LIST_SLOT,
	MM_GUILD_POPUP_PARTNER,
	MM_GUILD_POPUP_PARTNER_SLOT,
	MM_POPUP_GUILD_DONATION,
	MM_POPUP_GUILD_DONATION_DETAILS,
	MM_POPUP_GUILD_DONATION_DETAILS_SLOT,
	MM_POPUP_GUILD_GIVE_PERSONAL,
	MM_POPUP_GUILD_GIVE_MEMBER_SLOT,
	MM_POPUP_GUILD_GIVE_OTHER_SLOT,
	MM_POPUP_GUILD_GIVE_ALLIANCE,
	MM_POPUP_GUILD_GIVE_ALLIANCE_SLOT,
	MM_POPUP_GUILD_GIVE,
	MM_POPUP_GUILD_COST_EXCHANGE,
	MM_POPUP_GUILD_FRIENDSHIP_LIST,
	MM_POPUP_GUILD_FRIENDSHIP_LIST_SLOT,
	MM_POPUP_GUILD_BLACK_IRON_SHOP_SELL,
	MM_POPUP_GUILD_BLACK_IRON_SHOP_STATE,
	MM_POPUP_GUILD_AUTHORITY,
	MM_POPUP_GUILD_AUTHORITY_SLOT,
	MM_POPUP_GUILD_OTHER_MEMBERS,
	MM_POPUP_GUILD_OTHER_MEMBERS_SLOT,
	MM_B_GUILD_BLACK_IRON_INVENTORY,
	MM_B_GUILD_BLACK_IRON_INVENTORY_LIST_SLOT,
	MM_POPUP_GUILD_BLACK_IRON_SHOP_MOVE,
	MM_POPUP_GUILD_BLACK_IRON_SHOP_GIVE,
	MM_POPUP_GUILD_LIST,
	MM_GUILD_LIST_SLOT,
	MM_B_PKRECORD,
	MM_PKRECORD_LIST_SLOT,
	MM_POPUP_PKRECORDINFO,
	MM_B_WANTED,
	MM_POPUP_WANTED_REGIST,
	MM_WANTED_SLOT,
	MM_B_AUCTION,
	MM_AUCTION_SLOT_BOOKMARK,
	MM_AUCTION_SLOT_SELL,
	MM_AUCTION_SLOT_NORMAL,
	MM_AUCTION_SLOT_RESULT,
	MM_AUCTION_SLOT_MATERIAL,
	MM_POPUP_AUCTION_BUYINFO,
	MM_POPUP_AUCTION_CBACK,
	MM_POPUP_AUCTION_COUNT,
	MM_POPUP_AUCTION_GUILD,
	MM_POPUP_AUCTION_REGIST,
	MM_POPUP_AUCTION_INFO_REGIST,
	MM_AUCTION_COMBO_SLOT,
	MM_AUCTION_ENCHANT_COMBO_SLOT,
	MM_B_CHANCE,
	MM_B_RANKING,
	MM_RANKING_REWARD_LIST,
	MM_RANKING_REWARD_POPUP,
	MM_RANKING_SEASON_START,
	MM_RANKING_LIST_SLOT,
	MM_RANKING_REWARD_LIST_NEW,
	MM_RANKING_REWARD_POPUP_NEW,
	EDITOR_CHEATS,
	EDITOR_MAP_PREVIEW_TOOL,
	EDITOR_UI_PREVIEW_TOOL,
	MM_HUD_CHAT_POPUP,
	MM_POPUP_CHAT,
	MM_POPUP_CHAT_SETTING,
	MM_POPUP_CHAT_BLOCKLIST,
	MM_POPUP_CHAT_MACROLIST,
	MM_POPUP_CHAT_VOICEOPTION,
	MM_HUD_CHAT_BROADCAST_MESSAGE,
	MM_POPUP_COMMON_CHECKBOX,
	MM_POPUP_CHAT_RENDER_OPACITY,
	MM_HUD_CHAT_CHANNEL_TAB,
	MM_HUD_CHAT_MESSAGE,
	MM_HUD_CHAT_TALKMESSAGE_MINE,
	MM_HUD_CHAT_TALKMESSAGE_OTHER,
	MM_HUD_CHAT_STATUS_MESSAGE,
	MM_HUD_CHAT_ITEMSHARE_MINE,
	MM_HUD_CHAT_ITEMSHARE_OTHER,
	MM_HUD_CHAT_ADVERTISE,
	MM_HUD_CHAT_BLOCKLIST_SLOT,
	MM_HUD_CHAT_WHISPER_SLOT,
	MM_HUD_CHAT_USER_SLOT,
	MM_HUD_CHAT_DOTTED_LINE,
	MM_HUD_CHAT_BROADCAST_MSG,
	MM_HUD_CHAT_PARTYINVITE_MINE,
	MM_HUD_CHAT_PARTYINVITE_OTHER,
	MM_ALARM_LIST_POPUP,
	MM_ALARM_LIST_SLOT,
	MM_B_OCCUPATION,
	MM_OCCUPATION_STAGEPOPUP,
	MM_WORSHIP_POPUP,
	MM_OCCUPATION_BATTLESTART,
	MM_OCCUPATION_BATTLERESULT,
	MM_OCCUPATION_RANKLIST,
	MM_OCCUPATION_AUCTION_POPUP,
	MM_OCCUPATION_AUCTION_INVITE_POPUP,
	MM_OCCUPATION_INVITE_SLOT,
	MM_OCCUPATION_SITUATION_BOARD,
	MM_OCCUPATION_MINIMAP_ICON,
	MM_OCCUPATION_KILL_LOG_SLOT,
	MM_POPUP_SIEGE_COMMAND_EDITTEXT,
	MM_OCCUPATION_COMMANDMARK,
	MM_OCCUPATION_KINGASCENSION,
	MM_B_STRONGPOINT,
	MM_STRONGPOINT_LIST_SLOT,
	MM_STRONGPOINT_RESULT,
	MM_POPUP_STRONGPOINT_WINTARGET,
	WIDGET_ID_FADE,
	MM_POPUP_REVIVAL,
	MM_POPUP_DEATH_PENALTY,
	MM_POPUP_RESTORE_EXP,
	MM_POPUP_RESTORE_EXP_SLOT,
	MM_POPUP_RESTORE_ITEM,
	MM_POPUP_RESTORE_ITEM_SLOT,
	MM_B_MAIL,
	MM_MAIL_SLOT_MESSAGE,
	MM_POPUP_MAILWRITE,
	MM_POPUP_ADDRESSBOOK,
	MM_POPUP_ADDRESSBOOK_SLOT,
	MM_B_PET,
	MM_PETSLOT,
	MM_PET_STAT_SLOT,
	MM_PET_ABILITY_SLOT,
	MM_POPUP_UNLOCKED_PET_STAT_INFO,
	MM_POPUP_EQUIPPED_PET_STAT_INFO,
	MM_POPUP_REVIVAL_SELECT,
	MM_POPUP_REVIVAL_SELECT_SLOT,
	MM_POPUP_PET_GRADEUP,
	MM_B_DOMINION,
	MM_DOMINION_BASE_SLOT,
	MM_DOMINION_TAX_LIST,
	MM_DOMINION_TAX_GROUP,
	MM_DOMINION_TAX_SLOT,
	MM_DOMINION_HISTORY,
	MM_DOMINION_HISTORY_SLOT,
	MM_POPUP_DOMINION_TAX_DETAIL,
	MM_POPUP_DOMINION_REWARD,
	MM_POPUP_DOMINION_REWARD_SLOT,
	MM_POPUP_DOMINION_REWARD_LIST,
	MM_POPUP_DOMINION_REWARD_LIST_SLOT,
	MM_POPUP_DOMINION_CLASS,
	MM_POPUP_DOMINION_CLASS_RARE_GROUP,
	MM_POPUP_DOMINION_CLASS_RARE_LIST,
	MM_POPUP_DOMINION_CLASS_RARE_SLOT,
	MM_POPUP_DOMINION_CLASS_NORMAL_GROUP,
	MM_POPUP_DOMINION_CLASS_NORMAL_LIST,
	MM_POPUP_DOMINION_CLASS_NORMAL_SLOT,
	MM_POPUP_DOMINION_COMMAND,
	MM_POPUP_DOMINION_COMMAND_SLOT,
	MM_POPUP_DOMINION_WITHDRAWAL,
	MM_POPUP_DOMINION_GUILD_MEMBER_LIST,
	MM_POPUP_DOMINION_GUILD_MEMBER_LIST_SLOT,
	MM_B_DOMINION_WANTED,
	MM_DOMINION_WANTED_SLOT,
	MM_POPUP_DOMINION_TOOLTIP,
	MM_DOMINION_STORAGE_GOLD,
	MM_DOMINION_STORAGE_BLACKIRON,
	MM_POPUP_GATHER_LIST,
	MM_POPUP_GATHER_LIST_SLOT,
	MM_COMMON_COMBO_SLOT,
	MM_B_ITEM_TRANSCEND,
	WIDGET_ID_CHARACTER_SELECT,
	WIDGET_ID_CLASS_SELECT,
	WIDGET_ID_CUSTOMIZING,
	WIDGET_ID_CUSTOMIZING_LIST,
	WIDGET_ID_CUSTOMIZING_LIST_SLOT,
	WIDGET_ID_CUSTOMIZING_PALETTE,
	WIDGET_ID_CUSTOMIZING_PALETTE_SLOT,
	WIDGET_ID_CUSTOMIZING_SLIDER,
	WIDGET_ID_CUSTOMIZING_PICKER,
	WIDGET_ID_CUSTOMIZING_MY_COSTUME,
	WIDGET_ID_CUSTOMIZING_COSTUME_DYE,
	WIDGET_ID_CUSTOMIZING_SCREENSHOOT,
	WIDGET_ID_CUSTOMIZING_STYLEBOOK,
	WIDGET_ID_LOADING,
	WIDGET_ID_DEBUGPANEL,
	WIDGET_ID_PHASE_FAIL,
	WIDGET_ID_PLAYER_LEVEL_UP,
	WIDGET_ID_INGAME_BUFF_ICON,
	WIDGET_ID_INGAME_GET_GOLD,
	WIDGET_ID_CUTSCENE_DIALOGUE,
	WIDGET_ID_SMALLTALK,
	WIDGET_ID_ACHIEVEMENT,
	WIDGET_ID_ACHIEVEMENTLIST,
	WIDGET_ID_CHATTING,
	WIDGET_ID_COMMONPOPUPLINE,
	WIDGET_ID_BUFFINFOLIST,
	WIDGET_ID_COMBATPOINTPOPUP,
	WIDGET_ID_NAMETAG,
	WIDGET_ID_TARGETINFO,
	MM_PATCH_WIDGET,
	MM_PATCHMOVIE_WIDGET,
	MM_MINIGAME_WIDGET,
	WIDGET_ID_REVIVAL,
	WIDGET_ID_MOVIEPLAYER,
	WIDGET_ID_BOSSAPPEAR,
	WIDGET_ID_COUNT_DOWN,
	WIDGET_ID_OPERATING_BUTTON,
	WIDGET_ID_BLOCK_SCREEN,
	WIDGET_ID_OBJECTNAMETAG,
	WIDGET_ID_SCRIPT_SUBTITLE,
	WIDGET_ID_SEQUENCE_SKIP,
	WIDGET_ID_TUTORIAL_START,
	WIDGET_ID_TUTORIAL_GUID,
	WIDGET_ID_TUTORIAL_GUID_COMMENT,
	WIDGET_ID_TUTORIAL_NPCDIALOG,
	WIDGET_ID_TUTORIAL_PAGE,
	WIDGET_ID_TUTORIAL_GUIDE_PET,
	WIDGET_ID_MY_LOG,
	MM_B_UISHOP,
	MM_UISHOP_MAIN_TAB,
	MM_UISHOP_SUB_TAB,
	MM_UISHOP_GOODS_BIG_SLOT,
	MM_UISHOP_GOODS_SLOT,
	MM_UISHOP_GOODS_SCROLL_BOX,
	MM_UISHOP_GOODS_DETAIL_SLOT,
	MM_POPUP_GOODS_BUY,
	MM_POPUP_NPC_SHOP_BUY_COUNT,
	MM_NPC_SHOP_LIST_SLOT,
	MM_DUNGEON_SHOP,
	MM_DUNGEON_SHOP_LIST,
	MM_B_BLACKIRONCHANGE,
	MM_SLEEPMODE,
	MM_POPUP_GET_HISTORY,
	MM_SLOT_GET_HISTORY,
	MM_B_WORLDBOSS_LIST,
	MM_BOSS_APPEARANCE,
	MM_BOSS_CONTRIBUTION,
	MM_POPUP_WORLDBOSS_CHANNEL,
	MM_SLOT_WORLDBOSS_CHANNEL,
	MM_POPUP_BOSS_TIME,
	MM_POPUP_BOSS_REWARD,
	MM_B_SQUARE_LIST,
	MM_POPUP_SQUARESTAGE_LIST,
	MM_POPUP_SQUARESTAGE_LIST_SLOT,
	MM_POPUP_QUICKSLOT_OPTION,
	MM_SLOT_QUICKSLOT,
	MM_SQUARE_DROP_LIST,
	MM_TOTAL_QUICK,
	MM_TOTAL_QUICK_SKILL_SLOT,
	MM_POPUP_QUICKSLOT_TOWNNPC_POSITION,
	MM_B_SECRET_DUNGEON,
	MM_DUNGEON_QUEST_SLOT,
	MM_POPUP_SECRET_INFO,
	MM_B_FRIEND,
	MM_FRIEND_LIST_SLOT,
	MM_POPUP_FRIEND_SEARCH,
	MM_POPUP_FRIEND_ORDER_OPTION,
	MM_POPUP_RAID_REWARD,
	MM_CHARACTER_REWARD_SLOT,
	MM_CHARACTER_REWARD_SLOT2,
	MM_B_POPUP_DUNGEON_EVENT_TIME_SLOT,
	MM_B_POPUP_DUNGEON_EVENT_ICON_SLOT,
	MM_POPUP_EMOTE,
	MM_PHOTOMODE,
	MM_DUNGEON_COMMON_SLOT,
	MM_GUILD_EXPEDITION_LIST,
	MM_GUILD_BOSS_EXPEDITION_LIST,
	MM_GUILD_BOSS_WAVE_EXPEDITION_LIST,
	MM_GUILD_EVENT,
	MM_B_GREAT_BUILDING,
	MM_POPUP_BUILDING,
	MM_POPUP_BUILDING_LIST,
	MM_POPUP_BUILDING_CHART,
	MM_POPUP_BUILDING_CHART_LIST,
	MM_POPUP_BUILDING_ACCEL,
	MM_WARNING_SCREEN,
	MM_PK_WARNING_SCREEN,
	MM_POPUP_PK_PENALTY,
	MM_POPUP_GACHA_RESULT,
	MM_POPUP_USER_EVENT,
	MM_USER_EVENT_ATTENDANCE_MONTH,
	MM_USER_EVENT_TAB_SLOT,
	MM_USER_EVENT_ITEM_SLOT,
	MM_USER_EVENT_BATTLEPASS_REWARD_SLOT,
	MM_USER_EVENT_BATTLEPASS_MISSION_SLOT,
	MM_POPUP_BATTLEPASS_BUYINFO,
	MM_USER_EVENT_GOAL_SLOT,
	MM_POPUP_TELEPORT,
	MM_TELEPORT_SLOT,
	MM_DEUL_RESULT,
	MM_NEW_OCCUPATION_BATTLERESULT,
	MM_NEW_OCCUPATION_RANKING_LIST,
	MM_POPUP_OCCUPATION_RANK_REWARD,
	MM_OCCUPATION_RANK_REWARD_LIST,
	MM_POPUP_OCCUPATION_RANK_BOARD,
	MM_SLOT_OCCUPATION_RANKING,
	MM_POPUP_OCCUPATION_SIEGESET,
	MM_POPUP_OCCUPATION_SIEGETANK,
	MM_OCCUPATION_OBSERVER,
	MM_OCCUPATION_OBSERVER_KILLLOG_SLOT,
	MM_COMMON_POPUP_CHANNELWAITING,
	MM_POPUP_GUILD_WELCOME,
	MM_POPUP_GACHA_PERCENT,
	MM_POPUP_EXP_BOOSTER,
	MM_POPUP_EXP_BOOSTER_SLOT,
	MM_POPUP_EXP_BOOSTER_CHARGE,
	MM_B_ITEM_EXCHANGE,
	MM_GAMEOPTION_KEYSETTING_GROUP,
	MM_GAMEOPTION_KEYSETTING_GROUP_SLOT,
	MM_SHORT_CUT_KEY,
	MM_UISHOP_CASH_BAG_SLOT,
	MM_POPUP_UISHOP_GOODS_DETAIL,
	MM_POPUP_UISHOP_GUILD_GIFT,
	MM_POPUP_UISHOP_BANNER,
	MM_POPUP_UISHOP_MESSAGE,
	MM_COMMON_POPUP_STOP_WATCHING_TODAY,
	MM_B_SKILL_AWAKEN_RESULT,
	MM_POPUP_NAMECHANGE,
	MM_UISHOP_GOODS_PREIOD_DETAIL_SLOT,
	MM_B_INDIVIDUAL_STORAGE,
	MM_POPUP_SERVERRELOCATION,
	MM_POPUP_SERVERLIST,
	MM_SERVERRELOCATION_SERVERLIST,
	MM_SERVERRELOCATION_SETLIST,
	MM_POPUP_FRONT_BANNER,
	MM_POPUP_AUTO_SMELT,
	MM_USER_EVENT_GACHA_RESULT,
	MM_POPUP_SKILL_AWAKEN_LIST,
	MM_POPUP_UISHOP_STEP_LIST,
	MM_POPUP_SERVERVISIT_MEMBERS,
	MM_POPUP_SERVERVISIT_MEMBERS_SLOT,
	MM_POPUP_SERVERVISITLLIST,
	MM_POPUP_SERVERVISITSELECT,
	MM_POPUP_SERVERVISITRELOCATION,
	MM_SERVERVISITRELOCATION_SERVERLIST,
	MM_SERVERVISITRELOCATION_SETLIST,
	MM_HUD_SERVERVISITMAP,
	MM_SERVERVISIT_WAYPOINT_CATEGORY,
	MM_SERVERVISIT_WAYPOINT_LIST_SLOT,
	MM_POPUP_SERVERVISIT_GUILDALLY,
	MM_POPUP_SERVERVISIT_GUILDALLY_SLOT,
	MM_POPUP_SERVERVISITSELECT_SLOT,
	MM_B_CLOSED_TRAINING,
	MM_POPUP_CLOSED_TRAINING_COLLECT,
	MM_POPUP_CLOSED_TRAINING_ABILITY,
	MM_POPUP_CLOSED_TRAINING_COLLECT_RESULT,
	MM_POPUP_CLOSED_TRAINING_DETAIL_STAT,
	MM_CLOSED_TRAINING_COLLECT_LIST_SLOT,
	MM_CLOSED_TRAINING_ABILITY_SLOT,
	MM_CLOSED_TRAINING_COLLECT_RESULT_SLOT,
	MM_CLOSED_TRAINING_DETAIL_STAT_SLOT,
	MM_GAMEOPTION_LANGUAGE_SLOT,
	MM_WEMIX_WEBBROWSER,
	MM_B_CLASS_PHASE,
	MM_CLASS_PHASE_CLASS_SLOT,
	MM_CLASS_PHASE_INFO_SLOT,
	MM_CLASS_PHASE_SKILL_INFO_SLOT,
	MM_CLASS_PHASE_SKILL_SLOT,
	MM_SIEGE_OBSERVER_SITUATION_BOARD,
	MM_B_FT_EXCHANGE,
	MAX,
};

// Enum MirMobile.EACTION_RESULT
enum class EACTION_RESULT : uint8 {
	SUCCESS,
	FAIL,
	EACTION_MAX,
};

// Enum MirMobile.LOAD_RESULT
enum class LOAD_RESULT : uint8 {
	LOAD_SUCCESS,
	LOAD_FAIL,
	LOAD_MAX,
};

// Enum MirMobile.ENavAreaFlag
enum class ENavAreaFlag : uint8 {
	Default,
	NavLink,
	ENavAreaFlag_MAX,
};

// Enum MirMobile.EObjectActivateType
enum class EObjectActivateType : uint8 {
	ALWAYS,
	QUEST,
	CHARLEVEL,
	NEED_GUILD,
	RELATION_QUEST,
	MISSION,
	REPLACE_MISSION,
	REQUEST_MISSION,
	NECESSARY_ITEM,
	NOACTIVE,
	EObjectActivateType_MAX,
};

// Enum MirMobile.EGatherObjectType
enum class EGatherObjectType : uint8 {
	NORMAL,
	Drop_Object,
	SIEGEREVIVALFLAG,
	SPARRINGOBJ,
	EGatherObjectType_MAX,
};

// Enum MirMobile.EParticleEffectElementType
enum class EParticleEffectElementType : uint8 {
	ePEElement_NORMAL,
	ePEElement_RED,
	ePEElement_GREEN,
	ePEElement_MAX,
};

// Enum MirMobile.EPhotoModeOptionType
enum class EPhotoModeOptionType : uint8 {
	NONE,
	Actor_My,
	Actor_Other,
	Actor_NPC,
	UI_My,
	UI_Other,
	UI_NPC,
	GuildMark_My,
	GuildMark_Other,
	GuildName_My,
	GuildName_Other,
	MAX,
};

// Enum MirMobile.EPhotoModeCameraMoveButton
enum class EPhotoModeCameraMoveButton : uint8 {
	NONE,
	UP,
	LEFT,
	RIGHT,
	DOWN,
	EPhotoModeCameraMoveButton_MAX,
};

// Enum MirMobile.EPhotoModeType
enum class EPhotoModeType : uint8 {
	None,
	Pose,
	Filter,
	DepthOfField,
	FieldOfView,
	Brightness,
	LogoImage,
	LookAt,
	Option,
	Exit,
	EPhotoModeType_MAX,
};

// Enum MirMobile.QuestBattleType
enum class QuestBattleType : uint8 {
	NONE,
	FIND_MONSTER,
	START_AUTOBATTLE,
	QuestBattleType_MAX,
};

// Enum MirMobile.QuestHelperType
enum class QuestHelperType : uint8 {
	NONE,
	TALK_NPC,
	POS_TO_TALK_NPC,
	POS_TO_PHASE,
	POS_TO_COMPLETE,
	OPEN_CONTENT,
	OPEN_QUEST_CONTENT,
	OPEN_ITEM_MAKE_CONTENT,
	OPEN_STAGE_QUEST_CONTENT,
	OPEN_CONTENT_WITH_PLAYDATA,
	OPEN_FORCE,
	OPEN_FORCE_BY_PLAYDATA,
	WARP,
	TRACKER_CLICK,
	ITEM_GET,
	COST_DELIVERY,
	ITEM_DELIVERY,
	QUEST_END,
	MONSTER_KILL,
	GROUP_MONSTER_KILL,
	STAGE_MONSTER_KILL,
	NPC_GUARD,
	GRADE_MONSTER_KILL,
	OBJ_GET,
	TYPE_OBJ_GET,
	ALL_OBJ_GET,
	CHAR_MOVE_VIACOORDINATE1,
	CHAR_MOVE_VIACOORDINATE2,
	CHAR_MOVE_NONE,
	CHAR_MOVE_NONE_ALLSTAGE_ACTIVE,
	CHAR_MOVE_ACCEPT_NPC,
	SHOW_ITEM_DELIVERY_POPUP,
	CHAR_MOVE_VIACOORDINATE5,
	CHAR_MOVE_AND_TRACKER_OFF,
	AUTO_OBJ_GET,
	ITEM_TYPE_MAKE,
	ITEM_MAKE_SEARCH,
	QuestHelperType_MAX,
};

// Enum MirMobile.QuestMissionType
enum class QuestMissionType : uint8 {
	None,
	ScriptPlay,
	TalkNPCFind,
	TalkNPCFindToPos,
	PhaseQuestComplete,
	MoveTo,
	ArrivePosWithBuff,
	ArrivePosWithLevel,
	ArrivePosWithItem,
	ArrivePosWithAchive,
	ArrivePosWithMainQuest,
	ArrivePosWithRelation,
	ArrivePosWithMission,
	ArrivePosWithRequest,
	ArrivePosWithMoney,
	NPCToPos,
	Warp,
	TrackerClick,
	MonsterKill_Relation,
	GroupMonsterKill_Relation,
	TalkNPC_Chance,
	TalkNPC_EquipCheck,
	TalkNPC_BuffCheck,
	TalkNPC_ItemCheck,
	TalkNPC_AchievementCheck,
	TalkNPC_StateCheck,
	TalkNPC_RelationCheck,
	TalkNPC_QuestCheck,
	TalkCheck_WithLevel,
	TalkCheck_WithMission,
	TalkCheck_WithRequest,
	Gathering_Chance,
	Gathering_EquipCheck,
	Gathering_BuffCheck,
	Gathering_ItemCheck,
	Gathering_AchievementCheck,
	Gathering_WithLevel,
	Gathering_WithMainQuest,
	Gathering_WithRelation,
	Phase_Relation,
	ItemUsage,
	ItemMake_SearchedTarget,
	CheckPlayDataForceOpened,
	CheckPlayDataForceBloodOpened,
	CheckPlayDataForceUpgradedCount,
	CheckPlayDataForceUpgradeNLevel,
	CheckPlayDataSmeltingItemDefLev,
	CheckPlayDataEnterStage,
	CheckPlayDataCondition,
	Level,
	CombatPoint,
	ItemGet,
	MonsterKill,
	MonsterKill_WithBuff,
	KillMonsterLastAttack,
	KillMonsterLastAttackAlone,
	KillMonsterAloneOrFiveParty,
	KillMonsterAloneOrFifteenParty,
	MonsterFindKill,
	MonsterGroupKill,
	MonsterGroupKill_WithBuff,
	KillGroupMonsterLastAttack,
	KillGroupMonsterLastAttackAlone,
	KillGroupMonsterAloneOrFiveParty,
	KillGroupMonsterAloneOrFifteenParty,
	StageMonsterKill,
	MonsterGradeKill,
	QuestItemGetFromMonster,
	ObjectQuestItemGet,
	ObjectQuestItemGetNoShare,
	GatheringObjectType,
	GatheringObjectTypeNoShare,
	GatheringAllObject,
	GatherObjectOnAllStage,
	Learn,
	ItemMake,
	TryItemTypeMake,
	DeliveryCost,
	DeliveryItem,
	TalkNPC_DeliveryCost,
	TalkNPC_DeliveryItem,
	ItemUpgrade,
	ForceBloodOpened,
	ForceBloodNLevel,
	ForceBloodUpgradeCount,
	MissionClearCheckInStage,
	UpgradeEnchantCount,
	QuestCount,
	StageEnterCount,
	StageTypeEnterCount,
	CompleteQuestCount,
	QuestEnd,
	Max,
};

// Enum MirMobile.ETriggerScriptType
enum class ETriggerScriptType : uint8 {
	BATTLESTART,
	BATTLESTOP,
	CAMERAFOCUS,
	CAMERASET,
	CAMERASHAKE,
	DELAY,
	FADE,
	HUDHIDE,
	HUDSHOW,
	MONSTERANIM,
	MONSTERBB,
	MONSTERHIDE,
	MONSTERRUN,
	NPCANIM,
	NPCBB,
	NPCHIDE,
	NPCJUMP,
	NPCRUN,
	NPCSEARCHRUN,
	PCBB,
	SMALLTALK,
	STRINGMESSAGE,
	ETriggerScriptType_MAX,
};

// Enum MirMobile.EWaypointSubType
enum class EWaypointSubType : uint8 {
	NONE,
	MINING_OBJECT,
	GATHER_OBJECT,
	BLACK_IRON,
	JINKI,
	EWaypointSubType_MAX,
};

// Enum MirMobile.EWaypointType
enum class EWaypointType : uint8 {
	NONE,
	DEFAULT,
	MONSTER,
	COLLECT_ZONE,
	NPC,
	SUMMON_AREA,
	EWaypointType_MAX,
};

// Enum MirMobile.EWeaponMaterialParameterType
enum class EWeaponMaterialParameterType : uint8 {
	eWeaponMaterialParamType_Vector,
	eWeaponMaterialParamType_Scalar,
	eWeaponMaterialParamType_MAX,
};

