#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// afterclass
struct  afterclass_t4186532538  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 afterclass::nexttalk
	int32_t ___nexttalk_2;
	// System.Int32 afterclass::num
	int32_t ___num_3;
	// System.String[] afterclass::onehundred
	StringU5BU5D_t1642385972* ___onehundred_4;
	// UnityEngine.UI.Text afterclass::playerinput
	Text_t356221433 * ___playerinput_5;

public:
	inline static int32_t get_offset_of_nexttalk_2() { return static_cast<int32_t>(offsetof(afterclass_t4186532538, ___nexttalk_2)); }
	inline int32_t get_nexttalk_2() const { return ___nexttalk_2; }
	inline int32_t* get_address_of_nexttalk_2() { return &___nexttalk_2; }
	inline void set_nexttalk_2(int32_t value)
	{
		___nexttalk_2 = value;
	}

	inline static int32_t get_offset_of_num_3() { return static_cast<int32_t>(offsetof(afterclass_t4186532538, ___num_3)); }
	inline int32_t get_num_3() const { return ___num_3; }
	inline int32_t* get_address_of_num_3() { return &___num_3; }
	inline void set_num_3(int32_t value)
	{
		___num_3 = value;
	}

	inline static int32_t get_offset_of_onehundred_4() { return static_cast<int32_t>(offsetof(afterclass_t4186532538, ___onehundred_4)); }
	inline StringU5BU5D_t1642385972* get_onehundred_4() const { return ___onehundred_4; }
	inline StringU5BU5D_t1642385972** get_address_of_onehundred_4() { return &___onehundred_4; }
	inline void set_onehundred_4(StringU5BU5D_t1642385972* value)
	{
		___onehundred_4 = value;
		Il2CppCodeGenWriteBarrier(&___onehundred_4, value);
	}

	inline static int32_t get_offset_of_playerinput_5() { return static_cast<int32_t>(offsetof(afterclass_t4186532538, ___playerinput_5)); }
	inline Text_t356221433 * get_playerinput_5() const { return ___playerinput_5; }
	inline Text_t356221433 ** get_address_of_playerinput_5() { return &___playerinput_5; }
	inline void set_playerinput_5(Text_t356221433 * value)
	{
		___playerinput_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerinput_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
