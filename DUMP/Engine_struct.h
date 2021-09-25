// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	Masculine,
	Feminine,
	Neuter,
	ETextGender_MAX,
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	Int,
	UInt,
	Float,
	Double,
	Text,
	Gender,
	EFormatArgumentType_MAX,
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	Destroyed,
	LevelTransition,
	EndPlayInEditor,
	RemovedFromWorld,
	Quit,
	EEndPlayReason_MAX,
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_PrePhysics,
	TG_StartPhysics,
	TG_DuringPhysics,
	TG_EndPhysics,
	TG_PostPhysics,
	TG_PostUpdateWork,
	TG_LastDemotable,
	TG_NewlySpawned,
	TG_MAX,
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	Native,
	SimpleConstructionScript,
	UserConstructionScript,
	Instance,
	EComponentCreationMethod_MAX,
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8 {
	Unknown,
	Good,
	Bad,
	Serious,
	Critical,
	NumSeverities,
	ETemperatureSeverityType_MAX,
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	Custom,
	X,
	Y,
	Z,
	UseGlobalPhysicsSetting,
	EPlaneConstraintAxisSetting_MAX,
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	OneShot,
	OneShot_Reverse,
	Loop_Reset,
	PingPong,
	EInterpToBehaviourType_MAX,
};

// Enum Engine.ETeleportType
enum class ETeleportType : uint8 {
	None,
	TeleportPhysics,
	ResetPhysics,
	ETeleportType_MAX,
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8 {
	PIDT_None,
	PIDT_Int,
	PIDT_Float,
	PIDT_String,
	PIDT_Object,
	PIDT_Custom,
	PIDT_MAX,
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None,
	MOVE_Walking,
	MOVE_NavWalking,
	MOVE_Falling,
	MOVE_Swimming,
	MOVE_Flying,
	MOVE_Custom,
	MOVE_MAX,
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists,
	NetDriverCreateFailure,
	NetDriverListenFailure,
	ConnectionLost,
	ConnectionTimeout,
	FailureReceived,
	OutdatedClient,
	OutdatedServer,
	PendingConnectionFailure,
	NetGuidMismatch,
	NetChecksumMismatch,
	ENetworkFailure_MAX,
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	NoLevel,
	LoadMapFailure,
	InvalidURL,
	PackageMissing,
	PackageVersion,
	NoDownload,
	TravelFailure,
	CheatCommands,
	PendingNetGameCreateFailure,
	CloudSaveFailure,
	ServerTravelFailure,
	ClientTravelFailure,
	ETravelFailure_MAX,
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	Unknown,
	Portrait,
	PortraitUpsideDown,
	LandscapeLeft,
	LandscapeRight,
	FaceUp,
	FaceDown,
	EScreenOrientation_MAX,
};

// Enum Engine.EApplicationState
enum class EApplicationState : uint8 {
	Unknown,
	Inactive,
	Background,
	Active,
	EApplicationState_MAX,
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1,
	ObjectTypeQuery2,
	ObjectTypeQuery3,
	ObjectTypeQuery4,
	ObjectTypeQuery5,
	ObjectTypeQuery6,
	ObjectTypeQuery7,
	ObjectTypeQuery8,
	ObjectTypeQuery9,
	ObjectTypeQuery10,
	ObjectTypeQuery11,
	ObjectTypeQuery12,
	ObjectTypeQuery13,
	ObjectTypeQuery14,
	ObjectTypeQuery15,
	ObjectTypeQuery16,
	ObjectTypeQuery17,
	ObjectTypeQuery18,
	ObjectTypeQuery19,
	ObjectTypeQuery20,
	ObjectTypeQuery21,
	ObjectTypeQuery22,
	ObjectTypeQuery23,
	ObjectTypeQuery24,
	ObjectTypeQuery25,
	ObjectTypeQuery26,
	ObjectTypeQuery27,
	ObjectTypeQuery28,
	ObjectTypeQuery29,
	ObjectTypeQuery30,
	ObjectTypeQuery31,
	ObjectTypeQuery32,
	ObjectTypeQuery_MAX,
	EObjectTypeQuery_MAX,
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	None,
	ForOneFrame,
	ForDuration,
	Persistent,
	EDrawDebugTrace_MAX,
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1,
	TraceTypeQuery2,
	TraceTypeQuery3,
	TraceTypeQuery4,
	TraceTypeQuery5,
	TraceTypeQuery6,
	TraceTypeQuery7,
	TraceTypeQuery8,
	TraceTypeQuery9,
	TraceTypeQuery10,
	TraceTypeQuery11,
	TraceTypeQuery12,
	TraceTypeQuery13,
	TraceTypeQuery14,
	TraceTypeQuery15,
	TraceTypeQuery16,
	TraceTypeQuery17,
	TraceTypeQuery18,
	TraceTypeQuery19,
	TraceTypeQuery20,
	TraceTypeQuery21,
	TraceTypeQuery22,
	TraceTypeQuery23,
	TraceTypeQuery24,
	TraceTypeQuery25,
	TraceTypeQuery26,
	TraceTypeQuery27,
	TraceTypeQuery28,
	TraceTypeQuery29,
	TraceTypeQuery30,
	TraceTypeQuery31,
	TraceTypeQuery32,
	TraceTypeQuery_MAX,
	ETraceTypeQuery_MAX,
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	Move,
	Stop,
	Return,
	EMoveComponentAction_MAX,
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	Quit,
	Background,
	EQuitPreference_MAX,
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	DoNotLock,
	LockOnCapture,
	LockAlways,
	LockInFullscreen,
	EMouseLockMode_MAX,
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	Overlay,
	VerticalBox,
	EWindowTitleBarMode_MAX,
};

// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8 {
	RTS_World,
	RTS_Actor,
	RTS_Component,
	RTS_ParentBoneSpace,
	RTS_MAX,
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset,
	KeepWorldPosition,
	SnapToTarget,
	SnapToTargetIncludingScale,
	EAttachLocation_MAX,
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative,
	KeepWorld,
	SnapToTarget,
	EAttachmentRule_MAX,
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8 {
	KeepRelative,
	KeepWorld,
	EDetachmentRule_MAX,
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	Static,
	Stationary,
	Movable,
	EComponentMobility_MAX,
};

// Enum Engine.EDetailMode
enum class EDetailMode : uint8 {
	DM_Low,
	DM_Medium,
	DM_High,
	DM_MAX,
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	UseConfigDefault,
	AlwaysUpdate,
	OnlyUpdateMovable,
	NeverUpdate,
	EActorUpdateOverlapsMethod_MAX,
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	Linear,
	Cubic,
	HermiteCubic,
	Sinusoidal,
	QuadraticInOut,
	CubicInOut,
	QuarticInOut,
	QuinticInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExpIn,
	ExpOut,
	ExpInOut,
	Custom,
	EAlphaBlendOption_MAX,
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 {
	CanBeLeader,
	AlwaysFollower,
	AlwaysLeader,
	TransitionLeader,
	TransitionFollower,
	EAnimGroupRole_MAX,
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8 {
	LinkedLayers,
	LinkedAnimGraph,
	EPreviewAnimationBlueprintApplicationMethod_MAX,
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp,
	AKF_VariableKeyLerp,
	AKF_PerTrackCompression,
	AKF_ACLDefault,
	AKF_ACLCustom,
	AKF_ACLSafe,
	AKF_MAX,
};

// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8 {
	RCT_Float,
	RCT_Vector,
	RCT_Transform,
	RCT_MAX,
};

// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8 {
	AACF_NONE,
	AACF_DriveMorphTarget_DEPRECATED,
	AACF_DriveAttribute_DEPRECATED,
	AACF_Editable,
	AACF_DriveMaterial_DEPRECATED,
	AACF_Metadata,
	AACF_DriveTrack,
	AACF_Disabled,
	AACF_MAX,
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None,
	ACF_Float96NoW,
	ACF_Fixed48NoW,
	ACF_IntervalFixed32NoW,
	ACF_Fixed32NoW,
	ACF_Float32NoW,
	ACF_Identity,
	ACF_MAX,
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8 {
	ABPT_None,
	ABPT_RefPose,
	ABPT_AnimScaled,
	ABPT_AnimFrame,
	ABPT_MAX,
};

// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8 {
	NoRootMotionExtraction,
	IgnoreRootMotion,
	RootMotionFromEverything,
	RootMotionFromMontagesOnly,
	ERootMotionMode_MAX,
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	RefPose,
	AnimFirstFrame,
	Zero,
	ERootMotionRootLock_MAX,
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength,
	Duration,
	EMontagePlayReturnType_MAX,
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	DirectionalArrow,
	Sphere,
	Line,
	OnScreenMessage,
	CoordinateSystem,
	EDrawDebugItemType_MAX,
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	Absolute,
	Relative,
	Proportional,
	EAnimLinkMethod_MAX,
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8 {
	Moved,
	NotMoved,
	InvalidSection,
	InvalidMontage,
	EMontageSubStepResult_MAX,
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	Begin,
	End,
	EAnimNotifyEventType_MAX,
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8 {
	Default,
	WorldSpace,
	WorldRotation,
	EInertializationSpace_MAX,
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8 {
	Invalid,
	Valid,
	Excluded,
	EInertializationBoneState_MAX,
};

// Enum Engine.EInertializationState
enum class EInertializationState : uint8 {
	Inactive,
	Pending,
	Active,
	EInertializationState_MAX,
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 {
	EM_Standard,
	EM_Freeze,
	EM_DelayedFreeze,
	EM_MAX,
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 {
	EDS_SourcePose,
	EDS_DestinationPose,
	EDS_MAX,
};

// Enum Engine.ECopyType
enum class ECopyType : uint8 {
	MemCopy,
	BoolProperty,
	StructProperty,
	ObjectProperty,
	ECopyType_MAX,
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	None,
	LogicalNegateBool,
	EPostCopyOperation_MAX,
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	NeverAsPin,
	PinHiddenByDefault,
	PinShownByDefault,
	AlwaysAsPin,
	EPinHidingMode_MAX,
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	CoM,
	CustomSphere,
	InnerSphere,
	OuterSphere,
	AnimPhysCollisionType_MAX,
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AxisX,
	AxisY,
	AxisZ,
	AnimPhysTwistAxis_MAX,
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8 {
	ETAA_Default,
	ETAA_Finished,
	ETAA_Looped,
	ETAA_MAX,
};

// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8 {
	TLT_StandardBlend,
	TLT_Inertialization,
	TLT_Custom,
	TLT_MAX,
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8 {
	TBM_Linear,
	TBM_Cubic,
	TBM_MAX,
};

// Enum Engine.EComponentType
enum class EComponentType : uint8 {
	None,
	TranslationX,
	TranslationY,
	TranslationZ,
	RotationX,
	RotationY,
	RotationZ,
	Scale,
	ScaleX,
	ScaleY,
	ScaleZ,
	EComponentType_MAX,
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	X,
	Y,
	Z,
	X_Neg,
	Y_Neg,
	Z_Neg,
	Custom,
	EAxisOption_MAX,
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	Linear,
	Step,
	EAnimInterpolationType_MAX,
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 {
	MaxWeight,
	NormalizeByWeight,
	BlendByWeight,
	ECurveBlendOption_MAX,
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None,
	AAT_LocalSpaceBase,
	AAT_RotationOffsetMeshSpace,
	AAT_MAX,
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	NoFiltering,
	LOD,
	ENotifyFilterType_MAX,
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	Queued,
	BranchingPoint,
	EMontageNotifyTickType_MAX,
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8 {
	BRS_KeepComponentSpaceRotation,
	BRS_KeepLocalSpaceRotation,
	BRS_CopyFromTarget,
	BRS_MAX,
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8 {
	BCS_WorldSpace,
	BCS_ComponentSpace,
	BCS_ParentBoneSpace,
	BCS_BoneSpace,
	BCS_MAX,
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X,
	BA_Y,
	BA_Z,
	BA_MAX,
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	Unknown,
	NeverCook,
	DevelopmentCook,
	DevelopmentAlwaysCook,
	AlwaysCook,
	EPrimaryAssetCookRule_MAX,
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	Sphere,
	Capsule,
	Box,
	Cone,
	EAttenuationShape_MAX,
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	Linear,
	Logarithmic,
	Inverse,
	LogReverse,
	NaturalSound,
	Custom,
	EAttenuationDistanceModel_MAX,
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8 {
	Linear,
	Logarithmic,
	SCurve,
	Sin,
	Count,
	EAudioFaderCurve_MAX,
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8 {
	Playing,
	Stopped,
	Paused,
	FadingIn,
	FadingOut,
	Count,
	EAudioComponentPlayState_MAX,
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8 {
	Linear,
	EqualPower,
	FullVolume,
	EMonoChannelUpmixMethod_MAX,
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8 {
	Linear,
	EqualPower,
	EPanningMethod_MAX,
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8 {
	Low16000Hz,
	Normal24000Hz,
	EVoiceSampleRate_MAX,
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8 {
	REVERB_Default,
	REVERB_Bathroom,
	REVERB_StoneRoom,
	REVERB_Auditorium,
	REVERB_ConcertHall,
	REVERB_Cave,
	REVERB_Hallway,
	REVERB_StoneCorridor,
	REVERB_Alley,
	REVERB_Forest,
	REVERB_City,
	REVERB_Mountains,
	REVERB_Quarry,
	REVERB_Plain,
	REVERB_ParkingLot,
	REVERB_SewerPipe,
	REVERB_Underwater,
	REVERB_SmallRoom,
	REVERB_MediumRoom,
	REVERB_LargeRoom,
	REVERB_MediumHall,
	REVERB_LargeHall,
	REVERB_Plate,
	REVERB_MAX,
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8 {
	BL_AfterTonemapping,
	BL_BeforeTonemapping,
	BL_BeforeTranslucency,
	BL_ReplacingTonemapper,
	BL_SSRInput,
	BL_MAX,
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	AllAnimations,
	HighestWeightedAnimation,
	None,
	ENotifyTriggerMode_MAX,
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8 {
	BSA_None,
	BSA_X,
	BSA_Y,
	BSA_Max,
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	Disabled,
	Dependency,
	ExplicitlyEnabled,
	EBlueprintNativizationFlag_MAX,
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	Default,
	Development,
	FinalRelease,
	EBlueprintCompileMode_MAX,
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal,
	BPTYPE_Const,
	BPTYPE_MacroLibrary,
	BPTYPE_Interface,
	BPTYPE_LevelScript,
	BPTYPE_FunctionLibrary,
	BPTYPE_MAX,
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8 {
	BS_Unknown,
	BS_Dirty,
	BS_Error,
	BS_UpToDate,
	BS_BeingCreated,
	BS_UpToDateWithWarnings,
	BS_MAX,
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	Default,
	SixDOF,
	YZPlane,
	XZPlane,
	XYPlane,
	CustomPlane,
	None,
	EDOFMode_MAX,
};

// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8 {
	BodyCollision_Enabled,
	BodyCollision_Disabled,
	BodyCollision_MAX,
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8 {
	PhysType_Default,
	PhysType_Kinematic,
	PhysType_Simulated,
	PhysType_MAX,
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8 {
	CTF_UseDefault,
	CTF_UseSimpleAndComplex,
	CTF_UseSimpleAsComplex,
	CTF_UseComplexAsSimple,
	CTF_MAX,
};

// Enum Engine.EBrushType
enum class EBrushType : uint8 {
	Brush_Default,
	Brush_Add,
	Brush_Subtract,
	Brush_MAX,
};

// Enum Engine.ECsgOper
enum class ECsgOper : uint8 {
	CSG_Active,
	CSG_Add,
	CSG_Subtract,
	CSG_Intersect,
	CSG_Deintersect,
	CSG_None,
	CSG_MAX,
};

// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8 {
	EOO_OffsetRandom,
	EOO_OffsetZero,
	EOO_MAX,
};

// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8 {
	SineWave,
	PerlinNoise,
	EOscillatorWaveform_MAX,
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8 {
	CABM_Linear,
	CABM_Cubic,
	CABM_MAX,
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 {
	CameraLocal,
	World,
	UserDefined,
	ECameraAnimPlaySpace_MAX,
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	Perspective,
	Orthographic,
	ECameraProjectionMode_MAX,
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8 {
	CSD_KeyValueReadComplete,
	CSD_KeyValueWriteComplete,
	CSD_ValueChanged,
	CSD_DocumentQueryComplete,
	CSD_DocumentReadComplete,
	CSD_DocumentWriteComplete,
	CSD_DocumentConflictDetected,
	CSD_MAX,
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	SLERP,
	TwistAndSwing,
	EAngularDriveMode_MAX,
};

// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8 {
	LCM_Free,
	LCM_Limited,
	LCM_Locked,
	LCM_MAX,
};

// Enum Engine.ECullDistanceVolumePresetType
enum class ECullDistanceVolumePresetType : uint8 {
	NONE,
	Preset0,
	Preset1,
	Preset2,
	Preset3,
	Preset4,
	Preset5,
	Preset6,
	Preset7,
	Preset8,
	Preset9,
	ECullDistanceVolumePresetType_MAX,
};

// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8 {
	Empty,
	SimpleCurves,
	RichCurves,
	ECurveTableMode_MAX,
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	RowFound,
	RowNotFound,
	EEvaluateCurveTableResult_MAX,
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	Singular,
	Plural,
	EGrammaticalNumber_MAX,
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	Neuter,
	Masculine,
	Feminine,
	Mixed,
	EGrammaticalGender_MAX,
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8 {
	DPM_Normal,
	DPM_Abs,
	DPM_Direct,
	DPM_MAX,
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8 {
	EDVMF_Same,
	EDVMF_Different,
	EDVMF_Mirror,
	EDVMF_MAX,
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8 {
	EDVLF_None,
	EDVLF_XY,
	EDVLF_XZ,
	EDVLF_YZ,
	EDVLF_XYZ,
	EDVLF_MAX,
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	Enabled,
	Disabled,
	DevelopmentOnly,
	ENodeEnabledState_MAX,
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	NoPins,
	Shown,
	Hidden,
	ENodeAdvancedPins_MAX,
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	FullTitle,
	ListView,
	EditableTitle,
	MenuTitle,
	MAX_TitleTypes,
	ENodeTitleType_MAX,
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8 {
	None,
	Array,
	Set,
	Map,
	EPinContainerType_MAX,
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input,
	EGPD_Output,
	EGPD_MAX,
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8 {
	BPST_Original,
	BPST_VariantA,
	BPST_MAX,
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8 {
	CONNECT_RESPONSE_MAKE,
	CONNECT_RESPONSE_DISALLOW,
	CONNECT_RESPONSE_BREAK_OTHERS_A,
	CONNECT_RESPONSE_BREAK_OTHERS_B,
	CONNECT_RESPONSE_BREAK_OTHERS_AB,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE,
	CONNECT_RESPONSE_MAX,
};

// Enum Engine.EGraphType
enum class EGraphType : uint8 {
	GT_Function,
	GT_Ubergraph,
	GT_Macro,
	GT_Animation,
	GT_StateMachine,
	GT_MAX,
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8 {
	None,
	Paused,
	Loading,
	Saving,
	Connecting,
	Precaching,
	WaitingToConnect,
	MAX,
};

// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8 {
	FULLYLOAD_Map,
	FULLYLOAD_Game_PreLoadClass,
	FULLYLOAD_Game_PostLoadClass,
	FULLYLOAD_Always,
	FULLYLOAD_Mutator,
	FULLYLOAD_MAX,
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8 {
	VMI_BrushWireframe,
	VMI_Wireframe,
	VMI_Unlit,
	VMI_Lit,
	VMI_Lit_DetailLighting,
	VMI_LightingOnly,
	VMI_LightComplexity,
	VMI_ShaderComplexity,
	VMI_LightmapDensity,
	VMI_LitLightmapDensity,
	VMI_ReflectionOverride,
	VMI_VisualizeBuffer,
	VMI_StationaryLightOverlap,
	VMI_CollisionPawn,
	VMI_CollisionVisibility,
	VMI_LODColoration,
	VMI_QuadOverdraw,
	VMI_PrimitiveDistanceAccuracy,
	VMI_MeshUVDensityAccuracy,
	VMI_ShaderComplexityWithQuadOverdraw,
	VMI_HLODColoration,
	VMI_GroupLODColoration,
	VMI_MaterialTextureScaleAccuracy,
	VMI_RequiredTextureResolution,
	VMI_PathTracing,
	VMI_RayTracingDebug,
	VMI_Max,
	VMI_Unknown,
};

// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8 {
	Generic,
	DemoNotFound,
	Corrupt,
	InvalidVersion,
	InitBase,
	GameSpecificHeader,
	ReplayStreamerInternal,
	LoadMap,
	Serialization,
	EDemoPlayFailure_MAX,
};

// Enum Engine.ETravelType
enum class ETravelType : uint8 {
	TRAVEL_Absolute,
	TRAVEL_Partial,
	TRAVEL_Relative,
	TRAVEL_MAX,
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	NotLagging,
	Lagging,
	ENetworkLagState_MAX,
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	NoCapture,
	CapturePermanently,
	CapturePermanently_IncludingInitialMouseDown,
	CaptureDuringMouseDown,
	CaptureDuringRightMouseDown,
	EMouseCaptureMode_MAX,
};

// Enum Engine.EInputEvent
enum class EInputEvent : uint8 {
	IE_Pressed,
	IE_Released,
	IE_Repeat,
	IE_DoubleClick,
	IE_Axis,
	IE_MAX,
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8 {
	Closed,
	Error,
	Synchronized,
	Synchronizing,
	ECustomTimeStepSynchronizationState_MAX,
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default,
	ForceCPUAndGPU,
	EMeshBufferAccess_MAX,
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	Undefined,
	AlwaysSpawn,
	AdjustIfPossibleButAlwaysSpawn,
	AdjustIfPossibleButDontSpawnIfColliding,
	DontSpawnIfColliding,
	ESpawnActorCollisionHandlingMethod_MAX,
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8 {
	Frame1,
	Frame2,
	EConstraintFrame_MAX,
};

// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8 {
	ACM_Free,
	ACM_Limited,
	ACM_Locked,
	ACM_MAX,
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	Invalid,
	Bone,
	Socket,
	EComponentSocketType_MAX,
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8 {
	SurfaceType_Default,
	SurfaceType1,
	SurfaceType2,
	SurfaceType3,
	SurfaceType4,
	SurfaceType5,
	SurfaceType6,
	SurfaceType7,
	SurfaceType8,
	SurfaceType9,
	SurfaceType10,
	SurfaceType11,
	SurfaceType12,
	SurfaceType13,
	SurfaceType14,
	SurfaceType15,
	SurfaceType16,
	SurfaceType17,
	SurfaceType18,
	SurfaceType19,
	SurfaceType20,
	SurfaceType21,
	SurfaceType22,
	SurfaceType23,
	SurfaceType24,
	SurfaceType25,
	SurfaceType26,
	SurfaceType27,
	SurfaceType28,
	SurfaceType29,
	SurfaceType30,
	SurfaceType31,
	SurfaceType32,
	SurfaceType33,
	SurfaceType34,
	SurfaceType35,
	SurfaceType36,
	SurfaceType37,
	SurfaceType38,
	SurfaceType39,
	SurfaceType40,
	SurfaceType41,
	SurfaceType42,
	SurfaceType43,
	SurfaceType44,
	SurfaceType45,
	SurfaceType46,
	SurfaceType47,
	SurfaceType48,
	SurfaceType49,
	SurfaceType50,
	SurfaceType51,
	SurfaceType52,
	SurfaceType53,
	SurfaceType54,
	SurfaceType55,
	SurfaceType56,
	SurfaceType57,
	SurfaceType58,
	SurfaceType59,
	SurfaceType60,
	SurfaceType61,
	SurfaceType62,
	SurfaceType_Max,
	EPhysicalSurface_MAX,
};

// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8 {
	WalkableSlope_Default,
	WalkableSlope_Increase,
	WalkableSlope_Decrease,
	WalkableSlope_Unwalkable,
	WalkableSlope_Max,
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8 {
	ByteComponents,
	ShortComponents,
	ERotatorQuantization_MAX,
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8 {
	RoundWholeNumber,
	RoundOneDecimal,
	RoundTwoDecimals,
	EVectorQuantization_MAX,
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled,
	PlacedInWorld,
	Spawned,
	PlacedInWorldOrSpawned,
	EAutoPossessAI_MAX,
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	Disabled,
	Player0,
	Player1,
	Player2,
	Player3,
	Player4,
	Player5,
	Player6,
	Player7,
	EAutoReceiveInput_MAX,
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never,
	DORM_Awake,
	DORM_DormantAll,
	DORM_DormantPartial,
	DORM_Initial,
	DORM_MAX,
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None,
	ROLE_SimulatedProxy,
	ROLE_AutonomousProxy,
	ROLE_Authority,
	ROLE_MAX,
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8 {
	ShiftBucket0,
	ShiftBucket1,
	ShiftBucket2,
	ShiftBucket3,
	ShiftBucket4,
	ShiftBucket5,
	ShiftBucketMax,
	EUpdateRateShiftBucket_MAX,
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8 {
	SMF_None,
	SMF_Streamed,
	SMF_MAX,
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8 {
	LMPT_NormalPadding,
	LMPT_PrePadding,
	LMPT_NoPadding,
	LMPT_MAX,
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision,
	QueryOnly,
	PhysicsOnly,
	QueryAndPhysics,
	ECollisionEnabled_MAX,
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8 {
	ETS_EventSignature,
	ETS_FloatSignature,
	ETS_VectorSignature,
	ETS_LinearColorSignature,
	ETS_InvalidSignature,
	ETS_MAX,
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	Normal,
	Sensitive,
	Custom,
	ESleepFamily_MAX,
};

// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8 {
	RIF_Constant,
	RIF_Linear,
	RIF_MAX,
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8 {
	BSIT_Average,
	BSIT_Linear,
	BSIT_Cubic,
	BSIT_MAX,
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX,
};

// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8 {
	OverlapFilter_All,
	OverlapFilter_DynamicOnly,
	OverlapFilter_StaticOnly,
	OverlapFilter_MAX,
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic,
	ECC_WorldDynamic,
	ECC_Pawn,
	ECC_Visibility,
	ECC_Camera,
	ECC_PhysicsBody,
	ECC_Vehicle,
	ECC_Destructible,
	ECC_EngineTraceChannel1,
	ECC_EngineTraceChannel2,
	ECC_EngineTraceChannel3,
	ECC_EngineTraceChannel4,
	ECC_EngineTraceChannel5,
	ECC_EngineTraceChannel6,
	ECC_GameTraceChannel1,
	ECC_GameTraceChannel2,
	ECC_GameTraceChannel3,
	ECC_GameTraceChannel4,
	ECC_GameTraceChannel5,
	ECC_GameTraceChannel6,
	ECC_GameTraceChannel7,
	ECC_GameTraceChannel8,
	ECC_GameTraceChannel9,
	ECC_GameTraceChannel10,
	ECC_GameTraceChannel11,
	ECC_GameTraceChannel12,
	ECC_GameTraceChannel13,
	ECC_GameTraceChannel14,
	ECC_GameTraceChannel15,
	ECC_GameTraceChannel16,
	ECC_GameTraceChannel17,
	ECC_GameTraceChannel18,
	ECC_OverlapAll_Deprecated,
	ECC_MAX,
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	Disabled,
	Linear,
	Exponential,
	Replay,
	ENetworkSmoothingMode_MAX,
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8 {
	Quality_Preview,
	Quality_Medium,
	Quality_High,
	Quality_Production,
	Quality_MAX,
};

// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8 {
	MSC_Less,
	MSC_LessEqual,
	MSC_Greater,
	MSC_GreaterEqual,
	MSC_Equal,
	MSC_NotEqual,
	MSC_Never,
	MSC_Always,
	MSC_Count,
	MSC_MAX,
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color,
	SAMPLERTYPE_Grayscale,
	SAMPLERTYPE_Alpha,
	SAMPLERTYPE_Normal,
	SAMPLERTYPE_Masks,
	SAMPLERTYPE_DistanceFieldFont,
	SAMPLERTYPE_LinearColor,
	SAMPLERTYPE_LinearGrayscale,
	SAMPLERTYPE_Data,
	SAMPLERTYPE_External,
	SAMPLERTYPE_VirtualColor,
	SAMPLERTYPE_VirtualGrayscale,
	SAMPLERTYPE_VirtualAlpha,
	SAMPLERTYPE_VirtualNormal,
	SAMPLERTYPE_VirtualMasks,
	SAMPLERTYPE_VirtualLinearColor,
	SAMPLERTYPE_VirtualLinearGrayscale,
	SAMPLERTYPE_MAX,
};

// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8 {
	MTM_NoTessellation,
	MTM_FlatTessellation,
	MTM_PNTriangles,
	MTM_MAX,
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit,
	MSM_DefaultLit,
	MSM_Subsurface,
	MSM_PreintegratedSkin,
	MSM_ClearCoat,
	MSM_SubsurfaceProfile,
	MSM_TwoSidedFoliage,
	MSM_Hair,
	MSM_Cloth,
	MSM_Eye,
	MSM_SingleLayerWater,
	MSM_MMLit,
	MSM_MMLitHL,
	MSM_MMFoliage,
	MSM_MMWater,
	MSM_NUM,
	MSM_FromMaterialExpression,
	MSM_MAX,
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	SceneDepth,
	DistanceField,
	EParticleCollisionMode_MAX,
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8 {
	ETrailWidthMode_FromCentre,
	ETrailWidthMode_FromFirst,
	ETrailWidthMode_FromSecond,
	ETrailWidthMode_MAX,
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel,
	Default,
	HighPrecisionNormals,
	Force16BitsPerChannel,
	EGBufferFormat_MAX,
};

// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8 {
	SCCM_Overwrite,
	SCCM_Additive,
	SCCM_Composite,
	SCCM_MAX,
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8 {
	SCS_SceneColorHDR,
	SCS_SceneColorHDRNoAlpha,
	SCS_FinalColorLDR,
	SCS_SceneColorSceneDepth,
	SCS_SceneDepth,
	SCS_DeviceDepth,
	SCS_Normal,
	SCS_BaseColor,
	SCS_FinalColorHDR,
	SCS_MAX,
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8 {
	SortByDistance,
	SortByProjectedZ,
	SortAlongAxis,
	ETranslucentSortPolicy_MAX,
};

// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8 {
	RM_IndexOfRefraction,
	RM_PixelNormalOffset,
	RM_MAX,
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional,
	TLM_VolumetricDirectional,
	TLM_VolumetricPerVertexNonDirectional,
	TLM_VolumetricPerVertexDirectional,
	TLM_Surface,
	TLM_SurfacePerPixelLighting,
	TLM_MAX,
};

// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8 {
	SSM_FromTextureAsset,
	SSM_Wrap_WorldGroupSettings,
	SSM_Clamp_WorldGroupSettings,
	SSM_MAX,
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque,
	BLEND_Masked,
	BLEND_Translucent,
	BLEND_Additive,
	BLEND_Modulate,
	BLEND_AlphaComposite,
	BLEND_AlphaHoldout,
	BLEND_MAX,
};

// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8 {
	OCM_Minimum,
	OCM_Multiply,
	OCM_MAX,
};

// Enum Engine.ELightmapType
enum class ELightmapType : uint8 {
	Default,
	ForceSurface,
	ForceVolumetric,
	ELightmapType_MAX,
};

// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8 {
	ILCQ_Off,
	ILCQ_Point,
	ILCQ_Volume,
	ILCQ_MAX,
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8 {
	SDPG_World,
	SDPG_Foreground,
	SDPG_MAX,
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV,
	AspectRatio_MaintainXFOV,
	AspectRatio_MajorAxisFOV,
	AspectRatio_MAX,
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	Offline,
	Runtime,
	EFontCacheType_MAX,
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8 {
	FontICS_Default,
	FontICS_Ansi,
	FontICS_Symbol,
	FontICS_MAX,
};

// Enum Engine.EStandbyType
enum class EStandbyType : uint8 {
	STDBY_Rx,
	STDBY_Tx,
	STDBY_BadPing,
	STDBY_MAX,
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	DoNotTrace,
	TraceFullPath,
	OnlyTraceWhileAscending,
	ESuggestProjVelocityTraceOption_MAX,
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	Fullscreen,
	WindowedFullscreen,
	Windowed,
	EWindowMode_MAX,
};

// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8 {
	Luminance,
	Red,
	Green,
	Blue,
	Alpha,
	EImportanceWeight_MAX,
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8 {
	AMD_ClickedBanner,
	AMD_UserClosedAd,
	AMD_MAX,
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8 {
	CAS_LeftStick,
	CAS_RightStick,
	CAS_MAX,
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	Float,
	Bool,
	Curve,
	EAnimAlphaInputType_MAX,
};

// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8 {
	ETAC_Always,
	ETAC_GoreEnabled,
	ETAC_GoreDisabled,
	ETAC_MAX,
};

// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8 {
	IMR_Keyframed,
	IMR_LookAtGroup,
	IMR_Ignore,
	IMR_MAX,
};

// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8 {
	AXIS_TranslationX,
	AXIS_TranslationY,
	AXIS_TranslationZ,
	AXIS_RotationX,
	AXIS_RotationY,
	AXIS_RotationZ,
	AXIS_MAX,
};

// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8 {
	ETTA_Off,
	ETTA_On,
	ETTA_Toggle,
	ETTA_Trigger,
	ETTA_MAX,
};

// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8 {
	EVTC_Always,
	EVTC_GoreEnabled,
	EVTC_GoreDisabled,
	EVTC_MAX,
};

// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8 {
	EVTA_Hide,
	EVTA_Show,
	EVTA_Toggle,
	EVTA_MAX,
};

// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8 {
	None,
	Scroll,
	Magnify,
	Swipe,
	Rotate,
	LongPress,
	ESlateGesture_MAX,
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8 {
	First,
	Second,
	Third,
	Fourth,
	EMatrixColumns_MAX,
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8 {
	QuatInterp,
	EulerInterp,
	DualQuatInterp,
	ELerpInterpolationMode_MAX,
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	Linear,
	Step,
	SinusoidalIn,
	SinusoidalOut,
	SinusoidalInOut,
	EaseIn,
	EaseOut,
	EaseInOut,
	ExpoIn,
	ExpoOut,
	ExpoInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	EEasingFunc_MAX,
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 {
	HalfToEven,
	HalfFromZero,
	HalfToZero,
	FromZero,
	ToZero,
	ToNegativeInfinity,
	ToPositiveInfinity,
	ERoundingMode_MAX,
};

// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8 {
	SVB_Loading,
	SVB_LoadingAndVisibility,
	SVB_VisibilityBlockingOnLoad,
	SVB_BlockingOnLoad,
	SVB_LoadingNotVisible,
	SVB_MAX,
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8 {
	MDR_None,
	MDR_ColorNormalRoughness,
	MDR_Color,
	MDR_ColorNormal,
	MDR_ColorRoughness,
	MDR_Normal,
	MDR_NormalRoughness,
	MDR_Roughness,
	MDR_MAX,
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8 {
	DBM_Translucent,
	DBM_Stain,
	DBM_Normal,
	DBM_Emissive,
	DBM_DBuffer_ColorNormalRoughness,
	DBM_DBuffer_Color,
	DBM_DBuffer_ColorNormal,
	DBM_DBuffer_ColorRoughness,
	DBM_DBuffer_Normal,
	DBM_DBuffer_NormalRoughness,
	DBM_DBuffer_Roughness,
	DBM_DBuffer_Emissive,
	DBM_DBuffer_AlphaComposite,
	DBM_DBuffer_EmissiveAlphaComposite,
	DBM_Volumetric_DistanceFunction,
	DBM_AlphaComposite,
	DBM_AmbientOcclusion,
	DBM_MAX,
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8 {
	TCC_Red,
	TCC_Green,
	TCC_Blue,
	TCC_Alpha,
	TCC_MAX,
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend,
	UseA,
	UseB,
	EMaterialAttributeBlend_MAX,
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8 {
	Red,
	Green,
	Blue,
	Alpha,
	EChannelMaskParameterColor_MAX,
};

// Enum Engine.EClampMode
enum class EClampMode : uint8 {
	CMODE_Clamp,
	CMODE_ClampMin,
	CMODE_ClampMax,
	CMODE_MAX,
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8 {
	CMOT_Float1,
	CMOT_Float2,
	CMOT_Float3,
	CMOT_Float4,
	CMOT_MAX,
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8 {
	TDOF_NearAndFarMask,
	TDOF_NearMask,
	TDOF_FarMask,
	TDOF_CircleOfConfusionRadius,
	TDOF_MAX,
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8 {
	FunctionInput_Scalar,
	FunctionInput_Vector2,
	FunctionInput_Vector3,
	FunctionInput_Vector4,
	FunctionInput_Texture2D,
	FunctionInput_TextureCube,
	FunctionInput_Texture2DArray,
	FunctionInput_VolumeTexture,
	FunctionInput_StaticBool,
	FunctionInput_MaterialAttributes,
	FunctionInput_TextureExternal,
	FunctionInput_MAX,
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex,
	NOISEFUNCTION_GradientTex,
	NOISEFUNCTION_GradientTex3D,
	NOISEFUNCTION_GradientALU,
	NOISEFUNCTION_ValueALU,
	NOISEFUNCTION_VoronoiALU,
	NOISEFUNCTION_MAX,
};

// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8 {
	RVTMVM_None,
	RVTMVM_MipLevel,
	RVTMVM_MipBias,
	RVTMVM_MAX,
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	Coordinates,
	OffsetFraction,
	EMaterialSceneAttributeInputMode_MAX,
};

// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8 {
	STLOD_Pop,
	STLOD_Smooth,
	STLOD_MAX,
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8 {
	STW_None,
	STW_Fastest,
	STW_Fast,
	STW_Better,
	STW_Best,
	STW_Palm,
	STW_BestPlus,
	STW_MAX,
};

// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8 {
	STG_Branch,
	STG_Frond,
	STG_Leaf,
	STG_FacingLeaf,
	STG_Billboard,
	STG_MAX,
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize,
	TMTM_TexelSize,
	TMTM_MAX,
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8 {
	TMVM_None,
	TMVM_MipLevel,
	TMVM_MipBias,
	TMVM_Derivative,
	TMVM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	TRANSFORM_Tangent,
	TRANSFORM_Local,
	TRANSFORM_World,
	TRANSFORM_View,
	TRANSFORM_Camera,
	TRANSFORM_ParticleWorld,
	TRANSFORM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	TRANSFORMSOURCE_Tangent,
	TRANSFORMSOURCE_Local,
	TRANSFORMSOURCE_World,
	TRANSFORMSOURCE_View,
	TRANSFORMSOURCE_Camera,
	TRANSFORMSOURCE_ParticleWorld,
	TRANSFORMSOURCE_MAX,
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	TRANSFORMPOSSOURCE_Local,
	TRANSFORMPOSSOURCE_World,
	TRANSFORMPOSSOURCE_TranslatedWorld,
	TRANSFORMPOSSOURCE_View,
	TRANSFORMPOSSOURCE_Camera,
	TRANSFORMPOSSOURCE_Particle,
	TRANSFORMPOSSOURCE_MAX,
};

// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8 {
	VNF_CellnoiseALU,
	VNF_VectorALU,
	VNF_GradientALU,
	VNF_CurlALU,
	VNF_VoronoiALU,
	VNF_MAX,
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize,
	MEVP_FieldOfView,
	MEVP_TanHalfFieldOfView,
	MEVP_ViewSize,
	MEVP_WorldSpaceViewPosition,
	MEVP_WorldSpaceCameraPosition,
	MEVP_ViewportOffset,
	MEVP_TemporalSampleCount,
	MEVP_TemporalSampleIndex,
	MEVP_TemporalSampleOffset,
	MEVP_RuntimeVirtualTextureOutputLevel,
	MEVP_RuntimeVirtualTextureOutputDerivative,
	MEVP_PreExposure,
	MEVP_MAX,
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8 {
	WPT_Default,
	WPT_ExcludeAllShaderOffsets,
	WPT_CameraRelative,
	WPT_CameraRelativeNoOffsets,
	WPT_MAX,
};

// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8 {
	Default,
	MaterialLayer,
	MaterialLayerBlend,
	EMaterialFunctionUsage_MAX,
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8 {
	MATUSAGE_SkeletalMesh,
	MATUSAGE_ParticleSprites,
	MATUSAGE_BeamTrails,
	MATUSAGE_MeshParticles,
	MATUSAGE_StaticLighting,
	MATUSAGE_MorphTargets,
	MATUSAGE_SplineMesh,
	MATUSAGE_InstancedStaticMeshes,
	MATUSAGE_GeometryCollections,
	MATUSAGE_Clothing,
	MATUSAGE_NiagaraSprites,
	MATUSAGE_NiagaraRibbons,
	MATUSAGE_NiagaraMeshParticles,
	MATUSAGE_GeometryCache,
	MATUSAGE_Water,
	MATUSAGE_HairStrands,
	MATUSAGE_MAX,
};

// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8 {
	LayerParameter,
	BlendParameter,
	GlobalParameter,
	EMaterialParameterAssociation_MAX,
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default,
	MaterialMergeType_Simplygon,
	MaterialMergeType_MAX,
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize,
	TextureSizingType_UseAutomaticBiasedSizes,
	TextureSizingType_UseManualOverrideTextureSize,
	TextureSizingType_UseSimplygonAutomaticSizing,
	TextureSizingType_MAX,
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor,
	PPI_SceneDepth,
	PPI_DiffuseColor,
	PPI_SpecularColor,
	PPI_SubsurfaceColor,
	PPI_BaseColor,
	PPI_Specular,
	PPI_Metallic,
	PPI_WorldNormal,
	PPI_SeparateTranslucency,
	PPI_Opacity,
	PPI_Roughness,
	PPI_MaterialAO,
	PPI_CustomDepth,
	PPI_PostProcessInput0,
	PPI_PostProcessInput1,
	PPI_PostProcessInput2,
	PPI_PostProcessInput3,
	PPI_PostProcessInput4,
	PPI_PostProcessInput5,
	PPI_PostProcessInput6,
	PPI_DecalMask,
	PPI_ShadingModelColor,
	PPI_ShadingModelID,
	PPI_AmbientOcclusion,
	PPI_CustomStencil,
	PPI_StoredBaseColor,
	PPI_StoredSpecular,
	PPI_Velocity,
	PPI_MAX,
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface,
	MD_DeferredDecal,
	MD_LightFunction,
	MD_Volume,
	MD_PostProcess,
	MD_UI,
	MD_RuntimeVirtualTexture,
	MD_MAX,
};

// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8 {
	RemoveOriginalActors,
	KeepOriginalActorsAsEditorOnly,
	EMeshInstancingReplacementMethod_MAX,
};

// Enum Engine.EUVOutput
enum class EUVOutput : uint8 {
	DoNotOutputChannel,
	OutputChannel,
	EUVOutput_MAX,
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8 {
	MeshMergeType_Default,
	MeshMergeType_MergeActor,
	MeshMergeType_MAX,
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs,
	SpecificLOD,
	CalculateLOD,
	LowestDetailLOD,
	EMeshLODSelectionType_MAX,
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8 {
	AngleWeighted,
	AreaWeighted,
	EqualWeighted,
	EProxyNormalComputationMethod_MAX,
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	High,
	Medium,
	Low,
	ELandscapeCullingPrecision_MAX,
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	Triangles,
	Vertices,
	Any,
	EStaticMeshReductionTerimationCriterion_MAX,
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	Off,
	Lowest,
	Low,
	Normal,
	High,
	Highest,
	EMeshFeatureImportance_MAX,
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	X,
	Y,
	Z,
	EVertexPaintAxis_MAX,
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8 {
	MTR_Succeeded,
	MTR_Failed,
	MTR_Canceled,
	MTR_RestoredFromServer,
	MTR_MAX,
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8 {
	MTD_PurchaseQueryComplete,
	MTD_PurchaseComplete,
	MTD_MAX,
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	InvalidMode,
	GameMode,
	EditorMode,
	SimulationMode,
	PIEMode,
	FNavigationSystemRunMode_MAX,
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	Invalid,
	Error,
	Fail,
	Success,
	ENavigationQueryResult_MAX,
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	Cleared,
	NewPath,
	UpdatedDueToGoalMoved,
	UpdatedDueToNavigationChanged,
	Invalidated,
	RePathFailed,
	MetaPathUpdate,
	Custom,
	ENavPathEvent_MAX,
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	Invalid,
	Instant,
	Lazy,
	ENavDataGatheringModeConfig_MAX,
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	Default,
	Instant,
	Lazy,
	ENavDataGatheringMode_MAX,
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	Default,
	Enable,
	Disable,
	MAX,
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays,
	LeftToRight,
	RightToLeft,
	ENavLinkDirection_MAX,
};

// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8 {
	None,
	HasBeenSerialized,
	HasDeltaBeenRequested,
	IsUsingDeltaSerialization,
	EFastArraySerializerDeltaFlags_MAX,
};

// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8 {
	ERM_Normal,
	ERM_Point,
	ERM_Cross,
	ERM_LightsOnly,
	ERM_None,
	ERM_MAX,
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None,
	PSUVIM_Linear,
	PSUVIM_Linear_Blend,
	PSUVIM_Random,
	PSUVIM_Random_Blend,
	PSUVIM_MAX,
};

// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8 {
	EPBM_Instant,
	EPBM_Interpolated,
	EPBM_MAX,
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	Auto,
	Complete,
	DisableTick,
	DisableTickAndKill,
	Num,
	EParticleSystemInsignificanceReaction_MAX,
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	Low,
	Medium,
	High,
	Critical,
	Num,
	EParticleSignificanceLevel_MAX,
};

// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8 {
	PDM_Low,
	PDM_Medium,
	PDM_High,
	PDM_MAX,
};

// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8 {
	EPSSM_Random,
	EPSSM_Sequential,
	EPSSM_MAX,
};

// Enum Engine.EModuleType
enum class EModuleType : uint8 {
	EPMT_General,
	EPMT_TypeData,
	EPMT_Beam,
	EPMT_Trail,
	EPMT_Spawn,
	EPMT_Required,
	EPMT_Event,
	EPMT_Light,
	EPMT_SubUV,
	EPMT_MAX,
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8 {
	EAPSM_Random,
	EAPSM_Sequential,
	EAPSM_MAX,
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8 {
	PEB2STTM_Direct,
	PEB2STTM_UserSet,
	PEB2STTM_Distribution,
	PEB2STTM_Emitter,
	PEB2STTM_MAX,
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8 {
	PEB2STM_Default,
	PEB2STM_UserSet,
	PEB2STM_Emitter,
	PEB2STM_Particle,
	PEB2STM_Actor,
	PEB2STM_MAX,
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : uint8 {
	PEB2MT_Source,
	PEB2MT_Target,
	PEB2MT_MAX,
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8 {
	EPCOUM_DirectSet,
	EPCOUM_Additive,
	EPCOUM_Scalar,
	EPCOUM_MAX,
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8 {
	EPCC_Kill,
	EPCC_Freeze,
	EPCC_HaltCollisions,
	EPCC_FreezeTranslation,
	EPCC_FreezeRotation,
	EPCC_FreezeMovement,
	EPCC_MAX,
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce,
	Stop,
	Kill,
	EParticleCollisionResponse_MAX,
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8 {
	BONESOCKETSEL_Sequential,
	BONESOCKETSEL_Random,
	BONESOCKETSEL_MAX,
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8 {
	BONESOCKETSOURCE_Bones,
	BONESOCKETSOURCE_Sockets,
	BONESOCKETSOURCE_MAX,
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8 {
	ELESM_Random,
	ELESM_Sequential,
	ELESM_MAX,
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8 {
	PMLPC_HEIGHTAXIS_X,
	PMLPC_HEIGHTAXIS_Y,
	PMLPC_HEIGHTAXIS_Z,
	PMLPC_HEIGHTAXIS_MAX,
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8 {
	VERTSURFACESOURCE_Vert,
	VERTSURFACESOURCE_Surface,
	VERTSURFACESOURCE_MAX,
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8 {
	EOChainMode_Add,
	EOChainMode_Scale,
	EOChainMode_Link,
	EOChainMode_MAX,
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8 {
	EPAL_NONE,
	EPAL_X,
	EPAL_Y,
	EPAL_Z,
	EPAL_NEGATIVE_X,
	EPAL_NEGATIVE_Y,
	EPAL_NEGATIVE_Z,
	EPAL_ROTATE_X,
	EPAL_ROTATE_Y,
	EPAL_ROTATE_Z,
	EPAL_MAX,
};

// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8 {
	EDPV_UserSet,
	EDPV_AutoSet,
	EDPV_VelocityX,
	EDPV_VelocityY,
	EDPV_VelocityZ,
	EDPV_VelocityMag,
	EDPV_MAX,
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8 {
	ENM_CameraFacing,
	ENM_Spherical,
	ENM_Cylindrical,
	ENM_MAX,
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8 {
	PSORTMODE_None,
	PSORTMODE_ViewProjDepth,
	PSORTMODE_DistanceToView,
	PSORTMODE_Age_OldestFirst,
	PSORTMODE_Age_NewestFirst,
	PSORTMODE_MAX,
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	None,
	FlipUV,
	FlipUOnly,
	FlipVOnly,
	RandomFlipUV,
	RandomFlipUOnly,
	RandomFlipVOnly,
	RandomFlipUVIndependent,
	EParticleUVFlipMode_MAX,
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8 {
	PET2SRCM_Default,
	PET2SRCM_Particle,
	PET2SRCM_Actor,
	PET2SRCM_MAX,
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8 {
	PEBTM_None,
	PEBTM_Full,
	PEBTM_Partial,
	PEBTM_MAX,
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8 {
	PEB2M_Distance,
	PEB2M_Target,
	PEB2M_Branch,
	PEB2M_MAX,
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8 {
	XAxisFacing_NoUp,
	XAxisFacing_ZUp,
	XAxisFacing_NegativeZUp,
	XAxisFacing_YUp,
	XAxisFacing_NegativeYUp,
	LockedAxis_ZAxisFacing,
	LockedAxis_NegativeZAxisFacing,
	LockedAxis_YAxisFacing,
	LockedAxis_NegativeYAxisFacing,
	VelocityAligned_ZAxisFacing,
	VelocityAligned_NegativeZAxisFacing,
	VelocityAligned_YAxisFacing,
	VelocityAligned_NegativeYAxisFacing,
	EMeshCameraFacingOptions_MAX,
};

// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8 {
	CameraFacing_NoneUP,
	CameraFacing_ZUp,
	CameraFacing_NegativeZUp,
	CameraFacing_YUp,
	CameraFacing_NegativeYUp,
	CameraFacing_MAX,
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8 {
	PSMA_MeshFaceCameraWithRoll,
	PSMA_MeshFaceCameraWithSpin,
	PSMA_MeshFaceCameraWithLockedAxis,
	PSMA_MAX,
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8 {
	Trails_CameraUp,
	Trails_SourceUp,
	Trails_WorldUp,
	Trails_MAX,
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8 {
	PSA_FacingCameraPosition,
	PSA_Square,
	PSA_Rectangle,
	PSA_Velocity,
	PSA_AwayFromCenter,
	PSA_TypeSpecific,
	PSA_FacingCameraDistanceBlend,
	PSA_MAX,
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8 {
	EPSOBM_None,
	EPSOBM_ParticleBounds,
	EPSOBM_CustomBounds,
	EPSOBM_MAX,
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8 {
	PARTICLESYSTEMLODMETHOD_Automatic,
	PARTICLESYSTEMLODMETHOD_DirectSet,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic,
	PARTICLESYSTEMLODMETHOD_MAX,
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8 {
	EPSUM_RealTime,
	EPSUM_FixedTime,
	EPSUM_MAX,
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any,
	EPET_Spawn,
	EPET_Death,
	EPET_Collision,
	EPET_Burst,
	EPET_Blueprint,
	EPET_MAX,
};

// Enum Engine.ParticleReplayState
enum class ParticleReplayState : uint8 {
	PRS_Disabled,
	PRS_Capturing,
	PRS_Replaying,
	PRS_MAX,
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8 {
	PSPT_None,
	PSPT_Scalar,
	PSPT_ScalarRand,
	PSPT_Vector,
	PSPT_VectorRand,
	PSPT_Color,
	PSPT_Actor,
	PSPT_Material,
	PSPT_VectorUnitRand,
	PSPT_MAX,
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	None,
	X,
	Y,
	Z,
	Invalid,
	ESettingsLockedAxis_MAX,
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	Full3D,
	YZPlane,
	XZPlane,
	XYPlane,
	ESettingsDOF_MAX,
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 {
	Average,
	Min,
	Multiply,
	Max,
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8 {
	VTBlend_Linear,
	VTBlend_Cubic,
	VTBlend_EaseIn,
	VTBlend_EaseOut,
	VTBlend_EaseInOut,
	VTBlend_MAX,
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start,
	Update,
	Stop,
	EDynamicForceFeedbackAction_MAX,
};

// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8 {
	ERSM_Default,
	ERSM_256,
	ERSM_2,
	ERSM_3,
	ERSM_5,
	ERSM_9,
	ERSM_17,
	ERSM_33,
	ERSM_65,
	ERSM_129,
	ERSM_MAX,
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No,
	Yes,
	EvenIfNotCollidable,
	DontExport,
	EHasCustomNavigableGeometry_MAX,
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8 {
	ECB_No,
	ECB_Yes,
	ECB_Owner,
	ECB_MAX,
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 {
	RCCE_Cycle,
	RCCE_CycleWithOffset,
	RCCE_Oscillate,
	RCCE_Linear,
	RCCE_Constant,
	RCCE_None,
	RCCE_MAX,
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8 {
	RCIM_Linear,
	RCIM_Constant,
	RCIM_Cubic,
	RCIM_None,
	RCIM_MAX,
};

// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8 {
	CapturedScene,
	SpecifiedCubemap,
	EReflectionSourceType_MAX,
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8 {
	DBBPF_B8G8R8A8,
	DBBPF_A16B16G16R16_DEPRECATED,
	DBBPF_FloatRGB_DEPRECATED,
	DBBPF_FloatRGBA,
	DBBPF_A2B10G10R10,
	DBBPF_MAX,
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_Manual,
	AEM_MAX,
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8 {
	Disabled,
	LinearColorSpaceOnly,
	AllowThroughTonemapper,
	EAlphaChannelMode_MAX,
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	None,
	OpaqueOnly,
	OpaqueAndMasked,
	Auto,
	EEarlyZPass_MAX,
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	Disabled,
	Enabled,
	EnabledOnDemand,
	EnabledWithStencil,
	ECustomDepthStencil_MAX,
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 {
	One,
	Two,
	Four,
	Eight,
	EMobileMSAASampleCount_MAX,
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	One,
	Two,
	Four,
	Eight,
	ECompositingSampleCount_MAX,
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	NoClear,
	HardwareClear,
	QuadAtMaxZ,
	EClearSceneOptions_MAX,
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	Line,
	Dash,
	EReporterLineStyle_MAX,
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	Outside,
	Inside,
	ELegendPosition_MAX,
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	Lines,
	Filled,
	EGraphDataStyle_MAX,
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	Lines,
	Notches,
	Grid,
	EGraphAxisStyle_MAX,
};

// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8 {
	RCKTCF_uint16,
	RCKTCF_float32,
	RCKTCF_MAX,
};

// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8 {
	RCCF_Empty,
	RCCF_Constant,
	RCCF_Linear,
	RCCF_Cubic,
	RCCF_Mixed,
	RCCF_MAX,
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8 {
	RCTWM_WeightedNone,
	RCTWM_WeightedArrive,
	RCTWM_WeightedLeave,
	RCTWM_WeightedBoth,
	RCTWM_MAX,
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8 {
	RCTM_Auto,
	RCTM_User,
	RCTM_Break,
	RCTM_None,
	RCTM_MAX,
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	Absolute,
	Relative,
	EConstraintTransform_MAX,
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	Orientation,
	Translation,
	MAX,
};

// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8 {
	MaintainLastRootMotionVelocity,
	SetVelocity,
	ClampVelocity,
	ERootMotionFinishVelocityMode_MAX,
};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8 {
	UseSensitiveLiftoffCheck,
	DisablePartialEndTick,
	ERootMotionSourceSettingsFlags_MAX,
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	Prepared,
	Finished,
	MarkedForRemoval,
	ERootMotionSourceStatusFlags_MAX,
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	Override,
	Additive,
	ERootMotionAccumulateMode_MAX,
};

// Enum Engine.ERuntimeVirtualTextureDebugType
enum class ERuntimeVirtualTextureDebugType : uint8 {
	None,
	Debug,
	ERuntimeVirtualTextureDebugType_MAX,
};

// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8 {
	Never,
	Exclusive,
	Always,
	ERuntimeVirtualTextureMainPassType_MAX,
};

// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8 {
	BaseColor,
	BaseColor_Normal_DEPRECATED,
	BaseColor_Normal_Specular,
	BaseColor_Normal_Specular_YCoCg,
	WorldHeight,
	Count,
	ERuntimeVirtualTextureMaterialType_MAX,
};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8 {
	Disabled,
	Hard_shadows,
	Area_shadows,
	EReflectedAndRefractedRayTracedShadows_MAX,
};

// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8 {
	Disabled,
	BruteForce,
	FinalGather,
	ERayTracingGlobalIlluminationType_MAX,
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8 {
	Raster,
	RayTracing,
	ETranslucencyType_MAX,
};

// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8 {
	ScreenSpace,
	RayTracing,
	EReflectionsType_MAX,
};

// Enum Engine.ELightUnits
enum class ELightUnits : uint8 {
	Unitless,
	Candelas,
	Lumens,
	ELightUnits_MAX,
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8 {
	BM_SOG,
	BM_FFT,
	BM_MAX,
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_Manual,
	AEM_MAX,
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8 {
	AAM_None,
	AAM_FXAA,
	AAM_TemporalAA,
	AAM_MSAA,
	AAM_MAX,
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF,
	DOFM_Gaussian,
	DOFM_CircleDOF,
	DOFM_MAX,
};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8 {
	PRM_LegacySceneCapture,
	PRM_RenderScenePrimitives,
	PRM_UseShowOnlyList,
	PRM_MAX,
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor,
	MP_Opacity,
	MP_OpacityMask,
	MP_DiffuseColor,
	MP_SpecularColor,
	MP_BaseColor,
	MP_Metallic,
	MP_Specular,
	MP_Roughness,
	MP_Normal,
	MP_WorldPositionOffset,
	MP_WorldDisplacement,
	MP_TessellationMultiplier,
	MP_SubsurfaceColor,
	MP_CustomData0,
	MP_CustomData1,
	MP_AmbientOcclusion,
	MP_Refraction,
	MP_CustomizedUVs0,
	MP_CustomizedUVs1,
	MP_CustomizedUVs2,
	MP_CustomizedUVs3,
	MP_CustomizedUVs4,
	MP_CustomizedUVs5,
	MP_CustomizedUVs6,
	MP_CustomizedUVs7,
	MP_PixelDepthOffset,
	MP_ShadingModel,
	MP_MaterialAttributes,
	MP_CustomOutput,
	MP_MAX,
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8 {
	SimulationUpatesComponentTransform,
	ComponentTransformIsKinematic,
	EPhysicsTransformUpdateMode_MAX,
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	AnimationBlueprint,
	AnimationSingleNode,
	AnimationCustomMode,
	EAnimationMode_MAX,
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	SkipSimulatingBones,
	SkipAllBones,
	EKinematicBonesUpdateToPhysics_MAX,
};

// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8 {
	UniformMass,
	TotalMass,
	Density,
	MaxClothMassMode,
	EClothMassMode_MAX,
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8 {
	AttributeCurve,
	MaterialCurve,
	MorphTargetCurve,
	MaxAnimCurveType,
	EAnimCurveType_MAX,
};

// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8 {
	Before_Versionning,
	SkeletalMeshBuildRefactor,
	VersionPlusOne,
	LatestVersion,
	ESkeletalMeshSkinningImportVersions_MAX,
};

// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8 {
	Before_Versionning,
	SkeletalMeshBuildRefactor,
	VersionPlusOne,
	LatestVersion,
	ESkeletalMeshGeoImportVersions_MAX,
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8 {
	Remove,
	Keep,
	Invalid,
	EBoneFilterActionOption_MAX,
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8 {
	SMOI_Off,
	SMOI_Lowest,
	SMOI_Low,
	SMOI_Normal,
	SMOI_High,
	SMOI_Highest,
	SMOI_MAX,
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles,
	SMOT_MaxDeviation,
	SMOT_TriangleOrDeviation,
	SMOT_MAX,
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8 {
	SMTC_NumOfTriangles,
	SMTC_NumOfVerts,
	SMTC_TriangleOrVert,
	SMTC_AbsNumOfTriangles,
	SMTC_AbsNumOfVerts,
	SMTC_AbsTriangleOrVert,
	SMTC_MAX,
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation,
	Skeleton,
	AnimationScaled,
	AnimationRelative,
	OrientAndScale,
	EBoneTranslationRetargetingMode_MAX,
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	WorldSpace,
	ComponentSpace,
	EBoneSpaces_MAX,
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8 {
	AlwaysTickPoseAndRefreshBones,
	AlwaysTickPose,
	OnlyTickMontagesWhenNotRendered,
	OnlyTickPoseWhenRendered,
	EVisibilityBasedAnimTickOption_MAX,
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8 {
	PBO_None,
	PBO_Term,
	PBO_MAX,
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8 {
	BVS_HiddenByParent,
	BVS_Visible,
	BVS_ExplicitlyHidden,
	BVS_MAX,
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8 {
	SLS_CapturedScene,
	SLS_SpecifiedCubemap,
	SLS_MAX,
};

// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8 {
	Linear,
	CustomCurve,
	Manual,
	EReverbSendMethod_MAX,
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8 {
	Linear,
	CustomCurve,
	EAirAbsorptionMethod_MAX,
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8 {
	SPATIALIZATION_Default,
	SPATIALIZATION_HRTF,
	SPATIALIZATION_MAX,
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8 {
	SOUNDDISTANCE_Normal,
	SOUNDDISTANCE_InfiniteXYPlane,
	SOUNDDISTANCE_InfiniteXZPlane,
	SOUNDDISTANCE_InfiniteYZPlane,
	SOUNDDISTANCE_MAX,
};

// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8 {
	Disabled,
	PlayWhenSilent,
	Restart,
	EVirtualizationMode_MAX,
};

// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8 {
	Inherited,
	RetainOnLoad,
	PrimeOnLoad,
	LoadOnDemand,
	ForceInline,
	Uninitialized,
	ESoundWaveLoadingBehavior_MAX,
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker,
	Controller,
	ControllerFallbackToSpeaker,
	EAudioOutputTarget_MAX,
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	PreventNew,
	StopOldest,
	StopFarthestThenPreventNew,
	StopFarthestThenOldest,
	StopLowestPriority,
	StopQuietest,
	StopLowestPriorityThenPreventNew,
	EMaxConcurrentResolutionRule_MAX,
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default,
	SOUNDGROUP_Effects,
	SOUNDGROUP_UI,
	SOUNDGROUP_Music,
	SOUNDGROUP_Voice,
	SOUNDGROUP_GameSoundGroup1,
	SOUNDGROUP_GameSoundGroup2,
	SOUNDGROUP_GameSoundGroup3,
	SOUNDGROUP_GameSoundGroup4,
	SOUNDGROUP_GameSoundGroup5,
	SOUNDGROUP_GameSoundGroup6,
	SOUNDGROUP_GameSoundGroup7,
	SOUNDGROUP_GameSoundGroup8,
	SOUNDGROUP_GameSoundGroup9,
	SOUNDGROUP_GameSoundGroup10,
	SOUNDGROUP_GameSoundGroup11,
	SOUNDGROUP_GameSoundGroup12,
	SOUNDGROUP_GameSoundGroup13,
	SOUNDGROUP_GameSoundGroup14,
	SOUNDGROUP_GameSoundGroup15,
	SOUNDGROUP_GameSoundGroup16,
	SOUNDGROUP_GameSoundGroup17,
	SOUNDGROUP_GameSoundGroup18,
	SOUNDGROUP_GameSoundGroup19,
	SOUNDGROUP_GameSoundGroup20,
	SOUNDGROUP_MAX,
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8 {
	MPM_Normal,
	MPM_Abs,
	MPM_Direct,
	MPM_MAX,
};

// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8 {
	Mono,
	Stereo,
	ESourceBusChannels_MAX,
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8 {
	Linear,
	CustomCurve,
	Manual,
	ESourceBusSendLevelControlMethod_MAX,
};

// Enum Engine.ESubmixChannelFormat
enum class ESubmixChannelFormat : uint8 {
	Device,
	Stereo,
	Quad,
	FiveDotOne,
	SevenDotOne,
	Ambisonics,
	Count,
	ESubmixChannelFormat_MAX,
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8 {
	Linear,
	CustomCurve,
	Manual,
	ESendLevelControlMethod_MAX,
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8 {
	SoundWave,
	WavFile,
	EAudioRecordingExportType_MAX,
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8 {
	VerySmall_65,
	Small_257,
	Medium_513,
	Large_1025,
	VeryLarge_2049,
	ESoundWaveFFTSize_MAX,
};

// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8 {
	DTYPE_Setup,
	DTYPE_Invalid,
	DTYPE_Preview,
	DTYPE_Native,
	DTYPE_RealTime,
	DTYPE_Procedural,
	DTYPE_Xenon,
	DTYPE_Streaming,
	DTYPE_MAX,
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	Local,
	World,
	ESplineCoordinateSpace_MAX,
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	Linear,
	Curve,
	Constant,
	CurveClamped,
	CurveCustomTangent,
	ESplinePointType_MAX,
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	X,
	Y,
	Z,
	ESplineMeshAxis_MAX,
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8 {
	OT_NumOfTriangles,
	OT_MaxDeviation,
	OT_MAX,
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8 {
	IL_Off,
	IL_Lowest,
	IL_Low,
	IL_Normal,
	IL_High,
	IL_Highest,
	TEMP_BROKEN2,
	EImportanceLevel_MAX,
};

// Enum Engine.ENormalMode
enum class ENormalMode : uint8 {
	NM_PreserveSmoothingGroups,
	NM_RecalculateNormals,
	NM_RecalculateNormalsSmooth,
	NM_RecalculateNormalsHard,
	TEMP_BROKEN,
	ENormalMode_MAX,
};

// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8 {
	SLSH_QuadLayer,
	SLSH_CylinderLayer,
	SLSH_CubemapLayer,
	SLSH_EquirectLayer,
	SLSH_MAX,
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked,
	SLT_TrackerLocked,
	SLT_FaceLocked,
	SLT_MAX,
};

// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8 {
	OSM_Alpha,
	OSM_ColorBrightness,
	OSM_RedChannel,
	OSM_GreenChannel,
	OSM_BlueChannel,
	OSM_MAX,
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8 {
	BVC_FourVertices,
	BVC_EightVertices,
	BVC_MAX,
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8 {
	EVRTA_TextTop,
	EVRTA_TextCenter,
	EVRTA_TextBottom,
	EVRTA_QuadTop,
	EVRTA_MAX,
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8 {
	EHTA_Left,
	EHTA_Center,
	EHTA_Right,
	EHTA_MAX,
};

// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8 {
	TLCA_Default,
	TLCA_None,
	TLCA_Lowest,
	TLCA_Low,
	TLCA_Medium,
	TLCA_High,
	TLCA_Highest,
	TLCA_MAX,
};

// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8 {
	TCQ_Default,
	TCQ_Lowest,
	TCQ_Low,
	TCQ_Medium,
	TCQ_High,
	TCQ_Highest,
	TCQ_MAX,
};

// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8 {
	TSF_Invalid,
	TSF_G8,
	TSF_BGRA8,
	TSF_BGRE8,
	TSF_RGBA16,
	TSF_RGBA16F,
	TSF_RGBA8,
	TSF_RGBE8,
	TSF_G16,
	TSF_MAX,
};

// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8 {
	TSAT_Uncompressed,
	TSAT_PNGCompressed,
	TSAT_DDSFile,
	TSAT_MAX,
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8 {
	TMC_ResidentMips,
	TMC_AllMips,
	TMC_AllMipsBiased,
	TMC_MAX,
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8 {
	CTM_Disabled,
	CTM_NormalRoughnessToRed,
	CTM_NormalRoughnessToGreen,
	CTM_NormalRoughnessToBlue,
	CTM_NormalRoughnessToAlpha,
	CTM_MAX,
};

// Enum Engine.TextureAddress
enum class TextureAddress : uint8 {
	TA_Wrap,
	TA_Clamp,
	TA_Mirror,
	TA_MAX,
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest,
	TF_Bilinear,
	TF_Trilinear,
	TF_Default,
	TF_MAX,
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default,
	TC_Normalmap,
	TC_Masks,
	TC_Grayscale,
	TC_Displacementmap,
	TC_VectorDisplacementmap,
	TC_HDR,
	TC_EditorIcon,
	TC_Alpha,
	TC_DistanceFieldFont,
	TC_HDR_Compressed,
	TC_BC7,
	TC_MAX,
};

// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8 {
	Default,
	AllMips,
	OnlyFirstMip,
	ETextureMipLoadOptions_MAX,
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	Point,
	Bilinear,
	Trilinear,
	AnisotropicPoint,
	AnisotropicLinear,
	ETextureSamplerFilter_MAX,
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	None,
	PadToPowerOfTwo,
	PadToSquarePowerOfTwo,
	ETexturePowerOfTwoSetting_MAX,
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup,
	TMGS_SimpleAverage,
	TMGS_Sharpen0,
	TMGS_Sharpen1,
	TMGS_Sharpen2,
	TMGS_Sharpen3,
	TMGS_Sharpen4,
	TMGS_Sharpen5,
	TMGS_Sharpen6,
	TMGS_Sharpen7,
	TMGS_Sharpen8,
	TMGS_Sharpen9,
	TMGS_Sharpen10,
	TMGS_NoMipmaps,
	TMGS_LeaveExistingMips,
	TMGS_Blur1,
	TMGS_Blur2,
	TMGS_Blur3,
	TMGS_Blur4,
	TMGS_Blur5,
	TMGS_Unfiltered,
	TMGS_MAX,
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World,
	TEXTUREGROUP_WorldNormalMap,
	TEXTUREGROUP_WorldSpecular,
	TEXTUREGROUP_WorldNoLOD,
	TEXTUREGROUP_WorldNormalMapNOLOD,
	TEXTUREGROUP_WorldSpecularNOLOD,
	TEXTUREGROUP_Character,
	TEXTUREGROUP_CharacterNormalMap,
	TEXTUREGROUP_CharacterSpecular,
	TEXTUREGROUP_CharacterNoLOD,
	TEXTUREGROUP_CharacterNormalMapNoLOD,
	TEXTUREGROUP_CharacterSpecularNoLOD,
	TEXTUREGROUP_NPC,
	TEXTUREGROUP_NPCNormalMap,
	TEXTUREGROUP_NPCSpecular,
	TEXTUREGROUP_NPCNoLOD,
	TEXTUREGROUP_NPCNormalMapNoLOD,
	TEXTUREGROUP_NPCSpecularNoLOD,
	TEXTUREGROUP_Weapon,
	TEXTUREGROUP_WeaponNormalMap,
	TEXTUREGROUP_WeaponSpecular,
	TEXTUREGROUP_Vehicle,
	TEXTUREGROUP_VehicleNormalMap,
	TEXTUREGROUP_VehicleSpecular,
	TEXTUREGROUP_Cinematic,
	TEXTUREGROUP_Effects,
	TEXTUREGROUP_Effects_LOD,
	TEXTUREGROUP_EffectsNotFiltered,
	TEXTUREGROUP_Skybox,
	TEXTUREGROUP_UI,
	TEXTUREGROUP_Lightmap,
	TEXTUREGROUP_RenderTarget,
	TEXTUREGROUP_MobileFlattened,
	TEXTUREGROUP_ProcBuilding_Face,
	TEXTUREGROUP_ProcBuilding_LightMap,
	TEXTUREGROUP_Shadowmap,
	TEXTUREGROUP_ColorLookupTable,
	TEXTUREGROUP_Terrain_Heightmap,
	TEXTUREGROUP_Terrain_Weightmap,
	TEXTUREGROUP_Bokeh,
	TEXTUREGROUP_IESLightProfile,
	TEXTUREGROUP_Pixels2D,
	TEXTUREGROUP_HierarchicalLOD,
	TEXTUREGROUP_Impostor,
	TEXTUREGROUP_ImpostorNormalDepth,
	TEXTUREGROUP_8BitData,
	TEXTUREGROUP_16BitData,
	TEXTUREGROUP_Project01,
	TEXTUREGROUP_Project02,
	TEXTUREGROUP_Project03,
	TEXTUREGROUP_Project04,
	TEXTUREGROUP_Project05,
	TEXTUREGROUP_Project06,
	TEXTUREGROUP_Project07,
	TEXTUREGROUP_Project08,
	TEXTUREGROUP_Project09,
	TEXTUREGROUP_Project10,
	TEXTUREGROUP_MAX,
};

// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8 {
	RTF_R8,
	RTF_RG8,
	RTF_RGBA8,
	RTF_RGBA8_SRGB,
	RTF_R16f,
	RTF_RG16f,
	RTF_RGBA16f,
	RTF_R32f,
	RTF_RG32f,
	RTF_RGBA32f,
	RTF_RGB10A2,
	RTF_MAX,
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8 {
	Closed,
	Error,
	Synchronized,
	Synchronizing,
	ETimecodeProviderSynchronizationState_MAX,
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	Forward,
	Backward,
	ETimelineDirection_MAX,
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8 {
	TL_TimelineLength,
	TL_LastKeyFrame,
	TL_MAX,
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8 {
	T_Original,
	T_TargetMin,
	T_TargetMax,
	MAX,
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8 {
	TID_AuthorizeComplete,
	TID_TweetUIComplete,
	TID_RequestComplete,
	TID_MAX,
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8 {
	TRM_Get,
	TRM_Post,
	TRM_Delete,
	TRM_MAX,
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8 {
	UDSS_UpToDate,
	UDSS_Dirty,
	UDSS_Error,
	UDSS_Duplicate,
	UDSS_MAX,
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	ShortestSide,
	LongestSide,
	Horizontal,
	Vertical,
	Custom,
	EUIScalingRule_MAX,
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	Always,
	NonPointer,
	NavigationOnly,
	Never,
	ERenderFocusRule_MAX,
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8 {
	VFCO_Extrude,
	VFCO_Revolve,
	VFCO_MAX,
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	Directional,
	Point,
	EWindSourceType_MAX,
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8 {
	None,
	AutoRelease,
	ManualRelease,
	ManualRelease_OnComplete,
	FreeInPool,
	EPSCPoolMethod_MAX,
};

// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8 {
	VLM_VolumetricLightmap,
	VLM_SparseVolumeLightingSamples,
	VLM_MAX,
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8 {
	VIS_LeastAggressive,
	VIS_ModeratelyAggressive,
	VIS_MostAggressive,
	VIS_Max,
};

