#pragma once

#include "stdafx.h"
#include "Positional.h"

CPositional::CPositional(char base, const string& val, char sign)
	: IValue(base, val, sign)
{
	_alfa = new CAlphabet(this->GetBase());
	this->_val = replaceWrongWithZero(this->_val);
}

vector<int>* CPositional::replaceWrongWithZero(vector<int>* value)
{
	vector<int>* retVal = new vector<int>(value->begin(), value->end());

	for (vector<int>::iterator it = retVal->begin();it != retVal->end();++it)
	{
		bool res = find(_alfa->GetVal()->begin(),
			_alfa->GetVal()->end(),
			*it) != _alfa->GetVal()->end();

		if (!res)
		{
			*it = 0;
		}
	}

	delete value;
	return retVal;
}

CPositional::~CPositional()
{
	delete _alfa;
}

vector<vector<int>*>* CPositional::allign(CPositional* first, CPositional* second)
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

	retVal->push_back(firstCopy);
	retVal->push_back(secondCopy);

	return retVal;
}

//vector<int>* quotientProductMethod(vector<int>* aVal, int inBase)
//{
//	vector<int> *buffVal = new vector<int>();

//	for (vector<int>::reverse_iterator it = aVal->rbegin();it != aVal->rend();++it)
//	{
//		while (*it > 0)
//		{
//			buffVal->push_back(*it % BIN_BASE);
//			*it /= BIN_BASE;
//		}

//		while (buffVal->size() % wordSize(inBase) != 0)
//			buffVal->push_back(0);
//	}

//	vector<int> *outVal = new vector<int>();

//	for (vector<int>::reverse_iterator it = buffVal->rbegin();it != buffVal->rend();++it)
//	{
//		outVal->push_back(*it);
//	}

//	delete buffVal;
//	return outVal;
//}

//int wordSize(int inBase)
//{
//	return ceil(log2(inBase*1.0));
//}