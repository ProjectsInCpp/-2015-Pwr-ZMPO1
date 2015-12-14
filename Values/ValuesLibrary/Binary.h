#pragma once

#ifndef BINARY_H_INCLUDED
#define BINARY_H_INCLUDED

#include "Positional.h"
class CBinary :
	public CPositional
{
public:
	CBinary(const string& val, char sign);
};

#endif

