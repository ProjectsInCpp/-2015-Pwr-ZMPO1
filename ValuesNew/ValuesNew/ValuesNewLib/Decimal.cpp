#pragma once

#include "stdafx.h"
#include "Decimal.h"

CDecimal::CDecimal(const string& val, char sign)
	: CPositional('A', val, sign)
{
}


