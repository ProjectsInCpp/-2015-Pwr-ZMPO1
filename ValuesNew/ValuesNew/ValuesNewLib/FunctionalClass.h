#pragma once

#ifndef _FUNCTIONALCLASS_H_INCLUDE
#define _FUNCTIONALCLASS_H_INCLUDE

#include "Positional.h"

class CFunctionalClass
{
public:
	virtual CPositional* apply(CPositional* first, CPositional* second) = 0;
};

#endif
