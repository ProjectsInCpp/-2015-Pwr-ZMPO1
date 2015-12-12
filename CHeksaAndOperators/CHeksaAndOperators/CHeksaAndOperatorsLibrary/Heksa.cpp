#include "stdafx.h"
#include "Heksa.h"

CHeksa::CHeksa(char length, char* val)
	:CHexaInToTetradesNBCAdapter(length, val){}

char* CHeksa::GetHexaArray()
{
	char* retVal = new char[this->GetLength()];

	for (int i = 0; i < this->GetLength();i++)
	{
		retVal[i] = NUtils::BinTradeToHexaUnit(this->GetBinaryTrade(i)->GetVal());
	}

	retVal[this->GetLength()] = '\0';

	return retVal;
}

CHeksa::~CHeksa()
{
}
