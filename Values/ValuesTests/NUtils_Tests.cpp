#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(NUtils_Test)
	{
	public:

		TEST_METHOD(ToEqualInt_1)
		{
			// arrange	
			char inVal = '1';
			int expected = 1;
			int reached = 0;
			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reached = NUtils::ToEqualsInt(inVal);

			// assert
			reachedBool &= reached && expected;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(ToEqualInt_9)
		{
			// arrange	
			char inVal = '9';
			int expected = 9;
			int reached = 0;
			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reached = NUtils::ToEqualsInt(inVal);

			// assert
			reachedBool &= reached && expected;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(ToEqualInt_A)
		{
			// arrange	
			char inVal = 'A';
			int expected = 10;
			int reached = 0;
			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reached = NUtils::ToEqualsInt(inVal);

			// assert
			reachedBool &= reached && expected;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(ToEqualInt_G)
		{
			// arrange	
			char inVal = 'G';
			int expected = 16;
			int reached = 0;
			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reached = NUtils::ToEqualsInt(inVal);

			// assert
			reachedBool &= reached && expected;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(ToEqualChar_1)
		{
			// arrange	
			char inVal = 1;
			char expected = '1';
			char reached = '0';
			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reached = NUtils::ToEqualsChar(inVal);

			// assert
			reachedBool &= reached && expected;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(ToEqualChar_9)
		{
			// arrange	
			char inVal = 9;
			char expected = '9';
			char reached = '0';
			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reached = NUtils::ToEqualsChar(inVal);

			// assert
			reachedBool &= reached && expected;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(ToEqualChar_10)
		{
			// arrange	
			int inVal = 10;
			char expected = 'A';
			char reached = '0';
			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reached = NUtils::ToEqualsChar(inVal);

			// assert
			reachedBool &= reached && expected;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(ToEqualChar_16)
		{
			// arrange	
			int inVal = 16;
			char expected = 'G';
			char reached = '0';
			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reached = NUtils::ToEqualsChar(inVal);

			// assert
			reachedBool &= reached && expected;

			Assert::IsTrue(expectedBool & reachedBool);
		}
	};
}