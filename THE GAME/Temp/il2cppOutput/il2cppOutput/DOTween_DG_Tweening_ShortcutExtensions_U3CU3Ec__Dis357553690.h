#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Sequence
struct Sequence_t110643099;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClassfb
struct  U3CU3Ec__DisplayClassfb_t357553690  : public Il2CppObject
{
public:
	// System.Single DG.Tweening.ShortcutExtensions/<>c__DisplayClassfb::offsetY
	float ___offsetY_0;
	// DG.Tweening.Sequence DG.Tweening.ShortcutExtensions/<>c__DisplayClassfb::s
	Sequence_t110643099 * ___s_1;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions/<>c__DisplayClassfb::target
	Transform_t3275118058 * ___target_2;

public:
	inline static int32_t get_offset_of_offsetY_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassfb_t357553690, ___offsetY_0)); }
	inline float get_offsetY_0() const { return ___offsetY_0; }
	inline float* get_address_of_offsetY_0() { return &___offsetY_0; }
	inline void set_offsetY_0(float value)
	{
		___offsetY_0 = value;
	}

	inline static int32_t get_offset_of_s_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassfb_t357553690, ___s_1)); }
	inline Sequence_t110643099 * get_s_1() const { return ___s_1; }
	inline Sequence_t110643099 ** get_address_of_s_1() { return &___s_1; }
	inline void set_s_1(Sequence_t110643099 * value)
	{
		___s_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_1, value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClassfb_t357553690, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
