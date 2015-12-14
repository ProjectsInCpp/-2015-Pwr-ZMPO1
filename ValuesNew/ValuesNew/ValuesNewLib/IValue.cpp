#pragma once

#include "stdafx.h"
#include "IValue.h"

IValue::IValue()
{
	_val = new vector<int>();
	_sign = 0;
	_base = 'A';
}

IValue::IValue(char base, string val, char sign) {
	_val = NUtils::ToIntVec(&val);
	_sign = NUtils::ToEqualsSign(sign);
	_base = base;
}

IValue::IValue(const IValue& val)
{
	_val = new vector<int>();
	_val = val._val;

	_sign = val._sign;
	_base = val._base;
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


