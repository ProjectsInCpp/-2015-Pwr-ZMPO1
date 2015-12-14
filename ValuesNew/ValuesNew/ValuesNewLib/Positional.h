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
	CPositional();
	CPositional(char base, const string& val, char sign);
	CPositional(const CPositional &val);
	~CPositional();

	static vector<vector<int>*>* allign(CPositional* first, CPositional* second);

	friend bool operator>=(CPositional& first, CPositional& second)
	{
		bool retVal = true;

		vector<int>* firstCopy = CPositional::allign(&first,&second)->at(0);
		vector<int>* secondCopy = CPositional::allign(&first, &second)->at(1);

		vector<int>::reverse_iterator Xi = firstCopy->rbegin();
		vector<int>::reverse_iterator Yi = secondCopy->rbegin();

		while (Xi != firstCopy->rend()) {
			retVal &= *Xi++ >= *Yi++;
		}

		return retVal;
	}

	friend bool operator==(CPositional& first, CPositional& second)
	{
		bool retVal = true;

		vector<int>* firstCopy = CPositional::allign(&first, &second)->at(0);
		vector<int>* secondCopy = CPositional::allign(&first, &second)->at(1);

		vector<int>::reverse_iterator Xi = firstCopy->rbegin();
		vector<int>::reverse_iterator Yi = secondCopy->rbegin();

		while (Xi != firstCopy->rend()) {
			retVal &= *Xi++ == *Yi++;
		}

		return retVal;
	}
};

#endif
