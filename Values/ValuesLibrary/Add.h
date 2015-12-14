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
		vector<int>* firstCopy = new vector<int>();
		vector<int>* secondCopy = new vector<int>();

		int base = first->GetIntBase();
		char sign = '0';

		int sizeSub = first->GetVal()->size() - second->GetVal()->size();

		if (sizeSub > 0)
		{
			firstCopy->resize(first->GetVal()->size());
			secondCopy->resize(first->GetVal()->size());
		}
		else if (sizeSub < 0)
		{
			firstCopy->resize(second->GetVal()->size());
			secondCopy->resize(second->GetVal()->size());
		}
		else
		{
			firstCopy->resize(first->GetVal()->size());
			secondCopy->resize(second->GetVal()->size());
		}

		transform(first->GetVal()->rbegin(), first->GetVal()->rend(), firstCopy->rbegin(), [](char a) { return a; });
		transform(second->GetVal()->rbegin(), second->GetVal()->rend(), secondCopy->rbegin(), [](char a) { return a; });

		vector<int>::reverse_iterator Xi = firstCopy->rbegin();
		vector<int>::reverse_iterator Yi = secondCopy->rbegin();
		int Ciplus1 = 0;

		while (Xi != firstCopy->rend()) {
			retVal->push_back((*Xi + *Yi + Ciplus1)% base);
			Ciplus1 = (*Xi++ + *Yi++ + Ciplus1) / base;
		}
		
		vector<char>* retRev = new vector<char>();
		retRev->resize(retVal->size());

		transform(retVal->rbegin(), retVal->rend(), retRev->begin(), [](char a) { return NUtils::ToEqualsChar(a); });

		string* retStr = new string(retRev->begin(),retRev->end());

		delete retVal;
		delete first;
		delete second;

		CPositional* end = new CPositional(NUtils::ToEqualsChar(base), *retStr, NUtils::ToEqualsInt(sign));
		return end;
	}
};

