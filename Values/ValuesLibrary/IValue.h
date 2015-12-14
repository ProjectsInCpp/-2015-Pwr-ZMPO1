#pragma once
#include <vector>
#include "NUtils.h"

using namespace std;

class IValue
{
	friend bool operator==(const IValue& lhs, const IValue& rhs)
	{
		bool reachedBool = true;

		for (size_t i = 0; i < lhs._val->size(); i++)
			reachedBool &= lhs._val->at(i) == rhs._val->at(i);

		return reachedBool;
		return lhs._val == rhs._val;
	}

	friend bool operator!=(const IValue& lhs, const IValue& rhs)
	{
		return !(lhs == rhs);
	}

	friend bool operator<(const IValue& lhs, const IValue& rhs)
	{
		return lhs._val < rhs._val;
	}

	friend bool operator<=(const IValue& lhs, const IValue& rhs)
	{
		return !(rhs < lhs);
	}

	friend bool operator>(const IValue& lhs, const IValue& rhs)
	{
		return rhs < lhs;
	}

	friend bool operator>=(const IValue& lhs, const IValue& rhs)
	{
		return !(lhs < rhs);
	}

protected:
	vector<int>* _val=nullptr;
	char _base;
	int _sign;

public:
	IValue(char base, string val = "" , char sign = '0'){
		_val = NUtils::ToIntVec(&val);
		_sign = NUtils::ToEqualsSign(sign);
		_base = base;
	}

	virtual ~IValue()
	{
		delete _val;
	}

	virtual vector<int>* GetVal()
	{
		vector<int> *retVal = new vector<int>();
		retVal = this->_val;

		return retVal;
	}
	virtual char GetBase()
	{
		return _base;
	}

	virtual int GetIntBase()
	{
		return NUtils::ToEqualsInt(this->_base);
	}

	virtual int GetSign()
	{
		return _sign;
	}
};

