#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include <Positional.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(CPositional_Test)
	{
	public:

		TEST_METHOD(CTOR_PLUS_945_10)
		{
			// arrange	
			char base = 'A';
			string chain = "945";
			char sign = '0';
			IValue* decimal = new CPositional(base, chain, sign);

			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(9);
			expected->push_back(4);
			expected->push_back(5);

			// act
			vector<int>* reached = decimal->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_PLUS_9A5_10)
		{
			// arrange	
			char base = 'A';
			string chain = "9C5";
			char sign = '0';
			IValue* decimal = new CPositional(base, chain, sign);

			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(9);
			expected->push_back(0);
			expected->push_back(5);

			// act
			vector<int>* reached = decimal->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_PLUS_745_8)
		{
			// arrange	
			char base = '8';
			string chain = "745";
			char sign = '0';
			IValue* decimal = new CPositional(base, chain, sign);

			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(7);
			expected->push_back(4);
			expected->push_back(5);

			// act
			vector<int>* reached = decimal->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_PLUS_BA3_16)
		{
			// arrange	
			char base = 'G';
			string chain = "BA3";
			char sign = '0';
			IValue* decimal = new CPositional(base, chain, sign);

			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(11);
			expected->push_back(10);
			expected->push_back(3);

			// act
			vector<int>* reached = decimal->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

	};
}