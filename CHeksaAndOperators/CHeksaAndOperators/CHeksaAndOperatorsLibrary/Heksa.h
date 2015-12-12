#pragma once

#include "HexaInToTetradesNBCAdapter.h"

class CHeksa : public CHexaInToTetradesNBCAdapter
{
public:
	char* GetHexaArray();
	CHeksa(char length, char* val);
	virtual ~CHeksa();
};

