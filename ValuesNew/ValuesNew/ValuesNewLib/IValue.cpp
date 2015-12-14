#pragma once

#include "stdafx.h"
#include "IValue.h"

IValue::IValue(char base, string val, char sign) {
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


