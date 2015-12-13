#pragma once
#include <vector>
#include "NUtils.h"

using namespace std;

class IValue
{
protected:
	vector<int>* _val=nullptr;
	int _base;
	int _sign;

public:
	IValue(char base, string val = "" , char sign = '0'){
		_val = NUtils::ToIntVec(&val);
		_sign = NUtils::ToEqualsSign(sign);
		_base = NUtils::ToEqualsInt(base);
	}

	virtual ~IValue()
	{
		delete _val;
	}

	virtual vector<int>* GetVal() = 0;
	virtual int GetBase() = 0;
	virtual int GetSign() = 0;
};

