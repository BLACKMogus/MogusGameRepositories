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
// DG.Tweening.Core.DOGetter`1<System.UInt32>
struct DOGetter_1_t3931788163;
// DG.Tweening.Core.DOSetter`1<System.UInt32>
struct DOSetter_1_t3807911007;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t797629457;

#include "DOTween_DG_Tweening_Tweener760404022.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions2508431845.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>
struct  TweenerCore_3_t1890166454  : public Tweener_t760404022
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	uint32_t ___startValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	uint32_t ___endValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	uint32_t ___changeValue_56;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_t2508431845  ___plugOptions_57;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t3931788163 * ___getter_58;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3807911007 * ___setter_59;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t797629457 * ___tweenPlugin_60;

public:
	inline static int32_t get_offset_of_startValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1890166454, ___startValue_54)); }
	inline uint32_t get_startValue_54() const { return ___startValue_54; }
	inline uint32_t* get_address_of_startValue_54() { return &___startValue_54; }
	inline void set_startValue_54(uint32_t value)
	{
		___startValue_54 = value;
	}

	inline static int32_t get_offset_of_endValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1890166454, ___endValue_55)); }
	inline uint32_t get_endValue_55() const { return ___endValue_55; }
	inline uint32_t* get_address_of_endValue_55() { return &___endValue_55; }
	inline void set_endValue_55(uint32_t value)
	{
		___endValue_55 = value;
	}

	inline static int32_t get_offset_of_changeValue_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1890166454, ___changeValue_56)); }
	inline uint32_t get_changeValue_56() const { return ___changeValue_56; }
	inline uint32_t* get_address_of_changeValue_56() { return &___changeValue_56; }
	inline void set_changeValue_56(uint32_t value)
	{
		___changeValue_56 = value;
	}

	inline static int32_t get_offset_of_plugOptions_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1890166454, ___plugOptions_57)); }
	inline NoOptions_t2508431845  get_plugOptions_57() const { return ___plugOptions_57; }
	inline NoOptions_t2508431845 * get_address_of_plugOptions_57() { return &___plugOptions_57; }
	inline void set_plugOptions_57(NoOptions_t2508431845  value)
	{
		___plugOptions_57 = value;
	}

	inline static int32_t get_offset_of_getter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1890166454, ___getter_58)); }
	inline DOGetter_1_t3931788163 * get_getter_58() const { return ___getter_58; }
	inline DOGetter_1_t3931788163 ** get_address_of_getter_58() { return &___getter_58; }
	inline void set_getter_58(DOGetter_1_t3931788163 * value)
	{
		___getter_58 = value;
		Il2CppCodeGenWriteBarrier(&___getter_58, value);
	}

	inline static int32_t get_offset_of_setter_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1890166454, ___setter_59)); }
	inline DOSetter_1_t3807911007 * get_setter_59() const { return ___setter_59; }
	inline DOSetter_1_t3807911007 ** get_address_of_setter_59() { return &___setter_59; }
	inline void set_setter_59(DOSetter_1_t3807911007 * value)
	{
		___setter_59 = value;
		Il2CppCodeGenWriteBarrier(&___setter_59, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1890166454, ___tweenPlugin_60)); }
	inline ABSTweenPlugin_3_t797629457 * get_tweenPlugin_60() const { return ___tweenPlugin_60; }
	inline ABSTweenPlugin_3_t797629457 ** get_address_of_tweenPlugin_60() { return &___tweenPlugin_60; }
	inline void set_tweenPlugin_60(ABSTweenPlugin_3_t797629457 * value)
	{
		___tweenPlugin_60 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_60, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
