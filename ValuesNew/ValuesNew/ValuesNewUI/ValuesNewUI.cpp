// ValuesNewUI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Positional.h"
#include "Operation.h"
#include "NUtils.h"
#include <iostream>

using namespace std;

struct MOCK
{
	const char inBase = 'A';
	const string fstVal = "123";
	const char fstSgn = '1';
	const string sndVal = "123";
	const char sndSgn = '1';
	const char inOper = O_ADD;
};

int main()
{
	MOCK dummy;
	char fstSgn = '0';
	char sndSgn = '0';
	char inBase = 'A';
	string fstVal = "";
	string sndVal = "";
	char inOper = '+';	
	
	cout << " Witam w moim kalkulatorze " << endl;

	cout << " W jakim systemie pozycyjnym chcesz wykonywac obliczenia? " << endl;
	cout << " Odpowiedz podaj wedlug alfabetu <2..9..A,B..Z> : "; 
	cin >> inBase; cout << inBase;
	//cout << dummy.inBase << endl;

	cout << " Podaj pierwsza liczbe	: "; 
	cin >> fstVal; cout << fstVal << endl;
	//cout << dummy.fstVal << endl;

	cout << " Podaj znak pierwszej liczby w konwencji Znak Modul : "; 
	cin >> fstSgn; cout << fstSgn << endl;
	//cout << dummy.fstSgn << endl << endl;

	CPositional* fstPackVal = new CPositional(inBase, fstVal, fstSgn);
	//CPositional* fstPackVal = new CPositional(dummy.inBase, dummy.fstVal, dummy.fstSgn);

	cout << " Podaj druga liczbe : "; 
	cin >> sndVal; cout << sndVal << endl;
	//cout << dummy.sndVal << endl;

	cout << " Podaj znak drugiej liczby w konwencji Znak Modul : ";	
	cin >> sndSgn; cout << sndSgn;
	//cout << dummy.sndSgn << endl;

	CPositional* sndPackVal = new CPositional(inBase, sndVal, sndSgn);
	//CPositional* sndPackVal = new CPositional(dummy.inBase, dummy.sndVal, dummy.sndSgn);

	cout << " Podaj operacje ktora chcesz wykonac : " << endl;
	cout << " Odpowiedz podaj wedlug alfabetu {+,-} : "; 
	cin >> inOper; cout << inOper << endl;
	//cout << dummy.inOper << endl;

	COperation* operation = new COperation();
	CPositional* reachedVal = operation->apply(fstPackVal, sndPackVal, inOper);
	//CPositional* reachedVal = operation->apply(fstPackVal, sndPackVal, dummy.inOper);

	cout << "Odpowiedz: " << endl;
	cout << fstVal + "_" + inOper + "_" + sndVal + "=";
	//cout << dummy.fstVal + "_" + dummy.inOper + "_" + dummy.sndVal + "=";
	cout << *reachedVal;

	//for_each(reachedVal->GetVal()->begin(), reachedVal->GetVal()->end(), [](int a) { cout<< NUtils::ToEqualsChar(a); });

	cout << " Dziekuje za uzycie programu . Mady By B.T. " << endl;

	system("Pause");
    return 0;
}

