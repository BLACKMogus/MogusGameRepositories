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

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t2828565993;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_PathType2815988833.h"
#include "mscorlib_System_Nullable_1_gen283458390.h"
#include "DOTween_DG_Tweening_AxisConstraint1244566668.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path2828565993.h"

// System.Void DG.Tweening.Plugins.Core.PathCore.Path::.ctor(DG.Tweening.PathType,UnityEngine.Vector3[],System.Int32,System.Nullable`1<UnityEngine.Color>)
extern "C"  void Path__ctor_m4253660657 (Path_t2828565993 * __this, int32_t ___type0, Vector3U5BU5D_t1172311765* ___waypoints1, int32_t ___subdivisionsXSegment2, Nullable_1_t283458390  ___gizmoColor3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::FinalizePath(System.Boolean,DG.Tweening.AxisConstraint,UnityEngine.Vector3)
extern "C"  void Path_FinalizePath_m2340227616 (Path_t2828565993 * __this, bool ___isClosedPath0, int32_t ___lockPositionAxes1, Vector3_t2243707580  ___currTargetVal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::GetPoint(System.Single,System.Boolean)
extern "C"  Vector3_t2243707580  Path_GetPoint_m685987541 (Path_t2828565993 * __this, float ___perc0, bool ___convertToConstantPerc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Core.PathCore.Path::ConvertToConstantPathPerc(System.Single)
extern "C"  float Path_ConvertToConstantPathPerc_m4225215567 (Path_t2828565993 * __this, float ___perc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::GetWaypointIndexFromPerc(System.Single,System.Boolean)
extern "C"  int32_t Path_GetWaypointIndexFromPerc_m1857218744 (Path_t2828565993 * __this, float ___perc0, bool ___isMovingForward1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::RefreshNonLinearDrawWps(DG.Tweening.Plugins.Core.PathCore.Path)
extern "C"  void Path_RefreshNonLinearDrawWps_m692037076 (Il2CppObject * __this /* static, unused */, Path_t2828565993 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::Destroy()
extern "C"  void Path_Destroy_m2187283033 (Path_t2828565993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::AssignWaypoints(UnityEngine.Vector3[],System.Boolean)
extern "C"  void Path_AssignWaypoints_m1568093980 (Path_t2828565993 * __this, Vector3U5BU5D_t1172311765* ___newWps0, bool ___cloneWps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::AssignDecoder(DG.Tweening.PathType)
extern "C"  void Path_AssignDecoder_m3072882543 (Path_t2828565993 * __this, int32_t ___pathType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::Draw()
extern "C"  void Path_Draw_m755263667 (Path_t2828565993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::Draw(DG.Tweening.Plugins.Core.PathCore.Path)
extern "C"  void Path_Draw_m3671593897 (Il2CppObject * __this /* static, unused */, Path_t2828565993 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
