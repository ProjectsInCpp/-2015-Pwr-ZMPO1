#pragma once

#include "stdafx.h"
#include "NUtils.h"

int NUtils::ToEqualsInt(char aValue0) {
	int upper = toupper(aValue0);
	int end = 0;

	if (upper >= 65 && upper <= 90)
	{
		end = upper - 65 + 10;
	}
	else
		if (upper >= 48 && upper <= 57)
		{
			end = upper - 48;
		}
		else
			end = -1;

	return end;
}

char NUtils::ToEqualsChar(int aValue0)
{
	char end = 0;

	if (aValue0 >= 10 && aValue0 <= 26)
	{
		end = aValue0 + 55;
	}
	else
		if (aValue0 >= 0 && aValue0 <= 9)
		{
			end = aValue0 + 48;
		}
		else
			end = -1;

	return end;
}

int NUtils::ToEqualsSign(char aSign)
{
	int sign = 0;

	if (aSign != '0')
		sign = 1;

	return sign;
}

vector<int>* NUtils::ToIntVec(string *aChain)
{
	vector<int>* retVal = new vector<int>();
	retVal->resize(aChain->size());

	std::transform(aChain->begin(), aChain->end(), retVal->begin(), NUtils::ToEqualsInt);

	return retVal;
}

int NUtils::detSign(int first, int second)
{
	int retVal = 1;

	if (first == 1 && second == 1)
	{

	}
	else if (first == 0 && second == 0)
	{
		retVal = 0;
	}
	else if(first == 0 ,second == 1)
	{
		retVal = 0;
	}


	return retVal;
}

bool NUtils::AreVOIEquals(vector<int>* first, vector<int>* second)
{
	bool reachedBool = true;

	for (size_t i = 0; i < first->size(); i++)
		reachedBool &= first->at(i) == second->at(i);

	return reachedBool;
}

void NUtils::FoldRightVI_VC(char(*fun)(int), vector<int>* tape, vector<char>* acc)
{
	transform(tape->rbegin(), tape->rend(), acc->begin(), [fun](int a) { return (fun)(a); });
}


