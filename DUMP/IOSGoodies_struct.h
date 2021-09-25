// Enum IOSGoodies.BatteryState
enum class BatteryState : uint8 {
	Unknown,
	Unplugged,
	Charging,
	Full,
	BatteryState_MAX,
};

// Enum IOSGoodies.CameraFlashMode
enum class CameraFlashMode : uint8 {
	FlashOff,
	FlashAuto,
	FlashOn,
	CameraFlashMode_MAX,
};

// Enum IOSGoodies.DateTimePickerType
enum class DateTimePickerType : uint8 {
	DatePicker,
	TimePicker,
	DateTimePicker,
	CountdownTimer,
	DateTimePickerType_MAX,
};

// Enum IOSGoodies.GallerySourceType
enum class GallerySourceType : uint8 {
	PhotoLibrary,
	PhotoAlbum,
	GallerySourceType_MAX,
};

// Enum IOSGoodies.ImpactStrength
enum class ImpactStrength : uint8 {
	Light,
	Medium,
	Heavy,
	ImpactStrength_MAX,
};

// Enum IOSGoodies.TransportType
enum class TransportType : uint8 {
	Car,
	Feet,
	PublicTransport,
	TransportType_MAX,
};

// Enum IOSGoodies.MapViewType
enum class MapViewType : uint8 {
	Standard,
	Satellite,
	Hybrid,
	Transit,
	MapViewType_MAX,
};

// Enum IOSGoodies.NotificationType
enum class NotificationType : uint8 {
	Error,
	Warning,
	Success,
	NotificationType_MAX,
};

// Enum IOSGoodies.RecurrencyRuleType
enum class RecurrencyRuleType : uint8 {
	Daily,
	Weekly,
	Monthly,
	Yearly,
	RecurrencyRuleType_MAX,
};

// Enum IOSGoodies.StatusBarStyle
enum class StatusBarStyle : uint8 {
	BarStyleDefault,
	BarStyleLightContent,
	BarStyleDarkContent,
	StatusBarStyle_MAX,
};

// Enum IOSGoodies.UserInterfaceIdiom
enum class UserInterfaceIdiom : uint8 {
	Unspecified,
	Phone,
	Pad,
	AppleTV,
	CarPlay,
	UserInterfaceIdiom_MAX,
};

