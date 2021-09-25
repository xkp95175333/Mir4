// Enum AndroidGoodies.AudioAttributesContentType
enum class AudioAttributesContentType : uint8 {
	Unknown,
	Speech,
	Music,
	Movie,
	Sonification,
	AudioAttributesContentType_MAX,
};

// Enum AndroidGoodies.AudioAttributesUsage
enum class AudioAttributesUsage : uint8 {
	NotSpecified,
	Media,
	VoiceCommunication,
	VoiceCommunicationSignalling,
	Alarm,
	Notification,
	NotificationRingtone,
	NotificationCommunicationRequest,
	NotificationCommunicationInstant,
	NotificationCommunicationDelayed,
	NotificationEvent,
	AssistanceAccessibility,
	AssistanceNavigationGuidance,
	AssistanceSonification,
	Game,
	Assistant,
	AudioAttributesUsage_MAX,
};

// Enum AndroidGoodies.BatteryHealth
enum class BatteryHealth : uint8 {
	UnknownHealth,
	Good,
	Overheat,
	Dead,
	OverVoltage,
	UnspecifiedFailure,
	Cold,
	BatteryHealth_MAX,
};

// Enum AndroidGoodies.BatteryPluggedState
enum class BatteryPluggedState : uint8 {
	OnBattery,
	Ac,
	Usb,
	Wireless,
	BatteryPluggedState_MAX,
};

// Enum AndroidGoodies.BatteryStatus
enum class BatteryStatus : uint8 {
	UnknownStatus,
	Charging,
	Discharging,
	NotCharging,
	Full,
	BatteryStatus_MAX,
};

// Enum AndroidGoodies.ChannelImportance
enum class ChannelImportance : uint8 {
	ImportanceNone,
	ImportanceMin,
	ImportanceLow,
	ImportanceDefault,
	ImportanceHigh,
	ImportanceMax,
	ImportanceUnspecified,
	ChannelImportance_MAX,
};

// Enum AndroidGoodies.DialogTheme
enum class DialogTheme : uint8 {
	LightTheme,
	DarkTheme,
	DefaultTheme,
	DialogTheme_MAX,
};

// Enum AndroidGoodies.ImageSize
enum class ImageSize : uint8 {
	Original,
	Max256,
	Max512,
	Max1024,
	Max2048,
	ImageSize_MAX,
};

// Enum AndroidGoodies.InterruptionFilter
enum class InterruptionFilter : uint8 {
	FilterUnknown,
	FIlterAll,
	FilterPriority,
	FilterNone,
	FilterAlarms,
	InterruptionFilter_MAX,
};

// Enum AndroidGoodies.NotificationBadgeIconType
enum class NotificationBadgeIconType : uint8 {
	NoBadge,
	SmallBadge,
	LargeBadge,
	NotificationBadgeIconType_MAX,
};

// Enum AndroidGoodies.NotificationCategory
enum class NotificationCategory : uint8 {
	CategoryAlarm,
	CategoryCall,
	CategoryEmail,
	CategoryError,
	CategoryEvent,
	CategoryMessage,
	CategoryNavigation,
	CategoryProgress,
	CategoryPromo,
	CategoryRecommendation,
	CategoryReminder,
	CategoryService,
	CategorySocial,
	CategoryStatus,
	CategorySystem,
	CategoryTransport,
	NotificationCategory_MAX,
};

// Enum AndroidGoodies.NotificationGroupAlert
enum class NotificationGroupAlert : uint8 {
	GroupAlertAll,
	GroupAlertSummary,
	GroupAlertChildren,
	NotificationGroupAlert_MAX,
};

// Enum AndroidGoodies.NotificationPriority
enum class NotificationPriority : uint8 {
	PriorityMinimum,
	PriorityLow,
	PriorityDefault,
	PriorityHigh,
	PriorityMaximum,
	NotificationPriority_MAX,
};

// Enum AndroidGoodies.NotificationVisibility
enum class NotificationVisibility : uint8 {
	VisibilitySecret,
	VisibilityPrivate,
	VisibilityPublic,
	NotificationVisibility_MAX,
};

// Enum AndroidGoodies.ProgressDialogStyle
enum class ProgressDialogStyle : uint8 {
	Spinner,
	ProgressBar,
	ProgressDialogStyle_MAX,
};

// Enum AndroidGoodies.ToastLength
enum class ToastLength : uint8 {
	Short,
	Long,
	ToastLength_MAX,
};

