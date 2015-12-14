#pragma once

#ifndef _POSITIONAL_H_INCLUDED
#define _POSITIONAL_H_INCLUDED

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


	static vector<vector<int>*>* allign(CPositional* first, CPositional* second);
};

#endif
