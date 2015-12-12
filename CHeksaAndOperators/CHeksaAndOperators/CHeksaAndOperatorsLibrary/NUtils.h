#pragma once

#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

#define ASCII_BASE 48
#define END_SIGN_SIZE 1
#define MINUS_SIGN_SIZE 1
#define IDX_OF_CHAIN 0
#define IDX_OF_FILTER1 1
#define NEUTRAL_ADD_SIGN '0'
#define END_LINE_SIGN '\0'
#define PROPER_SIGN_0 '0'
#define MINUS_SIGN '-'
#define TETRADE_SIZE '4'

namespace NUtils
{
	char ToEqualsChar(int aValue0);
	int ToEqualsInt(char aValue0);
	char* hexaTobinArrUnit(char aInChar);
	char BinTradeToHexaUnit(char *aInChar);
	bool contains(char aVal, vector<char> aTerminalVals);
	//char* AddZM(CHeksa* aValUp, CHeksa* aValDown);
};

