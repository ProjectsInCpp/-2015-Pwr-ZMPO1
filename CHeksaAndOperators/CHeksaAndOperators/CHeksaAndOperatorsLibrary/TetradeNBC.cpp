#include "stdafx.h"
#include "TetradeNBC.h"


CTetradeNBC::CTetradeNBC() : CNBC(TETRADE_SIZE, "0000")
{

}

CTetradeNBC::CTetradeNBC(char* val)
	: CNBC(TETRADE_SIZE, val)
{
}


CTetradeNBC::~CTetradeNBC()
{
}
