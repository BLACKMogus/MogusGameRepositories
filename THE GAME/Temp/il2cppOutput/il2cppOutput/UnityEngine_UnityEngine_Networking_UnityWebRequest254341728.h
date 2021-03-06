#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t254341728  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	IntPtr_t ___m_Ptr_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Ptr_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728, ___m_Ptr_6)); }
	inline IntPtr_t get_m_Ptr_6() const { return ___m_Ptr_6; }
	inline IntPtr_t* get_address_of_m_Ptr_6() { return &___m_Ptr_6; }
	inline void set_m_Ptr_6(IntPtr_t value)
	{
		___m_Ptr_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9 = value;
	}
};

struct UnityWebRequest_t254341728_StaticFields
{
public:
	// System.String[] UnityEngine.Networking.UnityWebRequest::forbiddenHeaderKeys
	StringU5BU5D_t1642385972* ___forbiddenHeaderKeys_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Networking.UnityWebRequest::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_10;

public:
	inline static int32_t get_offset_of_forbiddenHeaderKeys_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728_StaticFields, ___forbiddenHeaderKeys_7)); }
	inline StringU5BU5D_t1642385972* get_forbiddenHeaderKeys_7() const { return ___forbiddenHeaderKeys_7; }
	inline StringU5BU5D_t1642385972** get_address_of_forbiddenHeaderKeys_7() { return &___forbiddenHeaderKeys_7; }
	inline void set_forbiddenHeaderKeys_7(StringU5BU5D_t1642385972* value)
	{
		___forbiddenHeaderKeys_7 = value;
		Il2CppCodeGenWriteBarrier(&___forbiddenHeaderKeys_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_10() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728_StaticFields, ___U3CU3Ef__switchU24map1_10)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_10() const { return ___U3CU3Ef__switchU24map1_10; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_10() { return &___U3CU3Ef__switchU24map1_10; }
	inline void set_U3CU3Ef__switchU24map1_10(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728_marshaled_pinvoke
{
	intptr_t ___m_Ptr_6;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9;
};
// Native definition for marshalling of: UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728_marshaled_com
{
	intptr_t ___m_Ptr_6;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_8;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_9;
};
