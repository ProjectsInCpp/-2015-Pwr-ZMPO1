#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{		
	TEST_CLASS(CAlphabet_Test)
	{
	public:
		char base = '2';

		TEST_METHOD(CTOR_Base2)
		{
			// arrange
			DebugBreak();
			CAlphabet* binary = new CAlphabet(base);
			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(0);
			expected->push_back(1);

			// act
			vector<int>* reached = &binary->GetVal();

			// assert
			for (size_t i = 0; i < expected->size(); i++)
				reachedBool &= reached->at(i) == expected->at(i);

			Assert::IsTrue(expectedBool & reachedBool);
		}

	};
}