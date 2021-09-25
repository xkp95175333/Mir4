// Enum UIParticle.EUIParticlePropertyType
enum class EUIParticlePropertyType : uint8 {
	Float,
	FloatRange,
	FloatCurve,
	FloatCurveRange,
	Vector2D,
	Vector2DRange,
	LinearColorCurve,
	LinearColorCurveRange,
	EUIParticlePropertyType_MAX,
};

// Enum UIParticle.EParticleDrawEffect
enum class EParticleDrawEffect : uint8 {
	None,
	NoBlending,
	PreMultipliedAlpha,
	NoGamma,
	InvertAlpha,
	NoPixelSnapping,
	DisabledEffect,
	IgnoreTextureAlpha,
	ReverseGamma,
	EParticleDrawEffect_MAX,
};

// Enum UIParticle.EPositionType
enum class EPositionType : uint8 {
	FREE,
	RELATIVE,
	EPositionType_MAX,
};

// Enum UIParticle.EEmitterType
enum class EEmitterType : uint8 {
	Gravity,
	Radial,
	Curve,
	EEmitterType_MAX,
};

// Enum UIParticle.ECurveType
enum class ECurveType : uint8 {
	ParticleLifePercent,
	ParticleLifeTime,
	EmitLifeTime,
	ECurveType_MAX,
};

