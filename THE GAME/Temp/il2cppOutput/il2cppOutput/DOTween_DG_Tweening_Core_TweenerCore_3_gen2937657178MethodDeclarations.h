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

// DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t2937657178;
// DG.Tweening.Tweener
struct Tweener_t760404022;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode2539919096.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::.ctor()
extern "C"  void TweenerCore_3__ctor_m418004407_gshared (TweenerCore_3_t2937657178 * __this, const MethodInfo* method);
#define TweenerCore_3__ctor_m418004407(__this, method) ((  void (*) (TweenerCore_3_t2937657178 *, const MethodInfo*))TweenerCore_3__ctor_m418004407_gshared)(__this, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::ChangeStartValue(System.Object,System.Single)
extern "C"  Tweener_t760404022 * TweenerCore_3_ChangeStartValue_m1875838422_gshared (TweenerCore_3_t2937657178 * __this, Il2CppObject * ___newStartValue0, float ___newDuration1, const MethodInfo* method);
#define TweenerCore_3_ChangeStartValue_m1875838422(__this, ___newStartValue0, ___newDuration1, method) ((  Tweener_t760404022 * (*) (TweenerCore_3_t2937657178 *, Il2CppObject *, float, const MethodInfo*))TweenerCore_3_ChangeStartValue_m1875838422_gshared)(__this, ___newStartValue0, ___newDuration1, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::ChangeEndValue(System.Object,System.Boolean)
extern "C"  Tweener_t760404022 * TweenerCore_3_ChangeEndValue_m2663196443_gshared (TweenerCore_3_t2937657178 * __this, Il2CppObject * ___newEndValue0, bool ___snapStartValue1, const MethodInfo* method);
#define TweenerCore_3_ChangeEndValue_m2663196443(__this, ___newEndValue0, ___snapStartValue1, method) ((  Tweener_t760404022 * (*) (TweenerCore_3_t2937657178 *, Il2CppObject *, bool, const MethodInfo*))TweenerCore_3_ChangeEndValue_m2663196443_gshared)(__this, ___newEndValue0, ___snapStartValue1, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::ChangeEndValue(System.Object,System.Single,System.Boolean)
extern "C"  Tweener_t760404022 * TweenerCore_3_ChangeEndValue_m1802430330_gshared (TweenerCore_3_t2937657178 * __this, Il2CppObject * ___newEndValue0, float ___newDuration1, bool ___snapStartValue2, const MethodInfo* method);
#define TweenerCore_3_ChangeEndValue_m1802430330(__this, ___newEndValue0, ___newDuration1, ___snapStartValue2, method) ((  Tweener_t760404022 * (*) (TweenerCore_3_t2937657178 *, Il2CppObject *, float, bool, const MethodInfo*))TweenerCore_3_ChangeEndValue_m1802430330_gshared)(__this, ___newEndValue0, ___newDuration1, ___snapStartValue2, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::ChangeValues(System.Object,System.Object,System.Single)
extern "C"  Tweener_t760404022 * TweenerCore_3_ChangeValues_m570000243_gshared (TweenerCore_3_t2937657178 * __this, Il2CppObject * ___newStartValue0, Il2CppObject * ___newEndValue1, float ___newDuration2, const MethodInfo* method);
#define TweenerCore_3_ChangeValues_m570000243(__this, ___newStartValue0, ___newEndValue1, ___newDuration2, method) ((  Tweener_t760404022 * (*) (TweenerCore_3_t2937657178 *, Il2CppObject *, Il2CppObject *, float, const MethodInfo*))TweenerCore_3_ChangeValues_m570000243_gshared)(__this, ___newStartValue0, ___newEndValue1, ___newDuration2, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::SetFrom(System.Boolean)
extern "C"  Tweener_t760404022 * TweenerCore_3_SetFrom_m175513655_gshared (TweenerCore_3_t2937657178 * __this, bool ___relative0, const MethodInfo* method);
#define TweenerCore_3_SetFrom_m175513655(__this, ___relative0, method) ((  Tweener_t760404022 * (*) (TweenerCore_3_t2937657178 *, bool, const MethodInfo*))TweenerCore_3_SetFrom_m175513655_gshared)(__this, ___relative0, method)
// System.Void DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::Reset()
extern "C"  void TweenerCore_3_Reset_m2800505548_gshared (TweenerCore_3_t2937657178 * __this, const MethodInfo* method);
#define TweenerCore_3_Reset_m2800505548(__this, method) ((  void (*) (TweenerCore_3_t2937657178 *, const MethodInfo*))TweenerCore_3_Reset_m2800505548_gshared)(__this, method)
// System.Boolean DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::Validate()
extern "C"  bool TweenerCore_3_Validate_m1883068437_gshared (TweenerCore_3_t2937657178 * __this, const MethodInfo* method);
#define TweenerCore_3_Validate_m1883068437(__this, method) ((  bool (*) (TweenerCore_3_t2937657178 *, const MethodInfo*))TweenerCore_3_Validate_m1883068437_gshared)(__this, method)
// System.Single DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::UpdateDelay(System.Single)
extern "C"  float TweenerCore_3_UpdateDelay_m1164357562_gshared (TweenerCore_3_t2937657178 * __this, float ___elapsed0, const MethodInfo* method);
#define TweenerCore_3_UpdateDelay_m1164357562(__this, ___elapsed0, method) ((  float (*) (TweenerCore_3_t2937657178 *, float, const MethodInfo*))TweenerCore_3_UpdateDelay_m1164357562_gshared)(__this, ___elapsed0, method)
// System.Boolean DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::Startup()
extern "C"  bool TweenerCore_3_Startup_m501231052_gshared (TweenerCore_3_t2937657178 * __this, const MethodInfo* method);
#define TweenerCore_3_Startup_m501231052(__this, method) ((  bool (*) (TweenerCore_3_t2937657178 *, const MethodInfo*))TweenerCore_3_Startup_m501231052_gshared)(__this, method)
// System.Boolean DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::ApplyTween(System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  bool TweenerCore_3_ApplyTween_m2278209809_gshared (TweenerCore_3_t2937657178 * __this, float ___prevPosition0, int32_t ___prevCompletedLoops1, int32_t ___newCompletedSteps2, bool ___useInversePosition3, int32_t ___updateMode4, int32_t ___updateNotice5, const MethodInfo* method);
#define TweenerCore_3_ApplyTween_m2278209809(__this, ___prevPosition0, ___prevCompletedLoops1, ___newCompletedSteps2, ___useInversePosition3, ___updateMode4, ___updateNotice5, method) ((  bool (*) (TweenerCore_3_t2937657178 *, float, int32_t, int32_t, bool, int32_t, int32_t, const MethodInfo*))TweenerCore_3_ApplyTween_m2278209809_gshared)(__this, ___prevPosition0, ___prevCompletedLoops1, ___newCompletedSteps2, ___useInversePosition3, ___updateMode4, ___updateNotice5, method)
