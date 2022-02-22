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

// DG.Tweening.EaseFunction
struct EaseFunction_t3306356708;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// DG.Tweening.EaseFactory
struct EaseFactory_t4203735666;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen765586611.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"
#include "DOTween_DG_Tweening_EaseFunction3306356708.h"

// DG.Tweening.EaseFunction DG.Tweening.EaseFactory::StopMotion(System.Int32,System.Nullable`1<DG.Tweening.Ease>)
extern "C"  EaseFunction_t3306356708 * EaseFactory_StopMotion_m2300428264 (Il2CppObject * __this /* static, unused */, int32_t ___motionFps0, Nullable_1_t765586611  ___ease1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.EaseFunction DG.Tweening.EaseFactory::StopMotion(System.Int32,UnityEngine.AnimationCurve)
extern "C"  EaseFunction_t3306356708 * EaseFactory_StopMotion_m3743262361 (Il2CppObject * __this /* static, unused */, int32_t ___motionFps0, AnimationCurve_t3306541151 * ___animCurve1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.EaseFunction DG.Tweening.EaseFactory::StopMotion(System.Int32,DG.Tweening.EaseFunction)
extern "C"  EaseFunction_t3306356708 * EaseFactory_StopMotion_m810640373 (Il2CppObject * __this /* static, unused */, int32_t ___motionFps0, EaseFunction_t3306356708 * ___customEase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.EaseFactory::.ctor()
extern "C"  void EaseFactory__ctor_m2540174781 (EaseFactory_t4203735666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
