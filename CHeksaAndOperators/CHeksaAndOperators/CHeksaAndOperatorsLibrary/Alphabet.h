#pragma once
#include "NUtils.h"

using namespace std;

class CAlphabet
{
	vector<char> val;
	int length;

	int filterSign(char *aInTable);

	vector<char>* acceptedValues;
	char* filterWrongCharsWithVector(int length, char *aInTable);
protected:
	int sign;

public:
	virtual int GetLength();
	virtual char* GetVal();
	virtual int GetSign();


	CAlphabet(vector<char>* acceptedValues, char length, char* val);
	virtual ~CAlphabet();
};
