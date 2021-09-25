// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left,
	Right,
	Up,
	Down,
	Next,
	Previous,
	Num,
	Invalid,
	EUINavigation_MAX,
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked,
	Checked,
	Undetermined,
	ECheckBoxState_MAX,
};

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8 {
	Inherit,
	ClipToBounds,
	ClipToBoundsWithoutIntersecting,
	ClipToBoundsAlways,
	OnDemand,
	EWidgetClipping_MAX,
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage,
	FullColor,
	Linear,
	ESlateBrushImageType_MAX,
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror,
	Horizontal,
	Vertical,
	Both,
	ESlateBrushMirrorType_MAX,
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile,
	Horizontal,
	Vertical,
	Both,
	ESlateBrushTileType_MAX,
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType,
	Box,
	Border,
	Image,
	ESlateBrushDrawType_MAX,
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified,
	UseColor_Specified_Link,
	UseColor_Foreground,
	UseColor_Foreground_Subdued,
	UseColor_MAX,
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape,
	Explicit,
	Wrap,
	Stop,
	Custom,
	CustomBoundary,
	Invalid,
	EUINavigationRule_MAX,
};

// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8 {
	Inherit,
	Culture,
	LeftToRight,
	RightToLeft,
	EFlowDirectionPreference_MAX,
};

// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8 {
	NormalVision,
	Deuteranope,
	Protanope,
	Tritanope,
	EColorVisionDeficiency_MAX,
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress,
	OnNavigation,
	OnMouseClick,
	Direct,
	ESelectInfo_MAX,
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default,
	OnEnter,
	OnUserMovedFocus,
	OnCleared,
	ETextCommit_MAX,
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto,
	KerningOnly,
	FullShaping,
	ETextShapingMethod_MAX,
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	Metrics,
	BoundingBox,
	EFontLayoutMethod_MAX,
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad,
	Stream,
	Inline,
	EFontLoadingPolicy_MAX,
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default,
	Auto,
	AutoLight,
	Monochrome,
	None,
	EFontHinting_MAX,
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse,
	Navigation,
	SetDirectly,
	Cleared,
	OtherWidgetLostFocus,
	WindowActivate,
	EFocusCause_MAX,
};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8 {
	FocusChanging,
	FocusLost,
	FocusReceived,
	ESlateDebuggingFocusEvent_MAX,
};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8 {
	Unknown,
	Explicit,
	CustomDelegateBound,
	CustomDelegateUnbound,
	NextOrPrevious,
	HitTestGrid,
	ESlateDebuggingNavigationMethod_MAX,
};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8 {
	MouseCaptureGained,
	MouseCaptureLost,
	ESlateDebuggingStateChangeEvent_MAX,
};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8 {
	MouseMove,
	MouseEnter,
	MouseLeave,
	MouseButtonDown,
	MouseButtonUp,
	MouseButtonDoubleClick,
	MouseWheel,
	TouchStart,
	TouchEnd,
	DragDetected,
	DragEnter,
	DragLeave,
	DragOver,
	DragDrop,
	DropMessage,
	KeyDown,
	KeyUp,
	KeyChar,
	AnalogInput,
	TouchGesture,
	COUNT,
	ESlateDebuggingInputEvent_MAX,
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8 {
	Scroll_Down,
	Scroll_Up,
	Scroll_MAX,
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal,
	Orient_Vertical,
	Orient_MAX,
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8 {
	MenuPlacement_BelowAnchor,
	MenuPlacement_CenteredBelowAnchor,
	MenuPlacement_BelowRightAnchor,
	MenuPlacement_ComboBox,
	MenuPlacement_ComboBoxRight,
	MenuPlacement_MenuRight,
	MenuPlacement_AboveAnchor,
	MenuPlacement_CenteredAboveAnchor,
	MenuPlacement_AboveRightAnchor,
	MenuPlacement_MenuLeft,
	MenuPlacement_Center,
	MenuPlacement_RightLeftCenter,
	MenuPlacement_MatchBottomLeft,
	MenuPlacement_MAX,
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill,
	VAlign_Top,
	VAlign_Center,
	VAlign_Bottom,
	VAlign_MAX,
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill,
	HAlign_Left,
	HAlign_Center,
	HAlign_Right,
	HAlign_MAX,
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard,
	Controller,
	User,
	ENavigationGenesis_MAX,
};

// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8 {
	FocusedWidget,
	WidgetUnderCursor,
	ENavigationSource_MAX,
};

// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8 {
	Accept,
	Back,
	Num,
	Invalid,
	EUINavigationAction_MAX,
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8 {
	DownAndUp,
	ButtonPress,
	ButtonRelease,
	EButtonPressMethod_MAX,
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8 {
	DownAndUp,
	Down,
	PreciseTap,
	EButtonTouchMethod_MAX,
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8 {
	DownAndUp,
	MouseDown,
	MouseUp,
	PreciseClick,
	EButtonClickMethod_MAX,
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox,
	ToggleButton,
	ESlateCheckBoxType_MAX,
};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8 {
	ActiveWindow,
	MainWindow,
	ESlateParentWindowSearchMethod_MAX,
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible,
	Always,
	Never,
	EConsumeMouseWheel_MAX,
};

