#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t2205594551;

#include "mscorlib_System_Array3829468939.h"
#include "DOTweenPro_DG_Tweening_Core_ABSAnimationComponent2205594551.h"

#pragma once
// DG.Tweening.Core.ABSAnimationComponent[]
struct ABSAnimationComponentU5BU5D_t419138446  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ABSAnimationComponent_t2205594551 * m_Items[1];

public:
	inline ABSAnimationComponent_t2205594551 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ABSAnimationComponent_t2205594551 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ABSAnimationComponent_t2205594551 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
