#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// talkframe
struct  talkframe_t3338625529  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject talkframe::mask
	GameObject_t1756533147 * ___mask_3;
	// System.Int32 talkframe::q
	int32_t ___q_4;
	// UnityEngine.UI.Text talkframe::text
	Text_t356221433 * ___text_8;
	// UnityEngine.UI.Text talkframe::namee
	Text_t356221433 * ___namee_9;
	// UnityEngine.GameObject talkframe::lefttalkframe
	GameObject_t1756533147 * ___lefttalkframe_10;
	// UnityEngine.GameObject talkframe::nextscene
	GameObject_t1756533147 * ___nextscene_11;

public:
	inline static int32_t get_offset_of_mask_3() { return static_cast<int32_t>(offsetof(talkframe_t3338625529, ___mask_3)); }
	inline GameObject_t1756533147 * get_mask_3() const { return ___mask_3; }
	inline GameObject_t1756533147 ** get_address_of_mask_3() { return &___mask_3; }
	inline void set_mask_3(GameObject_t1756533147 * value)
	{
		___mask_3 = value;
		Il2CppCodeGenWriteBarrier(&___mask_3, value);
	}

	inline static int32_t get_offset_of_q_4() { return static_cast<int32_t>(offsetof(talkframe_t3338625529, ___q_4)); }
	inline int32_t get_q_4() const { return ___q_4; }
	inline int32_t* get_address_of_q_4() { return &___q_4; }
	inline void set_q_4(int32_t value)
	{
		___q_4 = value;
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(talkframe_t3338625529, ___text_8)); }
	inline Text_t356221433 * get_text_8() const { return ___text_8; }
	inline Text_t356221433 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(Text_t356221433 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier(&___text_8, value);
	}

	inline static int32_t get_offset_of_namee_9() { return static_cast<int32_t>(offsetof(talkframe_t3338625529, ___namee_9)); }
	inline Text_t356221433 * get_namee_9() const { return ___namee_9; }
	inline Text_t356221433 ** get_address_of_namee_9() { return &___namee_9; }
	inline void set_namee_9(Text_t356221433 * value)
	{
		___namee_9 = value;
		Il2CppCodeGenWriteBarrier(&___namee_9, value);
	}

	inline static int32_t get_offset_of_lefttalkframe_10() { return static_cast<int32_t>(offsetof(talkframe_t3338625529, ___lefttalkframe_10)); }
	inline GameObject_t1756533147 * get_lefttalkframe_10() const { return ___lefttalkframe_10; }
	inline GameObject_t1756533147 ** get_address_of_lefttalkframe_10() { return &___lefttalkframe_10; }
	inline void set_lefttalkframe_10(GameObject_t1756533147 * value)
	{
		___lefttalkframe_10 = value;
		Il2CppCodeGenWriteBarrier(&___lefttalkframe_10, value);
	}

	inline static int32_t get_offset_of_nextscene_11() { return static_cast<int32_t>(offsetof(talkframe_t3338625529, ___nextscene_11)); }
	inline GameObject_t1756533147 * get_nextscene_11() const { return ___nextscene_11; }
	inline GameObject_t1756533147 ** get_address_of_nextscene_11() { return &___nextscene_11; }
	inline void set_nextscene_11(GameObject_t1756533147 * value)
	{
		___nextscene_11 = value;
		Il2CppCodeGenWriteBarrier(&___nextscene_11, value);
	}
};

struct talkframe_t3338625529_StaticFields
{
public:
	// System.Int32 talkframe::i
	int32_t ___i_2;
	// System.Boolean talkframe::isdelay
	bool ___isdelay_5;
	// System.Boolean talkframe::stopcoroutine
	bool ___stopcoroutine_6;
	// System.Boolean talkframe::havenext
	bool ___havenext_7;
	// System.Int32 talkframe::stay
	int32_t ___stay_12;
	// System.Int32 talkframe::go
	int32_t ___go_13;
	// System.String[] talkframe::output
	StringU5BU5D_t1642385972* ___output_14;

public:
	inline static int32_t get_offset_of_i_2() { return static_cast<int32_t>(offsetof(talkframe_t3338625529_StaticFields, ___i_2)); }
	inline int32_t get_i_2() const { return ___i_2; }
	inline int32_t* get_address_of_i_2() { return &___i_2; }
	inline void set_i_2(int32_t value)
	{
		___i_2 = value;
	}

	inline static int32_t get_offset_of_isdelay_5() { return static_cast<int32_t>(offsetof(talkframe_t3338625529_StaticFields, ___isdelay_5)); }
	inline bool get_isdelay_5() const { return ___isdelay_5; }
	inline bool* get_address_of_isdelay_5() { return &___isdelay_5; }
	inline void set_isdelay_5(bool value)
	{
		___isdelay_5 = value;
	}

	inline static int32_t get_offset_of_stopcoroutine_6() { return static_cast<int32_t>(offsetof(talkframe_t3338625529_StaticFields, ___stopcoroutine_6)); }
	inline bool get_stopcoroutine_6() const { return ___stopcoroutine_6; }
	inline bool* get_address_of_stopcoroutine_6() { return &___stopcoroutine_6; }
	inline void set_stopcoroutine_6(bool value)
	{
		___stopcoroutine_6 = value;
	}

	inline static int32_t get_offset_of_havenext_7() { return static_cast<int32_t>(offsetof(talkframe_t3338625529_StaticFields, ___havenext_7)); }
	inline bool get_havenext_7() const { return ___havenext_7; }
	inline bool* get_address_of_havenext_7() { return &___havenext_7; }
	inline void set_havenext_7(bool value)
	{
		___havenext_7 = value;
	}

	inline static int32_t get_offset_of_stay_12() { return static_cast<int32_t>(offsetof(talkframe_t3338625529_StaticFields, ___stay_12)); }
	inline int32_t get_stay_12() const { return ___stay_12; }
	inline int32_t* get_address_of_stay_12() { return &___stay_12; }
	inline void set_stay_12(int32_t value)
	{
		___stay_12 = value;
	}

	inline static int32_t get_offset_of_go_13() { return static_cast<int32_t>(offsetof(talkframe_t3338625529_StaticFields, ___go_13)); }
	inline int32_t get_go_13() const { return ___go_13; }
	inline int32_t* get_address_of_go_13() { return &___go_13; }
	inline void set_go_13(int32_t value)
	{
		___go_13 = value;
	}

	inline static int32_t get_offset_of_output_14() { return static_cast<int32_t>(offsetof(talkframe_t3338625529_StaticFields, ___output_14)); }
	inline StringU5BU5D_t1642385972* get_output_14() const { return ___output_14; }
	inline StringU5BU5D_t1642385972** get_address_of_output_14() { return &___output_14; }
	inline void set_output_14(StringU5BU5D_t1642385972* value)
	{
		___output_14 = value;
		Il2CppCodeGenWriteBarrier(&___output_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
