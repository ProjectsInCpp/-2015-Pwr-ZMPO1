#include "stdafx.h"
#include "Add.h"

void CAdd::SetFirstHigher(CPositional* first,CPositional* second)
{
	if (*second >= *first)
	{
		CPositional* buff = first;
		first = second;
		second = buff;
	}
}

CPositional* CAdd::apply(CPositional* first, CPositional* second)
{
	int base = first->GetIntBase();

	int sign = NUtils::detSign(first->GetSign(), second->GetSign());

	SetFirstHigher(first, second);

	vector<int>* retVal = new vector<int>();
	vector<int>* firstCopy = CPositional::allign(first, second)->at(0);
	vector<int>* secondCopy = CPositional::allign(first, second)->at(1);

	vector<int>::reverse_iterator Xi = firstCopy->rbegin();
	vector<int>::reverse_iterator Yi = secondCopy->rbegin();
	int Ciplus1 = 0;

	while (Xi != firstCopy->rend()) {
		retVal->push_back((*Xi + *Yi + Ciplus1) % base);
		Ciplus1 = (*Xi++ + *Yi++ + Ciplus1) / base;
	}

	vector<char>* retRev = new vector<char>();
	retRev->resize(retVal->size());

	transform(retVal->rbegin(), retVal->rend(), retRev->begin(), [](char a) { return NUtils::ToEqualsChar(a); });

	string* retStr = new string(retRev->begin(), retRev->end());

	delete retVal;

	CPositional* end = new CPositional(NUtils::ToEqualsChar(base), *retStr, NUtils::ToEqualsChar(sign));
	return end;
}