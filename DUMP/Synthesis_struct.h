// Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8 {
	Osc1Gain,
	Osc1Frequency,
	Osc1Pulsewidth,
	Osc2Gain,
	Osc2Frequency,
	Osc2Pulsewidth,
	FilterFrequency,
	FilterQ,
	Gain,
	Pan,
	LFO1Frequency,
	LFO1Gain,
	LFO2Frequency,
	LFO2Gain,
	Count,
	ESynth1PatchDestination_MAX,
};

// Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8 {
	LFO1,
	LFO2,
	Envelope,
	BiasEnvelope,
	Count,
	ESynth1PatchSource_MAX,
};

// Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8 {
	Normal,
	Cross,
	PingPong,
	Count,
	ESynthStereoDelayMode_MAX,
};

// Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8 {
	OnePole,
	StateVariable,
	Ladder,
	Count,
	ESynthFilterAlgorithm_MAX,
};

// Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8 {
	LowPass,
	HighPass,
	BandPass,
	BandStop,
	Count,
	ESynthFilterType_MAX,
};

// Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8 {
	PatchToNone,
	PatchToOscFreq,
	PatchToFilterFreq,
	PatchToFilterQ,
	PatchToLFO1Gain,
	PatchToLFO2Gain,
	PatchToLFO1Freq,
	PatchToLFO2Freq,
	Count,
	ESynthModEnvBiasPatch_MAX,
};

// Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8 {
	PatchToNone,
	PatchToOscFreq,
	PatchToFilterFreq,
	PatchToFilterQ,
	PatchToLFO1Gain,
	PatchToLFO2Gain,
	PatchToLFO1Freq,
	PatchToLFO2Freq,
	Count,
	ESynthModEnvPatch_MAX,
};

// Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8 {
	PatchToNone,
	PatchToGain,
	PatchToOscFreq,
	PatchToFilterFreq,
	PatchToFilterQ,
	PatchToOscPulseWidth,
	PatchToOscPan,
	PatchLFO1ToLFO2Frequency,
	PatchLFO1ToLFO2Gain,
	Count,
	ESynthLFOPatchType_MAX,
};

// Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8 {
	Sync,
	OneShot,
	Free,
	Count,
	ESynthLFOMode_MAX,
};

// Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8 {
	Sine,
	UpSaw,
	DownSaw,
	Square,
	Triangle,
	Exponential,
	RandomSampleHold,
	Count,
	ESynthLFOType_MAX,
};

// Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8 {
	Sine,
	Saw,
	Triangle,
	Square,
	Noise,
	Count,
	ESynth1OscType_MAX,
};

// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8 {
	MeanSquared,
	RootMeanSquared,
	Peak,
	Count,
	ESourceEffectDynamicsPeakMode_MAX,
};

// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8 {
	Compressor,
	Limiter,
	Expander,
	Gate,
	Count,
	ESourceEffectDynamicsProcessorType_MAX,
};

// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8 {
	MeanSquared,
	RootMeanSquared,
	Peak,
	Count,
	EEnvelopeFollowerPeakMode_MAX,
};

// Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8 {
	LowPass,
	HighPass,
	BandPass,
	BandStop,
	Count,
	ESourceEffectFilterType_MAX,
};

// Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8 {
	OnePole,
	StateVariable,
	Ladder,
	Count,
	ESourceEffectFilterCircuit_MAX,
};

// Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8 {
	MidSide,
	LeftRight,
	count,
	EStereoChannelMode_MAX,
};

// Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8 {
	Sine,
	UpSaw,
	DownSaw,
	Square,
	Triangle,
	Exponential,
	RandomSampleHold,
	Count,
	EPhaserLFOType_MAX,
};

// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8 {
	Sine,
	Saw,
	Triangle,
	Square,
	Count,
	ERingModulatorTypeSourceEffect_MAX,
};

// Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8 {
	Normal,
	Cross,
	PingPong,
	Count,
	EStereoDelaySourceEffect_MAX,
};

// Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8 {
	OnePole,
	StateVariable,
	Ladder,
	Count,
	ESubmixFilterAlgorithm_MAX,
};

// Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8 {
	LowPass,
	HighPass,
	BandPass,
	BandStop,
	Count,
	ESubmixFilterType_MAX,
};

// Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8 {
	SendToChannel,
	Panning,
	Disabled,
	ETapLineMode_MAX,
};

// Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8 {
	FromBeginning,
	FromCurrentPosition,
	Count,
	EGranularSynthSeekType_MAX,
};

// Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8 {
	Rectangular,
	Triangle,
	DownwardTriangle,
	UpwardTriangle,
	ExponentialDecay,
	ExponentialIncrease,
	Gaussian,
	Hanning,
	Lanczos,
	Cosine,
	CosineSquared,
	Welch,
	Blackman,
	BlackmanHarris,
	Count,
	EGranularSynthEnvelopeType_MAX,
};

// Enum Synthesis.CurveInterpolationType
enum class CurveInterpolationType : uint8 {
	AUTOINTERP,
	LINEAR,
	CONSTANT,
	CurveInterpolationType_MAX,
};

// Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8 {
	FromBeginning,
	FromCurrentPosition,
	FromEnd,
	Count,
	ESamplePlayerSeekType_MAX,
};

// Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8 {
	Medium,
	Large,
	Count,
	ESynthKnobSize_MAX,
};

// Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8 {
	Light,
	Dark,
	Count,
	ESynthSlateColorStyle_MAX,
};

// Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8 {
	Small,
	Medium,
	Large,
	Count,
	ESynthSlateSizeType_MAX,
};

