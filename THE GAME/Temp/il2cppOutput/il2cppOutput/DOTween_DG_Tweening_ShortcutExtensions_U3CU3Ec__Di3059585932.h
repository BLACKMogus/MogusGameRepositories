#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;

#include "mscorlib_System_Object2689449295.h"
#include "DOTween_DG_Tweening_Color2232726623.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass46
struct  U3CU3Ec__DisplayClass46_t3059585932  : public Il2CppObject
{
public:
	// UnityEngine.LineRenderer DG.Tweening.ShortcutExtensions/<>c__DisplayClass46::target
	LineRenderer_t849157671 * ___target_0;
	// DG.Tweening.Color2 DG.Tweening.ShortcutExtensions/<>c__DisplayClass46::startValue
	Color2_t232726623  ___startValue_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_t3059585932, ___target_0)); }
	inline LineRenderer_t849157671 * get_target_0() const { return ___target_0; }
	inline LineRenderer_t849157671 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(LineRenderer_t849157671 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_startValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_t3059585932, ___startValue_1)); }
	inline Color2_t232726623  get_startValue_1() const { return ___startValue_1; }
	inline Color2_t232726623 * get_address_of_startValue_1() { return &___startValue_1; }
	inline void set_startValue_1(Color2_t232726623  value)
	{
		___startValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
