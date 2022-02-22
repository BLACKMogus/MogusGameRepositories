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

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "DOTween_DG_Tweening_LogBehaviour3505725029.h"
#include "DOTween_DG_Tweening_AutoPlay2503223703.h"
#include "DOTween_DG_Tweening_UpdateType3357224513.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "DOTween_DG_Tweening_LoopType2249218064.h"
#include "DOTween_DG_Tweening_Core_DOTweenSettings_SettingsLo514961325.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.DOTweenSettings
struct  DOTweenSettings_t873123119  : public ScriptableObject_t1975622470
{
public:
	// System.Boolean DG.Tweening.Core.DOTweenSettings::useSafeMode
	bool ___useSafeMode_3;
	// System.Boolean DG.Tweening.Core.DOTweenSettings::showUnityEditorReport
	bool ___showUnityEditorReport_4;
	// DG.Tweening.LogBehaviour DG.Tweening.Core.DOTweenSettings::logBehaviour
	int32_t ___logBehaviour_5;
	// System.Boolean DG.Tweening.Core.DOTweenSettings::drawGizmos
	bool ___drawGizmos_6;
	// System.Boolean DG.Tweening.Core.DOTweenSettings::defaultRecyclable
	bool ___defaultRecyclable_7;
	// DG.Tweening.AutoPlay DG.Tweening.Core.DOTweenSettings::defaultAutoPlay
	int32_t ___defaultAutoPlay_8;
	// DG.Tweening.UpdateType DG.Tweening.Core.DOTweenSettings::defaultUpdateType
	int32_t ___defaultUpdateType_9;
	// System.Boolean DG.Tweening.Core.DOTweenSettings::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_10;
	// DG.Tweening.Ease DG.Tweening.Core.DOTweenSettings::defaultEaseType
	int32_t ___defaultEaseType_11;
	// System.Single DG.Tweening.Core.DOTweenSettings::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_12;
	// System.Single DG.Tweening.Core.DOTweenSettings::defaultEasePeriod
	float ___defaultEasePeriod_13;
	// System.Boolean DG.Tweening.Core.DOTweenSettings::defaultAutoKill
	bool ___defaultAutoKill_14;
	// DG.Tweening.LoopType DG.Tweening.Core.DOTweenSettings::defaultLoopType
	int32_t ___defaultLoopType_15;
	// DG.Tweening.Core.DOTweenSettings/SettingsLocation DG.Tweening.Core.DOTweenSettings::storeSettingsLocation
	int32_t ___storeSettingsLocation_16;

public:
	inline static int32_t get_offset_of_useSafeMode_3() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___useSafeMode_3)); }
	inline bool get_useSafeMode_3() const { return ___useSafeMode_3; }
	inline bool* get_address_of_useSafeMode_3() { return &___useSafeMode_3; }
	inline void set_useSafeMode_3(bool value)
	{
		___useSafeMode_3 = value;
	}

	inline static int32_t get_offset_of_showUnityEditorReport_4() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___showUnityEditorReport_4)); }
	inline bool get_showUnityEditorReport_4() const { return ___showUnityEditorReport_4; }
	inline bool* get_address_of_showUnityEditorReport_4() { return &___showUnityEditorReport_4; }
	inline void set_showUnityEditorReport_4(bool value)
	{
		___showUnityEditorReport_4 = value;
	}

	inline static int32_t get_offset_of_logBehaviour_5() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___logBehaviour_5)); }
	inline int32_t get_logBehaviour_5() const { return ___logBehaviour_5; }
	inline int32_t* get_address_of_logBehaviour_5() { return &___logBehaviour_5; }
	inline void set_logBehaviour_5(int32_t value)
	{
		___logBehaviour_5 = value;
	}

	inline static int32_t get_offset_of_drawGizmos_6() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___drawGizmos_6)); }
	inline bool get_drawGizmos_6() const { return ___drawGizmos_6; }
	inline bool* get_address_of_drawGizmos_6() { return &___drawGizmos_6; }
	inline void set_drawGizmos_6(bool value)
	{
		___drawGizmos_6 = value;
	}

	inline static int32_t get_offset_of_defaultRecyclable_7() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultRecyclable_7)); }
	inline bool get_defaultRecyclable_7() const { return ___defaultRecyclable_7; }
	inline bool* get_address_of_defaultRecyclable_7() { return &___defaultRecyclable_7; }
	inline void set_defaultRecyclable_7(bool value)
	{
		___defaultRecyclable_7 = value;
	}

	inline static int32_t get_offset_of_defaultAutoPlay_8() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultAutoPlay_8)); }
	inline int32_t get_defaultAutoPlay_8() const { return ___defaultAutoPlay_8; }
	inline int32_t* get_address_of_defaultAutoPlay_8() { return &___defaultAutoPlay_8; }
	inline void set_defaultAutoPlay_8(int32_t value)
	{
		___defaultAutoPlay_8 = value;
	}

	inline static int32_t get_offset_of_defaultUpdateType_9() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultUpdateType_9)); }
	inline int32_t get_defaultUpdateType_9() const { return ___defaultUpdateType_9; }
	inline int32_t* get_address_of_defaultUpdateType_9() { return &___defaultUpdateType_9; }
	inline void set_defaultUpdateType_9(int32_t value)
	{
		___defaultUpdateType_9 = value;
	}

	inline static int32_t get_offset_of_defaultTimeScaleIndependent_10() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultTimeScaleIndependent_10)); }
	inline bool get_defaultTimeScaleIndependent_10() const { return ___defaultTimeScaleIndependent_10; }
	inline bool* get_address_of_defaultTimeScaleIndependent_10() { return &___defaultTimeScaleIndependent_10; }
	inline void set_defaultTimeScaleIndependent_10(bool value)
	{
		___defaultTimeScaleIndependent_10 = value;
	}

	inline static int32_t get_offset_of_defaultEaseType_11() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultEaseType_11)); }
	inline int32_t get_defaultEaseType_11() const { return ___defaultEaseType_11; }
	inline int32_t* get_address_of_defaultEaseType_11() { return &___defaultEaseType_11; }
	inline void set_defaultEaseType_11(int32_t value)
	{
		___defaultEaseType_11 = value;
	}

	inline static int32_t get_offset_of_defaultEaseOvershootOrAmplitude_12() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultEaseOvershootOrAmplitude_12)); }
	inline float get_defaultEaseOvershootOrAmplitude_12() const { return ___defaultEaseOvershootOrAmplitude_12; }
	inline float* get_address_of_defaultEaseOvershootOrAmplitude_12() { return &___defaultEaseOvershootOrAmplitude_12; }
	inline void set_defaultEaseOvershootOrAmplitude_12(float value)
	{
		___defaultEaseOvershootOrAmplitude_12 = value;
	}

	inline static int32_t get_offset_of_defaultEasePeriod_13() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultEasePeriod_13)); }
	inline float get_defaultEasePeriod_13() const { return ___defaultEasePeriod_13; }
	inline float* get_address_of_defaultEasePeriod_13() { return &___defaultEasePeriod_13; }
	inline void set_defaultEasePeriod_13(float value)
	{
		___defaultEasePeriod_13 = value;
	}

	inline static int32_t get_offset_of_defaultAutoKill_14() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultAutoKill_14)); }
	inline bool get_defaultAutoKill_14() const { return ___defaultAutoKill_14; }
	inline bool* get_address_of_defaultAutoKill_14() { return &___defaultAutoKill_14; }
	inline void set_defaultAutoKill_14(bool value)
	{
		___defaultAutoKill_14 = value;
	}

	inline static int32_t get_offset_of_defaultLoopType_15() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___defaultLoopType_15)); }
	inline int32_t get_defaultLoopType_15() const { return ___defaultLoopType_15; }
	inline int32_t* get_address_of_defaultLoopType_15() { return &___defaultLoopType_15; }
	inline void set_defaultLoopType_15(int32_t value)
	{
		___defaultLoopType_15 = value;
	}

	inline static int32_t get_offset_of_storeSettingsLocation_16() { return static_cast<int32_t>(offsetof(DOTweenSettings_t873123119, ___storeSettingsLocation_16)); }
	inline int32_t get_storeSettingsLocation_16() const { return ___storeSettingsLocation_16; }
	inline int32_t* get_address_of_storeSettingsLocation_16() { return &___storeSettingsLocation_16; }
	inline void set_storeSettingsLocation_16(int32_t value)
	{
		___storeSettingsLocation_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
