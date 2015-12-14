#pragma once

#ifndef _ALPHABET_H_INCLUDED
#define _ALPHABET_H_INCLUDED

#include "IValue.h"

class CAlphabet :
	public IValue
{
private:
	vector<int>* genAlpha(int base);

public:
	CAlphabet(char base, const string& val = "", char sign = '0');
	CAlphabet();
	CAlphabet(const CAlphabet& val);
	virtual ~CAlphabet();
};

#endif
