// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8 {
	Uniform,
	Free,
	LockXY,
	LockXZ,
	LockYZ,
	EFoliageScaling_MAX,
};

// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8 {
	Red,
	Green,
	Blue,
	Alpha,
	MAX_None,
	EVertexColorMaskChannel_MAX,
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8 {
	FOLIAGEVERTEXCOLORMASK_Disabled,
	FOLIAGEVERTEXCOLORMASK_Red,
	FOLIAGEVERTEXCOLORMASK_Green,
	FOLIAGEVERTEXCOLORMASK_Blue,
	FOLIAGEVERTEXCOLORMASK_Alpha,
	FOLIAGEVERTEXCOLORMASK_MAX,
};

// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8 {
	None,
	CollisionOverlap,
	ShadeOverlap,
	AnyOverlap,
	ESimulationQuery_MAX,
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8 {
	CollisionOverlap,
	ShadeOverlap,
	None,
	ESimulationOverlap_MAX,
};

