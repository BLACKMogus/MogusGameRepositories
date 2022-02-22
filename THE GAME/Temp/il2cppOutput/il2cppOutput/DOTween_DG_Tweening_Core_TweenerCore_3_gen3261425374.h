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
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>
struct DOGetter_1_t4025813723;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>
struct DOSetter_1_t3901936567;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t2168888377;

#include "DOTween_DG_Tweening_Tweener760404022.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions293385261.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct  TweenerCore_3_t3261425374  : public Tweener_t760404022
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector4_t2243707581  ___startValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector4_t2243707581  ___endValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector4_t2243707581  ___changeValue_56;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t293385261  ___plugOptions_57;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4025813723 * ___getter_58;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3901936567 * ___setter_59;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t2168888377 * ___tweenPlugin_60;

public:
	inline static int32_t get_offset_of_startValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3261425374, ___startValue_54)); }
	inline Vector4_t2243707581  get_startValue_54() const { return ___startValue_54; }
	inline Vector4_t2243707581 * get_address_of_startValue_54() { return &___startValue_54; }
	inline void set_startValue_54(Vector4_t2243707581  value)
	{
		___startValue_54 = value;
	}

	inline static int32_t get_offset_of_endValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3261425374, ___endValue_55)); }
	inline Vector4_t2243707581  get_endValue_55() const { return ___endValue_55; }
	inline Vector4_t2243707581 * get_address_of_endValue_55() { return &___endValue_55; }
	inline void set_endValue_55(Vector4_t2243707581  value)
	{
		___endValue_55 = value;
	}

	inline static int32_t get_offset_of_changeValue_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3261425374, ___changeValue_56)); }
	inline Vector4_t2243707581  get_changeValue_56() const { return ___changeValue_56; }
	inline Vector4_t2243707581 * get_address_of_changeValue_56() { return &___changeValue_56; }
	inline void set_changeValue_56(Vector4_t2243707581  value)
	{
		___changeValue_56 = value;
	}

	inline static int32_t get_offset_of_plugOptions_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3261425374, ___plugOptions_57)); }
	inline VectorOptions_t293385261  get_plugOptions_57() const { return ___plugOptions_57; }
	inline VectorOptions_t293385261 * get_address_of_plugOptions_57() { return &___plugOptions_57; }
	inline void set_plugOptions_57(VectorOptions_t293385261  value)
	{
		___plugOptions_57 = value;
	}

	inline static int32_t get_offset_of_getter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3261425374, ___getter_58)); }
	inline DOGetter_1_t4025813723 * get_getter_58() const { return ___getter_58; }
	inline DOGetter_1_t4025813723 ** get_address_of_getter_58() { return &___getter_58; }
	inline void set_getter_58(DOGetter_1_t4025813723 * value)
	{
		___getter_58 = value;
		Il2CppCodeGenWriteBarrier(&___getter_58, value);
	}

	inline static int32_t get_offset_of_setter_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3261425374, ___setter_59)); }
	inline DOSetter_1_t3901936567 * get_setter_59() const { return ___setter_59; }
	inline DOSetter_1_t3901936567 ** get_address_of_setter_59() { return &___setter_59; }
	inline void set_setter_59(DOSetter_1_t3901936567 * value)
	{
		___setter_59 = value;
		Il2CppCodeGenWriteBarrier(&___setter_59, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3261425374, ___tweenPlugin_60)); }
	inline ABSTweenPlugin_3_t2168888377 * get_tweenPlugin_60() const { return ___tweenPlugin_60; }
	inline ABSTweenPlugin_3_t2168888377 ** get_address_of_tweenPlugin_60() { return &___tweenPlugin_60; }
	inline void set_tweenPlugin_60(ABSTweenPlugin_3_t2168888377 * value)
	{
		___tweenPlugin_60 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_60, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
