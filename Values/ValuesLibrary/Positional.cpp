#pragma once

#include "stdafx.h"
#include "Positional.h"

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

CPositional::CPositional(char base, const string& val, char sign)
	: IValue(base, val, sign)
{
	_alfa = new CAlphabet(this->GetBase());
	this->_val = replaceWrongWithZero(this->_val);
}

CPositional::~CPositional()
{
	delete _alfa;
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