// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8 {
	NotAccessible,
	Auto,
	Summary,
	Custom,
	ToolTip,
	ESlateAccessibleBehavior_MAX,
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible,
	Collapsed,
	Hidden,
	HitTestInvisible,
	SelfHitTestInvisible,
	ESlateVisibility_MAX,
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default,
	Number,
	Web,
	Email,
	Password,
	AlphaNumeric,
	EVirtualKeyboardType_MAX,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown,
	TopLeft,
	TopCenter,
	TopRight,
	CenterLeft,
	CenterCenter,
	CenterRight,
	BottomLeft,
	BottomCenter,
	BottomRight,
	EDragPivot_MAX,
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8 {
	Horizontal,
	Vertical,
	Wrap,
	Overlay,
	EDynamicBoxType_MAX,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic,
	Fill,
	ESlateSizeRule_MAX,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward,
	Reverse,
	PingPong,
	EUMGSequencePlayMode_MAX,
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8 {
	Started,
	Finished,
	EWidgetAnimationEvent_MAX,
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8 {
	Never,
	Auto,
	EWidgetTickFrequency_MAX,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None,
	Designing,
	ShowOutline,
	ExecutePreConstruct,
	EWidgetDesignFlags_MAX,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function,
	Property,
	EBindingKind_MAX,
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8 {
	Visible,
	SelfHitTestInvisible,
	EWindowVisibility_MAX,
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane,
	Cylinder,
	EWidgetGeometryMode_MAX,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque,
	Masked,
	Transparent,
	EWidgetBlendMode_MAX,
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime,
	GameTime,
	EWidgetTimingPolicy_MAX,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World,
	Screen,
	EWidgetSpace_MAX,
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World,
	Mouse,
	CenterScreen,
	Custom,
	EWidgetInteractionSource_MAX,
};

