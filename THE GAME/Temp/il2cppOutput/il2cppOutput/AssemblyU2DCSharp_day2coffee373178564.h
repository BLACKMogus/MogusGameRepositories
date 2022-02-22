#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// day2coffee
struct  day2coffee_t373178564  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text day2coffee::playerinput
	Text_t356221433 * ___playerinput_2;
	// UnityEngine.GameObject day2coffee::phone
	GameObject_t1756533147 * ___phone_3;
	// UnityEngine.AudioSource day2coffee::tips
	AudioSource_t1135106623 * ___tips_4;
	// System.Boolean day2coffee::entercoffee
	bool ___entercoffee_5;
	// System.Boolean day2coffee::delete
	bool ___delete_6;
	// System.Boolean day2coffee::follow
	bool ___follow_7;
	// System.Boolean day2coffee::gotocanteen
	bool ___gotocanteen_8;
	// System.Int32 day2coffee::nexttalk
	int32_t ___nexttalk_9;

public:
	inline static int32_t get_offset_of_playerinput_2() { return static_cast<int32_t>(offsetof(day2coffee_t373178564, ___playerinput_2)); }
	inline Text_t356221433 * get_playerinput_2() const { return ___playerinput_2; }
	inline Text_t356221433 ** get_address_of_playerinput_2() { return &___playerinput_2; }
	inline void set_playerinput_2(Text_t356221433 * value)
	{
		___playerinput_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerinput_2, value);
	}

	inline static int32_t get_offset_of_phone_3() { return static_cast<int32_t>(offsetof(day2coffee_t373178564, ___phone_3)); }
	inline GameObject_t1756533147 * get_phone_3() const { return ___phone_3; }
	inline GameObject_t1756533147 ** get_address_of_phone_3() { return &___phone_3; }
	inline void set_phone_3(GameObject_t1756533147 * value)
	{
		___phone_3 = value;
		Il2CppCodeGenWriteBarrier(&___phone_3, value);
	}

	inline static int32_t get_offset_of_tips_4() { return static_cast<int32_t>(offsetof(day2coffee_t373178564, ___tips_4)); }
	inline AudioSource_t1135106623 * get_tips_4() const { return ___tips_4; }
	inline AudioSource_t1135106623 ** get_address_of_tips_4() { return &___tips_4; }
	inline void set_tips_4(AudioSource_t1135106623 * value)
	{
		___tips_4 = value;
		Il2CppCodeGenWriteBarrier(&___tips_4, value);
	}

	inline static int32_t get_offset_of_entercoffee_5() { return static_cast<int32_t>(offsetof(day2coffee_t373178564, ___entercoffee_5)); }
	inline bool get_entercoffee_5() const { return ___entercoffee_5; }
	inline bool* get_address_of_entercoffee_5() { return &___entercoffee_5; }
	inline void set_entercoffee_5(bool value)
	{
		___entercoffee_5 = value;
	}

	inline static int32_t get_offset_of_delete_6() { return static_cast<int32_t>(offsetof(day2coffee_t373178564, ___delete_6)); }
	inline bool get_delete_6() const { return ___delete_6; }
	inline bool* get_address_of_delete_6() { return &___delete_6; }
	inline void set_delete_6(bool value)
	{
		___delete_6 = value;
	}

	inline static int32_t get_offset_of_follow_7() { return static_cast<int32_t>(offsetof(day2coffee_t373178564, ___follow_7)); }
	inline bool get_follow_7() const { return ___follow_7; }
	inline bool* get_address_of_follow_7() { return &___follow_7; }
	inline void set_follow_7(bool value)
	{
		___follow_7 = value;
	}

	inline static int32_t get_offset_of_gotocanteen_8() { return static_cast<int32_t>(offsetof(day2coffee_t373178564, ___gotocanteen_8)); }
	inline bool get_gotocanteen_8() const { return ___gotocanteen_8; }
	inline bool* get_address_of_gotocanteen_8() { return &___gotocanteen_8; }
	inline void set_gotocanteen_8(bool value)
	{
		___gotocanteen_8 = value;
	}

	inline static int32_t get_offset_of_nexttalk_9() { return static_cast<int32_t>(offsetof(day2coffee_t373178564, ___nexttalk_9)); }
	inline int32_t get_nexttalk_9() const { return ___nexttalk_9; }
	inline int32_t* get_address_of_nexttalk_9() { return &___nexttalk_9; }
	inline void set_nexttalk_9(int32_t value)
	{
		___nexttalk_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
