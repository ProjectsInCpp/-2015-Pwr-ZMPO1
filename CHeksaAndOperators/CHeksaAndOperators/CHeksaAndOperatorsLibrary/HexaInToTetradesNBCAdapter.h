#pragma once
#include "NUtils.h"
#include "TetradeNBC.h"
#include <Windows.h>

class CHexaInToTetradesNBCAdapter : public CPositionalValueOld
{
	CTetradeNBC *values = nullptr;

public:
	CTetradeNBC* GetBinaryTrade(int aPosition);
	virtual char GetBinaryTradeArray(int aPosition, int aWage);
	CHexaInToTetradesNBCAdapter(char length, char* val);
	virtual ~CHexaInToTetradesNBCAdapter();
	int filterSign(char *aInTable);
};