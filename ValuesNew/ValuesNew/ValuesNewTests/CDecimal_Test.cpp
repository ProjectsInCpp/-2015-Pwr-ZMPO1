#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include <Decimal.h>
//#include <Decimal.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(CDecimal_Test)
	{
	public:

		TEST_METHOD(CTOR_PLUS_945_10)
		{
			// arrange	
			string chain = "945";
			char sign = '0';
			IValue* decimal = new CDecimal(chain, sign);

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

			delete decimal;
			decimal = nullptr;
			reached = nullptr;
			expected = nullptr;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_PLUS_9A5_10)
		{
			// arrange	
			string chain = "9C5";
			char sign = '0';
			IValue* decimal = new CDecimal(chain, sign);

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

			delete decimal;
			decimal = nullptr;
			reached = nullptr;
			expected = nullptr;

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_PLUS_13241101_10)
		{
			// arrange	
			string chain = "13241101";
			char sign = '0';
			IValue* decimal = new CDecimal(chain, sign);

			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(1);
			expected->push_back(3);
			expected->push_back(2);
			expected->push_back(4);
			expected->push_back(1);
			expected->push_back(1);
			expected->push_back(0);
			expected->push_back(1);

			// act
			vector<int>* reached = decimal->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			delete decimal;
			decimal = nullptr;
			reached = nullptr;
			expected = nullptr;

			Assert::IsTrue(expectedBool & reachedBool);
		}
	};
}