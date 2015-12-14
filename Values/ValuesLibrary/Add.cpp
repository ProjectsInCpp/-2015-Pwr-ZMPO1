#include "stdafx.h"
#include "Add.h"

CPositional* CAdd::apply(CPositional* first, CPositional* second)
{

	int base = first->GetIntBase();
	char sign = NUtils::ToEqualsSign(NUtils::detSign(first->GetSign(), second->GetSign()));

	vector<int>* retVal = new vector<int>();
	vector<int>* firstCopy = IValue::allign(first, second)->at(0);
	vector<int>* secondCopy = IValue::allign(first, second)->at(1);

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
	delete first;
	delete second;

	CPositional* end = new CPositional(NUtils::ToEqualsChar(base), *retStr, sign);
	return end;
}