#pragma once

#ifndef POSITIONAL_H_INCLUDED
#define POSITIONAL_H_INCLUDED

#include "IValue.h"
#include "Alphabet.h"
#include "NUtils.h"

class CPositional :
	public IValue
{

	CAlphabet* _alfa;
	vector<int>* replaceWrongWithZero(vector<int>* value);

public:
	CPositional(char base, const string& val, char sign);
	virtual ~CPositional();
};

#endif
