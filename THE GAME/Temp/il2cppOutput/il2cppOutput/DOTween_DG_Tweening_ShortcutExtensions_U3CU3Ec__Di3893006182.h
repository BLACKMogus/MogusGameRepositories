#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t494725636;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass3e
struct  U3CU3Ec__DisplayClass3e_t3893006182  : public Il2CppObject
{
public:
	// UnityEngine.Light DG.Tweening.ShortcutExtensions/<>c__DisplayClass3e::target
	Light_t494725636 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3e_t3893006182, ___target_0)); }
	inline Light_t494725636 * get_target_0() const { return ___target_0; }
	inline Light_t494725636 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Light_t494725636 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
