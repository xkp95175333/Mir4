// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8 {
	Inner,
	Outer,
	ESphericalLimitType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8 {
	Component,
	Actor,
	World,
	RootRelative,
	BoneRelative,
	AnimPhysSimSpaceType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8 {
	Free,
	Limited,
	AnimPhysLinearConstraintType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8 {
	Angular,
	Cone,
	AnimPhysAngularConstraintType_MAX,
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8 {
	StandardBlend,
	Inertialization,
	EBlendListTransitionType_MAX,
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8 {
	Bone,
	MorphTarget,
	MaterialParameter,
	EDrivenDestinationMode_MAX,
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8 {
	AddToInput,
	ReplaceComponent,
	AddToRefPose,
	EDrivenBoneModificationMode_MAX,
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8 {
	None,
	Offset_RefPose,
	EConstraintOffsetOption_MAX,
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8 {
	Accumulate,
	Copy,
	CopyBoneDeltaMode_MAX,
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8 {
	Linear,
	Cubic,
	Sinusoidal,
	EaseInOutExponent2,
	EaseInOutExponent3,
	EaseInOutExponent4,
	EaseInOutExponent5,
	MAX,
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8 {
	BMM_Ignore,
	BMM_Replace,
	BMM_Additive,
	BMM_MAX,
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8 {
	Add,
	Scale,
	Blend,
	WeightedMovingAverage,
	RemapCurve,
	EModifyCurveApplyMode_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8 {
	DrivePoses,
	DriveCurves,
	EPoseDriverOutput_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8 {
	Rotation,
	Translation,
	EPoseDriverSource_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8 {
	SwingAndTwist,
	SwingOnly,
	Translation,
	EPoseDriverType_MAX,
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8 {
	NamedSnapshot,
	SnapshotPin,
	ESnapshotSourceMode_MAX,
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8 {
	EIT_LocalSpace,
	EIT_Additive,
	EIT_MAX,
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8 {
	ComponentSpace,
	WorldSpace,
	BaseBoneSpace,
	ESimulationSpace_MAX,
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8 {
	FixedDefaultLengthValue,
	Distance,
	ChainLength,
	EScaleChainInitialLength_MAX,
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8 {
	NoReset,
	StartPosition,
	ExplicitTime,
	ESequenceEvalReinit_MAX,
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8 {
	None,
	X,
	Y,
	Z,
	ESplineBoneAxis_MAX,
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8 {
	EulerX,
	EulerY,
	EulerZ,
	QuaternionAngle,
	SwingAngle,
	TwistAngle,
	ERotationComponent_MAX,
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8 {
	Linear,
	Sinusoidal,
	Cubic,
	QuadraticInOut,
	CubicInOut,
	HermiteCubic,
	QuarticInOut,
	QuinticInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExpIn,
	ExpOut,
	ExpInOut,
	CustomCurve,
	EEasingFuncType_MAX,
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8 {
	OnlyNormalizeAboveOne,
	AlwaysNormalize,
	NormalizeWithinMedian,
	ERBFNormalizeMethod_MAX,
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8 {
	Euclidean,
	Quaternion,
	SwingAngle,
	DefaultMethod,
	ERBFDistanceMethod_MAX,
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8 {
	Gaussian,
	Exponential,
	Linear,
	Cubic,
	Quintic,
	DefaultFunction,
	ERBFFunctionType_MAX,
};

