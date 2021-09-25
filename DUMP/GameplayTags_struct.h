// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	Undefined,
	AnyTagsMatch,
	AllTagsMatch,
	NoTagsMatch,
	AnyExprMatch,
	AllExprMatch,
	NoExprMatch,
	EGameplayTagQueryExprType_MAX,
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	Any,
	All,
	EGameplayContainerMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	Explicit,
	IncludeParentTags,
	EGameplayTagMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8 {
	None,
	NonRestrictedOnly,
	RestrictedOnly,
	All,
	EGameplayTagSelectionType_MAX,
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	Native,
	DefaultTagList,
	TagList,
	RestrictedTagList,
	DataTable,
	Invalid,
	EGameplayTagSourceType_MAX,
};

