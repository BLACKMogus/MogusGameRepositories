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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// day1canteen
struct  day1canteen_t1720982657  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text day1canteen::playerinput
	Text_t356221433 * ___playerinput_2;
	// System.Int32 day1canteen::nexttalk
	int32_t ___nexttalk_3;
	// System.String[] day1canteen::goplace
	StringU5BU5D_t1642385972* ___goplace_6;

public:
	inline static int32_t get_offset_of_playerinput_2() { return static_cast<int32_t>(offsetof(day1canteen_t1720982657, ___playerinput_2)); }
	inline Text_t356221433 * get_playerinput_2() const { return ___playerinput_2; }
	inline Text_t356221433 ** get_address_of_playerinput_2() { return &___playerinput_2; }
	inline void set_playerinput_2(Text_t356221433 * value)
	{
		___playerinput_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerinput_2, value);
	}

	inline static int32_t get_offset_of_nexttalk_3() { return static_cast<int32_t>(offsetof(day1canteen_t1720982657, ___nexttalk_3)); }
	inline int32_t get_nexttalk_3() const { return ___nexttalk_3; }
	inline int32_t* get_address_of_nexttalk_3() { return &___nexttalk_3; }
	inline void set_nexttalk_3(int32_t value)
	{
		___nexttalk_3 = value;
	}

	inline static int32_t get_offset_of_goplace_6() { return static_cast<int32_t>(offsetof(day1canteen_t1720982657, ___goplace_6)); }
	inline StringU5BU5D_t1642385972* get_goplace_6() const { return ___goplace_6; }
	inline StringU5BU5D_t1642385972** get_address_of_goplace_6() { return &___goplace_6; }
	inline void set_goplace_6(StringU5BU5D_t1642385972* value)
	{
		___goplace_6 = value;
		Il2CppCodeGenWriteBarrier(&___goplace_6, value);
	}
};

struct day1canteen_t1720982657_StaticFields
{
public:
	// System.Boolean day1canteen::withche
	bool ___withche_4;
	// System.Boolean day1canteen::meetrain
	bool ___meetrain_5;

public:
	inline static int32_t get_offset_of_withche_4() { return static_cast<int32_t>(offsetof(day1canteen_t1720982657_StaticFields, ___withche_4)); }
	inline bool get_withche_4() const { return ___withche_4; }
	inline bool* get_address_of_withche_4() { return &___withche_4; }
	inline void set_withche_4(bool value)
	{
		___withche_4 = value;
	}

	inline static int32_t get_offset_of_meetrain_5() { return static_cast<int32_t>(offsetof(day1canteen_t1720982657_StaticFields, ___meetrain_5)); }
	inline bool get_meetrain_5() const { return ___meetrain_5; }
	inline bool* get_address_of_meetrain_5() { return &___meetrain_5; }
	inline void set_meetrain_5(bool value)
	{
		___meetrain_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
