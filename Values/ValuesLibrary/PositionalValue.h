#pragma once
#include "IValue.h"
#include "Alphabet.h"

class CPositionalValue :
	public IValue
{
	CAlphabet _alphabet;

public:

	CPositionalValue()
	{
	}

	~CPositionalValue()
	{
	}
};

