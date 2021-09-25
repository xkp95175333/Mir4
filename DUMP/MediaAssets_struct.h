// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8 {
	None,
	DepthSensor,
	Front,
	Rear,
	Unknown,
	EMediaWebcamCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8 {
	None,
	Card,
	Software,
	Unknown,
	Webcam,
	EMediaVideoCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8 {
	None,
	Card,
	Microphone,
	Software,
	Unknown,
	EMediaAudioCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8 {
	Audio,
	Caption,
	Metadata,
	Script,
	Subtitle,
	Text,
	Video,
	EMediaPlayerTrack_MAX,
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8 {
	Min_65,
	Small_257,
	Medium_513,
	Large_1025,
	EMediaSoundComponentFFTSize_MAX,
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8 {
	Mono,
	Stereo,
	Surround,
	EMediaSoundChannels_MAX,
};

