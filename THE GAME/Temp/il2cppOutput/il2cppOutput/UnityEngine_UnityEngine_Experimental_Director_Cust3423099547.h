#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_Experimental_Director_Scri4067966717.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim1693994278.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Director.CustomAnimationPlayable
struct  CustomAnimationPlayable_t3423099547  : public ScriptPlayable_t4067966717
{
public:
	// UnityEngine.Experimental.Director.AnimationPlayable UnityEngine.Experimental.Director.CustomAnimationPlayable::handle
	AnimationPlayable_t1693994278  ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CustomAnimationPlayable_t3423099547, ___handle_0)); }
	inline AnimationPlayable_t1693994278  get_handle_0() const { return ___handle_0; }
	inline AnimationPlayable_t1693994278 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(AnimationPlayable_t1693994278  value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
