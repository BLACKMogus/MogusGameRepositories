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

// DG.Tweening.TweenCallback`1<System.Single>
struct TweenCallback_1_t3423337902;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DG.Tweening.TweenCallback`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback_1__ctor_m4000929921_gshared (TweenCallback_1_t3423337902 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define TweenCallback_1__ctor_m4000929921(__this, ___object0, ___method1, method) ((  void (*) (TweenCallback_1_t3423337902 *, Il2CppObject *, IntPtr_t, const MethodInfo*))TweenCallback_1__ctor_m4000929921_gshared)(__this, ___object0, ___method1, method)
// System.Void DG.Tweening.TweenCallback`1<System.Single>::Invoke(T)
extern "C"  void TweenCallback_1_Invoke_m3090779465_gshared (TweenCallback_1_t3423337902 * __this, float ___value0, const MethodInfo* method);
#define TweenCallback_1_Invoke_m3090779465(__this, ___value0, method) ((  void (*) (TweenCallback_1_t3423337902 *, float, const MethodInfo*))TweenCallback_1_Invoke_m3090779465_gshared)(__this, ___value0, method)
// System.IAsyncResult DG.Tweening.TweenCallback`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TweenCallback_1_BeginInvoke_m3843094324_gshared (TweenCallback_1_t3423337902 * __this, float ___value0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define TweenCallback_1_BeginInvoke_m3843094324(__this, ___value0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (TweenCallback_1_t3423337902 *, float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_BeginInvoke_m3843094324_gshared)(__this, ___value0, ___callback1, ___object2, method)
// System.Void DG.Tweening.TweenCallback`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_1_EndInvoke_m801412299_gshared (TweenCallback_1_t3423337902 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define TweenCallback_1_EndInvoke_m801412299(__this, ___result0, method) ((  void (*) (TweenCallback_1_t3423337902 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_EndInvoke_m801412299_gshared)(__this, ___result0, method)
