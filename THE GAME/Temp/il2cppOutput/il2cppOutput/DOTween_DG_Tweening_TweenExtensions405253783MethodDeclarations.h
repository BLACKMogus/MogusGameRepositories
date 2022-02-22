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

// DG.Tweening.Tween
struct Tween_t278478013;
// UnityEngine.YieldInstruction
struct YieldInstruction_t3462875981;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void DG.Tweening.TweenExtensions::Complete(DG.Tweening.Tween)
extern "C"  void TweenExtensions_Complete_m274286092 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::Flip(DG.Tweening.Tween)
extern "C"  void TweenExtensions_Flip_m2922754576 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::ForceInit(DG.Tweening.Tween)
extern "C"  void TweenExtensions_ForceInit_m447977536 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::Goto(DG.Tweening.Tween,System.Single,System.Boolean)
extern "C"  void TweenExtensions_Goto_m4027866082 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, float ___to1, bool ___andPlay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenExtensions_Kill_m3845739180 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___complete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::PlayBackwards(DG.Tweening.Tween)
extern "C"  void TweenExtensions_PlayBackwards_m613887607 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::PlayForward(DG.Tweening.Tween)
extern "C"  void TweenExtensions_PlayForward_m3704378858 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::Restart(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenExtensions_Restart_m1866410855 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___includeDelay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::Rewind(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenExtensions_Rewind_m3286148139 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___includeDelay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::TogglePause(DG.Tweening.Tween)
extern "C"  void TweenExtensions_TogglePause_m1054448567 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenExtensions::GotoWaypoint(DG.Tweening.Tween,System.Int32,System.Boolean)
extern "C"  void TweenExtensions_GotoWaypoint_m120126169 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, int32_t ___waypointIndex1, bool ___andPlay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForCompletion(DG.Tweening.Tween)
extern "C"  YieldInstruction_t3462875981 * TweenExtensions_WaitForCompletion_m3746720476 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForRewind(DG.Tweening.Tween)
extern "C"  YieldInstruction_t3462875981 * TweenExtensions_WaitForRewind_m1446242633 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForKill(DG.Tweening.Tween)
extern "C"  YieldInstruction_t3462875981 * TweenExtensions_WaitForKill_m2434480674 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForElapsedLoops(DG.Tweening.Tween,System.Int32)
extern "C"  YieldInstruction_t3462875981 * TweenExtensions_WaitForElapsedLoops_m1788575402 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, int32_t ___elapsedLoops1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForPosition(DG.Tweening.Tween,System.Single)
extern "C"  YieldInstruction_t3462875981 * TweenExtensions_WaitForPosition_m4173788156 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, float ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine DG.Tweening.TweenExtensions::WaitForStart(DG.Tweening.Tween)
extern "C"  Coroutine_t2299508840 * TweenExtensions_WaitForStart_m1828940021 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.TweenExtensions::CompletedLoops(DG.Tweening.Tween)
extern "C"  int32_t TweenExtensions_CompletedLoops_m811455055 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.TweenExtensions::Delay(DG.Tweening.Tween)
extern "C"  float TweenExtensions_Delay_m1719013068 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.TweenExtensions::Duration(DG.Tweening.Tween,System.Boolean)
extern "C"  float TweenExtensions_Duration_m4269627274 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___includeLoops1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.TweenExtensions::Elapsed(DG.Tweening.Tween,System.Boolean)
extern "C"  float TweenExtensions_Elapsed_m4148870276 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___includeLoops1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.TweenExtensions::ElapsedPercentage(DG.Tweening.Tween,System.Boolean)
extern "C"  float TweenExtensions_ElapsedPercentage_m1036631332 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___includeLoops1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.TweenExtensions::ElapsedDirectionalPercentage(DG.Tweening.Tween)
extern "C"  float TweenExtensions_ElapsedDirectionalPercentage_m968488947 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.TweenExtensions::IsActive(DG.Tweening.Tween)
extern "C"  bool TweenExtensions_IsActive_m918693289 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.TweenExtensions::IsBackwards(DG.Tweening.Tween)
extern "C"  bool TweenExtensions_IsBackwards_m130236841 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
extern "C"  bool TweenExtensions_IsComplete_m3095330022 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.TweenExtensions::IsInitialized(DG.Tweening.Tween)
extern "C"  bool TweenExtensions_IsInitialized_m1900413101 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.TweenExtensions::IsPlaying(DG.Tweening.Tween)
extern "C"  bool TweenExtensions_IsPlaying_m3897946637 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.TweenExtensions::PathGetPoint(DG.Tweening.Tween,System.Single)
extern "C"  Vector3_t2243707580  TweenExtensions_PathGetPoint_m191575487 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, float ___pathPercentage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.TweenExtensions::PathLength(DG.Tweening.Tween)
extern "C"  float TweenExtensions_PathLength_m410910326 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
