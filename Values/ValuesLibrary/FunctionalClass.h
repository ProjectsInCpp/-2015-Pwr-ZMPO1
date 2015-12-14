#pragma once
#include "Positional.h"

class CFunctionalClass
{
public:
	virtual CPositional* apply(CPositional* first, CPositional* second) = 0;
};

