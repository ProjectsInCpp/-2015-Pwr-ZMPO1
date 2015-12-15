#pragma once

#ifndef _FUNCTIONALCLASS_H_INCLUDE
#define _FUNCTIONALCLASS_H_INCLUDE

#include "Positional.h"

class CFunctionalClass
{
public:
	virtual CPositional* apply(CPositional* aFirst, CPositional* aSecond, char aOper) = 0;
};

#endif
