#pragma once

#ifndef _ADD_H_INCLUDE
#define _ADD_H_INCLUDE

#include "Operation.h"
#include "FunctionalClass.h"

class CAdd :
	public COperation
{
public:
	virtual CPositional* apply(CPositional* first, CPositional* second);
};

#endif
