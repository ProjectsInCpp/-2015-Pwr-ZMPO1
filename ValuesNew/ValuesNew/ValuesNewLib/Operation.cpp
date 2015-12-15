#include "stdafx.h"
#include "Operation.h"

vector<CPositional*>* COperation::SetFirstHigher(CPositional* aFirst, CPositional* aSecond)
{
	CPositional* newFirst = new CPositional();
	CPositional* newSecond = new CPositional();

	if (*aSecond >= *aFirst)
	{
		newFirst = aSecond;
		newSecond = aFirst;
	}
	else
	{
		newFirst = aFirst;
		newSecond = aSecond;
	}

	vector<CPositional*>* retVal = new vector<CPositional*>();
	retVal->push_back(newFirst);
	retVal->push_back(newSecond);

	return retVal;
}

vector<int>* COperation::Add(vector<int>* firstCopy, vector<int>* secondCopy, int& base)
{
	vector<int>* retVal = new vector<int>();

	vector<int>::reverse_iterator Xi = firstCopy->rbegin();
	vector<int>::reverse_iterator Yi = secondCopy->rbegin();

	int Ciplus1 = 0;

	while (Xi != firstCopy->rend()) {
		retVal->push_back((*Xi + *Yi + Ciplus1) % base);
		Ciplus1 = (*Xi++ + *Yi++ + Ciplus1) / base;
	}

	return retVal;
}

vector<int>* COperation::Sub(vector<int>* firstCopy, vector<int>* secondCopy, int& base)
{
	vector<int>* retVal = new vector<int>();

	vector<int>::reverse_iterator Xi = firstCopy->rbegin();
	vector<int>::reverse_iterator Yi = secondCopy->rbegin();

	int Ci = 0;
	int Ciplus1 = 0;

	while (Xi != firstCopy->rend()) {
		int zi = *Xi + base * Ciplus1 - *Yi - Ci;

		retVal->push_back(zi);

		if ((*Xi++ - Ci) < *Yi++)
			Ciplus1 = 1;
		else
			Ciplus1 = 0;
	}

	return retVal;
}

CPositional* COperation::apply(CPositional* aFirst, CPositional* aSecond, char aOper)
{
	int base = aFirst->GetIntBase();
	char buffOper = aOper;

	vector<CPositional*>* maybeSwapped = SetFirstHigher(aFirst, aSecond);
	aFirst = maybeSwapped->at(0);
	aSecond = maybeSwapped->at(1);

	bool equalSigns = aFirst->GetSign() == aSecond->GetSign();

	int sign = NUtils::detSign(aFirst->GetSign(), aSecond->GetSign(),aOper);

	vector<int>* retVal = nullptr;
	vector<int>* firstCopy = CPositional::allign(aFirst, aSecond)->at(0);
	vector<int>* secondCopy = CPositional::allign(aFirst, aSecond)->at(1);

	// DISPATCHER
	if (aOper == O_ADD)
	{
		if (equalSigns)
			retVal = Add(firstCopy, secondCopy, base);
		else if(aSecond->GetSign() == 1)
			retVal = Sub(firstCopy, secondCopy, base);
		else if(aFirst->GetSign() == 1)
			retVal = Sub(firstCopy, secondCopy, base);

	}
	else if ( aOper == O_SUB)
		retVal = Sub(firstCopy, secondCopy, base);

	vector<char>* retRev = new vector<char>();

	// popZeroFromStart
	while (retVal->back() == 0)
		retVal->pop_back();

	retRev->resize(retVal->size());

	NUtils::FoldRightVI_VC(NUtils::ToEqualsChar, retVal, retRev);

	string* retStr = new string(retRev->begin(), retRev->end());

	delete retVal;
	maybeSwapped = nullptr;

	CPositional* end = new CPositional(NUtils::ToEqualsChar(base), *retStr, NUtils::ToEqualsChar(sign));
	return end;
}
