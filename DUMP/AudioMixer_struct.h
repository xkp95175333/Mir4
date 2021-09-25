// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8 {
	MagnitudeSpectrum,
	PowerSpectrum,
	EAudioSpectrumType_MAX,
};

// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8 {
	None,
	Hamming,
	Hann,
	Blackman,
	EFFTWindowType_MAX,
};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8 {
	NearestNeighbor,
	Linear,
	Quadratic,
	EFFTPeakInterpolationMethod_MAX,
};

// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8 {
	DefaultSize,
	Min,
	Small,
	Medium,
	Large,
	Max,
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8 {
	MeanSquared,
	RootMeanSquared,
	Peak,
	Count,
	ESubmixEffectDynamicsPeakMode_MAX,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8 {
	Compressor,
	Limiter,
	Expander,
	Gate,
	Count,
	ESubmixEffectDynamicsProcessorType_MAX,
};

