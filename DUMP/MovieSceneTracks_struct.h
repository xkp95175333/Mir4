// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X,
	Y,
	Z,
	NEG_X,
	NEG_Y,
	NEG_Z,
	MovieScene3DPathSection_MAX,
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	AtStartOfEvaluation,
	AtEndOfEvaluation,
	AfterSpawn,
	EFireEventsAtPosition_MAX,
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible,
	Hidden,
	ELevelVisibility_MAX,
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate,
	Deactivate,
	Trigger,
	EParticleKey_MAX,
};

