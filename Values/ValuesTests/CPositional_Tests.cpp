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

	};
}