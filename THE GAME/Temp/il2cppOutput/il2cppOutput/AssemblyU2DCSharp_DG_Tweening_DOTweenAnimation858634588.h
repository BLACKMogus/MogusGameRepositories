#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t3819376471;

#include "DOTweenPro_DG_Tweening_Core_ABSAnimationComponent2205594551.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "DOTween_DG_Tweening_LoopType2249218064.h"
#include "DOTweenPro_DG_Tweening_Core_DOTweenAnimationType119935370.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "DOTween_DG_Tweening_RotateMode1177727514.h"
#include "DOTween_DG_Tweening_ScrambleMode385206138.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTweenAnimation
struct  DOTweenAnimation_t858634588  : public ABSAnimationComponent_t2205594551
{
public:
	// System.Single DG.Tweening.DOTweenAnimation::delay
	float ___delay_13;
	// System.Single DG.Tweening.DOTweenAnimation::duration
	float ___duration_14;
	// DG.Tweening.Ease DG.Tweening.DOTweenAnimation::easeType
	int32_t ___easeType_15;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenAnimation::easeCurve
	AnimationCurve_t3306541151 * ___easeCurve_16;
	// DG.Tweening.LoopType DG.Tweening.DOTweenAnimation::loopType
	int32_t ___loopType_17;
	// System.Int32 DG.Tweening.DOTweenAnimation::loops
	int32_t ___loops_18;
	// System.String DG.Tweening.DOTweenAnimation::id
	String_t* ___id_19;
	// System.Boolean DG.Tweening.DOTweenAnimation::isRelative
	bool ___isRelative_20;
	// System.Boolean DG.Tweening.DOTweenAnimation::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.DOTweenAnimation::isIndependentUpdate
	bool ___isIndependentUpdate_22;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoKill
	bool ___autoKill_23;
	// System.Boolean DG.Tweening.DOTweenAnimation::isActive
	bool ___isActive_24;
	// System.Boolean DG.Tweening.DOTweenAnimation::isValid
	bool ___isValid_25;
	// UnityEngine.Component DG.Tweening.DOTweenAnimation::target
	Component_t3819376471 * ___target_26;
	// DG.Tweening.Core.DOTweenAnimationType DG.Tweening.DOTweenAnimation::animationType
	int32_t ___animationType_27;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoPlay
	bool ___autoPlay_28;
	// System.Single DG.Tweening.DOTweenAnimation::endValueFloat
	float ___endValueFloat_29;
	// UnityEngine.Vector3 DG.Tweening.DOTweenAnimation::endValueV3
	Vector3_t2243707580  ___endValueV3_30;
	// UnityEngine.Color DG.Tweening.DOTweenAnimation::endValueColor
	Color_t2020392075  ___endValueColor_31;
	// System.String DG.Tweening.DOTweenAnimation::endValueString
	String_t* ___endValueString_32;
	// UnityEngine.Rect DG.Tweening.DOTweenAnimation::endValueRect
	Rect_t3681755626  ___endValueRect_33;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool0
	bool ___optionalBool0_34;
	// System.Single DG.Tweening.DOTweenAnimation::optionalFloat0
	float ___optionalFloat0_35;
	// System.Int32 DG.Tweening.DOTweenAnimation::optionalInt0
	int32_t ___optionalInt0_36;
	// DG.Tweening.RotateMode DG.Tweening.DOTweenAnimation::optionalRotationMode
	int32_t ___optionalRotationMode_37;
	// DG.Tweening.ScrambleMode DG.Tweening.DOTweenAnimation::optionalScrambleMode
	int32_t ___optionalScrambleMode_38;
	// System.String DG.Tweening.DOTweenAnimation::optionalString
	String_t* ___optionalString_39;
	// System.Int32 DG.Tweening.DOTweenAnimation::_playCount
	int32_t ____playCount_40;

public:
	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___delay_13)); }
	inline float get_delay_13() const { return ___delay_13; }
	inline float* get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(float value)
	{
		___delay_13 = value;
	}

	inline static int32_t get_offset_of_duration_14() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___duration_14)); }
	inline float get_duration_14() const { return ___duration_14; }
	inline float* get_address_of_duration_14() { return &___duration_14; }
	inline void set_duration_14(float value)
	{
		___duration_14 = value;
	}

	inline static int32_t get_offset_of_easeType_15() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___easeType_15)); }
	inline int32_t get_easeType_15() const { return ___easeType_15; }
	inline int32_t* get_address_of_easeType_15() { return &___easeType_15; }
	inline void set_easeType_15(int32_t value)
	{
		___easeType_15 = value;
	}

	inline static int32_t get_offset_of_easeCurve_16() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___easeCurve_16)); }
	inline AnimationCurve_t3306541151 * get_easeCurve_16() const { return ___easeCurve_16; }
	inline AnimationCurve_t3306541151 ** get_address_of_easeCurve_16() { return &___easeCurve_16; }
	inline void set_easeCurve_16(AnimationCurve_t3306541151 * value)
	{
		___easeCurve_16 = value;
		Il2CppCodeGenWriteBarrier(&___easeCurve_16, value);
	}

	inline static int32_t get_offset_of_loopType_17() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___loopType_17)); }
	inline int32_t get_loopType_17() const { return ___loopType_17; }
	inline int32_t* get_address_of_loopType_17() { return &___loopType_17; }
	inline void set_loopType_17(int32_t value)
	{
		___loopType_17 = value;
	}

	inline static int32_t get_offset_of_loops_18() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___loops_18)); }
	inline int32_t get_loops_18() const { return ___loops_18; }
	inline int32_t* get_address_of_loops_18() { return &___loops_18; }
	inline void set_loops_18(int32_t value)
	{
		___loops_18 = value;
	}

	inline static int32_t get_offset_of_id_19() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___id_19)); }
	inline String_t* get_id_19() const { return ___id_19; }
	inline String_t** get_address_of_id_19() { return &___id_19; }
	inline void set_id_19(String_t* value)
	{
		___id_19 = value;
		Il2CppCodeGenWriteBarrier(&___id_19, value);
	}

	inline static int32_t get_offset_of_isRelative_20() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___isRelative_20)); }
	inline bool get_isRelative_20() const { return ___isRelative_20; }
	inline bool* get_address_of_isRelative_20() { return &___isRelative_20; }
	inline void set_isRelative_20(bool value)
	{
		___isRelative_20 = value;
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_22() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___isIndependentUpdate_22)); }
	inline bool get_isIndependentUpdate_22() const { return ___isIndependentUpdate_22; }
	inline bool* get_address_of_isIndependentUpdate_22() { return &___isIndependentUpdate_22; }
	inline void set_isIndependentUpdate_22(bool value)
	{
		___isIndependentUpdate_22 = value;
	}

	inline static int32_t get_offset_of_autoKill_23() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___autoKill_23)); }
	inline bool get_autoKill_23() const { return ___autoKill_23; }
	inline bool* get_address_of_autoKill_23() { return &___autoKill_23; }
	inline void set_autoKill_23(bool value)
	{
		___autoKill_23 = value;
	}

	inline static int32_t get_offset_of_isActive_24() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___isActive_24)); }
	inline bool get_isActive_24() const { return ___isActive_24; }
	inline bool* get_address_of_isActive_24() { return &___isActive_24; }
	inline void set_isActive_24(bool value)
	{
		___isActive_24 = value;
	}

	inline static int32_t get_offset_of_isValid_25() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___isValid_25)); }
	inline bool get_isValid_25() const { return ___isValid_25; }
	inline bool* get_address_of_isValid_25() { return &___isValid_25; }
	inline void set_isValid_25(bool value)
	{
		___isValid_25 = value;
	}

	inline static int32_t get_offset_of_target_26() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___target_26)); }
	inline Component_t3819376471 * get_target_26() const { return ___target_26; }
	inline Component_t3819376471 ** get_address_of_target_26() { return &___target_26; }
	inline void set_target_26(Component_t3819376471 * value)
	{
		___target_26 = value;
		Il2CppCodeGenWriteBarrier(&___target_26, value);
	}

	inline static int32_t get_offset_of_animationType_27() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___animationType_27)); }
	inline int32_t get_animationType_27() const { return ___animationType_27; }
	inline int32_t* get_address_of_animationType_27() { return &___animationType_27; }
	inline void set_animationType_27(int32_t value)
	{
		___animationType_27 = value;
	}

	inline static int32_t get_offset_of_autoPlay_28() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___autoPlay_28)); }
	inline bool get_autoPlay_28() const { return ___autoPlay_28; }
	inline bool* get_address_of_autoPlay_28() { return &___autoPlay_28; }
	inline void set_autoPlay_28(bool value)
	{
		___autoPlay_28 = value;
	}

	inline static int32_t get_offset_of_endValueFloat_29() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___endValueFloat_29)); }
	inline float get_endValueFloat_29() const { return ___endValueFloat_29; }
	inline float* get_address_of_endValueFloat_29() { return &___endValueFloat_29; }
	inline void set_endValueFloat_29(float value)
	{
		___endValueFloat_29 = value;
	}

	inline static int32_t get_offset_of_endValueV3_30() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___endValueV3_30)); }
	inline Vector3_t2243707580  get_endValueV3_30() const { return ___endValueV3_30; }
	inline Vector3_t2243707580 * get_address_of_endValueV3_30() { return &___endValueV3_30; }
	inline void set_endValueV3_30(Vector3_t2243707580  value)
	{
		___endValueV3_30 = value;
	}

	inline static int32_t get_offset_of_endValueColor_31() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___endValueColor_31)); }
	inline Color_t2020392075  get_endValueColor_31() const { return ___endValueColor_31; }
	inline Color_t2020392075 * get_address_of_endValueColor_31() { return &___endValueColor_31; }
	inline void set_endValueColor_31(Color_t2020392075  value)
	{
		___endValueColor_31 = value;
	}

	inline static int32_t get_offset_of_endValueString_32() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___endValueString_32)); }
	inline String_t* get_endValueString_32() const { return ___endValueString_32; }
	inline String_t** get_address_of_endValueString_32() { return &___endValueString_32; }
	inline void set_endValueString_32(String_t* value)
	{
		___endValueString_32 = value;
		Il2CppCodeGenWriteBarrier(&___endValueString_32, value);
	}

	inline static int32_t get_offset_of_endValueRect_33() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___endValueRect_33)); }
	inline Rect_t3681755626  get_endValueRect_33() const { return ___endValueRect_33; }
	inline Rect_t3681755626 * get_address_of_endValueRect_33() { return &___endValueRect_33; }
	inline void set_endValueRect_33(Rect_t3681755626  value)
	{
		___endValueRect_33 = value;
	}

	inline static int32_t get_offset_of_optionalBool0_34() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___optionalBool0_34)); }
	inline bool get_optionalBool0_34() const { return ___optionalBool0_34; }
	inline bool* get_address_of_optionalBool0_34() { return &___optionalBool0_34; }
	inline void set_optionalBool0_34(bool value)
	{
		___optionalBool0_34 = value;
	}

	inline static int32_t get_offset_of_optionalFloat0_35() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___optionalFloat0_35)); }
	inline float get_optionalFloat0_35() const { return ___optionalFloat0_35; }
	inline float* get_address_of_optionalFloat0_35() { return &___optionalFloat0_35; }
	inline void set_optionalFloat0_35(float value)
	{
		___optionalFloat0_35 = value;
	}

	inline static int32_t get_offset_of_optionalInt0_36() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___optionalInt0_36)); }
	inline int32_t get_optionalInt0_36() const { return ___optionalInt0_36; }
	inline int32_t* get_address_of_optionalInt0_36() { return &___optionalInt0_36; }
	inline void set_optionalInt0_36(int32_t value)
	{
		___optionalInt0_36 = value;
	}

	inline static int32_t get_offset_of_optionalRotationMode_37() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___optionalRotationMode_37)); }
	inline int32_t get_optionalRotationMode_37() const { return ___optionalRotationMode_37; }
	inline int32_t* get_address_of_optionalRotationMode_37() { return &___optionalRotationMode_37; }
	inline void set_optionalRotationMode_37(int32_t value)
	{
		___optionalRotationMode_37 = value;
	}

	inline static int32_t get_offset_of_optionalScrambleMode_38() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___optionalScrambleMode_38)); }
	inline int32_t get_optionalScrambleMode_38() const { return ___optionalScrambleMode_38; }
	inline int32_t* get_address_of_optionalScrambleMode_38() { return &___optionalScrambleMode_38; }
	inline void set_optionalScrambleMode_38(int32_t value)
	{
		___optionalScrambleMode_38 = value;
	}

	inline static int32_t get_offset_of_optionalString_39() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ___optionalString_39)); }
	inline String_t* get_optionalString_39() const { return ___optionalString_39; }
	inline String_t** get_address_of_optionalString_39() { return &___optionalString_39; }
	inline void set_optionalString_39(String_t* value)
	{
		___optionalString_39 = value;
		Il2CppCodeGenWriteBarrier(&___optionalString_39, value);
	}

	inline static int32_t get_offset_of__playCount_40() { return static_cast<int32_t>(offsetof(DOTweenAnimation_t858634588, ____playCount_40)); }
	inline int32_t get__playCount_40() const { return ____playCount_40; }
	inline int32_t* get_address_of__playCount_40() { return &____playCount_40; }
	inline void set__playCount_40(int32_t value)
	{
		____playCount_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
