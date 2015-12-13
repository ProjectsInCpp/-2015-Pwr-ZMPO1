#pragma once
#include <vector>

using namespace std;

class IValue
{
public:
	virtual vector<int> GetVal() = 0;
	virtual int GetBase() = 0;
	virtual int GetSign() = 0;
};

