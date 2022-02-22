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

// DG.Tweening.Plugins.PathPlugin
struct PathPlugin_t4171842066;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t3035488489;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t1942951492;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t2828565993;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t4025813722;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3901936566;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "DOTween_DG_Tweening_Plugins_Options_PathOptions2659884781.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path2828565993.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.PathPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_Reset_m3087254235 (PathPlugin_t4171842066 * __this, TweenerCore_3_t3035488489 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Boolean)
extern "C"  void PathPlugin_SetFrom_m4091676017 (PathPlugin_t4171842066 * __this, TweenerCore_3_t3035488489 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.Plugins.PathPlugin::Get()
extern "C"  ABSTweenPlugin_3_t1942951492 * PathPlugin_Get_m3476918268 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.PathPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Vector3)
extern "C"  Path_t2828565993 * PathPlugin_ConvertToStartValue_m460648741 (PathPlugin_t4171842066 * __this, TweenerCore_3_t3035488489 * ___t0, Vector3_t2243707580  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_SetRelativeEndValue_m970240972 (PathPlugin_t4171842066 * __this, TweenerCore_3_t3035488489 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_SetChangeValue_m2144720161 (PathPlugin_t4171842066 * __this, TweenerCore_3_t3035488489 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.PathPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.PathOptions,System.Single,DG.Tweening.Plugins.Core.PathCore.Path)
extern "C"  float PathPlugin_GetSpeedBasedDuration_m3202608197 (PathPlugin_t4171842066 * __this, PathOptions_t2659884781  ___options0, float ___unitsXSecond1, Path_t2828565993 * ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void PathPlugin_EvaluateAndApply_m2953483135 (PathPlugin_t4171842066 * __this, PathOptions_t2659884781  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t4025813722 * ___getter3, DOSetter_1_t3901936566 * ___setter4, float ___elapsed5, Path_t2828565993 * ___startValue6, Path_t2828565993 * ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetOrientation(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,UnityEngine.Vector3,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void PathPlugin_SetOrientation_m3023070977 (PathPlugin_t4171842066 * __this, PathOptions_t2659884781  ___options0, Tween_t278478013 * ___t1, Path_t2828565993 * ___path2, float ___pathPerc3, Vector3_t2243707580  ___tPos4, int32_t ___updateNotice5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::.ctor()
extern "C"  void PathPlugin__ctor_m4017481171 (PathPlugin_t4171842066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
