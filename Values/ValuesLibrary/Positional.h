#pragma once
#include "IValue.h"
#include "Alphabet.h"

class CPositional :
	public IValue
{
	CAlphabet* _alfa=nullptr;

	vector<int>* replaceWrongWithZero(vector<int>* value)
	{
		vector<int>* retVal = new vector<int>(value->begin(),value->end());

		for (vector<int>::iterator it = retVal->begin();it != retVal->end();++it)
		{
			bool res = find(_alfa->GetVal()->begin(),
				_alfa->GetVal()->end(),
				*it) != _alfa->GetVal()->end();

			if(!res)
			{
				*it = 0;
			}
		}

		delete value;
		return retVal;
	}

public:

	CPositional(char base, const string& val, char sign)
		: IValue(base, val, sign)
	{
		_alfa = new CAlphabet(this->GetBase());
		this->_val = replaceWrongWithZero(this->_val);
	}

	virtual ~CPositional()
	{
		delete _alfa;
	}
};

