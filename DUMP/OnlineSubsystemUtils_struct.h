// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	Invalid,
	Closed,
	Pending,
	Open,
	EBeaconConnectionState_MAX,
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	NonePending,
	ExistingSessionReservation,
	ReservationUpdate,
	EmptyServerReservation,
	Reconnect,
	Abandon,
	ReservationRemoveMembers,
	EClientRequestType_MAX,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	NoResult,
	RequestPending,
	GeneralError,
	PartyLimitReached,
	IncorrectPlayerCount,
	RequestTimedOut,
	ReservationDuplicate,
	ReservationNotFound,
	ReservationAccepted,
	ReservationDenied,
	ReservationDenied_CrossPlayRestriction,
	ReservationDenied_Banned,
	ReservationRequestCanceled,
	ReservationInvalid,
	BadSessionId,
	ReservationDenied_ContainsExistingPlayers,
	EPartyReservationResult_MAX,
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8 {
	NonePending,
	ExistingSessionReservation,
	ReservationUpdate,
	EmptyServerReservation,
	Reconnect,
	Abandon,
	ESpectatorClientRequestType_MAX,
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8 {
	NoResult,
	RequestPending,
	GeneralError,
	SpectatorLimitReached,
	IncorrectPlayerCount,
	RequestTimedOut,
	ReservationDuplicate,
	ReservationNotFound,
	ReservationAccepted,
	ReservationDenied,
	ReservationDenied_CrossPlayRestriction,
	ReservationDenied_Banned,
	ReservationRequestCanceled,
	ReservationInvalid,
	BadSessionId,
	ReservationDenied_ContainsExistingPlayers,
	ESpectatorReservationResult_MAX,
};

