#pragma once

#include "stdafx.h"
#include "Alphabet.h"

CAlphabet::CAlphabet(char base, const string& val = "", char sign = '0')
	: IValue(base, val, sign)
{
	_val = genAlpha(this->GetIntBase());
}

vector<int>* CAlphabet::genAlpha(int base)
{
	vector<int>* retVal = new vector<int>();
	int i = 0;

	while (i < base)
		retVal->push_back(i++);

	return retVal;
}
