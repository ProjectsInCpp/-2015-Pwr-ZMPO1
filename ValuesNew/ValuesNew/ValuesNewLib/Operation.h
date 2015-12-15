#pragma once

#ifndef _OPERATION_H_INCLUDED
#define _OPERATION_H_INCLUDED

#include "FunctionalClass.h"
class COperation :
	public CFunctionalClass
{
	void SetFirstHigher(CPositional* aFirst, CPositional* aSecond);
public:
	virtual CPositional* apply(CPositional* aFirst, CPositional* aSecond, char aOper);
};

#endif

