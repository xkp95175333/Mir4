// Enum Slate.ETextJustify
enum class ETextJustify : uint8 {
	Left,
	Center,
	Right,
	ETextJustify_MAX,
};

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8 {
	Auto,
	LeftToRight,
	RightToLeft,
	ETextFlowDirection_MAX,
};

// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8 {
	TextChangeOnDismiss,
	TextCommitOnAccept,
	TextCommitOnDismiss,
	EVirtualKeyboardDismissAction_MAX,
};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8 {
	DefaultWrapping,
	AllowPerCharacterWrapping,
	ETextWrappingPolicy_MAX,
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8 {
	List,
	Tile,
	Tree,
	ETableViewMode_MAX,
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8 {
	None,
	Single,
	SingleToggle,
	Multi,
	ESelectionMode_MAX,
};

// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8 {
	None,
	ButtonRow,
	EditableText,
	Heading,
	MenuEntry,
	MenuSeparator,
	ToolBarButton,
	ToolBarComboButton,
	ToolBarSeparator,
	Widget,
	EMultiBlockType_MAX,
};

// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8 {
	MenuBar,
	ToolBar,
	VerticalToolBar,
	Menu,
	ButtonRow,
	ToolMenuBar,
	EMultiBoxType_MAX,
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8 {
	LeftToRight,
	RightToLeft,
	FillFromCenter,
	TopToBottom,
	BottomToTop,
	EProgressBarFillType_MAX,
};

// Enum Slate.EStretch
enum class EStretch : uint8 {
	None,
	Fill,
	ScaleToFit,
	ScaleToFitX,
	ScaleToFitY,
	ScaleToFill,
	ScaleBySafeZone,
	UserSpecified,
	EStretch_MAX,
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8 {
	Both,
	DownOnly,
	UpOnly,
	EStretchDirection_MAX,
};

// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8 {
	IntoView,
	TopOrLeft,
	Center,
	EDescendantScrollDestination_MAX,
};

// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8 {
	EvenlyDistributed,
	EvenlySize,
	EvenlyWide,
	LeftAligned,
	RightAligned,
	CenterAligned,
	Fill,
	EListItemAlignment_MAX,
};

// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8 {
	None,
	Visible,
	Hidden,
	ECustomizedToolMenuVisibility_MAX,
};

// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8 {
	Primary,
	Secondary,
	NumChords,
	EMultipleKeyBindingIndex_MAX,
};

// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8 {
	None,
	Button,
	ToggleButton,
	RadioButton,
	Check,
	CollapsedButton,
	EUserInterfaceActionType_MAX,
};

