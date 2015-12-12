#pragma once
#include "Modulator.h"


class CDeleteParser :public CModulator
{
public:
	virtual vector<char> apply(vector<vector<char>>* aValue)
	{
		vector<char> outBuff;
		
		std::for_each(
			aValue->at(IDX_OF_CHAIN).begin(), 
			aValue->at(IDX_OF_CHAIN).end(), 
			[&](char a)
		{if (NUtils::contains(a, aValue->at(IDX_OF_FILTER1)))
				outBuff.push_back(a);});

		return outBuff;
	};
};

