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

		while (i < base)
			retVal->push_back(i++);

		return retVal;
	}

public:

	CAlphabet( char base, const string& val = "", char sign = '0')
		: IValue(base, val, sign)
	{
		_val = genAlpha(this->GetIntBase());
	}
};

