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
//
//vector<vector<int>*>* NUtils::VecOfPositional_To_VoVoi(vector<CPositional*>* aVec)
//{
//	vector<vector<int>*>* retVal = new vector<vector<int>*>();
//
//	vector<int>* fstVal = CPositional::allign(aVec->at(0), aVec->at(1))->at(0);
//	vector<int>* sndVal = CPositional::allign(aVec->at(1), aVec->at(1))->at(1);
//
//	retVal->push_back(fstVal);
//	retVal->push_back(sndVal);
//
//	return retVal;
//}

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

char NUtils::ToDefaultSign(int aSign)
{
	if (aSign == 1) return '-';
	else return '+';
	//return (aSign == 1) ? '-' : '+';
}

vector<int>* NUtils::ToIntVec(string *aChain)
{
	vector<int>* retVal = new vector<int>();
	retVal->resize(aChain->size());

	std::transform(aChain->begin(), aChain->end(), retVal->begin(), NUtils::ToEqualsInt);

	return retVal;
}

int NUtils::detSign(int first, int second, char aOper, bool ifAscend )
{
	int retVal = 1;

	if (aOper == '+')
	{
		if (first == 1 && second == 1)
			retVal = 1;
		else if (first == 0 && second == 0)
			retVal = 0;
		else if (first == 0 && second == 1)
			retVal = 0;
		else if (first == 1 && second == 1)
			retVal = 0;
		else
			retVal = 1;
	}
	else if (aOper == '-')
	{
		if ( ifAscend )
		{
			if (first == 0 && second == 0)
			{
				retVal = 1;
			}
			else if (first == 0 && second == 1)
			{
				retVal = 0;
			}
		}
		else
		{
			if (first == 0 && second == 0)
			{
				retVal = 0;
			}
			else if (first == 0 && second == 1)
			{
				retVal = 0;
			}
		}
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