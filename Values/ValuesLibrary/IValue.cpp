#pragma once

#include "stdafx.h"
#include "IValue.h"

	IValue::IValue(char base, string val = "", char sign = '0') {
		_val = NUtils::ToIntVec(&val);
		_sign = NUtils::ToEqualsSign(sign);
		_base = base;
	}

	IValue::~IValue()
	{
		delete _val;
	}

	vector<int>* IValue::GetVal()
	{
		vector<int> *retVal = new vector<int>();
		retVal = this->_val;

		return retVal;
	}
	char IValue::GetBase()
	{
		return _base;
	}

	int IValue::GetIntBase()
	{
		return NUtils::ToEqualsInt(this->_base);
	}

	int IValue::GetSign()
	{
		return _sign;
	}

	vector<vector<int>*>* IValue::allign(CPositional* first, CPositional* second)
	{
		vector<vector<int>*>* retVal = new vector<vector<int>*>();

		vector<int>* firstCopy = new vector<int>();
		vector<int>* secondCopy = new vector<int>();

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

		delete first;
		delete second;

		retVal->push_back(firstCopy);
		retVal->push_back(secondCopy);

		return retVal;
	}

