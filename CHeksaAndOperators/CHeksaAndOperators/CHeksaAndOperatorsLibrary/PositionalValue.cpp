#include "stdafx.h"
#include "PositionalValue.h"

CPositionalValue::CPositionalValue(vector<char>* acceptedValues, char length, char * val)
	: CAlphabet(acceptedValues, length, val)
{

}