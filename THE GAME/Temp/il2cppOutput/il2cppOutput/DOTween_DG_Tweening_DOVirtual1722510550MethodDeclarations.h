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

// DG.Tweening.Tweener
struct Tweener_t760404022;
// DG.Tweening.TweenCallback`1<System.Single>
struct TweenCallback_1_t3423337902;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.TweenCallback
struct TweenCallback_t3697142134;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"
#include "DOTween_DG_Tweening_TweenCallback3697142134.h"

// DG.Tweening.Tweener DG.Tweening.DOVirtual::Float(System.Single,System.Single,System.Single,DG.Tweening.TweenCallback`1<System.Single>)
extern "C"  Tweener_t760404022 * DOVirtual_Float_m1627525319 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___duration2, TweenCallback_1_t3423337902 * ___onVirtualUpdate3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease)
extern "C"  float DOVirtual_EasedValue_m1602872611 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___lifetimePercentage2, int32_t ___easeType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease,System.Single)
extern "C"  float DOVirtual_EasedValue_m3612873406 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___lifetimePercentage2, int32_t ___easeType3, float ___overshoot4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease,System.Single,System.Single)
extern "C"  float DOVirtual_EasedValue_m3005505411 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___lifetimePercentage2, int32_t ___easeType3, float ___amplitude4, float ___period5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,UnityEngine.AnimationCurve)
extern "C"  float DOVirtual_EasedValue_m2153709637 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___lifetimePercentage2, AnimationCurve_t3306541151 * ___easeCurve3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tween DG.Tweening.DOVirtual::DelayedCall(System.Single,DG.Tweening.TweenCallback,System.Boolean)
extern "C"  Tween_t278478013 * DOVirtual_DelayedCall_m1093540967 (Il2CppObject * __this /* static, unused */, float ___delay0, TweenCallback_t3697142134 * ___callback1, bool ___ignoreTimeScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
