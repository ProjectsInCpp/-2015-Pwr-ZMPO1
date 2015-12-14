#pragma once

#include "stdafx.h"
#include "Alphabet.h"

CAlphabet::CAlphabet(char base, const string& val, char sign)
	: IValue(base, val, sign)
{
	_val = genAlpha(this->GetIntBase());
}

CAlphabet::CAlphabet(const CAlphabet& val)
	: IValue(val)
{
	_val = new vector<int>();
	_val = val._val;
}

CAlphabet::CAlphabet()
	: IValue()
{
	_val = new vector<int>();
}

vector<int>* CAlphabet::genAlpha(int base)
{
	vector<int>* retVal = new vector<int>();
	int i = 0;

	while (i < base)
		retVal->push_back(i++);

	return retVal;
}

CAlphabet::~CAlphabet()
{
	_val = 0;
}
