// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	Auto,
	User,
	Break,
	Linear,
	Constant,
	EMovieSceneKeyInterpolation_MAX,
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8 {
	Invalid,
	Absolute,
	Additive,
	Relative,
	EMovieSceneBlendType_MAX,
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8 {
	Linear,
	SinIn,
	SinOut,
	SinInOut,
	QuadIn,
	QuadOut,
	QuadInOut,
	CubicIn,
	CubicOut,
	CubicInOut,
	QuartIn,
	QuartOut,
	QuartInOut,
	QuintIn,
	QuintOut,
	QuintInOut,
	ExpoIn,
	ExpoOut,
	ExpoInOut,
	CircIn,
	CircOut,
	CircInOut,
	EMovieSceneBuiltInEasing_MAX,
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	Static,
	Swept,
	EEvaluationMethod_MAX,
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8 {
	Tick,
	Platform,
	Audio,
	Timecode,
	EUpdateClockSource_MAX,
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8 {
	FrameLocked,
	WithSubFrames,
	EMovieSceneEvaluationType_MAX,
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8 {
	Stopped,
	Playing,
	Recording,
	Scrubbing,
	Jumping,
	Stepping,
	Paused,
	MAX,
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	Local,
	Root,
	EMovieSceneObjectBindingSpace_MAX,
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8 {
	KeepState,
	RestoreState,
	ProjectDefault,
	EMovieSceneCompletionMode_MAX,
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	None,
	PreRoll,
	PostRoll,
	ESectionEvaluationFlags_MAX,
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8 {
	Play,
	Jump,
	Scrub,
	EUpdatePositionMethod_MAX,
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	InnerSequence,
	MasterSequence,
	External,
	ESpawnOwnership_MAX,
};

