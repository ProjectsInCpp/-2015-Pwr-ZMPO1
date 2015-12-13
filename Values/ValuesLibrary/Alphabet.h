#pragma once
#include "IValue.h"
#include <cvt/wstring>

class CAlphabet :
	public IValue
{
	vector<int>* genAlpha(int base)
	{
		vector<int>* retVal = new vector<int>();
		int i = 0;

		while (i != (base - 1))
			retVal->push_back(i++);

		return retVal;
	}
public:

	CAlphabet( char base, const string& val = "", char sign = '0')
		: IValue(base, val, sign)
	{
		delete _val;
		_val = genAlpha(this->_base);
	}

	int GetBase() {
		return this->_base;
	}

	int GetSign() {
		return this->_sign;
	}

	vector<int> GetVal() {
		vector<int> *retVal = new vector<int>();
		retVal = this->_val;
		return *retVal;
	}
};

