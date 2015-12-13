#pragma once
#include "Positional.h"
class CBinary :
	public CPositional
{
public:
	CBinary(const string& val, char sign)
		: CPositional('2', val, sign)
	{
	}
};

