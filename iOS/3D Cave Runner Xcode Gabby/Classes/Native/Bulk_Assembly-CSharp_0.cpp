﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// SkillzSDK.SkillzMessageReceiver
struct SkillzMessageReceiver_t2475930865;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1306727446;
// UnityEngine.Object
struct Object_t186395602;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2487369662;
// SkillzSDK.TurnBasedMatch
struct TurnBasedMatch_t2703741891;
// System.Char[]
struct CharU5BU5D_t2657265802;
// System.Int32[]
struct Int32U5BU5D_t3123570385;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t395215217;
// System.String[]
struct StringU5BU5D_t3131910368;
// System.Object[]
struct ObjectU5BU5D_t3620539926;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1818766108;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3198506081;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t4257383288;
// System.Void
struct Void_t3950808206;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2937391420;
// System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound>
struct List_1_t2065137162;
// SkillzSDK.SkillzDelegateBase
struct SkillzDelegateBase_t1035463440;
// SkillzSDK.SkillzDelegateTurnBased
struct SkillzDelegateTurnBased_t1567192578;

extern RuntimeClass* Object_t186395602_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3623860750_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1519375943;
extern const uint32_t SkillzMessageReceiver_Start_m719661618_MetadataUsageId;
extern RuntimeClass* TurnBasedMatch_t2703741891_il2cpp_TypeInfo_var;
extern const uint32_t SkillzMessageReceiver_skillzTurnBasedTournamentWillBegin_m3439982960_MetadataUsageId;
extern const uint32_t SkillzMessageReceiver_skillzReviewCurrentGameState_m2611009263_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2487369662_il2cpp_TypeInfo_var;
extern const uint32_t SkillzMessageReceiver_DeserializeJSONToDictionary_m1354790129_MetadataUsageId;



#ifndef U3CMODULEU3E_T3727175644_H
#define U3CMODULEU3E_T3727175644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3727175644 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3727175644_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3775722097_H
#define VALUETYPE_T3775722097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3775722097  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3775722097_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3775722097_marshaled_com
{
};
#endif // VALUETYPE_T3775722097_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t2657265802* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t2657265802* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2657265802** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2657265802* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef DICTIONARY_2_T2487369662_H
#define DICTIONARY_2_T2487369662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2487369662  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t3123570385* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t395215217* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t3131910368* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t3620539926* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t3198506081 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___table_4)); }
	inline Int32U5BU5D_t3123570385* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t3123570385** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t3123570385* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___linkSlots_5)); }
	inline LinkU5BU5D_t395215217* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t395215217** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t395215217* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___keySlots_6)); }
	inline StringU5BU5D_t3131910368* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t3131910368** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t3131910368* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___valueSlots_7)); }
	inline ObjectU5BU5D_t3620539926* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t3620539926** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t3620539926* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___serialization_info_13)); }
	inline SerializationInfo_t3198506081 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t3198506081 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t3198506081 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2487369662_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4257383288 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2487369662_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4257383288 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4257383288 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4257383288 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2487369662_H
#ifndef TIMESPAN_T490024889_H
#define TIMESPAN_T490024889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t490024889 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t490024889, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t490024889_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t490024889  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t490024889  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t490024889  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t490024889_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t490024889  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t490024889 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t490024889  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t490024889_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t490024889  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t490024889 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t490024889  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t490024889_StaticFields, ___Zero_2)); }
	inline TimeSpan_t490024889  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t490024889 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t490024889  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T490024889_H
#ifndef NULLABLE_1_T3791826798_H
#define NULLABLE_1_T3791826798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Single>
struct  Nullable_1_t3791826798 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3791826798, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3791826798, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3791826798_H
#ifndef NULLABLE_1_T4169466177_H
#define NULLABLE_1_T4169466177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t4169466177 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4169466177, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4169466177, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4169466177_H
#ifndef NULLABLE_1_T2229808318_H
#define NULLABLE_1_T2229808318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t2229808318 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2229808318, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2229808318, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2229808318_H
#ifndef NULLABLE_1_T1847379584_H
#define NULLABLE_1_T1847379584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Double>
struct  Nullable_1_t1847379584 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1847379584, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1847379584, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1847379584_H
#ifndef NULLABLE_1_T3052609695_H
#define NULLABLE_1_T3052609695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt32>
struct  Nullable_1_t3052609695 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3052609695, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3052609695, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3052609695_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BOOLEAN_T1500139757_H
#define BOOLEAN_T1500139757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1500139757 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1500139757, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1500139757_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1500139757_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1500139757_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1500139757_H
#ifndef VOID_T3950808206_H
#define VOID_T3950808206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3950808206 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3950808206_H
#ifndef ENUM_T435127154_H
#define ENUM_T435127154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t435127154  : public ValueType_t3775722097
{
public:

public:
};

struct Enum_t435127154_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2657265802* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t435127154_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2657265802* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2657265802** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2657265802* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t435127154_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t435127154_marshaled_com
{
};
#endif // ENUM_T435127154_H
#ifndef OBJECT_T186395602_H
#define OBJECT_T186395602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t186395602  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t186395602, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t186395602_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t186395602_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t186395602_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t186395602_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T186395602_H
#ifndef PLAYER_T161496991_H
#define PLAYER_T161496991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Player
struct  Player_t161496991 
{
public:
	// System.String SkillzSDK.Player::DisplayName
	String_t* ___DisplayName_0;
	// System.Nullable`1<System.UInt32> SkillzSDK.Player::ID
	Nullable_1_t3052609695  ___ID_1;
	// System.String SkillzSDK.Player::AvatarURL
	String_t* ___AvatarURL_2;
	// System.String SkillzSDK.Player::FlagURL
	String_t* ___FlagURL_3;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(Player_t161496991, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_0), value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(Player_t161496991, ___ID_1)); }
	inline Nullable_1_t3052609695  get_ID_1() const { return ___ID_1; }
	inline Nullable_1_t3052609695 * get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(Nullable_1_t3052609695  value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_AvatarURL_2() { return static_cast<int32_t>(offsetof(Player_t161496991, ___AvatarURL_2)); }
	inline String_t* get_AvatarURL_2() const { return ___AvatarURL_2; }
	inline String_t** get_address_of_AvatarURL_2() { return &___AvatarURL_2; }
	inline void set_AvatarURL_2(String_t* value)
	{
		___AvatarURL_2 = value;
		Il2CppCodeGenWriteBarrier((&___AvatarURL_2), value);
	}

	inline static int32_t get_offset_of_FlagURL_3() { return static_cast<int32_t>(offsetof(Player_t161496991, ___FlagURL_3)); }
	inline String_t* get_FlagURL_3() const { return ___FlagURL_3; }
	inline String_t** get_address_of_FlagURL_3() { return &___FlagURL_3; }
	inline void set_FlagURL_3(String_t* value)
	{
		___FlagURL_3 = value;
		Il2CppCodeGenWriteBarrier((&___FlagURL_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SkillzSDK.Player
struct Player_t161496991_marshaled_pinvoke
{
	char* ___DisplayName_0;
	Nullable_1_t3052609695  ___ID_1;
	char* ___AvatarURL_2;
	char* ___FlagURL_3;
};
// Native definition for COM marshalling of SkillzSDK.Player
struct Player_t161496991_marshaled_com
{
	Il2CppChar* ___DisplayName_0;
	Nullable_1_t3052609695  ___ID_1;
	Il2CppChar* ___AvatarURL_2;
	Il2CppChar* ___FlagURL_3;
};
#endif // PLAYER_T161496991_H
#ifndef DATETIMEKIND_T2252861639_H
#define DATETIMEKIND_T2252861639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2252861639 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2252861639, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2252861639_H
#ifndef MATCH_T4238455967_H
#define MATCH_T4238455967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.Match
struct  Match_t4238455967  : public RuntimeObject
{
public:
	// System.String SkillzSDK.Match::Name
	String_t* ___Name_0;
	// System.String SkillzSDK.Match::Description
	String_t* ___Description_1;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::ID
	Nullable_1_t4169466177  ___ID_2;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::TemplateID
	Nullable_1_t4169466177  ___TemplateID_3;
	// System.Nullable`1<System.UInt32> SkillzSDK.Match::SkillzDifficulty
	Nullable_1_t3052609695  ___SkillzDifficulty_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SkillzSDK.Match::GameParams
	Dictionary_2_t2937391420 * ___GameParams_5;
	// SkillzSDK.Player SkillzSDK.Match::Player
	Player_t161496991  ___Player_6;
	// System.Nullable`1<System.Boolean> SkillzSDK.Match::IsCash
	Nullable_1_t2229808318  ___IsCash_7;
	// System.Nullable`1<System.Int32> SkillzSDK.Match::EntryPoints
	Nullable_1_t4169466177  ___EntryPoints_8;
	// System.Nullable`1<System.Single> SkillzSDK.Match::EntryCash
	Nullable_1_t3791826798  ___EntryCash_9;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((&___Description_1), value);
	}

	inline static int32_t get_offset_of_ID_2() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___ID_2)); }
	inline Nullable_1_t4169466177  get_ID_2() const { return ___ID_2; }
	inline Nullable_1_t4169466177 * get_address_of_ID_2() { return &___ID_2; }
	inline void set_ID_2(Nullable_1_t4169466177  value)
	{
		___ID_2 = value;
	}

	inline static int32_t get_offset_of_TemplateID_3() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___TemplateID_3)); }
	inline Nullable_1_t4169466177  get_TemplateID_3() const { return ___TemplateID_3; }
	inline Nullable_1_t4169466177 * get_address_of_TemplateID_3() { return &___TemplateID_3; }
	inline void set_TemplateID_3(Nullable_1_t4169466177  value)
	{
		___TemplateID_3 = value;
	}

	inline static int32_t get_offset_of_SkillzDifficulty_4() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___SkillzDifficulty_4)); }
	inline Nullable_1_t3052609695  get_SkillzDifficulty_4() const { return ___SkillzDifficulty_4; }
	inline Nullable_1_t3052609695 * get_address_of_SkillzDifficulty_4() { return &___SkillzDifficulty_4; }
	inline void set_SkillzDifficulty_4(Nullable_1_t3052609695  value)
	{
		___SkillzDifficulty_4 = value;
	}

	inline static int32_t get_offset_of_GameParams_5() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___GameParams_5)); }
	inline Dictionary_2_t2937391420 * get_GameParams_5() const { return ___GameParams_5; }
	inline Dictionary_2_t2937391420 ** get_address_of_GameParams_5() { return &___GameParams_5; }
	inline void set_GameParams_5(Dictionary_2_t2937391420 * value)
	{
		___GameParams_5 = value;
		Il2CppCodeGenWriteBarrier((&___GameParams_5), value);
	}

	inline static int32_t get_offset_of_Player_6() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___Player_6)); }
	inline Player_t161496991  get_Player_6() const { return ___Player_6; }
	inline Player_t161496991 * get_address_of_Player_6() { return &___Player_6; }
	inline void set_Player_6(Player_t161496991  value)
	{
		___Player_6 = value;
	}

	inline static int32_t get_offset_of_IsCash_7() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___IsCash_7)); }
	inline Nullable_1_t2229808318  get_IsCash_7() const { return ___IsCash_7; }
	inline Nullable_1_t2229808318 * get_address_of_IsCash_7() { return &___IsCash_7; }
	inline void set_IsCash_7(Nullable_1_t2229808318  value)
	{
		___IsCash_7 = value;
	}

	inline static int32_t get_offset_of_EntryPoints_8() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___EntryPoints_8)); }
	inline Nullable_1_t4169466177  get_EntryPoints_8() const { return ___EntryPoints_8; }
	inline Nullable_1_t4169466177 * get_address_of_EntryPoints_8() { return &___EntryPoints_8; }
	inline void set_EntryPoints_8(Nullable_1_t4169466177  value)
	{
		___EntryPoints_8 = value;
	}

	inline static int32_t get_offset_of_EntryCash_9() { return static_cast<int32_t>(offsetof(Match_t4238455967, ___EntryCash_9)); }
	inline Nullable_1_t3791826798  get_EntryCash_9() const { return ___EntryCash_9; }
	inline Nullable_1_t3791826798 * get_address_of_EntryCash_9() { return &___EntryCash_9; }
	inline void set_EntryCash_9(Nullable_1_t3791826798  value)
	{
		___EntryCash_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T4238455967_H
#ifndef COMPONENT_T1354622342_H
#define COMPONENT_T1354622342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1354622342  : public Object_t186395602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1354622342_H
#ifndef DATETIME_T2026492664_H
#define DATETIME_T2026492664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2026492664 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t490024889  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2026492664, ___ticks_0)); }
	inline TimeSpan_t490024889  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t490024889 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t490024889  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2026492664, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2026492664_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2026492664  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2026492664  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t3131910368* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t3131910368* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t3131910368* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t3131910368* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t3131910368* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t3131910368* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t3131910368* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3123570385* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3123570385* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2026492664  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2026492664 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2026492664  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___MinValue_3)); }
	inline DateTime_t2026492664  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2026492664 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2026492664  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t3131910368* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t3131910368** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t3131910368* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t3131910368* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t3131910368** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t3131910368* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t3131910368* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t3131910368** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t3131910368* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t3131910368* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t3131910368** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t3131910368* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t3131910368* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t3131910368** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t3131910368* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t3131910368* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t3131910368** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t3131910368* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t3131910368* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t3131910368** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t3131910368* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3123570385* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3123570385** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3123570385* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3123570385* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3123570385** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3123570385* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2026492664_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T2026492664_H
#ifndef CONTINUEDTURNBASEDMATCH_T2978014613_H
#define CONTINUEDTURNBASEDMATCH_T2978014613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.ContinuedTurnBasedMatch
struct  ContinuedTurnBasedMatch_t2978014613 
{
public:
	// System.String SkillzSDK.ContinuedTurnBasedMatch::GameData
	String_t* ___GameData_0;
	// SkillzSDK.Player SkillzSDK.ContinuedTurnBasedMatch::Opponent
	Player_t161496991  ___Opponent_1;
	// System.Nullable`1<System.Double> SkillzSDK.ContinuedTurnBasedMatch::MyCurrentTotalScore
	Nullable_1_t1847379584  ___MyCurrentTotalScore_2;
	// System.Nullable`1<System.Double> SkillzSDK.ContinuedTurnBasedMatch::OpponentCurrentTotalScore
	Nullable_1_t1847379584  ___OpponentCurrentTotalScore_3;

public:
	inline static int32_t get_offset_of_GameData_0() { return static_cast<int32_t>(offsetof(ContinuedTurnBasedMatch_t2978014613, ___GameData_0)); }
	inline String_t* get_GameData_0() const { return ___GameData_0; }
	inline String_t** get_address_of_GameData_0() { return &___GameData_0; }
	inline void set_GameData_0(String_t* value)
	{
		___GameData_0 = value;
		Il2CppCodeGenWriteBarrier((&___GameData_0), value);
	}

	inline static int32_t get_offset_of_Opponent_1() { return static_cast<int32_t>(offsetof(ContinuedTurnBasedMatch_t2978014613, ___Opponent_1)); }
	inline Player_t161496991  get_Opponent_1() const { return ___Opponent_1; }
	inline Player_t161496991 * get_address_of_Opponent_1() { return &___Opponent_1; }
	inline void set_Opponent_1(Player_t161496991  value)
	{
		___Opponent_1 = value;
	}

	inline static int32_t get_offset_of_MyCurrentTotalScore_2() { return static_cast<int32_t>(offsetof(ContinuedTurnBasedMatch_t2978014613, ___MyCurrentTotalScore_2)); }
	inline Nullable_1_t1847379584  get_MyCurrentTotalScore_2() const { return ___MyCurrentTotalScore_2; }
	inline Nullable_1_t1847379584 * get_address_of_MyCurrentTotalScore_2() { return &___MyCurrentTotalScore_2; }
	inline void set_MyCurrentTotalScore_2(Nullable_1_t1847379584  value)
	{
		___MyCurrentTotalScore_2 = value;
	}

	inline static int32_t get_offset_of_OpponentCurrentTotalScore_3() { return static_cast<int32_t>(offsetof(ContinuedTurnBasedMatch_t2978014613, ___OpponentCurrentTotalScore_3)); }
	inline Nullable_1_t1847379584  get_OpponentCurrentTotalScore_3() const { return ___OpponentCurrentTotalScore_3; }
	inline Nullable_1_t1847379584 * get_address_of_OpponentCurrentTotalScore_3() { return &___OpponentCurrentTotalScore_3; }
	inline void set_OpponentCurrentTotalScore_3(Nullable_1_t1847379584  value)
	{
		___OpponentCurrentTotalScore_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SkillzSDK.ContinuedTurnBasedMatch
struct ContinuedTurnBasedMatch_t2978014613_marshaled_pinvoke
{
	char* ___GameData_0;
	Player_t161496991_marshaled_pinvoke ___Opponent_1;
	Nullable_1_t1847379584  ___MyCurrentTotalScore_2;
	Nullable_1_t1847379584  ___OpponentCurrentTotalScore_3;
};
// Native definition for COM marshalling of SkillzSDK.ContinuedTurnBasedMatch
struct ContinuedTurnBasedMatch_t2978014613_marshaled_com
{
	Il2CppChar* ___GameData_0;
	Player_t161496991_marshaled_com ___Opponent_1;
	Nullable_1_t1847379584  ___MyCurrentTotalScore_2;
	Nullable_1_t1847379584  ___OpponentCurrentTotalScore_3;
};
#endif // CONTINUEDTURNBASEDMATCH_T2978014613_H
#ifndef NULLABLE_1_T2756161225_H
#define NULLABLE_1_T2756161225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t2756161225 
{
public:
	// T System.Nullable`1::value
	DateTime_t2026492664  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2756161225, ___value_0)); }
	inline DateTime_t2026492664  get_value_0() const { return ___value_0; }
	inline DateTime_t2026492664 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t2026492664  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2756161225, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2756161225_H
#ifndef NULLABLE_1_T3707683174_H
#define NULLABLE_1_T3707683174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<SkillzSDK.ContinuedTurnBasedMatch>
struct  Nullable_1_t3707683174 
{
public:
	// T System.Nullable`1::value
	ContinuedTurnBasedMatch_t2978014613  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3707683174, ___value_0)); }
	inline ContinuedTurnBasedMatch_t2978014613  get_value_0() const { return ___value_0; }
	inline ContinuedTurnBasedMatch_t2978014613 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ContinuedTurnBasedMatch_t2978014613  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3707683174, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3707683174_H
#ifndef BEHAVIOUR_T1414712726_H
#define BEHAVIOUR_T1414712726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1414712726  : public Component_t1354622342
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1414712726_H
#ifndef MONOBEHAVIOUR_T1306727446_H
#define MONOBEHAVIOUR_T1306727446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1306727446  : public Behaviour_t1414712726
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1306727446_H
#ifndef TURNBASEDMATCH_T2703741891_H
#define TURNBASEDMATCH_T2703741891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.TurnBasedMatch
struct  TurnBasedMatch_t2703741891  : public Match_t4238455967
{
public:
	// System.Nullable`1<System.UInt32> SkillzSDK.TurnBasedMatch::PrizeZ
	Nullable_1_t3052609695  ___PrizeZ_10;
	// System.Nullable`1<System.Double> SkillzSDK.TurnBasedMatch::PrizeCash
	Nullable_1_t1847379584  ___PrizeCash_11;
	// System.Nullable`1<System.DateTime> SkillzSDK.TurnBasedMatch::TimeTournamentBegan
	Nullable_1_t2756161225  ___TimeTournamentBegan_12;
	// System.Nullable`1<System.DateTime> SkillzSDK.TurnBasedMatch::TimeLastTurnCompleted
	Nullable_1_t2756161225  ___TimeLastTurnCompleted_13;
	// System.Nullable`1<System.Boolean> SkillzSDK.TurnBasedMatch::IsMatchOver
	Nullable_1_t2229808318  ___IsMatchOver_14;
	// System.Collections.Generic.List`1<SkillzSDK.TurnBasedRound> SkillzSDK.TurnBasedMatch::Rounds
	List_1_t2065137162 * ___Rounds_15;
	// System.Nullable`1<System.Int32> SkillzSDK.TurnBasedMatch::CurrentTurnIndex
	Nullable_1_t4169466177  ___CurrentTurnIndex_16;
	// System.Nullable`1<SkillzSDK.ContinuedTurnBasedMatch> SkillzSDK.TurnBasedMatch::ContinueMatchData
	Nullable_1_t3707683174  ___ContinueMatchData_17;

public:
	inline static int32_t get_offset_of_PrizeZ_10() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2703741891, ___PrizeZ_10)); }
	inline Nullable_1_t3052609695  get_PrizeZ_10() const { return ___PrizeZ_10; }
	inline Nullable_1_t3052609695 * get_address_of_PrizeZ_10() { return &___PrizeZ_10; }
	inline void set_PrizeZ_10(Nullable_1_t3052609695  value)
	{
		___PrizeZ_10 = value;
	}

	inline static int32_t get_offset_of_PrizeCash_11() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2703741891, ___PrizeCash_11)); }
	inline Nullable_1_t1847379584  get_PrizeCash_11() const { return ___PrizeCash_11; }
	inline Nullable_1_t1847379584 * get_address_of_PrizeCash_11() { return &___PrizeCash_11; }
	inline void set_PrizeCash_11(Nullable_1_t1847379584  value)
	{
		___PrizeCash_11 = value;
	}

	inline static int32_t get_offset_of_TimeTournamentBegan_12() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2703741891, ___TimeTournamentBegan_12)); }
	inline Nullable_1_t2756161225  get_TimeTournamentBegan_12() const { return ___TimeTournamentBegan_12; }
	inline Nullable_1_t2756161225 * get_address_of_TimeTournamentBegan_12() { return &___TimeTournamentBegan_12; }
	inline void set_TimeTournamentBegan_12(Nullable_1_t2756161225  value)
	{
		___TimeTournamentBegan_12 = value;
	}

	inline static int32_t get_offset_of_TimeLastTurnCompleted_13() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2703741891, ___TimeLastTurnCompleted_13)); }
	inline Nullable_1_t2756161225  get_TimeLastTurnCompleted_13() const { return ___TimeLastTurnCompleted_13; }
	inline Nullable_1_t2756161225 * get_address_of_TimeLastTurnCompleted_13() { return &___TimeLastTurnCompleted_13; }
	inline void set_TimeLastTurnCompleted_13(Nullable_1_t2756161225  value)
	{
		___TimeLastTurnCompleted_13 = value;
	}

	inline static int32_t get_offset_of_IsMatchOver_14() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2703741891, ___IsMatchOver_14)); }
	inline Nullable_1_t2229808318  get_IsMatchOver_14() const { return ___IsMatchOver_14; }
	inline Nullable_1_t2229808318 * get_address_of_IsMatchOver_14() { return &___IsMatchOver_14; }
	inline void set_IsMatchOver_14(Nullable_1_t2229808318  value)
	{
		___IsMatchOver_14 = value;
	}

	inline static int32_t get_offset_of_Rounds_15() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2703741891, ___Rounds_15)); }
	inline List_1_t2065137162 * get_Rounds_15() const { return ___Rounds_15; }
	inline List_1_t2065137162 ** get_address_of_Rounds_15() { return &___Rounds_15; }
	inline void set_Rounds_15(List_1_t2065137162 * value)
	{
		___Rounds_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rounds_15), value);
	}

	inline static int32_t get_offset_of_CurrentTurnIndex_16() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2703741891, ___CurrentTurnIndex_16)); }
	inline Nullable_1_t4169466177  get_CurrentTurnIndex_16() const { return ___CurrentTurnIndex_16; }
	inline Nullable_1_t4169466177 * get_address_of_CurrentTurnIndex_16() { return &___CurrentTurnIndex_16; }
	inline void set_CurrentTurnIndex_16(Nullable_1_t4169466177  value)
	{
		___CurrentTurnIndex_16 = value;
	}

	inline static int32_t get_offset_of_ContinueMatchData_17() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2703741891, ___ContinueMatchData_17)); }
	inline Nullable_1_t3707683174  get_ContinueMatchData_17() const { return ___ContinueMatchData_17; }
	inline Nullable_1_t3707683174 * get_address_of_ContinueMatchData_17() { return &___ContinueMatchData_17; }
	inline void set_ContinueMatchData_17(Nullable_1_t3707683174  value)
	{
		___ContinueMatchData_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNBASEDMATCH_T2703741891_H
#ifndef SKILLZDELEGATETURNBASED_T1567192578_H
#define SKILLZDELEGATETURNBASED_T1567192578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.SkillzDelegateTurnBased
struct  SkillzDelegateTurnBased_t1567192578  : public MonoBehaviour_t1306727446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZDELEGATETURNBASED_T1567192578_H
#ifndef SKILLZMESSAGERECEIVER_T2475930865_H
#define SKILLZMESSAGERECEIVER_T2475930865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.SkillzMessageReceiver
struct  SkillzMessageReceiver_t2475930865  : public MonoBehaviour_t1306727446
{
public:
	// SkillzSDK.SkillzDelegateBase SkillzSDK.SkillzMessageReceiver::DelBase
	SkillzDelegateBase_t1035463440 * ___DelBase_2;
	// SkillzSDK.SkillzDelegateTurnBased SkillzSDK.SkillzMessageReceiver::DelTurnBased
	SkillzDelegateTurnBased_t1567192578 * ___DelTurnBased_3;

public:
	inline static int32_t get_offset_of_DelBase_2() { return static_cast<int32_t>(offsetof(SkillzMessageReceiver_t2475930865, ___DelBase_2)); }
	inline SkillzDelegateBase_t1035463440 * get_DelBase_2() const { return ___DelBase_2; }
	inline SkillzDelegateBase_t1035463440 ** get_address_of_DelBase_2() { return &___DelBase_2; }
	inline void set_DelBase_2(SkillzDelegateBase_t1035463440 * value)
	{
		___DelBase_2 = value;
		Il2CppCodeGenWriteBarrier((&___DelBase_2), value);
	}

	inline static int32_t get_offset_of_DelTurnBased_3() { return static_cast<int32_t>(offsetof(SkillzMessageReceiver_t2475930865, ___DelTurnBased_3)); }
	inline SkillzDelegateTurnBased_t1567192578 * get_DelTurnBased_3() const { return ___DelTurnBased_3; }
	inline SkillzDelegateTurnBased_t1567192578 ** get_address_of_DelTurnBased_3() { return &___DelTurnBased_3; }
	inline void set_DelTurnBased_3(SkillzDelegateTurnBased_t1567192578 * value)
	{
		___DelTurnBased_3 = value;
		Il2CppCodeGenWriteBarrier((&___DelTurnBased_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZMESSAGERECEIVER_T2475930865_H
#ifndef SKILLZDELEGATEBASE_T1035463440_H
#define SKILLZDELEGATEBASE_T1035463440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillzSDK.SkillzDelegateBase
struct  SkillzDelegateBase_t1035463440  : public MonoBehaviour_t1306727446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKILLZDELEGATEBASE_T1035463440_H



// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m3055358094 (MonoBehaviour_t1306727446 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1509614829 (RuntimeObject * __this /* static, unused */, Object_t186395602 * p0, Object_t186395602 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m3346897636 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.SkillzMessageReceiver::DeserializeJSONToDictionary(System.String)
extern "C"  Dictionary_2_t2487369662 * SkillzMessageReceiver_DeserializeJSONToDictionary_m1354790129 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.TurnBasedMatch::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void TurnBasedMatch__ctor_m3978382029 (TurnBasedMatch_t2703741891 * __this, Dictionary_2_t2487369662 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json::Deserialize(System.String)
extern "C"  RuntimeObject * Json_Deserialize_m1495607493 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillzSDK.SkillzMessageReceiver::.ctor()
extern "C"  void SkillzMessageReceiver__ctor_m2920496099 (SkillzMessageReceiver_t2475930865 * __this, const RuntimeMethod* method)
{
	{
		// public SkillzDelegateBase DelBase = null;
		__this->set_DelBase_2((SkillzDelegateBase_t1035463440 *)NULL);
		// public SkillzDelegateTurnBased DelTurnBased = null;
		__this->set_DelTurnBased_3((SkillzDelegateTurnBased_t1567192578 *)NULL);
		MonoBehaviour__ctor_m3055358094(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::Start()
extern "C"  void SkillzMessageReceiver_Start_m719661618 (SkillzMessageReceiver_t2475930865 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_Start_m719661618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DelBase == null)
		SkillzDelegateBase_t1035463440 * L_0 = __this->get_DelBase_2();
		// if (DelBase == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t186395602_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1509614829(NULL /*static, unused*/, L_0, (Object_t186395602 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// UnityEngine.Debug.LogError("There is no script inheriting from 'SkillzDelegateBase' on the SkillzDelegate object!");
		// UnityEngine.Debug.LogError("There is no script inheriting from 'SkillzDelegateBase' on the SkillzDelegate object!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3623860750_il2cpp_TypeInfo_var);
		Debug_LogError_m3346897636(NULL /*static, unused*/, _stringLiteral1519375943, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWillExit(System.String)
extern "C"  void SkillzMessageReceiver_skillzWillExit_m92619967 (SkillzMessageReceiver_t2475930865 * __this, String_t* ___ignoreMe0, const RuntimeMethod* method)
{
	{
		// private void skillzWillExit(string ignoreMe) { DelBase.OnSkillzWillExit(); }
		SkillzDelegateBase_t1035463440 * L_0 = __this->get_DelBase_2();
		// private void skillzWillExit(string ignoreMe) { DelBase.OnSkillzWillExit(); }
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void SkillzSDK.SkillzDelegateBase::OnSkillzWillExit() */, L_0);
		// private void skillzWillExit(string ignoreMe) { DelBase.OnSkillzWillExit(); }
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzLaunchHasCompleted(System.String)
extern "C"  void SkillzMessageReceiver_skillzLaunchHasCompleted_m675834431 (SkillzMessageReceiver_t2475930865 * __this, String_t* ___ignoreMe0, const RuntimeMethod* method)
{
	{
		// private void skillzLaunchHasCompleted(string ignoreMe) { DelBase.OnSkillzLaunchCompleted(); }
		SkillzDelegateBase_t1035463440 * L_0 = __this->get_DelBase_2();
		// private void skillzLaunchHasCompleted(string ignoreMe) { DelBase.OnSkillzLaunchCompleted(); }
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void SkillzSDK.SkillzDelegateBase::OnSkillzLaunchCompleted() */, L_0);
		// private void skillzLaunchHasCompleted(string ignoreMe) { DelBase.OnSkillzLaunchCompleted(); }
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWillLaunch(System.String)
extern "C"  void SkillzMessageReceiver_skillzWillLaunch_m2478433382 (SkillzMessageReceiver_t2475930865 * __this, String_t* ___ignoreMe0, const RuntimeMethod* method)
{
	{
		// private void skillzWillLaunch(string ignoreMe) { DelBase.OnSkillzWillLaunch(); }
		SkillzDelegateBase_t1035463440 * L_0 = __this->get_DelBase_2();
		// private void skillzWillLaunch(string ignoreMe) { DelBase.OnSkillzWillLaunch(); }
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void SkillzSDK.SkillzDelegateBase::OnSkillzWillLaunch() */, L_0);
		// private void skillzWillLaunch(string ignoreMe) { DelBase.OnSkillzWillLaunch(); }
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWithPlayerAbort(System.String)
extern "C"  void SkillzMessageReceiver_skillzWithPlayerAbort_m2290179461 (SkillzMessageReceiver_t2475930865 * __this, String_t* ___ignoreMe0, const RuntimeMethod* method)
{
	{
		// private void skillzWithPlayerAbort(string ignoreMe) { DelBase.OnTournamentAborted(); }
		SkillzDelegateBase_t1035463440 * L_0 = __this->get_DelBase_2();
		// private void skillzWithPlayerAbort(string ignoreMe) { DelBase.OnTournamentAborted(); }
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void SkillzSDK.SkillzDelegateBase::OnTournamentAborted() */, L_0);
		// private void skillzWithPlayerAbort(string ignoreMe) { DelBase.OnTournamentAborted(); }
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzTurnBasedTournamentWillBegin(System.String)
extern "C"  void SkillzMessageReceiver_skillzTurnBasedTournamentWillBegin_m3439982960 (SkillzMessageReceiver_t2475930865 * __this, String_t* ___turnBasedMatchInfoJson0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_skillzTurnBasedTournamentWillBegin_m3439982960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2487369662 * V_0 = NULL;
	TurnBasedMatch_t2703741891 * V_1 = NULL;
	{
		// Dictionary<string, object> turnBasedMatchInfoDict = DeserializeJSONToDictionary(turnBasedMatchInfoJson);
		String_t* L_0 = ___turnBasedMatchInfoJson0;
		// Dictionary<string, object> turnBasedMatchInfoDict = DeserializeJSONToDictionary(turnBasedMatchInfoJson);
		Dictionary_2_t2487369662 * L_1 = SkillzMessageReceiver_DeserializeJSONToDictionary_m1354790129(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// TurnBasedMatch turnBasedMatch = new TurnBasedMatch(turnBasedMatchInfoDict);
		Dictionary_2_t2487369662 * L_2 = V_0;
		// TurnBasedMatch turnBasedMatch = new TurnBasedMatch(turnBasedMatchInfoDict);
		TurnBasedMatch_t2703741891 * L_3 = (TurnBasedMatch_t2703741891 *)il2cpp_codegen_object_new(TurnBasedMatch_t2703741891_il2cpp_TypeInfo_var);
		TurnBasedMatch__ctor_m3978382029(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// DelTurnBased.OnTurnBasedTournamentWillBegin(turnBasedMatch);
		SkillzDelegateTurnBased_t1567192578 * L_4 = __this->get_DelTurnBased_3();
		TurnBasedMatch_t2703741891 * L_5 = V_1;
		// DelTurnBased.OnTurnBasedTournamentWillBegin(turnBasedMatch);
		NullCheck(L_4);
		VirtActionInvoker1< TurnBasedMatch_t2703741891 * >::Invoke(4 /* System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnBasedTournamentWillBegin(SkillzSDK.TurnBasedMatch) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzEndTurnCompletion(System.String)
extern "C"  void SkillzMessageReceiver_skillzEndTurnCompletion_m4244292775 (SkillzMessageReceiver_t2475930865 * __this, String_t* ___ignoreMe0, const RuntimeMethod* method)
{
	{
		// private void skillzEndTurnCompletion(string ignoreMe) { DelTurnBased.OnTurnEnd(); }
		SkillzDelegateTurnBased_t1567192578 * L_0 = __this->get_DelTurnBased_3();
		// private void skillzEndTurnCompletion(string ignoreMe) { DelTurnBased.OnTurnEnd(); }
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnEnd() */, L_0);
		// private void skillzEndTurnCompletion(string ignoreMe) { DelTurnBased.OnTurnEnd(); }
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzReviewCurrentGameState(System.String)
extern "C"  void SkillzMessageReceiver_skillzReviewCurrentGameState_m2611009263 (SkillzMessageReceiver_t2475930865 * __this, String_t* ___turnBasedMatchInfoJson0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_skillzReviewCurrentGameState_m2611009263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2487369662 * V_0 = NULL;
	TurnBasedMatch_t2703741891 * V_1 = NULL;
	{
		// Dictionary<string, object> turnBasedMatchInfoDict = DeserializeJSONToDictionary(turnBasedMatchInfoJson);
		String_t* L_0 = ___turnBasedMatchInfoJson0;
		// Dictionary<string, object> turnBasedMatchInfoDict = DeserializeJSONToDictionary(turnBasedMatchInfoJson);
		Dictionary_2_t2487369662 * L_1 = SkillzMessageReceiver_DeserializeJSONToDictionary_m1354790129(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// TurnBasedMatch turnBasedMatch = new TurnBasedMatch(turnBasedMatchInfoDict);
		Dictionary_2_t2487369662 * L_2 = V_0;
		// TurnBasedMatch turnBasedMatch = new TurnBasedMatch(turnBasedMatchInfoDict);
		TurnBasedMatch_t2703741891 * L_3 = (TurnBasedMatch_t2703741891 *)il2cpp_codegen_object_new(TurnBasedMatch_t2703741891_il2cpp_TypeInfo_var);
		TurnBasedMatch__ctor_m3978382029(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// DelTurnBased.OnTurnBasedReviewWillBegin(turnBasedMatch);
		SkillzDelegateTurnBased_t1567192578 * L_4 = __this->get_DelTurnBased_3();
		TurnBasedMatch_t2703741891 * L_5 = V_1;
		// DelTurnBased.OnTurnBasedReviewWillBegin(turnBasedMatch);
		NullCheck(L_4);
		VirtActionInvoker1< TurnBasedMatch_t2703741891 * >::Invoke(6 /* System.Void SkillzSDK.SkillzDelegateTurnBased::OnTurnBasedReviewWillBegin(SkillzSDK.TurnBasedMatch) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void SkillzSDK.SkillzMessageReceiver::skillzFinishReviewingCurrentGameState(System.String)
extern "C"  void SkillzMessageReceiver_skillzFinishReviewingCurrentGameState_m2833531916 (SkillzMessageReceiver_t2475930865 * __this, String_t* ___ignoreMe0, const RuntimeMethod* method)
{
	{
		// private void skillzFinishReviewingCurrentGameState(string ignoreMe) { DelTurnBased.OnReviewEnd(); }
		SkillzDelegateTurnBased_t1567192578 * L_0 = __this->get_DelTurnBased_3();
		// private void skillzFinishReviewingCurrentGameState(string ignoreMe) { DelTurnBased.OnReviewEnd(); }
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void SkillzSDK.SkillzDelegateTurnBased::OnReviewEnd() */, L_0);
		// private void skillzFinishReviewingCurrentGameState(string ignoreMe) { DelTurnBased.OnReviewEnd(); }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.SkillzMessageReceiver::DeserializeJSONToDictionary(System.String)
extern "C"  Dictionary_2_t2487369662 * SkillzMessageReceiver_DeserializeJSONToDictionary_m1354790129 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkillzMessageReceiver_DeserializeJSONToDictionary_m1354790129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2487369662 * V_0 = NULL;
	{
		// return SkillzSDK.MiniJSON.Json.Deserialize(jsonString) as Dictionary<string,object>;
		String_t* L_0 = ___jsonString0;
		// return SkillzSDK.MiniJSON.Json.Deserialize(jsonString) as Dictionary<string,object>;
		RuntimeObject * L_1 = Json_Deserialize_m1495607493(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t2487369662 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t2487369662_il2cpp_TypeInfo_var));
		goto IL_0012;
	}

IL_0012:
	{
		// }
		Dictionary_2_t2487369662 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
