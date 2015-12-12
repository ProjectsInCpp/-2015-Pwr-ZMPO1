// ConversionsAndOperations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int immediateOneToDec ( vector<int>* aVal,int aBase )
{
	int sum(0);
	int i = 0;

	for (vector<int>::reverse_iterator it = aVal->rbegin();it != aVal->rend();++it)
		sum += *it* pow(aBase, i++);

	delete aVal;
	return sum;
}

vector<int>* quotientProductMethod(int aVal, int aBase)
{
	vector<int> *buffVal = new vector<int>();

	while(aVal!=0){
		buffVal->push_back(aVal % aBase);
		aVal /= 2;
	}

	vector<int> *outVal = new vector<int>();

	for (vector<int>::reverse_iterator it = buffVal->rbegin();it != buffVal->rend();++it)
	{
		outVal->push_back(*it);
	}

	delete buffVal;
	return outVal;
}

int main()
{
	int base = 16;
	vector<int>* first = new vector<int>(2);
	first->push_back(2); // A
	first->push_back(3); // F

	int result = immediateOneToDec(first, base);
	cout << "Immediate 1 To Dec " << result << endl;

	int secBase = 2;

	vector<int>* binVal = quotientProductMethod(result, secBase);	

	for (vector<int>::iterator it = binVal->begin();it != binVal->end();++it)
	{
		cout << *it;
	}

	cout << endl;
	getchar();

    return 0;
}


