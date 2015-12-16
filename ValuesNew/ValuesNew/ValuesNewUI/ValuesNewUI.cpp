// ValuesNewUI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Positional.h"
#include "Operation.h"
#include "NUtils.h"
#include <iostream>

using namespace std;


int main()
{
	char fstSgn = '0';
	char sndSgn = '0';
	char inBase = 'A';
	string fstVal = "";
	string sndVal = "";
	char inOper = '+';	

	CPositional* secondVal = new CPositional(inBase, "19", '1');

	cout << " Witam w moim kalkulatorze " << endl;

	cout << " W jakim systemie pozycyjnym chcesz wykonywac obliczenia? " << endl;
	cout << " Odpowiedz podaj wedlug alfabetu <2..9..A,B..Z> : "; cin >> inBase;

	cout << " Podaj pierwsza liczbe	: "; cin >> fstVal; cout << fstVal << endl;
	cout << " Podaj znak pierwszej liczby w konwencji Znak Modul : "; cin >> fstSgn; cout << fstSgn << endl;

	CPositional* fstPackVal = new CPositional(inBase, fstVal, fstSgn);

	cout << " Podaj druga liczbe : "; cin >> sndVal; cout << sndVal << endl;
	cout << " Podaj znak drugiej liczby w konwencji Znak Modul : ";	cin >> sndSgn; cout << sndSgn;

	CPositional* sndPackVal = new CPositional(inBase, sndVal, sndSgn);

	cout << " Podaj operacje ktora chcesz wykonac : " << endl;
	cout << " Odpowiedz podaj wedlug alfabetu {+,-} : "; cin >> inOper; cout << inOper << endl;

	COperation* operation = new COperation();
	CPositional* reachedVal = operation->apply(fstPackVal, sndPackVal, inOper);

	cout << "Odpowiedz: " << endl;
	cout << fstVal + "_" + inOper + "_" + sndVal + "=" + NUtils::ToEqualsChar(reachedVal->GetSign());

	for_each(reachedVal->GetVal()->begin(), reachedVal->GetVal()->end(), [](int a) { cout<< NUtils::ToEqualsChar(a); });

	cout << " Dziekuje za uzycie programu . Mady By B.T. " << endl;

	system("Pause");
    return 0;
}

