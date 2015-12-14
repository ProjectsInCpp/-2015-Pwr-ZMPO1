#pragma once

#ifndef IVALUE_H_INCLUDED
#define IVALUE_H_INCLUDED

#include "NUtils.h"

using namespace std;

class IValue
{
protected:
	vector<int>* _val = nullptr;
	char _base;
	int _sign;

public:
	IValue();
	IValue(const IValue& val);
	IValue(char base, string val = "", char sign = '0');

	~IValue();

	virtual vector<int>* GetVal();
	virtual char GetBase();
	virtual int GetIntBase();
	virtual int GetSign();
};



#endif

