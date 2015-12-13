#pragma once
#include <vector>

using namespace std;

namespace NUtils
{
	int ToEqualsInt(char aValue0){
		return int(aValue0) - 48;
	}

	int ToEqualsSign(char aSign)
	{
		int sign = 0;

		if (aSign != '0')
			sign = 1;

		return sign;
	}

	vector<int> ToIntVec(string *aChain)
	{
		vector<char>* buff = new vector<char>(aChain->begin(),aChain->end());
		vector<int>* retVal = new vector<int>();

		for (vector<char>::iterator it = buff->begin();it != buff->end();++it)
			retVal->push_back(ToEqualsInt(*it));
		
		delete buff;

		return *retVal;
	}
};

