#pragma once
#include <vector>
#include <algorithm>

#define BIN_BASE 2

using namespace std;

namespace NUtils
{
	inline int ToEqualsInt(char aValue0){
		int upper = toupper(aValue0);
		int end = 0;

		if(upper>= 65 && upper <= 90)
		{
			end = upper - 65 + 10;
		}
		else
			if (upper >= 48 && upper <= 57)
			{
				end = upper - 48;
			}
			else
				end = -1;

		return end;
	}

	inline char ToEqualsChar(int aValue0)
	{
		char end = 0;

		if (aValue0 >= 10 && aValue0 <= 26)
		{
			end = aValue0 + 55;
		}
		else
			if (aValue0 >= 0 && aValue0 <= 9)
			{
				end = aValue0 + 48;
			}
			else
				end = -1;

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
		retVal->resize(aChain->size());

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

