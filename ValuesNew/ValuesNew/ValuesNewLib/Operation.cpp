#include "stdafx.h"
#include "Operation.h"

void COperation::SetFirstHigher(CPositional* aFirst, CPositional* aSecond)
{
	if (*aSecond >= *aFirst)
	{
		CPositional* buff = aFirst;
		aFirst = aSecond;
		aSecond = buff;
	}
}

CPositional* COperation::apply(CPositional* aFirst, CPositional* aSecond, char aOper)
{
	int base = aFirst->GetIntBase();

	SetFirstHigher(aFirst, aSecond);

	int sign = NUtils::detSign(aFirst->GetSign(), aSecond->GetSign());

	vector<int>* retVal = new vector<int>();
	vector<int>* firstCopy = CPositional::allign(aFirst, aSecond)->at(0);
	vector<int>* secondCopy = CPositional::allign(aFirst, aSecond)->at(1);

	vector<int>::reverse_iterator Xi = firstCopy->rbegin();
	vector<int>::reverse_iterator Yi = secondCopy->rbegin();

	if (aOper == O_ADD)
	{
		int Ciplus1 = 0;

		while (Xi != firstCopy->rend()) {
			retVal->push_back((*Xi + *Yi + Ciplus1) % base);
			Ciplus1 = (*Xi++ + *Yi++ + Ciplus1) / base;
		}
	}
	else
	{

	}

	vector<char>* retRev = new vector<char>();
	retRev->resize(retVal->size());

	NUtils::FoldLeft(NUtils::ToEqualsChar, retVal, retRev);

	string* retStr = new string(retRev->begin(), retRev->end());

	delete retVal;

	CPositional* end = new CPositional(NUtils::ToEqualsChar(base), *retStr, NUtils::ToEqualsChar(sign));
	return end;
}
