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
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t2828565993;

#include "DOTweenPro_DG_Tweening_Core_ABSAnimationComponent2205594551.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "DOTween_DG_Tweening_LoopType2249218064.h"
#include "DOTween_DG_Tweening_Plugins_Options_OrientType1755667719.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "DOTween_DG_Tweening_PathMode1545785466.h"
#include "DOTween_DG_Tweening_AxisConstraint1244566668.h"
#include "DOTween_DG_Tweening_PathType2815988833.h"
#include "DOTweenPro_DG_Tweening_HandlesType3201532857.h"
#include "DOTweenPro_DG_Tweening_HandlesDrawMode3273484032.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTweenPath
struct  DOTweenPath_t1397145371  : public ABSAnimationComponent_t2205594551
{
public:
	// System.Single DG.Tweening.DOTweenPath::delay
	float ___delay_13;
	// System.Single DG.Tweening.DOTweenPath::duration
	float ___duration_14;
	// DG.Tweening.Ease DG.Tweening.DOTweenPath::easeType
	int32_t ___easeType_15;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenPath::easeCurve
	AnimationCurve_t3306541151 * ___easeCurve_16;
	// System.Int32 DG.Tweening.DOTweenPath::loops
	int32_t ___loops_17;
	// DG.Tweening.LoopType DG.Tweening.DOTweenPath::loopType
	int32_t ___loopType_18;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.DOTweenPath::orientType
	int32_t ___orientType_19;
	// UnityEngine.Transform DG.Tweening.DOTweenPath::lookAtTransform
	Transform_t3275118058 * ___lookAtTransform_20;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::lookAtPosition
	Vector3_t2243707580  ___lookAtPosition_21;
	// System.Single DG.Tweening.DOTweenPath::lookAhead
	float ___lookAhead_22;
	// System.Boolean DG.Tweening.DOTweenPath::autoPlay
	bool ___autoPlay_23;
	// System.Boolean DG.Tweening.DOTweenPath::autoKill
	bool ___autoKill_24;
	// System.Boolean DG.Tweening.DOTweenPath::relative
	bool ___relative_25;
	// System.Boolean DG.Tweening.DOTweenPath::isLocal
	bool ___isLocal_26;
	// System.Boolean DG.Tweening.DOTweenPath::isClosedPath
	bool ___isClosedPath_27;
	// System.Int32 DG.Tweening.DOTweenPath::pathResolution
	int32_t ___pathResolution_28;
	// DG.Tweening.PathMode DG.Tweening.DOTweenPath::pathMode
	int32_t ___pathMode_29;
	// DG.Tweening.AxisConstraint DG.Tweening.DOTweenPath::lockRotation
	int32_t ___lockRotation_30;
	// System.Boolean DG.Tweening.DOTweenPath::assignForwardAndUp
	bool ___assignForwardAndUp_31;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::forwardDirection
	Vector3_t2243707580  ___forwardDirection_32;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::upDirection
	Vector3_t2243707580  ___upDirection_33;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DG.Tweening.DOTweenPath::wps
	List_1_t1612828712 * ___wps_34;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DG.Tweening.DOTweenPath::fullWps
	List_1_t1612828712 * ___fullWps_35;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.DOTweenPath::path
	Path_t2828565993 * ___path_36;
	// DG.Tweening.PathType DG.Tweening.DOTweenPath::pathType
	int32_t ___pathType_37;
	// DG.Tweening.HandlesType DG.Tweening.DOTweenPath::handlesType
	int32_t ___handlesType_38;
	// System.Boolean DG.Tweening.DOTweenPath::livePreview
	bool ___livePreview_39;
	// DG.Tweening.HandlesDrawMode DG.Tweening.DOTweenPath::handlesDrawMode
	int32_t ___handlesDrawMode_40;
	// System.Single DG.Tweening.DOTweenPath::perspectiveHandleSize
	float ___perspectiveHandleSize_41;
	// System.Boolean DG.Tweening.DOTweenPath::showIndexes
	bool ___showIndexes_42;
	// UnityEngine.Color DG.Tweening.DOTweenPath::pathColor
	Color_t2020392075  ___pathColor_43;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::lastSrcPosition
	Vector3_t2243707580  ___lastSrcPosition_44;
	// System.Boolean DG.Tweening.DOTweenPath::wpsDropdown
	bool ___wpsDropdown_45;

public:
	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___delay_13)); }
	inline float get_delay_13() const { return ___delay_13; }
	inline float* get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(float value)
	{
		___delay_13 = value;
	}

	inline static int32_t get_offset_of_duration_14() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___duration_14)); }
	inline float get_duration_14() const { return ___duration_14; }
	inline float* get_address_of_duration_14() { return &___duration_14; }
	inline void set_duration_14(float value)
	{
		___duration_14 = value;
	}

	inline static int32_t get_offset_of_easeType_15() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___easeType_15)); }
	inline int32_t get_easeType_15() const { return ___easeType_15; }
	inline int32_t* get_address_of_easeType_15() { return &___easeType_15; }
	inline void set_easeType_15(int32_t value)
	{
		___easeType_15 = value;
	}

	inline static int32_t get_offset_of_easeCurve_16() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___easeCurve_16)); }
	inline AnimationCurve_t3306541151 * get_easeCurve_16() const { return ___easeCurve_16; }
	inline AnimationCurve_t3306541151 ** get_address_of_easeCurve_16() { return &___easeCurve_16; }
	inline void set_easeCurve_16(AnimationCurve_t3306541151 * value)
	{
		___easeCurve_16 = value;
		Il2CppCodeGenWriteBarrier(&___easeCurve_16, value);
	}

	inline static int32_t get_offset_of_loops_17() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___loops_17)); }
	inline int32_t get_loops_17() const { return ___loops_17; }
	inline int32_t* get_address_of_loops_17() { return &___loops_17; }
	inline void set_loops_17(int32_t value)
	{
		___loops_17 = value;
	}

	inline static int32_t get_offset_of_loopType_18() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___loopType_18)); }
	inline int32_t get_loopType_18() const { return ___loopType_18; }
	inline int32_t* get_address_of_loopType_18() { return &___loopType_18; }
	inline void set_loopType_18(int32_t value)
	{
		___loopType_18 = value;
	}

	inline static int32_t get_offset_of_orientType_19() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___orientType_19)); }
	inline int32_t get_orientType_19() const { return ___orientType_19; }
	inline int32_t* get_address_of_orientType_19() { return &___orientType_19; }
	inline void set_orientType_19(int32_t value)
	{
		___orientType_19 = value;
	}

	inline static int32_t get_offset_of_lookAtTransform_20() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lookAtTransform_20)); }
	inline Transform_t3275118058 * get_lookAtTransform_20() const { return ___lookAtTransform_20; }
	inline Transform_t3275118058 ** get_address_of_lookAtTransform_20() { return &___lookAtTransform_20; }
	inline void set_lookAtTransform_20(Transform_t3275118058 * value)
	{
		___lookAtTransform_20 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtTransform_20, value);
	}

	inline static int32_t get_offset_of_lookAtPosition_21() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lookAtPosition_21)); }
	inline Vector3_t2243707580  get_lookAtPosition_21() const { return ___lookAtPosition_21; }
	inline Vector3_t2243707580 * get_address_of_lookAtPosition_21() { return &___lookAtPosition_21; }
	inline void set_lookAtPosition_21(Vector3_t2243707580  value)
	{
		___lookAtPosition_21 = value;
	}

	inline static int32_t get_offset_of_lookAhead_22() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lookAhead_22)); }
	inline float get_lookAhead_22() const { return ___lookAhead_22; }
	inline float* get_address_of_lookAhead_22() { return &___lookAhead_22; }
	inline void set_lookAhead_22(float value)
	{
		___lookAhead_22 = value;
	}

	inline static int32_t get_offset_of_autoPlay_23() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___autoPlay_23)); }
	inline bool get_autoPlay_23() const { return ___autoPlay_23; }
	inline bool* get_address_of_autoPlay_23() { return &___autoPlay_23; }
	inline void set_autoPlay_23(bool value)
	{
		___autoPlay_23 = value;
	}

	inline static int32_t get_offset_of_autoKill_24() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___autoKill_24)); }
	inline bool get_autoKill_24() const { return ___autoKill_24; }
	inline bool* get_address_of_autoKill_24() { return &___autoKill_24; }
	inline void set_autoKill_24(bool value)
	{
		___autoKill_24 = value;
	}

	inline static int32_t get_offset_of_relative_25() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___relative_25)); }
	inline bool get_relative_25() const { return ___relative_25; }
	inline bool* get_address_of_relative_25() { return &___relative_25; }
	inline void set_relative_25(bool value)
	{
		___relative_25 = value;
	}

	inline static int32_t get_offset_of_isLocal_26() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___isLocal_26)); }
	inline bool get_isLocal_26() const { return ___isLocal_26; }
	inline bool* get_address_of_isLocal_26() { return &___isLocal_26; }
	inline void set_isLocal_26(bool value)
	{
		___isLocal_26 = value;
	}

	inline static int32_t get_offset_of_isClosedPath_27() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___isClosedPath_27)); }
	inline bool get_isClosedPath_27() const { return ___isClosedPath_27; }
	inline bool* get_address_of_isClosedPath_27() { return &___isClosedPath_27; }
	inline void set_isClosedPath_27(bool value)
	{
		___isClosedPath_27 = value;
	}

	inline static int32_t get_offset_of_pathResolution_28() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___pathResolution_28)); }
	inline int32_t get_pathResolution_28() const { return ___pathResolution_28; }
	inline int32_t* get_address_of_pathResolution_28() { return &___pathResolution_28; }
	inline void set_pathResolution_28(int32_t value)
	{
		___pathResolution_28 = value;
	}

	inline static int32_t get_offset_of_pathMode_29() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___pathMode_29)); }
	inline int32_t get_pathMode_29() const { return ___pathMode_29; }
	inline int32_t* get_address_of_pathMode_29() { return &___pathMode_29; }
	inline void set_pathMode_29(int32_t value)
	{
		___pathMode_29 = value;
	}

	inline static int32_t get_offset_of_lockRotation_30() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lockRotation_30)); }
	inline int32_t get_lockRotation_30() const { return ___lockRotation_30; }
	inline int32_t* get_address_of_lockRotation_30() { return &___lockRotation_30; }
	inline void set_lockRotation_30(int32_t value)
	{
		___lockRotation_30 = value;
	}

	inline static int32_t get_offset_of_assignForwardAndUp_31() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___assignForwardAndUp_31)); }
	inline bool get_assignForwardAndUp_31() const { return ___assignForwardAndUp_31; }
	inline bool* get_address_of_assignForwardAndUp_31() { return &___assignForwardAndUp_31; }
	inline void set_assignForwardAndUp_31(bool value)
	{
		___assignForwardAndUp_31 = value;
	}

	inline static int32_t get_offset_of_forwardDirection_32() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___forwardDirection_32)); }
	inline Vector3_t2243707580  get_forwardDirection_32() const { return ___forwardDirection_32; }
	inline Vector3_t2243707580 * get_address_of_forwardDirection_32() { return &___forwardDirection_32; }
	inline void set_forwardDirection_32(Vector3_t2243707580  value)
	{
		___forwardDirection_32 = value;
	}

	inline static int32_t get_offset_of_upDirection_33() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___upDirection_33)); }
	inline Vector3_t2243707580  get_upDirection_33() const { return ___upDirection_33; }
	inline Vector3_t2243707580 * get_address_of_upDirection_33() { return &___upDirection_33; }
	inline void set_upDirection_33(Vector3_t2243707580  value)
	{
		___upDirection_33 = value;
	}

	inline static int32_t get_offset_of_wps_34() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___wps_34)); }
	inline List_1_t1612828712 * get_wps_34() const { return ___wps_34; }
	inline List_1_t1612828712 ** get_address_of_wps_34() { return &___wps_34; }
	inline void set_wps_34(List_1_t1612828712 * value)
	{
		___wps_34 = value;
		Il2CppCodeGenWriteBarrier(&___wps_34, value);
	}

	inline static int32_t get_offset_of_fullWps_35() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___fullWps_35)); }
	inline List_1_t1612828712 * get_fullWps_35() const { return ___fullWps_35; }
	inline List_1_t1612828712 ** get_address_of_fullWps_35() { return &___fullWps_35; }
	inline void set_fullWps_35(List_1_t1612828712 * value)
	{
		___fullWps_35 = value;
		Il2CppCodeGenWriteBarrier(&___fullWps_35, value);
	}

	inline static int32_t get_offset_of_path_36() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___path_36)); }
	inline Path_t2828565993 * get_path_36() const { return ___path_36; }
	inline Path_t2828565993 ** get_address_of_path_36() { return &___path_36; }
	inline void set_path_36(Path_t2828565993 * value)
	{
		___path_36 = value;
		Il2CppCodeGenWriteBarrier(&___path_36, value);
	}

	inline static int32_t get_offset_of_pathType_37() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___pathType_37)); }
	inline int32_t get_pathType_37() const { return ___pathType_37; }
	inline int32_t* get_address_of_pathType_37() { return &___pathType_37; }
	inline void set_pathType_37(int32_t value)
	{
		___pathType_37 = value;
	}

	inline static int32_t get_offset_of_handlesType_38() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___handlesType_38)); }
	inline int32_t get_handlesType_38() const { return ___handlesType_38; }
	inline int32_t* get_address_of_handlesType_38() { return &___handlesType_38; }
	inline void set_handlesType_38(int32_t value)
	{
		___handlesType_38 = value;
	}

	inline static int32_t get_offset_of_livePreview_39() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___livePreview_39)); }
	inline bool get_livePreview_39() const { return ___livePreview_39; }
	inline bool* get_address_of_livePreview_39() { return &___livePreview_39; }
	inline void set_livePreview_39(bool value)
	{
		___livePreview_39 = value;
	}

	inline static int32_t get_offset_of_handlesDrawMode_40() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___handlesDrawMode_40)); }
	inline int32_t get_handlesDrawMode_40() const { return ___handlesDrawMode_40; }
	inline int32_t* get_address_of_handlesDrawMode_40() { return &___handlesDrawMode_40; }
	inline void set_handlesDrawMode_40(int32_t value)
	{
		___handlesDrawMode_40 = value;
	}

	inline static int32_t get_offset_of_perspectiveHandleSize_41() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___perspectiveHandleSize_41)); }
	inline float get_perspectiveHandleSize_41() const { return ___perspectiveHandleSize_41; }
	inline float* get_address_of_perspectiveHandleSize_41() { return &___perspectiveHandleSize_41; }
	inline void set_perspectiveHandleSize_41(float value)
	{
		___perspectiveHandleSize_41 = value;
	}

	inline static int32_t get_offset_of_showIndexes_42() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___showIndexes_42)); }
	inline bool get_showIndexes_42() const { return ___showIndexes_42; }
	inline bool* get_address_of_showIndexes_42() { return &___showIndexes_42; }
	inline void set_showIndexes_42(bool value)
	{
		___showIndexes_42 = value;
	}

	inline static int32_t get_offset_of_pathColor_43() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___pathColor_43)); }
	inline Color_t2020392075  get_pathColor_43() const { return ___pathColor_43; }
	inline Color_t2020392075 * get_address_of_pathColor_43() { return &___pathColor_43; }
	inline void set_pathColor_43(Color_t2020392075  value)
	{
		___pathColor_43 = value;
	}

	inline static int32_t get_offset_of_lastSrcPosition_44() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lastSrcPosition_44)); }
	inline Vector3_t2243707580  get_lastSrcPosition_44() const { return ___lastSrcPosition_44; }
	inline Vector3_t2243707580 * get_address_of_lastSrcPosition_44() { return &___lastSrcPosition_44; }
	inline void set_lastSrcPosition_44(Vector3_t2243707580  value)
	{
		___lastSrcPosition_44 = value;
	}

	inline static int32_t get_offset_of_wpsDropdown_45() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___wpsDropdown_45)); }
	inline bool get_wpsDropdown_45() const { return ___wpsDropdown_45; }
	inline bool* get_address_of_wpsDropdown_45() { return &___wpsDropdown_45; }
	inline void set_wpsDropdown_45(bool value)
	{
		___wpsDropdown_45 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
