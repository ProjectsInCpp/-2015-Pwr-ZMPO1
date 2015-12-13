#pragma once
#include <vector>
#include <algorithm>

using namespace std;

namespace NUtils
{
	inline int ToEqualsInt(char aValue0){
		int upper = toupper(aValue0);
		int end = 0;

		if(upper>= 65 && upper <= 90)
		{
			end = upper - 65 + 10;
		}else
		if(upper>=48 && upper <= 57)
		{
			end = upper - 48;
		}

		return end;
	}

	inline int ToEqualsSign(char aSign)
	{
		int sign = 0;

		if (aSign != '0')
			sign = 1;

		return sign;
	}

	inline vector<int>* ToIntVec(string *aChain)
	{
		vector<int>* retVal = new vector<int>();

		std::transform(aChain->begin(), aChain->end(), retVal->begin(), NUtils::ToEqualsInt);
		
		return retVal;
	}

	inline bool AreVOIEquals(vector<int>* first, vector<int>* second)
	{
		bool reachedBool = true;
		for (size_t i = 0; i < first->size(); i++)
			reachedBool &= first->at(i) == second->at(i);

		return reachedBool;
	}
};

