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

// System.Object
struct Il2CppObject;
// UnityEngine.SceneManagement.Scene
struct Scene_t1684909666;
struct Scene_t1684909666_marshaled_pinvoke;
struct Scene_t1684909666_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "mscorlib_System_Object2689449295.h"

// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
extern "C"  int32_t Scene_get_handle_m1555912301 (Scene_t1684909666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
extern "C"  int32_t Scene_GetHashCode_m3223653899 (Scene_t1684909666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
extern "C"  bool Scene_Equals_m3588907349 (Scene_t1684909666 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Scene_t1684909666;
struct Scene_t1684909666_marshaled_pinvoke;

extern "C" void Scene_t1684909666_marshal_pinvoke(const Scene_t1684909666& unmarshaled, Scene_t1684909666_marshaled_pinvoke& marshaled);
extern "C" void Scene_t1684909666_marshal_pinvoke_back(const Scene_t1684909666_marshaled_pinvoke& marshaled, Scene_t1684909666& unmarshaled);
extern "C" void Scene_t1684909666_marshal_pinvoke_cleanup(Scene_t1684909666_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Scene_t1684909666;
struct Scene_t1684909666_marshaled_com;

extern "C" void Scene_t1684909666_marshal_com(const Scene_t1684909666& unmarshaled, Scene_t1684909666_marshaled_com& marshaled);
extern "C" void Scene_t1684909666_marshal_com_back(const Scene_t1684909666_marshaled_com& marshaled, Scene_t1684909666& unmarshaled);
extern "C" void Scene_t1684909666_marshal_com_cleanup(Scene_t1684909666_marshaled_com& marshaled);
