#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_t2073524639;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t2828565993;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t246481150;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path2828565993.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void DG.Tweening.Plugins.Core.PathCore.LinearDecoder::FinalizePath(DG.Tweening.Plugins.Core.PathCore.Path,UnityEngine.Vector3[],System.Boolean)
extern "C"  void LinearDecoder_FinalizePath_m493312366 (LinearDecoder_t2073524639 * __this, Path_t2828565993 * ___p0, Vector3U5BU5D_t1172311765* ___wps1, bool ___isClosedPath2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.LinearDecoder::GetPoint(System.Single,UnityEngine.Vector3[],DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Core.PathCore.ControlPoint[])
extern "C"  Vector3_t2243707580  LinearDecoder_GetPoint_m2014065135 (LinearDecoder_t2073524639 * __this, float ___perc0, Vector3U5BU5D_t1172311765* ___wps1, Path_t2828565993 * ___p2, ControlPointU5BU5D_t246481150* ___controlPoints3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.LinearDecoder::SetTimeToLengthTables(DG.Tweening.Plugins.Core.PathCore.Path,System.Int32)
extern "C"  void LinearDecoder_SetTimeToLengthTables_m2287316015 (LinearDecoder_t2073524639 * __this, Path_t2828565993 * ___p0, int32_t ___subdivisions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.LinearDecoder::SetWaypointsLengths(DG.Tweening.Plugins.Core.PathCore.Path,System.Int32)
extern "C"  void LinearDecoder_SetWaypointsLengths_m3654082159 (LinearDecoder_t2073524639 * __this, Path_t2828565993 * ___p0, int32_t ___subdivisions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.LinearDecoder::.ctor()
extern "C"  void LinearDecoder__ctor_m1815788553 (LinearDecoder_t2073524639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
