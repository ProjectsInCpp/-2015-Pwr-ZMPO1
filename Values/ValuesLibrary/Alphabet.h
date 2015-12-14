#pragma once

#ifndef ALPHABET_H_INCLUDED
#define ALPHABET_H_INCLUDED

#include "IValue.h"

class CAlphabet :
	public IValue
{
private:
	vector<int>* genAlpha(int base);

public:
	CAlphabet(char base, const string& val = "", char sign = '0');
};

#endif
