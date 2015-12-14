#pragma once

#ifndef _BINARY_H_INCLUDED
#define _BINARY_H_INCLUDED

#include "Positional.h"
class CBinary :
	public CPositional
{
public:
	CBinary(const string& val, char sign);
};

#endif

