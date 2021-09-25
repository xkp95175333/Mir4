// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	Static,
	DynamicModifiersOnly,
	Dynamic,
	LegacyGeneration,
	ERuntimeGenerationType_MAX,
};

// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8 {
	TotalCost,
	HeuristicOnly,
	RealCostOnly,
	ENavCostDisplay_MAX,
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8 {
	Override,
	Append,
	Skip,
	ENavSystemOverridePolicy_MAX,
};

// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	Monotone,
	Watershed,
	ChunkyMonotone,
	ERecastPartitioning_MAX,
};

