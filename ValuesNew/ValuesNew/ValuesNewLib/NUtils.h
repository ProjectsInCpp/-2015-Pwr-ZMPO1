#pragma once
#include <vector>
#include <algorithm>
#include <string>
#include "IValue.h"

using namespace std;

#define BIN_BASE 2
#define O_ADD '+'
#define O_SUB '-'
#define O_MUL '*'
#define O_DIV '/'


namespace NUtils
{
	char ToDefaultSign(int aSign);
	int ToEqualsInt(char aValue0);
	char ToEqualsChar(int aValue0);
	int ToEqualsSign(char aSign);
	vector<int>* ToIntVec(string *aChain);
	int detSign(int first, int second, char aOper, bool ifAscend);
	bool AreVOIEquals(vector<int>* first, vector<int>* second);
	void FoldRightVI_VC(char (*fun)(int),vector<int>* tape, vector<char>* acc);
};

