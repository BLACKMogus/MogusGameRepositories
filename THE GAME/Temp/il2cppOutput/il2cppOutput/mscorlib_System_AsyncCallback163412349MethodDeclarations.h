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

// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncCallback__ctor_m3071689932 (AsyncCallback_t163412349 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
extern "C"  void AsyncCallback_Invoke_m1217672441 (AsyncCallback_t163412349 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncCallback_BeginInvoke_m3304700608 (AsyncCallback_t163412349 * __this, Il2CppObject * ___ar0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncCallback_EndInvoke_m2522475826 (AsyncCallback_t163412349 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
