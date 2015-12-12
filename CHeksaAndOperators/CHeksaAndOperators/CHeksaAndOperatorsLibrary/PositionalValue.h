#pragma once

#include "NUtils.h"
#include "Alphabet.h"

class CPositionalValue : public CAlphabet
{
public:
	CPositionalValue(vector<char>* acceptedValues, char length, char* val);
};