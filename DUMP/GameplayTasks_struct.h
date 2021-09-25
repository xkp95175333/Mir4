// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8 {
	StartOnTop,
	StartAtEnd,
	ETaskResourceOverlapPolicy_MAX,
};

// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8 {
	Uninitialized,
	AwaitingActivation,
	Paused,
	Active,
	Finished,
	EGameplayTaskState_MAX,
};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8 {
	Error,
	Failed,
	Success_Paused,
	Success_Active,
	Success_Finished,
	EGameplayTaskRunResult_MAX,
};

