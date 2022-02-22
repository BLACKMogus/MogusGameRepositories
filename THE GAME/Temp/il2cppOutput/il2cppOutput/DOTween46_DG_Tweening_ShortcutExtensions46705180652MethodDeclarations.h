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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_String2029220233.h"
#include "DOTween_DG_Tweening_ScrambleMode385206138.h"

// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
extern "C"  Tweener_t760404022 * ShortcutExtensions46_DOColor_m3476021741 (Il2CppObject * __this /* static, unused */, Image_t2042527209 * ___target0, Color_t2020392075  ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.UI.Image,System.Single,System.Single)
extern "C"  Tweener_t760404022 * ShortcutExtensions46_DOFade_m2221289113 (Il2CppObject * __this /* static, unused */, Image_t2042527209 * ___target0, float ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
extern "C"  Tweener_t760404022 * ShortcutExtensions46_DOAnchorPos3D_m3279580891 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___target0, Vector3_t2243707580  ___endValue1, float ___duration2, bool ___snapping3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
extern "C"  Tweener_t760404022 * ShortcutExtensions46_DOPunchAnchorPos_m1987664933 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___target0, Vector2_t2243707579  ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean)
extern "C"  Tweener_t760404022 * ShortcutExtensions46_DOShakeAnchorPos_m166860453 (Il2CppObject * __this /* static, unused */, RectTransform_t3349966182 * ___target0, float ___duration1, Vector2_t2243707579  ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
extern "C"  Tweener_t760404022 * ShortcutExtensions46_DOColor_m4265141523 (Il2CppObject * __this /* static, unused */, Text_t356221433 * ___target0, Color_t2020392075  ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
extern "C"  Tweener_t760404022 * ShortcutExtensions46_DOFade_m2794982395 (Il2CppObject * __this /* static, unused */, Text_t356221433 * ___target0, float ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
extern "C"  Tweener_t760404022 * ShortcutExtensions46_DOText_m2936740990 (Il2CppObject * __this /* static, unused */, Text_t356221433 * ___target0, String_t* ___endValue1, float ___duration2, bool ___richTextEnabled3, int32_t ___scrambleMode4, String_t* ___scrambleChars5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
