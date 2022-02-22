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
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
extern "C"  Tweener_t760404022 * ShortcutExtensions43_DOColor_m243415068 (Il2CppObject * __this /* static, unused */, SpriteRenderer_t1209076198 * ___target0, Color_t2020392075  ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
extern "C"  Tweener_t760404022 * ShortcutExtensions43_DOFade_m996156756 (Il2CppObject * __this /* static, unused */, SpriteRenderer_t1209076198 * ___target0, float ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOMove(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C"  Tweener_t760404022 * ShortcutExtensions43_DOMove_m620609262 (Il2CppObject * __this /* static, unused */, Rigidbody2D_t502193897 * ___target0, Vector2_t2243707579  ___endValue1, float ___duration2, bool ___snapping3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DORotate(UnityEngine.Rigidbody2D,System.Single,System.Single)
extern "C"  Tweener_t760404022 * ShortcutExtensions43_DORotate_m177144424 (Il2CppObject * __this /* static, unused */, Rigidbody2D_t502193897 * ___target0, float ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
