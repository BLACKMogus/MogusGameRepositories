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

// System.String
struct String_t;
// UnityEngine.Ray
struct Ray_t2469606224;
struct Ray_t2469606224_marshaled_pinvoke;
struct Ray_t2469606224_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Ray__ctor_m3379034047 (Ray_t2469606224 * __this, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C"  Vector3_t2243707580  Ray_get_origin_m3339262500 (Ray_t2469606224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t2243707580  Ray_get_direction_m4059191533 (Ray_t2469606224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C"  Vector3_t2243707580  Ray_GetPoint_m1353702366 (Ray_t2469606224 * __this, float ___distance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C"  String_t* Ray_ToString_m2019179238 (Ray_t2469606224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Ray_t2469606224;
struct Ray_t2469606224_marshaled_pinvoke;

extern "C" void Ray_t2469606224_marshal_pinvoke(const Ray_t2469606224& unmarshaled, Ray_t2469606224_marshaled_pinvoke& marshaled);
extern "C" void Ray_t2469606224_marshal_pinvoke_back(const Ray_t2469606224_marshaled_pinvoke& marshaled, Ray_t2469606224& unmarshaled);
extern "C" void Ray_t2469606224_marshal_pinvoke_cleanup(Ray_t2469606224_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Ray_t2469606224;
struct Ray_t2469606224_marshaled_com;

extern "C" void Ray_t2469606224_marshal_com(const Ray_t2469606224& unmarshaled, Ray_t2469606224_marshaled_com& marshaled);
extern "C" void Ray_t2469606224_marshal_com_back(const Ray_t2469606224_marshaled_com& marshaled, Ray_t2469606224& unmarshaled);
extern "C" void Ray_t2469606224_marshal_com_cleanup(Ray_t2469606224_marshaled_com& marshaled);
