#pragma once

#ifndef _BINARY_H_INCLUDED
#define _BINARY_H_INCLUDED

#include "Positional.h"
class CDecimal :
	public CPositional
{
public:
	CDecimal(const string& val, char sign);
};

#endif

