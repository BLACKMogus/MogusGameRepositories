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
// UnityEngine.UI.InputField
struct InputField_t1631627530;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Savegame
struct  Savegame_t2420320621  : public MonoBehaviour_t1158329972
{
public:
	// System.String Savegame::stage
	String_t* ___stage_2;
	// UnityEngine.UI.InputField Savegame::playerinput
	InputField_t1631627530 * ___playerinput_3;

public:
	inline static int32_t get_offset_of_stage_2() { return static_cast<int32_t>(offsetof(Savegame_t2420320621, ___stage_2)); }
	inline String_t* get_stage_2() const { return ___stage_2; }
	inline String_t** get_address_of_stage_2() { return &___stage_2; }
	inline void set_stage_2(String_t* value)
	{
		___stage_2 = value;
		Il2CppCodeGenWriteBarrier(&___stage_2, value);
	}

	inline static int32_t get_offset_of_playerinput_3() { return static_cast<int32_t>(offsetof(Savegame_t2420320621, ___playerinput_3)); }
	inline InputField_t1631627530 * get_playerinput_3() const { return ___playerinput_3; }
	inline InputField_t1631627530 ** get_address_of_playerinput_3() { return &___playerinput_3; }
	inline void set_playerinput_3(InputField_t1631627530 * value)
	{
		___playerinput_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerinput_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
