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

// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t740100456;
// UnityEngine.Application/LogCallback
struct LogCallback_t3273740872;
// UnityEngine.Events.UnityAction
struct UnityAction_t3901794581;
// UnityEngine.Gyroscope
struct Gyroscope_t1808458871;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3536903545;
// System.Char[]
struct CharU5BU5D_t1775956545;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t3505015133;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t210821354;
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_t1521282873;
// System.IntPtr[]
struct IntPtrU5BU5D_t336290621;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2110802934;
// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct IEqualityComparer_1_t2554770393;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1582639394;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct List_1_t2473252684;
// UnityEngine.ILogger
struct ILogger_t3292550739;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t1622006619;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IO.TextReader
struct TextReader_t3614397363;
// System.Object[]
struct ObjectU5BU5D_t2061877507;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t3520965695;
// Boo.Lang.Runtime.ExtensionRegistry
struct ExtensionRegistry_t3353217639;
// System.Void
struct Void_t3140259360;
// System.DelegateData
struct DelegateData_t3384511862;
// UnityEngine.Display[]
struct DisplayU5BU5D_t3868333361;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1314389643;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2838415966;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t3435730330;
// System.IAsyncResult
struct IAsyncResult_t3592899073;
// System.AsyncCallback
struct AsyncCallback_t2874873210;
// UnityEngine.Camera
struct Camera_t1099757224;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t973716842;




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
#ifndef U3CMODULEU3E_T294312123_H
#define U3CMODULEU3E_T294312123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t294312123 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T294312123_H
#ifndef U3CMODULEU3E_T294312122_H
#define U3CMODULEU3E_T294312122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t294312122 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T294312122_H
#ifndef DEBUGLOGHANDLER_T2341773127_H
#define DEBUGLOGHANDLER_T2341773127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t2341773127  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T2341773127_H
#ifndef APPLICATION_T1290459244_H
#define APPLICATION_T1290459244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t1290459244  : public RuntimeObject
{
public:

public:
};

struct Application_t1290459244_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t740100456 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t3273740872 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t3273740872 * ___s_LogCallbackHandlerThreaded_2;
	// UnityEngine.Events.UnityAction UnityEngine.Application::onBeforeRender
	UnityAction_t3901794581 * ___onBeforeRender_3;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t1290459244_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t740100456 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t740100456 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t740100456 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t1290459244_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t3273740872 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t3273740872 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t3273740872 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t1290459244_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t3273740872 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t3273740872 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t3273740872 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_onBeforeRender_3() { return static_cast<int32_t>(offsetof(Application_t1290459244_StaticFields, ___onBeforeRender_3)); }
	inline UnityAction_t3901794581 * get_onBeforeRender_3() const { return ___onBeforeRender_3; }
	inline UnityAction_t3901794581 ** get_address_of_onBeforeRender_3() { return &___onBeforeRender_3; }
	inline void set_onBeforeRender_3(UnityAction_t3901794581 * value)
	{
		___onBeforeRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeRender_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T1290459244_H
#ifndef VALUETYPE_T4092108489_H
#define VALUETYPE_T4092108489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4092108489  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4092108489_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4092108489_marshaled_com
{
};
#endif // VALUETYPE_T4092108489_H
#ifndef YIELDINSTRUCTION_T2847594953_H
#define YIELDINSTRUCTION_T2847594953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t2847594953  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t2847594953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t2847594953_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T2847594953_H
#ifndef TIME_T886184909_H
#define TIME_T886184909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t886184909  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T886184909_H
#ifndef RESOURCES_T2654222533_H
#define RESOURCES_T2654222533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2654222533  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2654222533_H
#ifndef RANDOM_T1044580161_H
#define RANDOM_T1044580161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t1044580161  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1044580161_H
#ifndef PLAYERPREFS_T793541806_H
#define PLAYERPREFS_T793541806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefs
struct  PlayerPrefs_t793541806  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFS_T793541806_H
#ifndef INPUT_T3399838176_H
#define INPUT_T3399838176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t3399838176  : public RuntimeObject
{
public:

public:
};

struct Input_t3399838176_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t1808458871 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t3399838176_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t1808458871 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t1808458871 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t1808458871 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T3399838176_H
#ifndef GYROSCOPE_T1808458871_H
#define GYROSCOPE_T1808458871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t1808458871  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T1808458871_H
#ifndef TOUCHSCREENKEYBOARD_T3532578863_H
#define TOUCHSCREENKEYBOARD_T3532578863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t3532578863  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T3532578863_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T1209108609_H
#define UNHANDLEDEXCEPTIONHANDLER_T1209108609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t1209108609  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t1209108609_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t3536903545 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t1209108609_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t3536903545 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t3536903545 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t3536903545 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T1209108609_H
#ifndef SCREEN_T1413237073_H
#define SCREEN_T1413237073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t1413237073  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T1413237073_H
#ifndef TEXTWRITER_T449858629_H
#define TEXTWRITER_T449858629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t449858629  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1775956545* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t449858629, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1775956545* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1775956545** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1775956545* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t449858629_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t449858629 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t449858629_StaticFields, ___Null_1)); }
	inline TextWriter_t449858629 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t449858629 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t449858629 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T449858629_H
#ifndef GIZMOS_T807964076_H
#define GIZMOS_T807964076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gizmos
struct  Gizmos_t807964076  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIZMOS_T807964076_H
#ifndef ANDROIDJNIHELPER_T6477272_H
#define ANDROIDJNIHELPER_T6477272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJNIHelper
struct  AndroidJNIHelper_t6477272  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJNIHELPER_T6477272_H
#ifndef GRAPHICS_T1840462144_H
#define GRAPHICS_T1840462144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Graphics
struct  Graphics_t1840462144  : public RuntimeObject
{
public:

public:
};

struct Graphics_t1840462144_StaticFields
{
public:
	// System.Int32 UnityEngine.Graphics::kMaxDrawMeshInstanceCount
	int32_t ___kMaxDrawMeshInstanceCount_0;

public:
	inline static int32_t get_offset_of_kMaxDrawMeshInstanceCount_0() { return static_cast<int32_t>(offsetof(Graphics_t1840462144_StaticFields, ___kMaxDrawMeshInstanceCount_0)); }
	inline int32_t get_kMaxDrawMeshInstanceCount_0() const { return ___kMaxDrawMeshInstanceCount_0; }
	inline int32_t* get_address_of_kMaxDrawMeshInstanceCount_0() { return &___kMaxDrawMeshInstanceCount_0; }
	inline void set_kMaxDrawMeshInstanceCount_0(int32_t value)
	{
		___kMaxDrawMeshInstanceCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHICS_T1840462144_H
#ifndef ANDROIDJNI_T1807157943_H
#define ANDROIDJNI_T1807157943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJNI
struct  AndroidJNI_t1807157943  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJNI_T1807157943_H
#ifndef ANDROIDJAVAOBJECT_T3684600204_H
#define ANDROIDJAVAOBJECT_T3684600204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t3684600204  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t3505015133 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t3505015133 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t3684600204, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t3505015133 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t3505015133 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t3505015133 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_jobject_1), value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t3684600204, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t3505015133 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t3505015133 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t3505015133 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_jclass_2), value);
	}
};

struct AndroidJavaObject_t3684600204_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::s_JavaLangClass
	AndroidJavaClass_t210821354 * ___s_JavaLangClass_3;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t3684600204_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}

	inline static int32_t get_offset_of_s_JavaLangClass_3() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t3684600204_StaticFields, ___s_JavaLangClass_3)); }
	inline AndroidJavaClass_t210821354 * get_s_JavaLangClass_3() const { return ___s_JavaLangClass_3; }
	inline AndroidJavaClass_t210821354 ** get_address_of_s_JavaLangClass_3() { return &___s_JavaLangClass_3; }
	inline void set_s_JavaLangClass_3(AndroidJavaClass_t210821354 * value)
	{
		___s_JavaLangClass_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangClass_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T3684600204_H
#ifndef BUILTINS_T1879528930_H
#define BUILTINS_T1879528930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Builtins
struct  Builtins_t1879528930  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINS_T1879528930_H
#ifndef DISPATCHERCACHE_T3520965695_H
#define DISPATCHERCACHE_T3520965695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct  DispatcherCache_t3520965695  : public RuntimeObject
{
public:

public:
};

struct DispatcherCache_t3520965695_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher> Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::_cache
	Dictionary_2_t1521282873 * ____cache_0;

public:
	inline static int32_t get_offset_of__cache_0() { return static_cast<int32_t>(offsetof(DispatcherCache_t3520965695_StaticFields, ____cache_0)); }
	inline Dictionary_2_t1521282873 * get__cache_0() const { return ____cache_0; }
	inline Dictionary_2_t1521282873 ** get_address_of__cache_0() { return &____cache_0; }
	inline void set__cache_0(Dictionary_2_t1521282873 * value)
	{
		____cache_0 = value;
		Il2CppCodeGenWriteBarrier((&____cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHERCACHE_T3520965695_H
#ifndef EXCEPTION_T2749538905_H
#define EXCEPTION_T2749538905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2749538905  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t336290621* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2749538905 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t336290621* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t336290621** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t336290621* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___inner_exception_1)); }
	inline Exception_t2749538905 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2749538905 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2749538905 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2749538905, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2749538905_H
#ifndef DISPATCHERKEY_T3430849945_H
#define DISPATCHERKEY_T3430849945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct  DispatcherKey_t3430849945  : public RuntimeObject
{
public:
	// System.Type Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_type
	Type_t * ____type_1;
	// System.String Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_name
	String_t* ____name_2;
	// System.Type[] Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_arguments
	TypeU5BU5D_t1582639394* ____arguments_3;

public:
	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DispatcherKey_t3430849945, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(DispatcherKey_t3430849945, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier((&____name_2), value);
	}

	inline static int32_t get_offset_of__arguments_3() { return static_cast<int32_t>(offsetof(DispatcherKey_t3430849945, ____arguments_3)); }
	inline TypeU5BU5D_t1582639394* get__arguments_3() const { return ____arguments_3; }
	inline TypeU5BU5D_t1582639394** get_address_of__arguments_3() { return &____arguments_3; }
	inline void set__arguments_3(TypeU5BU5D_t1582639394* value)
	{
		____arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&____arguments_3), value);
	}
};

struct DispatcherKey_t3430849945_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey> Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::EqualityComparer
	RuntimeObject* ___EqualityComparer_0;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(DispatcherKey_t3430849945_StaticFields, ___EqualityComparer_0)); }
	inline RuntimeObject* get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline RuntimeObject** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(RuntimeObject* value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___EqualityComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHERKEY_T3430849945_H
#ifndef _EQUALITYCOMPARER_T2915301190_H
#define _EQUALITYCOMPARER_T2915301190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
struct  _EqualityComparer_t2915301190  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _EQUALITYCOMPARER_T2915301190_H
#ifndef NUMERICPROMOTIONS_T2899871268_H
#define NUMERICPROMOTIONS_T2899871268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
struct  NumericPromotions_t2899871268  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMERICPROMOTIONS_T2899871268_H
#ifndef EXTENSIONREGISTRY_T3353217639_H
#define EXTENSIONREGISTRY_T3353217639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.ExtensionRegistry
struct  ExtensionRegistry_t3353217639  : public RuntimeObject
{
public:
	// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::_extensions
	List_1_t2473252684 * ____extensions_0;
	// System.Object Boo.Lang.Runtime.ExtensionRegistry::_classLock
	RuntimeObject * ____classLock_1;

public:
	inline static int32_t get_offset_of__extensions_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t3353217639, ____extensions_0)); }
	inline List_1_t2473252684 * get__extensions_0() const { return ____extensions_0; }
	inline List_1_t2473252684 ** get_address_of__extensions_0() { return &____extensions_0; }
	inline void set__extensions_0(List_1_t2473252684 * value)
	{
		____extensions_0 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_0), value);
	}

	inline static int32_t get_offset_of__classLock_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t3353217639, ____classLock_1)); }
	inline RuntimeObject * get__classLock_1() const { return ____classLock_1; }
	inline RuntimeObject ** get_address_of__classLock_1() { return &____classLock_1; }
	inline void set__classLock_1(RuntimeObject * value)
	{
		____classLock_1 = value;
		Il2CppCodeGenWriteBarrier((&____classLock_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONREGISTRY_T3353217639_H
#ifndef DEBUG_T520022458_H
#define DEBUG_T520022458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t520022458  : public RuntimeObject
{
public:

public:
};

struct Debug_t520022458_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t520022458_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T520022458_H
#ifndef U3CGETEXTENSIONMETHODSU3EC__ITERATORC_T567610528_H
#define U3CGETEXTENSIONMETHODSU3EC__ITERATORC_T567610528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
struct  U3CGetExtensionMethodsU3Ec__IteratorC_t567610528  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::<$s_49>__0
	RuntimeObject* ___U3CU24s_49U3E__0_0;
	// System.Reflection.MemberInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::<member>__1
	MemberInfo_t * ___U3CmemberU3E__1_1;
	// System.Int32 Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::$PC
	int32_t ___U24PC_2;
	// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::$current
	MethodInfo_t * ___U24current_3;

public:
	inline static int32_t get_offset_of_U3CU24s_49U3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t567610528, ___U3CU24s_49U3E__0_0)); }
	inline RuntimeObject* get_U3CU24s_49U3E__0_0() const { return ___U3CU24s_49U3E__0_0; }
	inline RuntimeObject** get_address_of_U3CU24s_49U3E__0_0() { return &___U3CU24s_49U3E__0_0; }
	inline void set_U3CU24s_49U3E__0_0(RuntimeObject* value)
	{
		___U3CU24s_49U3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_49U3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CmemberU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t567610528, ___U3CmemberU3E__1_1)); }
	inline MemberInfo_t * get_U3CmemberU3E__1_1() const { return ___U3CmemberU3E__1_1; }
	inline MemberInfo_t ** get_address_of_U3CmemberU3E__1_1() { return &___U3CmemberU3E__1_1; }
	inline void set_U3CmemberU3E__1_1(MemberInfo_t * value)
	{
		___U3CmemberU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmemberU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t567610528, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t567610528, ___U24current_3)); }
	inline MethodInfo_t * get_U24current_3() const { return ___U24current_3; }
	inline MethodInfo_t ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(MethodInfo_t * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETEXTENSIONMETHODSU3EC__ITERATORC_T567610528_H
#ifndef U3CCOERCEU3EC__ANONSTOREY1D_T2388549234_H
#define U3CCOERCEU3EC__ANONSTOREY1D_T2388549234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
struct  U3CCoerceU3Ec__AnonStorey1D_t2388549234  : public RuntimeObject
{
public:
	// System.Object Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::value
	RuntimeObject * ___value_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::toType
	Type_t * ___toType_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CCoerceU3Ec__AnonStorey1D_t2388549234, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_toType_1() { return static_cast<int32_t>(offsetof(U3CCoerceU3Ec__AnonStorey1D_t2388549234, ___toType_1)); }
	inline Type_t * get_toType_1() const { return ___toType_1; }
	inline Type_t ** get_address_of_toType_1() { return &___toType_1; }
	inline void set_toType_1(Type_t * value)
	{
		___toType_1 = value;
		Il2CppCodeGenWriteBarrier((&___toType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOERCEU3EC__ANONSTOREY1D_T2388549234_H
#ifndef U3CEMITIMPLICITCONVERSIONDISPATCHERU3EC__ANONSTOREY1E_T3250081567_H
#define U3CEMITIMPLICITCONVERSIONDISPATCHERU3EC__ANONSTOREY1E_T3250081567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
struct  U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t3250081567  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::method
	MethodInfo_t * ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t3250081567, ___method_0)); }
	inline MethodInfo_t * get_method_0() const { return ___method_0; }
	inline MethodInfo_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MethodInfo_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEMITIMPLICITCONVERSIONDISPATCHERU3EC__ANONSTOREY1E_T3250081567_H
#ifndef TEXTREADERENUMERATOR_T1422611043_H
#define TEXTREADERENUMERATOR_T1422611043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.TextReaderEnumerator
struct  TextReaderEnumerator_t1422611043  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADERENUMERATOR_T1422611043_H
#ifndef U3CLINESU3EC__ITERATORD_T3354075402_H
#define U3CLINESU3EC__ITERATORD_T3354075402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD
struct  U3ClinesU3Ec__IteratorD_t3354075402  : public RuntimeObject
{
public:
	// System.IO.TextReader Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::reader
	TextReader_t3614397363 * ___reader_0;
	// System.IO.TextReader Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::<$s_51>__0
	TextReader_t3614397363 * ___U3CU24s_51U3E__0_1;
	// System.String Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::<line>__1
	String_t* ___U3ClineU3E__1_2;
	// System.Int32 Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::$PC
	int32_t ___U24PC_3;
	// System.String Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::$current
	String_t* ___U24current_4;
	// System.IO.TextReader Boo.Lang.Runtime.TextReaderEnumerator/<lines>c__IteratorD::<$>reader
	TextReader_t3614397363 * ___U3CU24U3Ereader_5;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t3354075402, ___reader_0)); }
	inline TextReader_t3614397363 * get_reader_0() const { return ___reader_0; }
	inline TextReader_t3614397363 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(TextReader_t3614397363 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_51U3E__0_1() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t3354075402, ___U3CU24s_51U3E__0_1)); }
	inline TextReader_t3614397363 * get_U3CU24s_51U3E__0_1() const { return ___U3CU24s_51U3E__0_1; }
	inline TextReader_t3614397363 ** get_address_of_U3CU24s_51U3E__0_1() { return &___U3CU24s_51U3E__0_1; }
	inline void set_U3CU24s_51U3E__0_1(TextReader_t3614397363 * value)
	{
		___U3CU24s_51U3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_51U3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3ClineU3E__1_2() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t3354075402, ___U3ClineU3E__1_2)); }
	inline String_t* get_U3ClineU3E__1_2() const { return ___U3ClineU3E__1_2; }
	inline String_t** get_address_of_U3ClineU3E__1_2() { return &___U3ClineU3E__1_2; }
	inline void set_U3ClineU3E__1_2(String_t* value)
	{
		___U3ClineU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClineU3E__1_2), value);
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t3354075402, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t3354075402, ___U24current_4)); }
	inline String_t* get_U24current_4() const { return ___U24current_4; }
	inline String_t** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(String_t* value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ereader_5() { return static_cast<int32_t>(offsetof(U3ClinesU3Ec__IteratorD_t3354075402, ___U3CU24U3Ereader_5)); }
	inline TextReader_t3614397363 * get_U3CU24U3Ereader_5() const { return ___U3CU24U3Ereader_5; }
	inline TextReader_t3614397363 ** get_address_of_U3CU24U3Ereader_5() { return &___U3CU24U3Ereader_5; }
	inline void set_U3CU24U3Ereader_5(TextReader_t3614397363 * value)
	{
		___U3CU24U3Ereader_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Ereader_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLINESU3EC__ITERATORD_T3354075402_H
#ifndef RUNTIMESERVICES_T1768378097_H
#define RUNTIMESERVICES_T1768378097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices
struct  RuntimeServices_t1768378097  : public RuntimeObject
{
public:

public:
};

struct RuntimeServices_t1768378097_StaticFields
{
public:
	// System.Object[] Boo.Lang.Runtime.RuntimeServices::NoArguments
	ObjectU5BU5D_t2061877507* ___NoArguments_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices::RuntimeServicesType
	Type_t * ___RuntimeServicesType_1;
	// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache Boo.Lang.Runtime.RuntimeServices::_cache
	DispatcherCache_t3520965695 * ____cache_2;
	// Boo.Lang.Runtime.ExtensionRegistry Boo.Lang.Runtime.RuntimeServices::_extensions
	ExtensionRegistry_t3353217639 * ____extensions_3;
	// System.Object Boo.Lang.Runtime.RuntimeServices::True
	RuntimeObject * ___True_4;

public:
	inline static int32_t get_offset_of_NoArguments_0() { return static_cast<int32_t>(offsetof(RuntimeServices_t1768378097_StaticFields, ___NoArguments_0)); }
	inline ObjectU5BU5D_t2061877507* get_NoArguments_0() const { return ___NoArguments_0; }
	inline ObjectU5BU5D_t2061877507** get_address_of_NoArguments_0() { return &___NoArguments_0; }
	inline void set_NoArguments_0(ObjectU5BU5D_t2061877507* value)
	{
		___NoArguments_0 = value;
		Il2CppCodeGenWriteBarrier((&___NoArguments_0), value);
	}

	inline static int32_t get_offset_of_RuntimeServicesType_1() { return static_cast<int32_t>(offsetof(RuntimeServices_t1768378097_StaticFields, ___RuntimeServicesType_1)); }
	inline Type_t * get_RuntimeServicesType_1() const { return ___RuntimeServicesType_1; }
	inline Type_t ** get_address_of_RuntimeServicesType_1() { return &___RuntimeServicesType_1; }
	inline void set_RuntimeServicesType_1(Type_t * value)
	{
		___RuntimeServicesType_1 = value;
		Il2CppCodeGenWriteBarrier((&___RuntimeServicesType_1), value);
	}

	inline static int32_t get_offset_of__cache_2() { return static_cast<int32_t>(offsetof(RuntimeServices_t1768378097_StaticFields, ____cache_2)); }
	inline DispatcherCache_t3520965695 * get__cache_2() const { return ____cache_2; }
	inline DispatcherCache_t3520965695 ** get_address_of__cache_2() { return &____cache_2; }
	inline void set__cache_2(DispatcherCache_t3520965695 * value)
	{
		____cache_2 = value;
		Il2CppCodeGenWriteBarrier((&____cache_2), value);
	}

	inline static int32_t get_offset_of__extensions_3() { return static_cast<int32_t>(offsetof(RuntimeServices_t1768378097_StaticFields, ____extensions_3)); }
	inline ExtensionRegistry_t3353217639 * get__extensions_3() const { return ____extensions_3; }
	inline ExtensionRegistry_t3353217639 ** get_address_of__extensions_3() { return &____extensions_3; }
	inline void set__extensions_3(ExtensionRegistry_t3353217639 * value)
	{
		____extensions_3 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_3), value);
	}

	inline static int32_t get_offset_of_True_4() { return static_cast<int32_t>(offsetof(RuntimeServices_t1768378097_StaticFields, ___True_4)); }
	inline RuntimeObject * get_True_4() const { return ___True_4; }
	inline RuntimeObject ** get_address_of_True_4() { return &___True_4; }
	inline void set_True_4(RuntimeObject * value)
	{
		___True_4 = value;
		Il2CppCodeGenWriteBarrier((&___True_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESERVICES_T1768378097_H
#ifndef PLAYERPREFSEXCEPTION_T1210960681_H
#define PLAYERPREFSEXCEPTION_T1210960681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefsException
struct  PlayerPrefsException_t1210960681  : public Exception_t2749538905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFSEXCEPTION_T1210960681_H
#ifndef KEYFRAME_T2115839097_H
#define KEYFRAME_T2115839097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t2115839097 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t2115839097, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t2115839097, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t2115839097, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t2115839097, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T2115839097_H
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
#ifndef MATRIX4X4_T1163416633_H
#define MATRIX4X4_T1163416633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1163416633 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1163416633_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1163416633  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1163416633  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1163416633  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1163416633 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1163416633  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1163416633_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1163416633  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1163416633 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1163416633  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1163416633_H
#ifndef QUATERNION_T3348238477_H
#define QUATERNION_T3348238477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3348238477 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3348238477, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3348238477, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3348238477, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3348238477, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3348238477_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3348238477  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3348238477_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3348238477  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3348238477 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3348238477  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3348238477_H
#ifndef VECTOR3_T1066458315_H
#define VECTOR3_T1066458315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1066458315 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1066458315, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1066458315, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1066458315, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1066458315_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1066458315  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1066458315  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1066458315  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1066458315  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1066458315  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1066458315  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1066458315  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1066458315  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1066458315  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1066458315  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1066458315  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1066458315 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1066458315  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___oneVector_5)); }
	inline Vector3_t1066458315  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1066458315 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1066458315  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___upVector_6)); }
	inline Vector3_t1066458315  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1066458315 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1066458315  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___downVector_7)); }
	inline Vector3_t1066458315  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1066458315 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1066458315  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___leftVector_8)); }
	inline Vector3_t1066458315  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1066458315 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1066458315  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___rightVector_9)); }
	inline Vector3_t1066458315  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1066458315 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1066458315  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1066458315  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1066458315 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1066458315  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___backVector_11)); }
	inline Vector3_t1066458315  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1066458315 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1066458315  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1066458315  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1066458315 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1066458315  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1066458315_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1066458315  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1066458315 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1066458315  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1066458315_H
#ifndef UNITYLOGWRITER_T1199676052_H
#define UNITYLOGWRITER_T1199676052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t1199676052  : public TextWriter_t449858629
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T1199676052_H
#ifndef VOID_T3140259360_H
#define VOID_T3140259360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3140259360 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3140259360_H
#ifndef ENUM_T3460465668_H
#define ENUM_T3460465668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3460465668  : public ValueType_t4092108489
{
public:

public:
};

struct Enum_t3460465668_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1775956545* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3460465668_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1775956545* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1775956545** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1775956545* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3460465668_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3460465668_marshaled_com
{
};
#endif // ENUM_T3460465668_H
#ifndef MATHF_T3127998090_H
#define MATHF_T3127998090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3127998090 
{
public:

public:
};

struct Mathf_t3127998090_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3127998090_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3127998090_H
#ifndef U24ARRAYTYPEU24256_T3219266474_H
#define U24ARRAYTYPEU24256_T3219266474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t3219266474 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t3219266474__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T3219266474_H
#ifndef U24ARRAYTYPEU241024_T38348057_H
#define U24ARRAYTYPEU241024_T38348057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t38348057 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t38348057__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T38348057_H
#ifndef ANDROIDJAVACLASS_T210821354_H
#define ANDROIDJAVACLASS_T210821354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t210821354  : public AndroidJavaObject_t3684600204
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_T210821354_H
#ifndef CULLINGGROUPEVENT_T3070507950_H
#define CULLINGGROUPEVENT_T3070507950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t3070507950 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3070507950, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3070507950, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3070507950, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T3070507950_H
#ifndef WAITFORSECONDS_T1146417258_H
#define WAITFORSECONDS_T1146417258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1146417258  : public YieldInstruction_t2847594953
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1146417258, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1146417258_marshaled_pinvoke : public YieldInstruction_t2847594953_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1146417258_marshaled_com : public YieldInstruction_t2847594953_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1146417258_H
#ifndef WAITFORFIXEDUPDATE_T2266697372_H
#define WAITFORFIXEDUPDATE_T2266697372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t2266697372  : public YieldInstruction_t2847594953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T2266697372_H
#ifndef WAITFORENDOFFRAME_T1150342709_H
#define WAITFORENDOFFRAME_T1150342709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1150342709  : public YieldInstruction_t2847594953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1150342709_H
#ifndef DELEGATE_T860102814_H
#define DELEGATE_T860102814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t860102814  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3384511862 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t860102814, ___data_8)); }
	inline DelegateData_t3384511862 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3384511862 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3384511862 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T860102814_H
#ifndef DISPLAY_T2266205840_H
#define DISPLAY_T2266205840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t2266205840  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t2266205840, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t2266205840_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t3868333361* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t2266205840 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1314389643 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t2266205840_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t3868333361* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t3868333361** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t3868333361* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t2266205840_StaticFields, ____mainDisplay_2)); }
	inline Display_t2266205840 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t2266205840 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t2266205840 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t2266205840_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t1314389643 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t1314389643 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t1314389643 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T2266205840_H
#ifndef PLAYSTATE_T2989967708_H
#define PLAYSTATE_T2989967708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_t2989967708 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayState_t2989967708, ___value___1)); }
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
#endif // PLAYSTATE_T2989967708_H
#ifndef PLAYABLEHANDLE_T523772890_H
#define PLAYABLEHANDLE_T523772890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t523772890 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t523772890, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t523772890, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T523772890_H
#ifndef ASYNCOPERATION_T321374860_H
#define ASYNCOPERATION_T321374860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t321374860  : public YieldInstruction_t2847594953
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t321374860, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t321374860_marshaled_pinvoke : public YieldInstruction_t2847594953_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t321374860_marshaled_com : public YieldInstruction_t2847594953_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T321374860_H
#ifndef DATASTREAMTYPE_T3598274322_H
#define DATASTREAMTYPE_T3598274322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t3598274322 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t3598274322, ___value___1)); }
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
#endif // DATASTREAMTYPE_T3598274322_H
#ifndef PLAYABLEGRAPH_T980730629_H
#define PLAYABLEGRAPH_T980730629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t980730629 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t980730629, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t980730629, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T980730629_H
#ifndef ANIMATIONCURVE_T1282138305_H
#define ANIMATIONCURVE_T1282138305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t1282138305  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t1282138305, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t1282138305_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t1282138305_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T1282138305_H
#ifndef COROUTINE_T153017798_H
#define COROUTINE_T153017798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t153017798  : public YieldInstruction_t2847594953
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t153017798, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t153017798_marshaled_pinvoke : public YieldInstruction_t2847594953_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t153017798_marshaled_com : public YieldInstruction_t2847594953_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T153017798_H
#ifndef BOUNDS_T3552510248_H
#define BOUNDS_T3552510248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t3552510248 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t1066458315  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t1066458315  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t3552510248, ___m_Center_0)); }
	inline Vector3_t1066458315  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t1066458315 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t1066458315  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t3552510248, ___m_Extents_1)); }
	inline Vector3_t1066458315  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t1066458315 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t1066458315  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T3552510248_H
#ifndef PLAYABLEOUTPUTHANDLE_T3040795842_H
#define PLAYABLEOUTPUTHANDLE_T3040795842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t3040795842 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3040795842, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3040795842, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T3040795842_H
#ifndef CALENDARIDENTIFIER_T2583546774_H
#define CALENDARIDENTIFIER_T2583546774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarIdentifier
struct  CalendarIdentifier_t2583546774 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarIdentifier::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarIdentifier_t2583546774, ___value___1)); }
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
#endif // CALENDARIDENTIFIER_T2583546774_H
#ifndef CALENDARUNIT_T2863365526_H
#define CALENDARUNIT_T2863365526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarUnit
struct  CalendarUnit_t2863365526 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarUnit_t2863365526, ___value___1)); }
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
#endif // CALENDARUNIT_T2863365526_H
#ifndef LOCALNOTIFICATION_T2660787085_H
#define LOCALNOTIFICATION_T2660787085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t2660787085  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t2660787085, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t2660787085_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t2660787085_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T2660787085_H
#ifndef REMOTENOTIFICATION_T792640829_H
#define REMOTENOTIFICATION_T792640829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t792640829  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t792640829, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T792640829_H
#ifndef JVALUE_T2067786820_H
#define JVALUE_T2067786820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.jvalue
struct  jvalue_t2067786820 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.jvalue::b
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			IntPtr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			IntPtr_t ___l_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_z_0() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___z_0)); }
	inline bool get_z_0() const { return ___z_0; }
	inline bool* get_address_of_z_0() { return &___z_0; }
	inline void set_z_0(bool value)
	{
		___z_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___b_1)); }
	inline uint8_t get_b_1() const { return ___b_1; }
	inline uint8_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(uint8_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___c_2)); }
	inline Il2CppChar get_c_2() const { return ___c_2; }
	inline Il2CppChar* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(Il2CppChar value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___s_3)); }
	inline int16_t get_s_3() const { return ___s_3; }
	inline int16_t* get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(int16_t value)
	{
		___s_3 = value;
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}

	inline static int32_t get_offset_of_j_5() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___j_5)); }
	inline int64_t get_j_5() const { return ___j_5; }
	inline int64_t* get_address_of_j_5() { return &___j_5; }
	inline void set_j_5(int64_t value)
	{
		___j_5 = value;
	}

	inline static int32_t get_offset_of_f_6() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___f_6)); }
	inline float get_f_6() const { return ___f_6; }
	inline float* get_address_of_f_6() { return &___f_6; }
	inline void set_f_6(float value)
	{
		___f_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___d_7)); }
	inline double get_d_7() const { return ___d_7; }
	inline double* get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(double value)
	{
		___d_7 = value;
	}

	inline static int32_t get_offset_of_l_8() { return static_cast<int32_t>(offsetof(jvalue_t2067786820, ___l_8)); }
	inline IntPtr_t get_l_8() const { return ___l_8; }
	inline IntPtr_t* get_address_of_l_8() { return &___l_8; }
	inline void set_l_8(IntPtr_t value)
	{
		___l_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t2067786820_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t2067786820_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
#endif // JVALUE_T2067786820_H
#ifndef RECTOFFSET_T3468843208_H
#define RECTOFFSET_T3468843208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t3468843208  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t3468843208, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t3468843208, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t3468843208_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t3468843208_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T3468843208_H
#ifndef CULLINGGROUP_T3581243109_H
#define CULLINGGROUP_T3581243109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t3581243109  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2838415966 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t3581243109, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t3581243109, ___m_OnStateChanged_1)); }
	inline StateChanged_t2838415966 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2838415966 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2838415966 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t3581243109_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t3581243109_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T3581243109_H
#ifndef GRADIENT_T2182648546_H
#define GRADIENT_T2182648546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t2182648546  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t2182648546, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t2182648546_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t2182648546_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T2182648546_H
#ifndef LOGTYPE_T761804812_H
#define LOGTYPE_T761804812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t761804812 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t761804812, ___value___1)); }
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
#endif // LOGTYPE_T761804812_H
#ifndef OBJECT_T1368365897_H
#define OBJECT_T1368365897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1368365897  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1368365897, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1368365897_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1368365897_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t1368365897_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1368365897_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1368365897_H
#ifndef HIDEFLAGS_T1459273431_H
#define HIDEFLAGS_T1459273431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t1459273431 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t1459273431, ___value___1)); }
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
#endif // HIDEFLAGS_T1459273431_H
#ifndef PLAYABLEOUTPUT_T4133164753_H
#define PLAYABLEOUTPUT_T4133164753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t4133164753 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t3040795842  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t4133164753, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3040795842  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3040795842 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3040795842  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t4133164753_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t4133164753  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t4133164753_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t4133164753  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t4133164753 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t4133164753  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T4133164753_H
#ifndef MULTICASTDELEGATE_T2816067446_H
#define MULTICASTDELEGATE_T2816067446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2816067446  : public Delegate_t860102814
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2816067446 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2816067446 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2816067446, ___prev_9)); }
	inline MulticastDelegate_t2816067446 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2816067446 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2816067446 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2816067446, ___kpm_next_10)); }
	inline MulticastDelegate_t2816067446 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2816067446 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2816067446 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2816067446_H
#ifndef PLAYABLE_T1808872106_H
#define PLAYABLE_T1808872106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t1808872106 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t523772890  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t1808872106, ___m_Handle_0)); }
	inline PlayableHandle_t523772890  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t523772890 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t523772890  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t1808872106_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t1808872106  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t1808872106_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t1808872106  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t1808872106 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t1808872106  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T1808872106_H
#ifndef ASSETBUNDLECREATEREQUEST_T4045194354_H
#define ASSETBUNDLECREATEREQUEST_T4045194354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t4045194354  : public AsyncOperation_t321374860
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLECREATEREQUEST_T4045194354_H
#ifndef MATERIAL_T2154009352_H
#define MATERIAL_T2154009352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t2154009352  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T2154009352_H
#ifndef GAMEOBJECT_T3804058628_H
#define GAMEOBJECT_T3804058628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t3804058628  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T3804058628_H
#ifndef TEXTURE_T525583984_H
#define TEXTURE_T525583984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t525583984  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T525583984_H
#ifndef SHADER_T4107034688_H
#define SHADER_T4107034688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4107034688  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4107034688_H
#ifndef ASSETBUNDLE_T1418952256_H
#define ASSETBUNDLE_T1418952256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_t1418952256  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_T1418952256_H
#ifndef RESOURCEREQUEST_T1157212807_H
#define RESOURCEREQUEST_T1157212807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t1157212807  : public AsyncOperation_t321374860
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_1;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_2;

public:
	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(ResourceRequest_t1157212807, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}

	inline static int32_t get_offset_of_m_Type_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t1157212807, ___m_Type_2)); }
	inline Type_t * get_m_Type_2() const { return ___m_Type_2; }
	inline Type_t ** get_address_of_m_Type_2() { return &___m_Type_2; }
	inline void set_m_Type_2(Type_t * value)
	{
		___m_Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t1157212807_marshaled_pinvoke : public AsyncOperation_t321374860_marshaled_pinvoke
{
	char* ___m_Path_1;
	Type_t * ___m_Type_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t1157212807_marshaled_com : public AsyncOperation_t321374860_marshaled_com
{
	Il2CppChar* ___m_Path_1;
	Type_t * ___m_Type_2;
};
#endif // RESOURCEREQUEST_T1157212807_H
#ifndef MESH_T637755256_H
#define MESH_T637755256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t637755256  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T637755256_H
#ifndef SCRIPTABLEOBJECT_T998612104_H
#define SCRIPTABLEOBJECT_T998612104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t998612104  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t998612104_marshaled_pinvoke : public Object_t1368365897_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t998612104_marshaled_com : public Object_t1368365897_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T998612104_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T942179356_H
#define FAILEDTOLOADSCRIPTOBJECT_T942179356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t942179356  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t942179356_marshaled_pinvoke : public Object_t1368365897_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t942179356_marshaled_com : public Object_t1368365897_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T942179356_H
#ifndef ASSETBUNDLEREQUEST_T4222532292_H
#define ASSETBUNDLEREQUEST_T4222532292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t4222532292  : public AsyncOperation_t321374860
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t4222532292_marshaled_pinvoke : public AsyncOperation_t321374860_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t4222532292_marshaled_com : public AsyncOperation_t321374860_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T4222532292_H
#ifndef COMPONENT_T3193062641_H
#define COMPONENT_T3193062641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3193062641  : public Object_t1368365897
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3193062641_H
#ifndef RENDERTEXTURE_T3840544357_H
#define RENDERTEXTURE_T3840544357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t3840544357  : public Texture_t525583984
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T3840544357_H
#ifndef DISPATCHERFACTORY_T3302022251_H
#define DISPATCHERFACTORY_T3302022251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct  DispatcherFactory_t3302022251  : public MulticastDelegate_t2816067446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHERFACTORY_T3302022251_H
#ifndef STATECHANGED_T2838415966_H
#define STATECHANGED_T2838415966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2838415966  : public MulticastDelegate_t2816067446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2838415966_H
#ifndef DISPATCHER_T3435730330_H
#define DISPATCHER_T3435730330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct  Dispatcher_t3435730330  : public MulticastDelegate_t2816067446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHER_T3435730330_H
#ifndef RENDERER_T869908615_H
#define RENDERER_T869908615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t869908615  : public Component_t3193062641
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T869908615_H
#ifndef DISPLAYSUPDATEDDELEGATE_T1314389643_H
#define DISPLAYSUPDATEDDELEGATE_T1314389643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t1314389643  : public MulticastDelegate_t2816067446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T1314389643_H
#ifndef CAMERACALLBACK_T973716842_H
#define CAMERACALLBACK_T973716842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t973716842  : public MulticastDelegate_t2816067446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T973716842_H
#ifndef BEHAVIOUR_T420064413_H
#define BEHAVIOUR_T420064413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t420064413  : public Component_t3193062641
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T420064413_H
#ifndef LOGCALLBACK_T3273740872_H
#define LOGCALLBACK_T3273740872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t3273740872  : public MulticastDelegate_t2816067446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T3273740872_H
#ifndef TEXTURE2D_T2658010422_H
#define TEXTURE2D_T2658010422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t2658010422  : public Texture_t525583984
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T2658010422_H
#ifndef LOWMEMORYCALLBACK_T740100456_H
#define LOWMEMORYCALLBACK_T740100456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t740100456  : public MulticastDelegate_t2816067446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T740100456_H
#ifndef GUILAYER_T50527888_H
#define GUILAYER_T50527888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t50527888  : public Behaviour_t420064413
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T50527888_H
#ifndef GUIELEMENT_T2952016607_H
#define GUIELEMENT_T2952016607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t2952016607  : public Behaviour_t420064413
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T2952016607_H
#ifndef MONOBEHAVIOUR_T4049783623_H
#define MONOBEHAVIOUR_T4049783623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4049783623  : public Behaviour_t420064413
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4049783623_H
#ifndef CAMERA_T1099757224_H
#define CAMERA_T1099757224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t1099757224  : public Behaviour_t420064413
{
public:

public:
};

struct Camera_t1099757224_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t973716842 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t973716842 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t973716842 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t1099757224_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t973716842 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t973716842 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t973716842 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t1099757224_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t973716842 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t973716842 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t973716842 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t1099757224_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t973716842 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t973716842 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t973716842 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T1099757224_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (U24ArrayTypeU24256_t3219266474)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t3219266474 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (U24ArrayTypeU241024_t38348057)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t38348057 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (U3CModuleU3E_t294312122), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (Builtins_t1879528930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1205[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1206[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1207[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (DispatcherCache_t3520965695), -1, sizeof(DispatcherCache_t3520965695_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1208[1] = 
{
	DispatcherCache_t3520965695_StaticFields::get_offset_of__cache_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (DispatcherFactory_t3302022251), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (DispatcherKey_t3430849945), -1, sizeof(DispatcherKey_t3430849945_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1210[4] = 
{
	DispatcherKey_t3430849945_StaticFields::get_offset_of_EqualityComparer_0(),
	DispatcherKey_t3430849945::get_offset_of__type_1(),
	DispatcherKey_t3430849945::get_offset_of__name_2(),
	DispatcherKey_t3430849945::get_offset_of__arguments_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (_EqualityComparer_t2915301190), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (NumericPromotions_t2899871268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (ExtensionRegistry_t3353217639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1213[2] = 
{
	ExtensionRegistry_t3353217639::get_offset_of__extensions_0(),
	ExtensionRegistry_t3353217639::get_offset_of__classLock_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (RuntimeServices_t1768378097), -1, sizeof(RuntimeServices_t1768378097_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1215[5] = 
{
	RuntimeServices_t1768378097_StaticFields::get_offset_of_NoArguments_0(),
	RuntimeServices_t1768378097_StaticFields::get_offset_of_RuntimeServicesType_1(),
	RuntimeServices_t1768378097_StaticFields::get_offset_of__cache_2(),
	RuntimeServices_t1768378097_StaticFields::get_offset_of__extensions_3(),
	RuntimeServices_t1768378097_StaticFields::get_offset_of_True_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (U3CGetExtensionMethodsU3Ec__IteratorC_t567610528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1216[4] = 
{
	U3CGetExtensionMethodsU3Ec__IteratorC_t567610528::get_offset_of_U3CU24s_49U3E__0_0(),
	U3CGetExtensionMethodsU3Ec__IteratorC_t567610528::get_offset_of_U3CmemberU3E__1_1(),
	U3CGetExtensionMethodsU3Ec__IteratorC_t567610528::get_offset_of_U24PC_2(),
	U3CGetExtensionMethodsU3Ec__IteratorC_t567610528::get_offset_of_U24current_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (U3CCoerceU3Ec__AnonStorey1D_t2388549234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1217[2] = 
{
	U3CCoerceU3Ec__AnonStorey1D_t2388549234::get_offset_of_value_0(),
	U3CCoerceU3Ec__AnonStorey1D_t2388549234::get_offset_of_toType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t3250081567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1218[1] = 
{
	U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t3250081567::get_offset_of_method_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (TextReaderEnumerator_t1422611043), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (U3ClinesU3Ec__IteratorD_t3354075402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1220[6] = 
{
	U3ClinesU3Ec__IteratorD_t3354075402::get_offset_of_reader_0(),
	U3ClinesU3Ec__IteratorD_t3354075402::get_offset_of_U3CU24s_51U3E__0_1(),
	U3ClinesU3Ec__IteratorD_t3354075402::get_offset_of_U3ClineU3E__1_2(),
	U3ClinesU3Ec__IteratorD_t3354075402::get_offset_of_U24PC_3(),
	U3ClinesU3Ec__IteratorD_t3354075402::get_offset_of_U24current_4(),
	U3ClinesU3Ec__IteratorD_t3354075402::get_offset_of_U3CU24U3Ereader_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (Dispatcher_t3435730330), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (U3CModuleU3E_t294312123), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (AndroidJavaObject_t3684600204), -1, sizeof(AndroidJavaObject_t3684600204_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1223[4] = 
{
	AndroidJavaObject_t3684600204_StaticFields::get_offset_of_enableDebugPrints_0(),
	AndroidJavaObject_t3684600204::get_offset_of_m_jobject_1(),
	AndroidJavaObject_t3684600204::get_offset_of_m_jclass_2(),
	AndroidJavaObject_t3684600204_StaticFields::get_offset_of_s_JavaLangClass_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (AndroidJavaClass_t210821354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (jvalue_t2067786820)+ sizeof (RuntimeObject), sizeof(jvalue_t2067786820_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1225[9] = 
{
	jvalue_t2067786820::get_offset_of_z_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	jvalue_t2067786820::get_offset_of_b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	jvalue_t2067786820::get_offset_of_c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	jvalue_t2067786820::get_offset_of_s_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	jvalue_t2067786820::get_offset_of_i_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	jvalue_t2067786820::get_offset_of_j_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	jvalue_t2067786820::get_offset_of_f_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	jvalue_t2067786820::get_offset_of_d_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	jvalue_t2067786820::get_offset_of_l_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (AndroidJNIHelper_t6477272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (AndroidJNI_t1807157943), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (Application_t1290459244), -1, sizeof(Application_t1290459244_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1228[4] = 
{
	Application_t1290459244_StaticFields::get_offset_of_lowMemory_0(),
	Application_t1290459244_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t1290459244_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t1290459244_StaticFields::get_offset_of_onBeforeRender_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (LowMemoryCallback_t740100456), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (LogCallback_t3273740872), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (AssetBundleCreateRequest_t4045194354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (AssetBundleRequest_t4222532292), sizeof(AssetBundleRequest_t4222532292_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (AssetBundle_t1418952256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (AsyncOperation_t321374860), sizeof(AsyncOperation_t321374860_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1234[1] = 
{
	AsyncOperation_t321374860::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (WaitForSeconds_t1146417258), sizeof(WaitForSeconds_t1146417258_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1235[1] = 
{
	WaitForSeconds_t1146417258::get_offset_of_m_Seconds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (WaitForFixedUpdate_t2266697372), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (WaitForEndOfFrame_t1150342709), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (Coroutine_t153017798), sizeof(Coroutine_t153017798_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1238[1] = 
{
	Coroutine_t153017798::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (ScriptableObject_t998612104), sizeof(ScriptableObject_t998612104_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (FailedToLoadScriptObject_t942179356), sizeof(FailedToLoadScriptObject_t942179356_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (Behaviour_t420064413), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (Camera_t1099757224), -1, sizeof(Camera_t1099757224_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1242[3] = 
{
	Camera_t1099757224_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t1099757224_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t1099757224_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (CameraCallback_t973716842), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (Component_t3193062641), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (UnhandledExceptionHandler_t1209108609), -1, sizeof(UnhandledExceptionHandler_t1209108609_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1245[1] = 
{
	UnhandledExceptionHandler_t1209108609_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (CullingGroupEvent_t3070507950)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t3070507950 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1246[3] = 
{
	CullingGroupEvent_t3070507950::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t3070507950::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t3070507950::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (CullingGroup_t3581243109), sizeof(CullingGroup_t3581243109_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1247[2] = 
{
	CullingGroup_t3581243109::get_offset_of_m_Ptr_0(),
	CullingGroup_t3581243109::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (StateChanged_t2838415966), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (DebugLogHandler_t2341773127), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (Debug_t520022458), -1, sizeof(Debug_t520022458_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1250[1] = 
{
	Debug_t520022458_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (Display_t2266205840), -1, sizeof(Display_t2266205840_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1251[4] = 
{
	Display_t2266205840::get_offset_of_nativeDisplay_0(),
	Display_t2266205840_StaticFields::get_offset_of_displays_1(),
	Display_t2266205840_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t2266205840_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (DisplaysUpdatedDelegate_t1314389643), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (GameObject_t3804058628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (Gizmos_t807964076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (Gradient_t2182648546), sizeof(Gradient_t2182648546_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1255[1] = 
{
	Gradient_t2182648546::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (Renderer_t869908615), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (Graphics_t1840462144), -1, sizeof(Graphics_t1840462144_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1257[1] = 
{
	Graphics_t1840462144_StaticFields::get_offset_of_kMaxDrawMeshInstanceCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (Screen_t1413237073), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (RectOffset_t3468843208), sizeof(RectOffset_t3468843208_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1259[2] = 
{
	RectOffset_t3468843208::get_offset_of_m_Ptr_0(),
	RectOffset_t3468843208::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (GUIElement_t2952016607), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (GUILayer_t50527888), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (TouchScreenKeyboard_t3532578863), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (Gyroscope_t1808458871), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (Input_t3399838176), -1, sizeof(Input_t3399838176_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1264[1] = 
{
	Input_t3399838176_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (Vector3_t1066458315)+ sizeof (RuntimeObject), sizeof(Vector3_t1066458315 ), sizeof(Vector3_t1066458315_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1265[14] = 
{
	0,
	Vector3_t1066458315::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1066458315::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1066458315::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1066458315_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t1066458315_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t1066458315_StaticFields::get_offset_of_upVector_6(),
	Vector3_t1066458315_StaticFields::get_offset_of_downVector_7(),
	Vector3_t1066458315_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t1066458315_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t1066458315_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t1066458315_StaticFields::get_offset_of_backVector_11(),
	Vector3_t1066458315_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t1066458315_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (Quaternion_t3348238477)+ sizeof (RuntimeObject), sizeof(Quaternion_t3348238477 ), sizeof(Quaternion_t3348238477_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1266[6] = 
{
	Quaternion_t3348238477::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3348238477::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3348238477::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3348238477::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3348238477_StaticFields::get_offset_of_identityQuaternion_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (Matrix4x4_t1163416633)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t1163416633 ), sizeof(Matrix4x4_t1163416633_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1267[18] = 
{
	Matrix4x4_t1163416633::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t1163416633_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t1163416633_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (Bounds_t3552510248)+ sizeof (RuntimeObject), sizeof(Bounds_t3552510248 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1268[2] = 
{
	Bounds_t3552510248::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t3552510248::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (Mathf_t3127998090)+ sizeof (RuntimeObject), sizeof(Mathf_t3127998090 ), sizeof(Mathf_t3127998090_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1269[1] = 
{
	Mathf_t3127998090_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (Keyframe_t2115839097)+ sizeof (RuntimeObject), sizeof(Keyframe_t2115839097 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1270[4] = 
{
	Keyframe_t2115839097::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2115839097::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2115839097::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2115839097::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (AnimationCurve_t1282138305), sizeof(AnimationCurve_t1282138305_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1271[1] = 
{
	AnimationCurve_t1282138305::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (Mesh_t637755256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (MonoBehaviour_t4049783623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (PlayerPrefsException_t1210960681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (PlayerPrefs_t793541806), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (Random_t1044580161), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (ResourceRequest_t1157212807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1277[2] = 
{
	ResourceRequest_t1157212807::get_offset_of_m_Path_1(),
	ResourceRequest_t1157212807::get_offset_of_m_Type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (Resources_t2654222533), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (Shader_t4107034688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (Material_t2154009352), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (Texture_t525583984), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (Texture2D_t2658010422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (RenderTexture_t3840544357), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (Time_t886184909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (HideFlags_t1459273431)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[10] = 
{
	HideFlags_t1459273431::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (Object_t1368365897), sizeof(Object_t1368365897_marshaled_pinvoke), sizeof(Object_t1368365897_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1286[2] = 
{
	Object_t1368365897::get_offset_of_m_CachedPtr_0(),
	Object_t1368365897_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (UnityLogWriter_t1199676052), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (YieldInstruction_t2847594953), sizeof(YieldInstruction_t2847594953_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (PlayState_t2989967708)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1289[3] = 
{
	PlayState_t2989967708::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (PlayableHandle_t523772890)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t523772890 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1290[2] = 
{
	PlayableHandle_t523772890::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t523772890::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (Playable_t1808872106)+ sizeof (RuntimeObject), sizeof(Playable_t1808872106 ), sizeof(Playable_t1808872106_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1291[2] = 
{
	Playable_t1808872106::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t1808872106_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (DataStreamType_t3598274322)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1292[5] = 
{
	DataStreamType_t3598274322::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (PlayableGraph_t980730629)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t980730629 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1293[2] = 
{
	PlayableGraph_t980730629::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t980730629::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (PlayableOutputHandle_t3040795842)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t3040795842 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1294[2] = 
{
	PlayableOutputHandle_t3040795842::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t3040795842::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (PlayableOutput_t4133164753)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t4133164753 ), sizeof(PlayableOutput_t4133164753_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1295[2] = 
{
	PlayableOutput_t4133164753::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t4133164753_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (CalendarIdentifier_t2583546774)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1296[12] = 
{
	CalendarIdentifier_t2583546774::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (CalendarUnit_t2863365526)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1297[12] = 
{
	CalendarUnit_t2863365526::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (LocalNotification_t2660787085), -1, sizeof(LocalNotification_t2660787085_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1298[2] = 
{
	LocalNotification_t2660787085::get_offset_of_notificationWrapper_0(),
	LocalNotification_t2660787085_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (RemoteNotification_t792640829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1299[1] = 
{
	RemoteNotification_t792640829::get_offset_of_notificationWrapper_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
