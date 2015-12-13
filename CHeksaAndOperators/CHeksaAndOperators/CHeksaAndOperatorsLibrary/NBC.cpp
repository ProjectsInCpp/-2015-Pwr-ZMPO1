#include "stdafx.h"
#include "NBC.h"

CNBC::CNBC(char length, char* val)
	: CPositionalValueOld(
		new vector<char>{ '1','\0' }, length, val)
{

}
