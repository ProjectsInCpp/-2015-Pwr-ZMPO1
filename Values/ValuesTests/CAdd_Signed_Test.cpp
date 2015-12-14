#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include "Add.h"
#include <Positional.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(CAdd_Signed_Test)
	{
	public:

		//TEST_METHOD(CADD_APPLY_M12_M19_BASE10)
		//{
		//	// arrange	
		//	char base = 'A';
		//	char sign = '1';
		//	CPositional* first = new CPositional(base, "12", sign);
		//	CPositional* second = new CPositional(base, "19", sign);
		//	CPositional* result = nullptr;

		//	auto operation = new CAdd();
		//	result = operation->apply(first, second);

		//	vector<int>* expected = new vector<int>();
		//	int expectedSign = 1;
		//	int reachedSign = 0;
		//	bool expectedBool = true;
		//	bool reachedBool = true;

		//	expected->push_back(3);
		//	expected->push_back(1);


		//	// act
		//	vector<int>* reached = result->GetVal();
		//	reachedSign = result->GetSign();

		//	// assert
		//	reachedBool = NUtils::AreVOIEquals(expected, reached);

		//	Assert::IsTrue(expectedSign == reachedSign);
		//	Assert::IsTrue(expectedBool & reachedBool);
		//}

		//TEST_METHOD(CADD_APPLY_12_M19_BASE10)
		//{
		//	// arrange	
		//	char base = 'A';

		//	CPositional* first = new CPositional(base, "12", '0');
		//	CPositional* second = new CPositional(base, "19", '1');
		//	CPositional* result = nullptr;

		//	auto operation = new CAdd();
		//	result = operation->apply(first, second);

		//	vector<int>* expected = new vector<int>();
		//	int expectedSign = 1;
		//	int reachedSign = 0;
		//	bool expectedBool = true;
		//	bool reachedBool = true;

		//	expected->push_back(3);
		//	expected->push_back(1);


		//	// act
		//	vector<int>* reached = result->GetVal();
		//	reachedSign = result->GetSign();

		//	// assert
		//	reachedBool = NUtils::AreVOIEquals(expected, reached);

		//	Assert::IsTrue(expectedSign == reachedSign);
		//	Assert::IsTrue(expectedBool & reachedBool);
		//}

		//TEST_METHOD(CADD_APPLY_102_19_BASE10)
		//{
		//	// arrange	
		//	char base = 'A';
		//	char sign = '0';
		//	CPositional* first = new CPositional(base, "102", sign);
		//	CPositional* second = new CPositional(base, "19", sign);
		//	CPositional* result = nullptr;

		//	auto operation = new CAdd();
		//	result = operation->apply(first, second);

		//	vector<int>* expected = new vector<int>();
		//	bool expectedBool = true;
		//	bool reachedBool = true;
		//	expected->push_back(1);
		//	expected->push_back(2);
		//	expected->push_back(1);

		//	// act
		//	vector<int>* reached = result->GetVal();

		//	// assert
		//	reachedBool = NUtils::AreVOIEquals(expected, reached);

		//	Assert::IsTrue(expectedBool & reachedBool);
		//}

		//TEST_METHOD(CADD_APPLY_19_102_BASE10)
		//{
		//	// arrange	
		//	char base = 'A';
		//	char sign = '0';
		//	CPositional* first = new CPositional(base, "19", sign);
		//	CPositional* second = new CPositional(base, "102", sign);
		//	CPositional* result = nullptr;

		//	auto operation = new CAdd();
		//	result = operation->apply(first, second);

		//	vector<int>* expected = new vector<int>();
		//	bool expectedBool = true;
		//	bool reachedBool = true;
		//	expected->push_back(1);
		//	expected->push_back(2);
		//	expected->push_back(1);

		//	// act
		//	vector<int>* reached = result->GetVal();

		//	// assert
		//	reachedBool = NUtils::AreVOIEquals(expected, reached);

		//	Assert::IsTrue(expectedBool & reachedBool);
		//}
	};
}