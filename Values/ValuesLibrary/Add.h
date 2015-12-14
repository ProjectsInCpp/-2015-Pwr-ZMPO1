#pragma once
#include "Operation.h"
#include "FunctionalClass.h"

class CAdd :
	public COperation
{
public:
	virtual CPositional* apply(CPositional* first, CPositional* second);
};

