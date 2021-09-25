// Enum EasyFirebase.ValueEventType
enum class ValueEventType : uint8 {
	Changed,
	Cancelled,
	ValueEventType_MAX,
};

// Enum EasyFirebase.ChildEventType
enum class ChildEventType : uint8 {
	Added,
	Changed,
	Moved,
	Removed,
	Cancelled,
	ChildEventType_MAX,
};

// Enum EasyFirebase.AnalyticsParameter
enum class AnalyticsParameter : uint8 {
	achievement_id,
	aclid,
	affiliation,
	campaign,
	character,
	checkout_step,
	checkout_option,
	content,
	content_type,
	coupon,
	cp1,
	creative_name,
	creative_slot,
	currency,
	destination,
	end_date,
	flight_number,
	group_id,
	index,
	item_brand,
	item_category,
	item_id,
	item_location_id,
	item_name,
	item_list,
	item_variant,
	level,
	location,
	medium,
	number_of_nights,
	number_of_passengers,
	number_of_rooms,
	origin,
	price,
	quantity,
	score,
	search_term,
	shipping,
	sign_up_method,
	method,
	source,
	start_date,
	tax,
	term,
	transaction_id,
	travel_class,
	value,
	virtual_currency_name,
	level_name,
	success,
	extend_session,
	AnalyticsParameter_MAX,
};

// Enum EasyFirebase.AnalyticsEvent
enum class AnalyticsEvent : uint8 {
	add_payment_info,
	add_to_cart,
	add_to_wishlist,
	app_open,
	begin_checkout,
	campaign_details,
	checkout_progress,
	earn_virtual_currency,
	ecommerce_purchase,
	generate_lead,
	join_group,
	level_up,
	login,
	post_score,
	present_offer,
	purchase_refund,
	remove_from_cart,
	search,
	select_content,
	set_checkout_option,
	share,
	sign_up,
	spend_virtual_currency,
	tutorial_begin,
	tutorial_complete,
	unlock_achievement,
	view_item,
	view_item_list,
	view_search_results,
	level_start,
	level_end,
	AnalyticsEvent_MAX,
};

// Enum EasyFirebase.ValueSource
enum class ValueSource : uint8 {
	kValueSourceStaticValue,
	kValueSourceRemoteValue,
	kValueSourceDefaultValue,
	ValueSource_MAX,
};

// Enum EasyFirebase.VariantType
enum class VariantType : uint8 {
	Null,
	Int64,
	Float,
	Bool,
	String,
	Vector,
	Map,
	VariantType_MAX,
};
