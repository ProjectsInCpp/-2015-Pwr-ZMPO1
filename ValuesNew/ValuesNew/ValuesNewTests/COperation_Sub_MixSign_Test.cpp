#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include "Operation.h"
#include <Positional.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(COperation_Sub_MixSign)
	{
	public:
		TEST_METHOD(SUB_APPLY_M12_M19_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "12", '1');
			CPositional* secondVal = new CPositional(inBase, "19", '1');

			CPositional* expectedVal = new CPositional(inBase, "7", '0');
			int expectedSign = 1;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_SUB);
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

		TEST_METHOD(SUB_APPLY_M12_M109_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "12", '1');
			CPositional* secondVal = new CPositional(inBase, "109", '1');

			CPositional* expectedVal = new CPositional(inBase, "97", '0');
			int expectedSign = 1;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_SUB);
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

		TEST_METHOD(SUB_APPLY_M19_M12_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "19", '1');
			CPositional* secondVal = new CPositional(inBase, "12", '1');

			CPositional* expectedVal = new CPositional(inBase, "7", '1');
			int expectedSign = 1;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_SUB);
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

		TEST_METHOD(SUB_APPLY_M109_M12_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "109", '1');
			CPositional* secondVal = new CPositional(inBase, "12", '1');

			CPositional* expectedVal = new CPositional(inBase, "97", '1');
			int expectedSign = 1;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_SUB);
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

		TEST_METHOD(SUB_APPLY_19_M12_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "19", '0');
			CPositional* secondVal = new CPositional(inBase, "12", '1');

			CPositional* expectedVal = new CPositional(inBase, "31", '0');
			int expectedSign = 0;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_SUB);
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

		TEST_METHOD(SUB_APPLY_M19_12_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "19", '1');
			CPositional* secondVal = new CPositional(inBase, "12", '0');

			CPositional* expectedVal = new CPositional(inBase, "31", '1');
			int expectedSign = 1;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_SUB);
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

		TEST_METHOD(SUB_APPLY_M12_19_BASE10)
		{
			// arrange	
			char inBase = 'A';
			CPositional* firstVal = new CPositional(inBase, "12", '1');
			CPositional* secondVal = new CPositional(inBase, "19", '0');

			CPositional* expectedVal = new CPositional(inBase, "31", '1');
			int expectedSign = 0;

			// act
			COperation* operation = new COperation();
			CPositional* reachedVal = operation->apply(firstVal, secondVal, O_SUB);
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