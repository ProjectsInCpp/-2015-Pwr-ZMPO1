#pragma once
#include "Operation.h"
#include "FunctionalClass.h"

class CAdd :
	public COperation
{
public:
	virtual CPositional* apply(CPositional* first, CPositional* second)
	{
		vector<int>* retVal = new vector<int>();
		int base = first->GetIntBase();
		int sign = 0;

		vector<int>::reverse_iterator Xi = first->GetVal()->rbegin();
		vector<int>::reverse_iterator Yi = second->GetVal()->rbegin();
		int Ciplus1 = 0;

		while (Xi != first->GetVal()->rend()) {
			retVal->push_back((*Xi + *Yi + Ciplus1)% base);
			Ciplus1 = (*Xi++ + *Yi++ + Ciplus1) / base;
		}
		
		vector<char>* retRev = new vector<char>();
		retRev->resize(retVal->size());

		transform(retVal->rbegin(), retVal->rend(), retRev->begin(), [](char a) { return NUtils::ToEqualsChar(a); });

		string* retStr = new string(retRev->begin(),retRev->end());

		delete retVal;
		CPositional* end = new CPositional(NUtils::ToEqualsChar(base), *retStr, NUtils::ToEqualsInt(sign));
		return end;
	}
};

