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
		
		TEST_METHOD(CTOR_Base2)
		{
			// arrange	
			char base = '2';
			CAlphabet* binary = new CAlphabet(base);
			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(0);
			expected->push_back(1);

			// act
			vector<int>* reached = binary->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_Base8)
		{
			// arrange	
			char base = '8';
			CAlphabet* binary = new CAlphabet(base);
			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(0);
			expected->push_back(1);
			expected->push_back(2);
			expected->push_back(3);
			expected->push_back(4);
			expected->push_back(5);
			expected->push_back(6);
			expected->push_back(7);

			// act
			vector<int>* reached = binary->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

		TEST_METHOD(CTOR_Base16)
		{
			// arrange	
			char base = 'G';
			CAlphabet* binary = new CAlphabet(base);
			vector<int>* expected = new vector<int>();
			bool expectedBool = true;
			bool reachedBool = true;
			expected->push_back(0);
			expected->push_back(1);
			expected->push_back(2);
			expected->push_back(3);
			expected->push_back(4);
			expected->push_back(5);
			expected->push_back(6);
			expected->push_back(7);
			expected->push_back(8);
			expected->push_back(9);
			expected->push_back(10);
			expected->push_back(11);
			expected->push_back(12);
			expected->push_back(13);
			expected->push_back(14);
			expected->push_back(15);

			// act
			vector<int>* reached = binary->GetVal();

			// assert
			reachedBool = NUtils::AreVOIEquals(expected, reached);

			Assert::IsTrue(expectedBool & reachedBool);
		}

	};
}