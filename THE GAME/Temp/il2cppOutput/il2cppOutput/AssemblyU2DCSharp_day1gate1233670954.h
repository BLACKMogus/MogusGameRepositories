#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// day1gate
struct  day1gate_t1233670954  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 day1gate::nexttalk
	int32_t ___nexttalk_2;
	// System.Boolean day1gate::hello
	bool ___hello_3;
	// System.Boolean day1gate::borrowcard
	bool ___borrowcard_4;
	// System.Int32 day1gate::saynono
	int32_t ___saynono_5;
	// System.Boolean day1gate::askques
	bool ___askques_6;
	// UnityEngine.UI.Image day1gate::gate
	Image_t2042527209 * ___gate_7;
	// UnityEngine.UI.Text day1gate::playerinput
	Text_t356221433 * ___playerinput_8;

public:
	inline static int32_t get_offset_of_nexttalk_2() { return static_cast<int32_t>(offsetof(day1gate_t1233670954, ___nexttalk_2)); }
	inline int32_t get_nexttalk_2() const { return ___nexttalk_2; }
	inline int32_t* get_address_of_nexttalk_2() { return &___nexttalk_2; }
	inline void set_nexttalk_2(int32_t value)
	{
		___nexttalk_2 = value;
	}

	inline static int32_t get_offset_of_hello_3() { return static_cast<int32_t>(offsetof(day1gate_t1233670954, ___hello_3)); }
	inline bool get_hello_3() const { return ___hello_3; }
	inline bool* get_address_of_hello_3() { return &___hello_3; }
	inline void set_hello_3(bool value)
	{
		___hello_3 = value;
	}

	inline static int32_t get_offset_of_borrowcard_4() { return static_cast<int32_t>(offsetof(day1gate_t1233670954, ___borrowcard_4)); }
	inline bool get_borrowcard_4() const { return ___borrowcard_4; }
	inline bool* get_address_of_borrowcard_4() { return &___borrowcard_4; }
	inline void set_borrowcard_4(bool value)
	{
		___borrowcard_4 = value;
	}

	inline static int32_t get_offset_of_saynono_5() { return static_cast<int32_t>(offsetof(day1gate_t1233670954, ___saynono_5)); }
	inline int32_t get_saynono_5() const { return ___saynono_5; }
	inline int32_t* get_address_of_saynono_5() { return &___saynono_5; }
	inline void set_saynono_5(int32_t value)
	{
		___saynono_5 = value;
	}

	inline static int32_t get_offset_of_askques_6() { return static_cast<int32_t>(offsetof(day1gate_t1233670954, ___askques_6)); }
	inline bool get_askques_6() const { return ___askques_6; }
	inline bool* get_address_of_askques_6() { return &___askques_6; }
	inline void set_askques_6(bool value)
	{
		___askques_6 = value;
	}

	inline static int32_t get_offset_of_gate_7() { return static_cast<int32_t>(offsetof(day1gate_t1233670954, ___gate_7)); }
	inline Image_t2042527209 * get_gate_7() const { return ___gate_7; }
	inline Image_t2042527209 ** get_address_of_gate_7() { return &___gate_7; }
	inline void set_gate_7(Image_t2042527209 * value)
	{
		___gate_7 = value;
		Il2CppCodeGenWriteBarrier(&___gate_7, value);
	}

	inline static int32_t get_offset_of_playerinput_8() { return static_cast<int32_t>(offsetof(day1gate_t1233670954, ___playerinput_8)); }
	inline Text_t356221433 * get_playerinput_8() const { return ___playerinput_8; }
	inline Text_t356221433 ** get_address_of_playerinput_8() { return &___playerinput_8; }
	inline void set_playerinput_8(Text_t356221433 * value)
	{
		___playerinput_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerinput_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
