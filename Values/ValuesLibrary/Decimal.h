#pragma once
#include "Positional.h"
class CDecimal :
	public CPositional
{
public:
	CDecimal(const string& val, char sign)
		: CPositional('A', val, sign)
	{
	}

};

