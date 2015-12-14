#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include <Binary.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(CBinary_Test)
	{
	public:

		TEST_METHOD(CTOR_PLUS_1001_2)
		{
			// arrange	
			string chain = "1001";
			char sign = '0';
			IValue* decimal = new CBinary(chain, sign);

			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(1);
			expected->push_back(0);
			expected->push_back(0);
			expected->push_back(1);

			// act
			vector<int>* reached = decimal->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_PLUS_9A5_2)
		{
			// arrange	
			string chain = "9C5";
			char sign = '0';
			IValue* decimal = new CBinary(chain, sign);

			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(0);
			expected->push_back(0);
			expected->push_back(0);

			// act
			vector<int>* reached = decimal->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_PLUS_13241101_2)
		{
			// arrange	
			string chain = "13241101";
			char sign = '0';
			IValue* decimal = new CBinary(chain, sign);

			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(1);
			expected->push_back(0);
			expected->push_back(0);
			expected->push_back(0);
			expected->push_back(1);
			expected->push_back(1);
			expected->push_back(0);
			expected->push_back(1);

			// act
			vector<int>* reached = decimal->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}
	};
}