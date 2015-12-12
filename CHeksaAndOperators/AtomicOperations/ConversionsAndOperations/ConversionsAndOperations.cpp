// ConversionsAndOperations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <math.h>

#define BIN_BASE 2

using namespace std;

void hexaRepresentation();
void octaRepresentation();
void sevenRepresentation();
void multiRepresentation(vector<int>* value, int base);
void Representation17();
int wordSize(int inBase);
vector<int>* quotientProductMethod(vector<int>* aVal,int inBase);
vector<int>* quotientProductMethodReverse(vector<int>* aVal, int inBase );

int main()
{
	int v = 1;
	int i = 1;
	int j = 1;

	vector<int> *values;


	float val1 = 2.0;
	cout << " ************************** HEXA ********************* " << endl;
	hexaRepresentation();
	cout << endl;cout << endl;

	cout << " ************************** HEXA_FROM_MULTI ********************* " << endl;
	values = new vector<int>();
	values->push_back(10);
	values->push_back(15);

	multiRepresentation(values,16);
	cout << endl;cout << endl;

	cout << " ************************** OCTA ********************* " << endl;
	octaRepresentation();
	cout << endl;cout << endl;

	cout << " ************************** OCTA_FROM_MULTI ********************* " << endl;
	values = new vector<int>();
	values->push_back(2);
	values->push_back(5);
	values->push_back(7);

	multiRepresentation(values, 8);
	cout << endl;cout << endl;

	cout << " ************************** SEVEN ********************* " << endl;
	//sevenRepresentation();

	cout << " ************************** SEVEN_FROM_MULTI ********************* " << endl;
	values = new vector<int>();
	values->push_back(3);
	values->push_back(2);
	values->push_back(5);
	values->push_back(0);

	multiRepresentation(values, 7);
	cout << endl;cout << endl;

	cout << endl;cout << endl;
	//Representation17();
	//cout << endl;cout << endl;

	//cout << log2(4.0+1) << endl;
	//cout << log2(4+1) << endl;
	//cout << log2(4.0) << endl;
	//cout << val1     << ":"  <<log2(val1) <<	 "ceil:" << ceil(log2(val1)) << endl;
	/*cout << "2-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout << "3-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout <<"4-New"<< val1 + v++ << ":" <<	log2(val1 + i++) << "ceil:"	<< ceil(log2(val1 + j++)) << endl;
	cout <<"5-New"<< val1 + v++ << ":" <<	log2(val1 + i++) << "ceil:"	<< ceil(log2(val1 + j++)) << endl;
	cout <<"6-New"<< val1 + v++ << ":" <<	log2(val1 + i++) << "ceil:"	<< ceil(log2(val1 + j++)) << endl;
	cout <<"7-New"<< val1 + v++ << ":" <<	log2(val1 + i++) << "ceil:"	<< ceil(log2(val1 + j++)) << endl;
	cout <<"8-New"<< val1 + v++ << ":" <<	log2(val1 + i++) << "ceil:"	<< ceil(log2(val1 + j++)) << endl;
	cout << "9-New" << val1 + v++ << ":" <<  log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout << "10-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout << "11-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout << "12-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout << "13-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout << "14-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout << "15-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;
	cout << "16-New" << val1 + v++ << ":" << log2(val1 + i++) << "ceil:" << ceil(log2(val1 + j++)) << endl;*/
	getchar();

    return 0;
}

void hexaRepresentation()
{
	int hexBase = 16;
	int i = 0;
	vector<int>* first = new vector<int>();
	first->push_back(10); // A
	first->push_back(15); // F

	cout << "QuotientProduct To Bin " << endl;

	for (vector<int>::iterator it = first->begin();it != first->end();++it)
		cout << *it << ' ';

	cout << '\n';

	vector<int>* binVal = quotientProductMethod(first,hexBase);

	for (vector<int>::iterator it = binVal->begin();it != binVal->end();++it)
	{
		cout << *it;

		if (i++ / (wordSize(hexBase) - 1) == 1)
		{
			cout << ' ';
			i = 0;
		}

	}

	cout << "QuotientProduct To Hex " << endl;
	vector<int>* hexVal = quotientProductMethodReverse(binVal, hexBase);

	for (vector<int>::iterator it = hexVal->begin();it != hexVal->end();++it)
		cout << *it << ' ';

}
void octaRepresentation()
{
	int hexBase = 8;
	int i = 0;
	vector<int>* first = new vector<int>();
	first->push_back(2); // A
	first->push_back(5); // F
	first->push_back(7); // F

	cout << "QuotientProduct To Bin " << endl;
	for (vector<int>::iterator it = first->begin();it != first->end();++it)
		cout << *it << ' ';

	cout << '\n';

	vector<int>* binVal = quotientProductMethod(first,hexBase);

	for (vector<int>::iterator it = binVal->begin();it != binVal->end();++it)
	{
		cout << *it;

		if (i++ / (wordSize(hexBase) - 1) == 1)
		{
			cout << ' ';
			i = 0;
		}

	}

	cout << "QuotientProduct To Hex " << endl;
	vector<int>* hexVal = quotientProductMethodReverse(binVal, hexBase);

	for (vector<int>::iterator it = hexVal->begin();it != hexVal->end();++it)
		cout << *it << ' ';

}

void multiRepresentation(vector<int>* first, int base)
{
	int i = 0;

	cout << "QuotientProduct To Bin " << endl;
	for (vector<int>::iterator it = first->begin();it != first->end();++it)
		cout << *it << ' ';

	cout << '\n';

	vector<int>* binVal = quotientProductMethod(first, base);

	for (vector<int>::iterator it = binVal->begin();it != binVal->end();++it)
	{
		cout << *it;

		if (i++ / (wordSize(base) - 1) == 1)
		{
			cout << ' ';
			i = 0;
		}

	}

	cout << "QuotientProduct To Hex " << endl;
	vector<int>* hexVal = quotientProductMethodReverse(binVal, base);

	for (vector<int>::iterator it = hexVal->begin();it != hexVal->end();++it)
		cout << *it << ' ';

}

void sevenRepresentation()
{
	int hexBase = 7;
	int i = 0;
	vector<int>* first = new vector<int>();
	first->push_back(2); // A
	first->push_back(5); // F
	first->push_back(6); // F

	cout << "QuotientProduct To Bin " << endl;
	for (vector<int>::iterator it = first->begin();it != first->end();++it)
		cout << *it << ' ';

	cout << '\n';

	vector<int>* binVal = quotientProductMethod(first, hexBase);

	for (vector<int>::iterator it = binVal->begin();it != binVal->end();++it)
	{
		cout << *it;

		if (i++ / (wordSize(hexBase) - 1) == 1)
		{
			cout << ' ';
			i = 0;
		}

	}

	cout << "QuotientProduct To Hex " << endl;
	vector<int>* hexVal = quotientProductMethodReverse(binVal, hexBase);

	for (vector<int>::iterator it = hexVal->begin();it != hexVal->end();++it)
		cout << *it << ' ';

}

void Representation17()
{
	int hexBase = 17;
	int i = 0;
	vector<int>* first = new vector<int>();
	first->push_back(10); // A
	first->push_back(16); // F
	//first->push_back(6); // F

	cout << "QuotientProduct To Bin " << endl;
	for (vector<int>::iterator it = first->begin();it != first->end();++it)
		cout << *it << ' ';

	cout << '\n';

	vector<int>* binVal = quotientProductMethod(first, hexBase);

	for (vector<int>::iterator it = binVal->begin();it != binVal->end();++it)
	{
		cout << *it;

		if (i++ / (wordSize(hexBase) - 1) == 1)
		{
			cout << ' ';
			i = 0;
		}

	}

	cout << "QuotientProduct To Hex " << endl;
	vector<int>* hexVal = quotientProductMethodReverse(binVal, hexBase);

	for (vector<int>::iterator it = hexVal->begin();it != hexVal->end();++it)
		cout << *it << ' ';

}

int wordSize(int inBase)
{
	return ceil(log2(inBase*1.0));
}

vector<int>* quotientProductMethod(vector<int>* aVal ,int inBase)
{
	vector<int> *buffVal = new vector<int>();

	for (vector<int>::reverse_iterator it = aVal->rbegin();it != aVal->rend();++it)
	{
		while (*it > 0)
		{
			buffVal->push_back(*it % BIN_BASE);
			*it /= BIN_BASE;
		}
		
		while (buffVal->size() % wordSize(inBase) != 0)
			buffVal->push_back(0);
	}

	vector<int> *outVal = new vector<int>();

	for (vector<int>::reverse_iterator it = buffVal->rbegin();it != buffVal->rend();++it)
	{
		outVal->push_back(*it);
	}

	delete buffVal;
	return outVal;
}
//
vector<int>* quotientProductMethodReverse(vector<int>* aVal, int inBase )
{
	vector<int> *buffVal = new vector<int>();
	int i = 0;
	int sum(0);

	for (vector<int>::reverse_iterator it = aVal->rbegin();it != aVal->rend();++it)
	{
		sum += *it * pow(BIN_BASE, i++);
		if (i % wordSize(inBase) == 0) {
			i = 0;

			buffVal->push_back(sum);
			sum = 0;
		}
	}

	vector<int> *outVal = new vector<int>();

	for (vector<int>::reverse_iterator it = buffVal->rbegin();it != buffVal->rend();++it)
		outVal->push_back(*it);

	delete buffVal;
	return outVal;
}
//
