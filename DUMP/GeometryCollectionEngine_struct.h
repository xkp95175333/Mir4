// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8 {
	SortNone,
	SortByHighestMass,
	SortByHighestSpeed,
	SortByNearestFirst,
	Count,
	EChaosBreakingSortMethod_MAX,
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8 {
	SortNone,
	SortByHighestMass,
	SortByHighestSpeed,
	SortByHighestImpulse,
	SortByNearestFirst,
	Count,
	EChaosCollisionSortMethod_MAX,
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8 {
	SortNone,
	SortByHighestMass,
	SortByHighestSpeed,
	SortByNearestFirst,
	Count,
	EChaosTrailingSortMethod_MAX,
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8 {
	HideNone,
	HideWithCollision,
	HideSelected,
	HideWholeCollection,
	HideAll,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX,
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8 {
	Chaos_Traansform,
	Chaos_Max,
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8 {
	Chaos_Active,
	Chaos_DynamicState,
	Chaos_CollisionGroup,
	Chaos_Max,
};

