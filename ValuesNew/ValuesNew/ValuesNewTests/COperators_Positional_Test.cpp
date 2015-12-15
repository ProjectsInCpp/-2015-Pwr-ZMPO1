#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include "Add.h"
#include <Positional.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(COperators_Positional_Test)
	{
	public:
		TEST_METHOD(_12_HIGHER_OR_EQUAL_19_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "12", sign);
			CPositional* second = new CPositional(base, "19", sign);

			bool expected = false;
			bool reached = true;

			// act
			reached = *first >= *second;

			// assert

			boolean resultBool = !(expected ^ reached);

			delete first;
			delete second;
			first = nullptr;
			second = nullptr;

			Assert::IsTrue(resultBool);
		}

		TEST_METHOD(_19_HIGHER_OR_EQUAL_12_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "19", sign);
			CPositional* second = new CPositional(base, "12", sign);

			bool expected = true;
			bool reached = true;

			// act
			reached = *first >= *second;

			// assert

			boolean resultBool = !(expected ^ reached);

			delete first;
			delete second;
			first = nullptr;
			second = nullptr;

			Assert::IsTrue(resultBool);
		}

		TEST_METHOD(_120_HIGHER_OR_EQUAL_19_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "120", sign);
			CPositional* second = new CPositional(base, "19", sign);

			bool expected = true;
			bool reached = true;

			// act
			reached = *first >= *second;

			// assert

			boolean resultBool = !(expected ^ reached);
			delete first;
			delete second;
			first = nullptr;
			second = nullptr;

			Assert::IsTrue(resultBool);
		}

		TEST_METHOD(_102_HIGHER_OR_EQUAL_12_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "102", sign);
			CPositional* second = new CPositional(base, "12", sign);

			bool expected = true;
			bool reached = true;

			// act
			reached = *first >= *second;

			// assert

			boolean resultBool = !(expected ^ reached);
			delete first;
			delete second;
			first = nullptr;
			second = nullptr;

			Assert::IsTrue(resultBool);
		}

		TEST_METHOD(_12_HIGHER_OR_EQUAL_102_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "12", sign);
			CPositional* second = new CPositional(base, "102", sign);

			bool expected = false;
			bool reached = true;

			// act
			reached = *first >= *second;

			// assert

			boolean resultBool = !(expected ^ reached);
			delete first;
			delete second;
			first = nullptr;
			second = nullptr;

			Assert::IsTrue(resultBool);
		}

		TEST_METHOD(_120_HIGHER_OR_EQUAL_120_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "120", sign);
			CPositional* second = new CPositional(base, "120", sign);

			bool expected = true;
			bool reached = true;

			// act
			reached = *first >= *second;

			// assert

			boolean resultBool = !(expected ^ reached);
			delete first;
			delete second;
			first = nullptr;
			second = nullptr;

			Assert::IsTrue(resultBool);
		}

		TEST_METHOD(_12_EQUAL_19_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "12", sign);
			CPositional* second = new CPositional(base, "19", sign);

			bool expected = false;
			bool reached = true;

			// act
			reached = *first == *second;

			// assert

			boolean resultBool = !(expected ^ reached);
			delete first;
			delete second;
			first = nullptr;
			second = nullptr;

			Assert::IsTrue(resultBool);
		}

		TEST_METHOD(_0_EQUAL_0_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "0", sign);
			CPositional* second = new CPositional(base, "0", sign);

			bool expected = true;
			bool reached = true;

			// act
			reached = *first == *second;

			// assert

			boolean resultBool = !(expected ^ reached);
			delete first;
			delete second;
			first = nullptr;
			second = nullptr;

			Assert::IsTrue(resultBool);
		}
	};
}