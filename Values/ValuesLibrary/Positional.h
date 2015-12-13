#pragma once
#include "IValue.h"
#include "Alphabet.h"

class CPositional :
	public IValue
{
	CAlphabet* _alfa=nullptr;

public:

	CPositional(char base, const string& val, char sign)
		: IValue(base, val, sign)
	{
		_alfa = new CAlphabet(this->GetBase());
	}

	virtual ~CPositional()
	{
		delete _alfa;
	}
};

