#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_t858634588;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_DG_Tweening_DOTweenAnimation858634588.h"

#pragma once
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_t3410086325  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DOTweenAnimation_t858634588 * m_Items[1];

public:
	inline DOTweenAnimation_t858634588 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DOTweenAnimation_t858634588 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DOTweenAnimation_t858634588 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
