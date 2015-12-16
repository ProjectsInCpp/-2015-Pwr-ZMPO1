// ValuesNewUI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Positional.h"
#include "Operation.h"
#include "NUtils.h"
#include <iostream>

using namespace std;

struct MOCK_DEC
{
	const char inBase = 'A';
	const string fstVal = "123";
	const char fstSgn = '1';
	const string sndVal = "123";
	const char sndSgn = '1';
	const char inOper = O_ADD;
};

//int main()
//{
//	char fstSgn = '0';
//	char sndSgn = '0';
//	char inBase = 'A';
//	string fstVal = "";
//	string sndVal = "";
//	char inOper = '+';	
//	
//	cout << " Witam w moim kalkulatorze " << endl;
//
//	cout << " W jakim systemie pozycyjnym chcesz wykonywac obliczenia? " << endl;
//	cout << " Odpowiedz podaj wedlug alfabetu <2..9..A,B..Z> : "; 
//	cin >> inBase; cout << inBase;
//
//	cout << " Podaj pierwsza liczbe	: "; 
//	cin >> fstVal; cout << fstVal << endl;
//
//	cout << " Podaj znak pierwszej liczby w konwencji Znak Modul : "; 
//	cin >> fstSgn; cout << fstSgn << endl;
//
//	CPositional* fstPackVal = new CPositional(inBase, fstVal, fstSgn);
//
//	cout << " Podaj druga liczbe : "; 
//	cin >> sndVal; cout << sndVal << endl;
//
//	cout << " Podaj znak drugiej liczby w konwencji Znak Modul : ";	
//	cin >> sndSgn; cout << sndSgn;
//
//	CPositional* sndPackVal = new CPositional(inBase, sndVal, sndSgn);
//
//	cout << " Podaj operacje ktora chcesz wykonac : " << endl;
//	cout << " Odpowiedz podaj wedlug alfabetu {+,-} : "; 
//	cin >> inOper; cout << inOper << endl;
//
//	COperation* operation = new COperation();
//	CPositional* reachedVal = operation->apply(fstPackVal, sndPackVal, inOper);
//
//	cout << "Odpowiedz: " << endl;
//	cout << fstVal + "_" + inOper + "_" + sndVal + "=";
//	cout << *reachedVal;
//	
//	cout << " Dziekuje za uzycie programu . Mady By B.T. " << endl;
//
//	system("Pause");
//    return 0;
//}


int main()
{
	MOCK_DEC dummy;

	cout << " Witam w moim kalkulatorze " << endl;

	cout << " W jakim systemie pozycyjnym chcesz wykonywac obliczenia? " << endl;
	cout << " Odpowiedz podaj wedlug alfabetu <2..9..A,B..Z> : ";
	cout << dummy.inBase << endl;

	cout << " Podaj pierwsza liczbe	: ";
	cout << dummy.fstVal << endl;

	cout << " Podaj znak pierwszej liczby w konwencji Znak Modul : ";
	cout << dummy.fstSgn << endl << endl;

	CPositional* fstPackVal = new CPositional(dummy.inBase, dummy.fstVal, dummy.fstSgn);

	cout << " Podaj druga liczbe : ";
	cout << dummy.sndVal << endl;

	cout << " Podaj znak drugiej liczby w konwencji Znak Modul : ";
	cout << dummy.sndSgn << endl;

	CPositional* sndPackVal = new CPositional(dummy.inBase, dummy.sndVal, dummy.sndSgn);

	cout << " Podaj operacje ktora chcesz wykonac : " << endl;
	cout << " Odpowiedz podaj wedlug alfabetu {+,-} : ";
	cout << dummy.inOper << endl;

	COperation* operation = new COperation();
	CPositional* reachedVal = operation->apply(fstPackVal, sndPackVal, dummy.inOper);

	cout << "Odpowiedz: " << endl;
	cout << dummy.fstVal + "_" + dummy.inOper + "_" + dummy.sndVal + "=";
	cout << *reachedVal;
	
	cout << " Dziekuje za uzycie programu . Mady By B.T. " << endl;

	system("Pause");
	return 0;
}

