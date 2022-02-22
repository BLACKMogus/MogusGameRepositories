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

// DG.Tweening.Sequence
struct Sequence_t110643099;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.TweenCallback
struct TweenCallback_t3697142134;
// DG.Tweening.Tweener
struct Tweener_t760404022;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t2279406887;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t3250868854;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t1108663466;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t3261425374;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t1672798003;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t2998039394;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_t3065187631;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t588429502;
// System.String
struct String_t;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t3793077019;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t3035488489;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Sequence110643099.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_TweenCallback3697142134.h"
#include "DOTween_DG_Tweening_AxisConstraint1244566668.h"
#include "DOTween_DG_Tweening_ScrambleMode385206138.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen506773895.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_Append_m388120539 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, Tween_t278478013 * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Prepend(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_Prepend_m2832870725 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, Tween_t278478013 * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Join(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_Join_m3909252375 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, Tween_t278478013 * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Insert(DG.Tweening.Sequence,System.Single,DG.Tweening.Tween)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_Insert_m3944817171 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, float ___atPosition1, Tween_t278478013 * ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::AppendInterval(DG.Tweening.Sequence,System.Single)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_AppendInterval_m2840030048 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, float ___interval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::PrependInterval(DG.Tweening.Sequence,System.Single)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_PrependInterval_m3957684016 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, float ___interval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::AppendCallback(DG.Tweening.Sequence,DG.Tweening.TweenCallback)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_AppendCallback_m230459415 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, TweenCallback_t3697142134 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::PrependCallback(DG.Tweening.Sequence,DG.Tweening.TweenCallback)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_PrependCallback_m13875009 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, TweenCallback_t3697142134 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::InsertCallback(DG.Tweening.Sequence,System.Single,DG.Tweening.TweenCallback)
extern "C"  Sequence_t110643099 * TweenSettingsExtensions_InsertCallback_m832410615 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, float ___atPosition1, TweenCallback_t3697142134 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m937094726 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t2279406887 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m3823322733 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3250868854 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m1571209893 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3250868854 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m4276703213 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t1108663466 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m1908370469 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t1108663466 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m64883053 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3261425374 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m1404749221 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3261425374 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m1163764278 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t1672798003 * ___t0, bool ___useShortest360Route1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m2869276193 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t2998039394 * ___t0, bool ___alphaOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m2755395124 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3065187631 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>,System.Boolean,DG.Tweening.ScrambleMode,System.String)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m1112657767 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t588429502 * ___t0, bool ___richTextEnabled1, int32_t ___scrambleMode2, String_t* ___scrambleChars3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m3161000053 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3793077019 * ___t0, bool ___snapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t760404022 * TweenSettingsExtensions_SetOptions_m4207975669 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3793077019 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,DG.Tweening.AxisConstraint,DG.Tweening.AxisConstraint)
extern "C"  TweenerCore_3_t3035488489 * TweenSettingsExtensions_SetOptions_m4038334168 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3035488489 * ___t0, int32_t ___lockPosition1, int32_t ___lockRotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Boolean,DG.Tweening.AxisConstraint,DG.Tweening.AxisConstraint)
extern "C"  TweenerCore_3_t3035488489 * TweenSettingsExtensions_SetOptions_m3069323763 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3035488489 * ___t0, bool ___closePath1, int32_t ___lockPosition2, int32_t ___lockRotation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  TweenerCore_3_t3035488489 * TweenSettingsExtensions_SetLookAt_m1482035211 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3035488489 * ___t0, Vector3_t2243707580  ___lookAtPosition1, Nullable_1_t506773895  ___forwardDirection2, Nullable_1_t506773895  ___up3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Transform,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  TweenerCore_3_t3035488489 * TweenSettingsExtensions_SetLookAt_m2149060425 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3035488489 * ___t0, Transform_t3275118058 * ___lookAtTransform1, Nullable_1_t506773895  ___forwardDirection2, Nullable_1_t506773895  ___up3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Single,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  TweenerCore_3_t3035488489 * TweenSettingsExtensions_SetLookAt_m4115581975 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3035488489 * ___t0, float ___lookAhead1, Nullable_1_t506773895  ___forwardDirection2, Nullable_1_t506773895  ___up3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenSettingsExtensions::SetPathForwardDirection(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
extern "C"  void TweenSettingsExtensions_SetPathForwardDirection_m364378825 (Il2CppObject * __this /* static, unused */, TweenerCore_3_t3035488489 * ___t0, Nullable_1_t506773895  ___forwardDirection1, Nullable_1_t506773895  ___up2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
