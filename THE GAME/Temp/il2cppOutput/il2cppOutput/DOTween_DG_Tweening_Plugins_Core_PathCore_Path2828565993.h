#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_t3014762178;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_t2073524639;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t246481150;
// System.Single[]
struct SingleU5BU5D_t577127397;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t3294469411;

#include "mscorlib_System_Object2689449295.h"
#include "DOTween_DG_Tweening_PathType2815988833.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen506773895.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Core.PathCore.Path
struct  Path_t2828565993  : public Il2CppObject
{
public:
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_2;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_3;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_4;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_t1172311765* ___wps_5;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t246481150* ___controlPoints_6;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_7;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_t577127397* ___wpLengths_8;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_9;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_t577127397* ___timesTable_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_t577127397* ___lengthsTable_11;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_12;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t3294469411 * ____decoder_13;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_14;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_t1172311765* ___nonLinearDrawWps_15;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_t2243707580  ___targetPosition_16;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_t506773895  ___lookAtPosition_17;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_t2020392075  ___gizmoColor_18;

public:
	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_subdivisionsXSegment_3() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___subdivisionsXSegment_3)); }
	inline int32_t get_subdivisionsXSegment_3() const { return ___subdivisionsXSegment_3; }
	inline int32_t* get_address_of_subdivisionsXSegment_3() { return &___subdivisionsXSegment_3; }
	inline void set_subdivisionsXSegment_3(int32_t value)
	{
		___subdivisionsXSegment_3 = value;
	}

	inline static int32_t get_offset_of_subdivisions_4() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___subdivisions_4)); }
	inline int32_t get_subdivisions_4() const { return ___subdivisions_4; }
	inline int32_t* get_address_of_subdivisions_4() { return &___subdivisions_4; }
	inline void set_subdivisions_4(int32_t value)
	{
		___subdivisions_4 = value;
	}

	inline static int32_t get_offset_of_wps_5() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___wps_5)); }
	inline Vector3U5BU5D_t1172311765* get_wps_5() const { return ___wps_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_wps_5() { return &___wps_5; }
	inline void set_wps_5(Vector3U5BU5D_t1172311765* value)
	{
		___wps_5 = value;
		Il2CppCodeGenWriteBarrier(&___wps_5, value);
	}

	inline static int32_t get_offset_of_controlPoints_6() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___controlPoints_6)); }
	inline ControlPointU5BU5D_t246481150* get_controlPoints_6() const { return ___controlPoints_6; }
	inline ControlPointU5BU5D_t246481150** get_address_of_controlPoints_6() { return &___controlPoints_6; }
	inline void set_controlPoints_6(ControlPointU5BU5D_t246481150* value)
	{
		___controlPoints_6 = value;
		Il2CppCodeGenWriteBarrier(&___controlPoints_6, value);
	}

	inline static int32_t get_offset_of_length_7() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___length_7)); }
	inline float get_length_7() const { return ___length_7; }
	inline float* get_address_of_length_7() { return &___length_7; }
	inline void set_length_7(float value)
	{
		___length_7 = value;
	}

	inline static int32_t get_offset_of_wpLengths_8() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___wpLengths_8)); }
	inline SingleU5BU5D_t577127397* get_wpLengths_8() const { return ___wpLengths_8; }
	inline SingleU5BU5D_t577127397** get_address_of_wpLengths_8() { return &___wpLengths_8; }
	inline void set_wpLengths_8(SingleU5BU5D_t577127397* value)
	{
		___wpLengths_8 = value;
		Il2CppCodeGenWriteBarrier(&___wpLengths_8, value);
	}

	inline static int32_t get_offset_of_isFinalized_9() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___isFinalized_9)); }
	inline bool get_isFinalized_9() const { return ___isFinalized_9; }
	inline bool* get_address_of_isFinalized_9() { return &___isFinalized_9; }
	inline void set_isFinalized_9(bool value)
	{
		___isFinalized_9 = value;
	}

	inline static int32_t get_offset_of_timesTable_10() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___timesTable_10)); }
	inline SingleU5BU5D_t577127397* get_timesTable_10() const { return ___timesTable_10; }
	inline SingleU5BU5D_t577127397** get_address_of_timesTable_10() { return &___timesTable_10; }
	inline void set_timesTable_10(SingleU5BU5D_t577127397* value)
	{
		___timesTable_10 = value;
		Il2CppCodeGenWriteBarrier(&___timesTable_10, value);
	}

	inline static int32_t get_offset_of_lengthsTable_11() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___lengthsTable_11)); }
	inline SingleU5BU5D_t577127397* get_lengthsTable_11() const { return ___lengthsTable_11; }
	inline SingleU5BU5D_t577127397** get_address_of_lengthsTable_11() { return &___lengthsTable_11; }
	inline void set_lengthsTable_11(SingleU5BU5D_t577127397* value)
	{
		___lengthsTable_11 = value;
		Il2CppCodeGenWriteBarrier(&___lengthsTable_11, value);
	}

	inline static int32_t get_offset_of_linearWPIndex_12() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___linearWPIndex_12)); }
	inline int32_t get_linearWPIndex_12() const { return ___linearWPIndex_12; }
	inline int32_t* get_address_of_linearWPIndex_12() { return &___linearWPIndex_12; }
	inline void set_linearWPIndex_12(int32_t value)
	{
		___linearWPIndex_12 = value;
	}

	inline static int32_t get_offset_of__decoder_13() { return static_cast<int32_t>(offsetof(Path_t2828565993, ____decoder_13)); }
	inline ABSPathDecoder_t3294469411 * get__decoder_13() const { return ____decoder_13; }
	inline ABSPathDecoder_t3294469411 ** get_address_of__decoder_13() { return &____decoder_13; }
	inline void set__decoder_13(ABSPathDecoder_t3294469411 * value)
	{
		____decoder_13 = value;
		Il2CppCodeGenWriteBarrier(&____decoder_13, value);
	}

	inline static int32_t get_offset_of__changed_14() { return static_cast<int32_t>(offsetof(Path_t2828565993, ____changed_14)); }
	inline bool get__changed_14() const { return ____changed_14; }
	inline bool* get_address_of__changed_14() { return &____changed_14; }
	inline void set__changed_14(bool value)
	{
		____changed_14 = value;
	}

	inline static int32_t get_offset_of_nonLinearDrawWps_15() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___nonLinearDrawWps_15)); }
	inline Vector3U5BU5D_t1172311765* get_nonLinearDrawWps_15() const { return ___nonLinearDrawWps_15; }
	inline Vector3U5BU5D_t1172311765** get_address_of_nonLinearDrawWps_15() { return &___nonLinearDrawWps_15; }
	inline void set_nonLinearDrawWps_15(Vector3U5BU5D_t1172311765* value)
	{
		___nonLinearDrawWps_15 = value;
		Il2CppCodeGenWriteBarrier(&___nonLinearDrawWps_15, value);
	}

	inline static int32_t get_offset_of_targetPosition_16() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___targetPosition_16)); }
	inline Vector3_t2243707580  get_targetPosition_16() const { return ___targetPosition_16; }
	inline Vector3_t2243707580 * get_address_of_targetPosition_16() { return &___targetPosition_16; }
	inline void set_targetPosition_16(Vector3_t2243707580  value)
	{
		___targetPosition_16 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_17() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___lookAtPosition_17)); }
	inline Nullable_1_t506773895  get_lookAtPosition_17() const { return ___lookAtPosition_17; }
	inline Nullable_1_t506773895 * get_address_of_lookAtPosition_17() { return &___lookAtPosition_17; }
	inline void set_lookAtPosition_17(Nullable_1_t506773895  value)
	{
		___lookAtPosition_17 = value;
	}

	inline static int32_t get_offset_of_gizmoColor_18() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___gizmoColor_18)); }
	inline Color_t2020392075  get_gizmoColor_18() const { return ___gizmoColor_18; }
	inline Color_t2020392075 * get_address_of_gizmoColor_18() { return &___gizmoColor_18; }
	inline void set_gizmoColor_18(Color_t2020392075  value)
	{
		___gizmoColor_18 = value;
	}
};

struct Path_t2828565993_StaticFields
{
public:
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_t3014762178 * ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_t2073524639 * ____linearDecoder_1;

public:
	inline static int32_t get_offset_of__catmullRomDecoder_0() { return static_cast<int32_t>(offsetof(Path_t2828565993_StaticFields, ____catmullRomDecoder_0)); }
	inline CatmullRomDecoder_t3014762178 * get__catmullRomDecoder_0() const { return ____catmullRomDecoder_0; }
	inline CatmullRomDecoder_t3014762178 ** get_address_of__catmullRomDecoder_0() { return &____catmullRomDecoder_0; }
	inline void set__catmullRomDecoder_0(CatmullRomDecoder_t3014762178 * value)
	{
		____catmullRomDecoder_0 = value;
		Il2CppCodeGenWriteBarrier(&____catmullRomDecoder_0, value);
	}

	inline static int32_t get_offset_of__linearDecoder_1() { return static_cast<int32_t>(offsetof(Path_t2828565993_StaticFields, ____linearDecoder_1)); }
	inline LinearDecoder_t2073524639 * get__linearDecoder_1() const { return ____linearDecoder_1; }
	inline LinearDecoder_t2073524639 ** get_address_of__linearDecoder_1() { return &____linearDecoder_1; }
	inline void set__linearDecoder_1(LinearDecoder_t2073524639 * value)
	{
		____linearDecoder_1 = value;
		Il2CppCodeGenWriteBarrier(&____linearDecoder_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
