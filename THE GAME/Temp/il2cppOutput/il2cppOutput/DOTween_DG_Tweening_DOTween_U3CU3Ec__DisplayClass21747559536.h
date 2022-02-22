#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t3734738918;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTween/<>c__DisplayClass2
struct  U3CU3Ec__DisplayClass2_t1747559536  : public Il2CppObject
{
public:
	// System.Single DG.Tweening.DOTween/<>c__DisplayClass2::v
	float ___v_0;
	// DG.Tweening.Core.DOSetter`1<System.Single> DG.Tweening.DOTween/<>c__DisplayClass2::setter
	DOSetter_1_t3734738918 * ___setter_1;

public:
	inline static int32_t get_offset_of_v_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_t1747559536, ___v_0)); }
	inline float get_v_0() const { return ___v_0; }
	inline float* get_address_of_v_0() { return &___v_0; }
	inline void set_v_0(float value)
	{
		___v_0 = value;
	}

	inline static int32_t get_offset_of_setter_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_t1747559536, ___setter_1)); }
	inline DOSetter_1_t3734738918 * get_setter_1() const { return ___setter_1; }
	inline DOSetter_1_t3734738918 ** get_address_of_setter_1() { return &___setter_1; }
	inline void set_setter_1(DOSetter_1_t3734738918 * value)
	{
		___setter_1 = value;
		Il2CppCodeGenWriteBarrier(&___setter_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
