#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// DG.Tweening.Tween
struct Tween_t278478013;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.ABSAnimationComponent
struct  ABSAnimationComponent_t2205594551  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStart
	bool ___hasOnStart_2;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnPlay
	bool ___hasOnPlay_3;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnUpdate
	bool ___hasOnUpdate_4;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStepComplete
	bool ___hasOnStepComplete_5;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnComplete
	bool ___hasOnComplete_6;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStart
	UnityEvent_t408735097 * ___onStart_7;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onPlay
	UnityEvent_t408735097 * ___onPlay_8;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onUpdate
	UnityEvent_t408735097 * ___onUpdate_9;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStepComplete
	UnityEvent_t408735097 * ___onStepComplete_10;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onComplete
	UnityEvent_t408735097 * ___onComplete_11;
	// DG.Tweening.Tween DG.Tweening.Core.ABSAnimationComponent::tween
	Tween_t278478013 * ___tween_12;

public:
	inline static int32_t get_offset_of_hasOnStart_2() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnStart_2)); }
	inline bool get_hasOnStart_2() const { return ___hasOnStart_2; }
	inline bool* get_address_of_hasOnStart_2() { return &___hasOnStart_2; }
	inline void set_hasOnStart_2(bool value)
	{
		___hasOnStart_2 = value;
	}

	inline static int32_t get_offset_of_hasOnPlay_3() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnPlay_3)); }
	inline bool get_hasOnPlay_3() const { return ___hasOnPlay_3; }
	inline bool* get_address_of_hasOnPlay_3() { return &___hasOnPlay_3; }
	inline void set_hasOnPlay_3(bool value)
	{
		___hasOnPlay_3 = value;
	}

	inline static int32_t get_offset_of_hasOnUpdate_4() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnUpdate_4)); }
	inline bool get_hasOnUpdate_4() const { return ___hasOnUpdate_4; }
	inline bool* get_address_of_hasOnUpdate_4() { return &___hasOnUpdate_4; }
	inline void set_hasOnUpdate_4(bool value)
	{
		___hasOnUpdate_4 = value;
	}

	inline static int32_t get_offset_of_hasOnStepComplete_5() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnStepComplete_5)); }
	inline bool get_hasOnStepComplete_5() const { return ___hasOnStepComplete_5; }
	inline bool* get_address_of_hasOnStepComplete_5() { return &___hasOnStepComplete_5; }
	inline void set_hasOnStepComplete_5(bool value)
	{
		___hasOnStepComplete_5 = value;
	}

	inline static int32_t get_offset_of_hasOnComplete_6() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnComplete_6)); }
	inline bool get_hasOnComplete_6() const { return ___hasOnComplete_6; }
	inline bool* get_address_of_hasOnComplete_6() { return &___hasOnComplete_6; }
	inline void set_hasOnComplete_6(bool value)
	{
		___hasOnComplete_6 = value;
	}

	inline static int32_t get_offset_of_onStart_7() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onStart_7)); }
	inline UnityEvent_t408735097 * get_onStart_7() const { return ___onStart_7; }
	inline UnityEvent_t408735097 ** get_address_of_onStart_7() { return &___onStart_7; }
	inline void set_onStart_7(UnityEvent_t408735097 * value)
	{
		___onStart_7 = value;
		Il2CppCodeGenWriteBarrier(&___onStart_7, value);
	}

	inline static int32_t get_offset_of_onPlay_8() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onPlay_8)); }
	inline UnityEvent_t408735097 * get_onPlay_8() const { return ___onPlay_8; }
	inline UnityEvent_t408735097 ** get_address_of_onPlay_8() { return &___onPlay_8; }
	inline void set_onPlay_8(UnityEvent_t408735097 * value)
	{
		___onPlay_8 = value;
		Il2CppCodeGenWriteBarrier(&___onPlay_8, value);
	}

	inline static int32_t get_offset_of_onUpdate_9() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onUpdate_9)); }
	inline UnityEvent_t408735097 * get_onUpdate_9() const { return ___onUpdate_9; }
	inline UnityEvent_t408735097 ** get_address_of_onUpdate_9() { return &___onUpdate_9; }
	inline void set_onUpdate_9(UnityEvent_t408735097 * value)
	{
		___onUpdate_9 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdate_9, value);
	}

	inline static int32_t get_offset_of_onStepComplete_10() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onStepComplete_10)); }
	inline UnityEvent_t408735097 * get_onStepComplete_10() const { return ___onStepComplete_10; }
	inline UnityEvent_t408735097 ** get_address_of_onStepComplete_10() { return &___onStepComplete_10; }
	inline void set_onStepComplete_10(UnityEvent_t408735097 * value)
	{
		___onStepComplete_10 = value;
		Il2CppCodeGenWriteBarrier(&___onStepComplete_10, value);
	}

	inline static int32_t get_offset_of_onComplete_11() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onComplete_11)); }
	inline UnityEvent_t408735097 * get_onComplete_11() const { return ___onComplete_11; }
	inline UnityEvent_t408735097 ** get_address_of_onComplete_11() { return &___onComplete_11; }
	inline void set_onComplete_11(UnityEvent_t408735097 * value)
	{
		___onComplete_11 = value;
		Il2CppCodeGenWriteBarrier(&___onComplete_11, value);
	}

	inline static int32_t get_offset_of_tween_12() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___tween_12)); }
	inline Tween_t278478013 * get_tween_12() const { return ___tween_12; }
	inline Tween_t278478013 ** get_address_of_tween_12() { return &___tween_12; }
	inline void set_tween_12(Tween_t278478013 * value)
	{
		___tween_12 = value;
		Il2CppCodeGenWriteBarrier(&___tween_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
