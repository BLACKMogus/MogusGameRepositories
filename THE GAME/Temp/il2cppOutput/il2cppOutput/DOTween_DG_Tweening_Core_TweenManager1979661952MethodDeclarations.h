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
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t3942566441;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t672698288;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_UpdateType3357224513.h"
#include "DOTween_DG_Tweening_Core_Enums_OperationType2600045009.h"
#include "DOTween_DG_Tweening_Core_Enums_FilterType1425068526.h"
#include "mscorlib_System_Object2689449295.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode2539919096.h"
#include "DOTween_DG_Tweening_Core_TweenManager_CapacityIncr1969140739.h"

// DG.Tweening.Sequence DG.Tweening.Core.TweenManager::GetSequence()
extern "C"  Sequence_t110643099 * TweenManager_GetSequence_m1013349775 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetUpdateType(DG.Tweening.Tween,DG.Tweening.UpdateType,System.Boolean)
extern "C"  void TweenManager_SetUpdateType_m3684972442 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, int32_t ___updateType1, bool ___isIndependentUpdate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTweenToSequence(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTweenToSequence_m3601486235 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::DespawnAll()
extern "C"  int32_t TweenManager_DespawnAll_m879780213 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Despawn(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenManager_Despawn_m1933822120 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___modifyActiveLists1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::PurgeAll()
extern "C"  void TweenManager_PurgeAll_m2608239790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::PurgePools()
extern "C"  void TweenManager_PurgePools_m1427576330 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ResetCapacities()
extern "C"  void TweenManager_ResetCapacities_m882991915 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetCapacities(System.Int32,System.Int32)
extern "C"  void TweenManager_SetCapacities_m2919421098 (Il2CppObject * __this /* static, unused */, int32_t ___tweenersCapacity0, int32_t ___sequencesCapacity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::Validate()
extern "C"  int32_t TweenManager_Validate_m3353907304 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Update(DG.Tweening.UpdateType,System.Single,System.Single)
extern "C"  void TweenManager_Update_m378595860 (Il2CppObject * __this /* static, unused */, int32_t ___updateType0, float ___deltaTime1, float ___independentTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::FilteredOperation(DG.Tweening.Core.Enums.OperationType,DG.Tweening.Core.Enums.FilterType,System.Object,System.Boolean,System.Single,System.Object)
extern "C"  int32_t TweenManager_FilteredOperation_m3133204633 (Il2CppObject * __this /* static, unused */, int32_t ___operationType0, int32_t ___filterType1, Il2CppObject * ___id2, bool ___optionalBool3, float ___optionalFloat4, Il2CppObject * ___optionalObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Complete(DG.Tweening.Tween,System.Boolean)
extern "C"  bool TweenManager_Complete_m3168808125 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___modifyActiveLists1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Flip(DG.Tweening.Tween)
extern "C"  bool TweenManager_Flip_m3276392302 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ForceInit(DG.Tweening.Tween)
extern "C"  void TweenManager_ForceInit_m873795864 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Goto(DG.Tweening.Tween,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool TweenManager_Goto_m3404683021 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, float ___to1, bool ___andPlay2, int32_t ___updateMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Pause(DG.Tweening.Tween)
extern "C"  bool TweenManager_Pause_m1492466245 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Play(DG.Tweening.Tween)
extern "C"  bool TweenManager_Play_m1289143583 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::PlayBackwards(DG.Tweening.Tween)
extern "C"  bool TweenManager_PlayBackwards_m156468731 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::PlayForward(DG.Tweening.Tween)
extern "C"  bool TweenManager_PlayForward_m1226939652 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Restart(DG.Tweening.Tween,System.Boolean)
extern "C"  bool TweenManager_Restart_m3397053451 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___includeDelay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Rewind(DG.Tweening.Tween,System.Boolean)
extern "C"  bool TweenManager_Rewind_m2873713783 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, bool ___includeDelay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::TogglePause(DG.Tweening.Tween)
extern "C"  bool TweenManager_TogglePause_m3731650299 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::TotalPooledTweens()
extern "C"  int32_t TweenManager_TotalPooledTweens_m1221755943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::TotalPlayingTweens()
extern "C"  int32_t TweenManager_TotalPlayingTweens_m3937211462 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetActiveTweens(System.Boolean)
extern "C"  List_1_t3942566441 * TweenManager_GetActiveTweens_m586218945 (Il2CppObject * __this /* static, unused */, bool ___playing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetTweensById(System.Object,System.Boolean)
extern "C"  List_1_t3942566441 * TweenManager_GetTweensById_m2700268389 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___id0, bool ___playingOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetTweensByTarget(System.Object,System.Boolean)
extern "C"  List_1_t3942566441 * TweenManager_GetTweensByTarget_m1060452997 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, bool ___playingOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::MarkForKilling(DG.Tweening.Tween)
extern "C"  void TweenManager_MarkForKilling_m1319382931 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTween_m1611214199 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ReorganizeActiveTweens()
extern "C"  void TweenManager_ReorganizeActiveTweens_m3706676790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::DespawnTweens(System.Collections.Generic.List`1<DG.Tweening.Tween>,System.Boolean)
extern "C"  void TweenManager_DespawnTweens_m3773872032 (Il2CppObject * __this /* static, unused */, List_1_t3942566441 * ___tweens0, bool ___modifyActiveLists1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::RemoveActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_RemoveActiveTween_m3416564700 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ClearTweenArray(DG.Tweening.Tween[])
extern "C"  void TweenManager_ClearTweenArray_m1588603360 (Il2CppObject * __this /* static, unused */, TweenU5BU5D_t672698288* ___tweens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::IncreaseCapacities(DG.Tweening.Core.TweenManager/CapacityIncreaseMode)
extern "C"  void TweenManager_IncreaseCapacities_m2843870263 (Il2CppObject * __this /* static, unused */, int32_t ___increaseMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::.cctor()
extern "C"  void TweenManager__cctor_m3795227095 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
