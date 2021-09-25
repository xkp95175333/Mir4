// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8 {
	Success,
	Blocked,
	OffPath,
	Aborted,
	Skipped_DEPRECATED,
	Invalid,
	EPathFollowingResult_MAX,
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8 {
	Processing,
	Success,
	Failed,
	Aborted,
	OwnerLost,
	MissingParam,
	EEnvQueryStatus_MAX,
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8 {
	OnEveryPerception,
	OnPerceptionChange,
	EAISenseNotifyType_MAX,
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8 {
	Lowest,
	Low,
	AutonomousAI,
	High,
	Ultimate,
	EAITaskPriority_MAX,
};

// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8 {
	Less,
	LessOrEqual,
	Equal,
	NotEqual,
	GreaterOrEqual,
	Greater,
	IsTrue,
	MAX,
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8 {
	Animation,
	Logic,
	Script,
	Gameplay,
	MAX,
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8 {
	SoftScript,
	Logic,
	HardScript,
	Reaction,
	Ultimate,
	MAX,
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8 {
	Invalid,
	FailedToStart,
	InstantAbort,
	FinishedAborting,
	FinishedExecution,
	Push,
	EPawnActionEventType_MAX,
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8 {
	NotStarted,
	InProgress,
	Success,
	Failed,
	Aborted,
	EPawnActionResult_MAX,
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8 {
	NeverStarted,
	NotBeingAborted,
	MarkPendingAbort,
	LatentAbortInProgress,
	AbortDone,
	MAX,
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : uint8 {
	Distance3D,
	Distance2D,
	DistanceZ,
	MAX,
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8 {
	Default,
	Enable,
	Disable,
	MAX,
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8 {
	None,
	LowerPriority,
	Self,
	Both,
	EBTFlowAbortMode_MAX,
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8 {
	Succeeded,
	Failed,
	Aborted,
	InProgress,
	EBTNodeResult_MAX,
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8 {
	Equal,
	NotEqual,
	Contain,
	NotContain,
	ETextKeyOperation_MAX,
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8 {
	Equal,
	NotEqual,
	Less,
	LessOrEqual,
	Greater,
	GreaterOrEqual,
	EArithmeticKeyOperation_MAX,
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8 {
	Set,
	NotSet,
	EBasicKeyOperation_MAX,
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8 {
	AbortBackground,
	WaitForBackground,
	EBTParallelMode_MAX,
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8 {
	Invalid,
	Test,
	And,
	Or,
	Not,
	EBTDecoratorLogic_MAX,
};

// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8 {
	FirstNode,
	TaskNode,
	EBTChildIndex_MAX,
};

// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8 {
	ValueChange,
	ResultChange,
	EBTBlackboardRestart_MAX,
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8 {
	Equal,
	NotEqual,
	EBlackBoardEntryComparison_MAX,
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8 {
	NavmeshRaycast2D,
	HierarchicalQuery,
	RegularPathFinding,
	EPathExistanceQueryType_MAX,
};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8 {
	BySpaceBetween,
	ByNumberOfPoints,
	EPointOnCircleSpacingMethod_MAX,
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8 {
	Absolute,
	RelativeToScores,
	EEQSNormalizationType_MAX,
};

// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8 {
	Distance3D,
	Distance2D,
	DistanceZ,
	DistanceAbsoluteZ,
	EEnvTestDistance_MAX,
};

// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8 {
	Dot3D,
	Dot2D,
	EEnvTestDot_MAX,
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8 {
	PathExist,
	PathCost,
	PathLength,
	EEnvTestPathfinding_MAX,
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8 {
	None,
	SpecifiedValue,
	FilterThreshold,
	EEnvQueryTestClamping_MAX,
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8 {
	TwoPoints,
	Rotation,
	EEnvDirection_MAX,
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8 {
	Box,
	Sphere,
	Capsule,
	EEnvOverlapShape_MAX,
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8 {
	Line,
	Box,
	Sphere,
	Capsule,
	EEnvTraceShape_MAX,
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8 {
	None,
	Navigation,
	Geometry,
	NavigationOverLedges,
	EEnvQueryTrace_MAX,
};

// Enum AIModule.EAIParamType
enum class EAIParamType : uint8 {
	Float,
	Int,
	Bool,
	MAX,
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8 {
	Float,
	Int,
	Bool,
	EEnvQueryParam_MAX,
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8 {
	SingleResult,
	RandomBest5Pct,
	RandomBest25Pct,
	AllMatching,
	EEnvQueryRunMode_MAX,
};

// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8 {
	AverageScore,
	MinScore,
	MaxScore,
	Multiply,
	EEnvTestScoreOperator_MAX,
};

// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8 {
	AllPass,
	AnyPass,
	EEnvTestFilterOperator_MAX,
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8 {
	Low,
	Medium,
	High,
	EEnvTestCost_MAX,
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8 {
	None,
	Square,
	Inverse,
	Unused,
	Constant,
	Skip,
	EEnvTestWeight_MAX,
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8 {
	Linear,
	Square,
	InverseLinear,
	SquareRoot,
	Constant,
	EEnvTestScoreEquation_MAX,
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8 {
	Minimum,
	Maximum,
	Range,
	Match,
	EEnvTestFilterType_MAX,
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8 {
	Filter,
	Score,
	FilterAndScore,
	EEnvTestPurpose_MAX,
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8 {
	All,
	Best5Pct,
	Best25Pct,
	EEnvQueryHightlightMode_MAX,
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8 {
	Friendly,
	Neutral,
	Hostile,
	ETeamAttitude_MAX,
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8 {
	Failed,
	AlreadyAtGoal,
	RequestSuccessful,
	EPathFollowingRequestResult_MAX,
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8 {
	Error,
	NoMove,
	DirectMove,
	PartialPath,
	PathToGoal,
	EPathFollowingAction_MAX,
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8 {
	Idle,
	Waiting,
	Paused,
	Moving,
	EPathFollowingStatus_MAX,
};

// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8 {
	RequireSuccess,
	IgnoreFailure,
	EPawnActionFailHandling_MAX,
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8 {
	CopyBeforeTriggering,
	ReuseInstances,
	EPawnSubActionTriggeringPolicy_MAX,
};

// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8 {
	UsePathfinding,
	StraightLine,
	EPawnActionMoveMode_MAX,
};

