#pragma once

#include "NUtils.h"
#include "Alphabet.h"

class CPositionalValueOld : public CAlphabet
{
public:
	CPositionalValueOld(vector<char>* acceptedValues, char length, char* val);
};