#include "stdafx.h"
#include "Operation.h"

vector<CPositional*>* COperation::DescSortedModules(CPositional* aFirst, CPositional* aSecond)
{
	vector<CPositional*>* retVal = new vector<CPositional*>();

	if (*aSecond >= *aFirst)
	{
		CPositional* buffSecond = new CPositional();
		buffSecond = aSecond;
		aSecond = aFirst;
		aFirst = buffSecond;
	}

	retVal->push_back(aFirst);
	retVal->push_back(aSecond);

	return retVal;
}

vector<int>* COperation::Add(vector<int>* firstCopy, vector<int>* secondCopy, int& base)
{
	vector<int>* retVal = new vector<int>();

	vector<int>::reverse_iterator Xi = firstCopy->rbegin();
	vector<int>::reverse_iterator Yi = secondCopy->rbegin();

	int Ciplus1 = 0;

	while (Xi != firstCopy->rend()) {
		retVal->push_back((*Xi + *Yi + Ciplus1) % base);
		Ciplus1 = (*Xi++ + *Yi++ + Ciplus1) / base;
	}

	return retVal;
}

vector<int>* COperation::Sub(vector<int>* firstCopy, vector<int>* secondCopy, int& base)
{
	vector<int>* retVal = new vector<int>();

	vector<int>::reverse_iterator Xi = firstCopy->rbegin();
	vector<int>::reverse_iterator Yi = secondCopy->rbegin();

	int Ci = 0;
	int Ciplus1 = 0;

	while (Xi != firstCopy->rend()) {

		if ((*Xi - Ci) < *Yi) 
			Ciplus1 = 1;
		else 
			Ciplus1 = 0;

		int zi = *Xi + base * Ciplus1 - *Yi - Ci;

		retVal->push_back(zi);

		Ci = Ciplus1;

		Xi++; Yi++;
	}

	return retVal;
}

CPositional* COperation::apply(CPositional* aFirst, CPositional* aSecond, char aOper)
{
	int base = aFirst->GetIntBase();
	bool ifAscend = *aSecond >= *aFirst;

	vector<int>* retVal = nullptr;
	vector<CPositional*>* descVals = nullptr;
	vector<vector<int>*>* matrixVals = nullptr;

	descVals = DescSortedModules(aFirst, aSecond);

	int fstSign = descVals->at(0)->GetSign();
	int sndSign = descVals->at(1)->GetSign();

	matrixVals = CPositional::allign(descVals->at(0), descVals->at(1));
	
#pragma region ******************** DISPATCHER *****************************

	if (aOper == O_ADD)
	{
		if (fstSign == 1 ^ sndSign == 1 )
			retVal = Sub(matrixVals->at(0), matrixVals->at(1), base);
		else
			retVal = Add(matrixVals->at(0), matrixVals->at(1), base);
	}
	else if (aOper == O_SUB)
	{
		if (fstSign == 1 ^ sndSign == 1 )
			retVal = Add(matrixVals->at(0), matrixVals->at(1), base);
		else
			retVal = Sub(matrixVals->at(0), matrixVals->at(1), base);
	}
#pragma endregion

	while (retVal->back() == 0)
		retVal->pop_back();

	vector<char>* retRev = new vector<char>(retVal->size());

	NUtils::FoldRightVI_VC(NUtils::ToEqualsChar, retVal, retRev);

	string* retStr = new string(retRev->begin(), retRev->end());

	delete retVal;
	descVals = nullptr;
	matrixVals = nullptr; 

	int sign = NUtils::detSign(fstSign, sndSign, aOper, ifAscend);

	CPositional* end = new CPositional(NUtils::ToEqualsChar(base), *retStr, NUtils::ToEqualsChar(sign));

	delete retStr;
	retRev = nullptr;

	return end;
}
