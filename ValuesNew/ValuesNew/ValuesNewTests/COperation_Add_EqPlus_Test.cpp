#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include "Add.h"
#include <Positional.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(COperation_Add_EqPlus)
	{
	public:

		TEST_METHOD(ADD_APPLY_12_19_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "12", '0');
			CPositional* secondVal = new CPositional(inBase, "19", '0');

			CPositional* expectedVal = new CPositional(inBase, "31", '0');
			int expectedSign = 0;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_ADD);
			int reachedSign = reachedVal->GetSign();

			// assert

			Assert::IsTrue(expectedSign == reachedSign);
			Assert::IsTrue(*expectedVal == *reachedVal);

			delete firstVal;
			delete secondVal;
			delete expectedVal;
			delete reachedVal;
			firstVal = nullptr;
			secondVal = nullptr;
			expectedVal = nullptr;
			reachedVal = nullptr;
		}

		TEST_METHOD(ADD_APPLY_19_12_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "19", '0');
			CPositional* secondVal = new CPositional(inBase, "12", '0');

			CPositional* expectedVal = new CPositional(inBase, "31", '0');
			int expectedSign = 0;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_ADD);
			int reachedSign = reachedVal->GetSign();

			// assert

			Assert::IsTrue(expectedSign == reachedSign);
			Assert::IsTrue(*expectedVal == *reachedVal);

			delete firstVal;
			delete secondVal;
			delete expectedVal;
			delete reachedVal;
			firstVal = nullptr;
			secondVal = nullptr;
			expectedVal = nullptr;
			reachedVal = nullptr;
		}

		TEST_METHOD(ADD_APPLY_12_102_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "12", '0');
			CPositional* secondVal = new CPositional(inBase, "102", '0');

			CPositional* expectedVal = new CPositional(inBase, "114", '0');
			int expectedSign = 0;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_ADD);
			int reachedSign = reachedVal->GetSign();

			// assert

			Assert::IsTrue(expectedSign == reachedSign);
			Assert::IsTrue(*expectedVal == *reachedVal);

			delete firstVal;
			delete secondVal;
			delete expectedVal;
			delete reachedVal;
			firstVal = nullptr;
			secondVal = nullptr;
			expectedVal = nullptr;
			reachedVal = nullptr;
		}

		TEST_METHOD(ADD_APPLY_102_12_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "102", '0');
			CPositional* secondVal = new CPositional(inBase, "12", '0');

			CPositional* expectedVal = new CPositional(inBase, "114", '0');
			int expectedSign = 0;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_ADD);
			int reachedSign = reachedVal->GetSign();

			// assert

			Assert::IsTrue(expectedSign == reachedSign);
			Assert::IsTrue(*expectedVal == *reachedVal);

			delete firstVal;
			delete secondVal;
			delete expectedVal;
			delete reachedVal;
			firstVal = nullptr;
			secondVal = nullptr;
			expectedVal = nullptr;
			reachedVal = nullptr;
		}
	};
}