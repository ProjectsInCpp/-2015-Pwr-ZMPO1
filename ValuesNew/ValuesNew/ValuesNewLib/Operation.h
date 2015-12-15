#pragma once

#ifndef _OPERATION_H_INCLUDED
#define _OPERATION_H_INCLUDED

#include "FunctionalClass.h"
class COperation :
	public CFunctionalClass
{
	vector<CPositional*>* DescSortedModules(CPositional* aFirst, CPositional* aSecond);
	vector<int>* Add(vector<int>* firstCopy, vector<int>* secondCopy, int& base);
	vector<int>* Sub(vector<int>* firstCopy, vector<int>* secondCopy, int& base);
public:
	virtual CPositional* apply(CPositional* aFirst, CPositional* aSecond, char aOper);
};

#endif

