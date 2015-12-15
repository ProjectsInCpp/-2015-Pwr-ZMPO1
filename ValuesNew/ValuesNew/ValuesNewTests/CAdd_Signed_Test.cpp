#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include "Add.h"
#include <Positional.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(CAdd_Signed_Test)
	{
	public:

		TEST_METHOD(CADD_APPLY_M12_M19_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '1';
			CPositional* first = new CPositional(base, "12", sign);
			CPositional* second = new CPositional(base, "19", sign);
			CPositional* expected = new CPositional(base, "31", sign);

			auto operation = new CAdd();

			int expectedSign = 1;
			int reachedSign = 0;

			// act
			CPositional* reached = operation->apply(first, second);
			reachedSign = reached->GetSign();

			// assert

			Assert::IsTrue(expectedSign == reachedSign);
			Assert::IsTrue(*expected == *reached);

			delete first;
			delete second;
			delete expected;
			first = nullptr;
			second = nullptr;
			expected = nullptr;
			reached = nullptr;
		}

		TEST_METHOD(CADD_APPLY_12_19_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "12", sign);
			CPositional* second = new CPositional(base, "19", sign);
			CPositional* expected = new CPositional(base, "31", sign);

			auto operation = new CAdd();

			int expectedSign = 0;
			int reachedSign = 0;

			// act
			CPositional* reached = operation->apply(first, second);
			reachedSign = reached->GetSign();

			// assert

			Assert::IsTrue(expectedSign == reachedSign);
			Assert::IsTrue(*expected == *reached);

			delete first;
			delete second;
			delete expected;
			first = nullptr;
			second = nullptr;
			expected = nullptr;
			reached = nullptr;
		}

		TEST_METHOD(CADD_APPLY_19_12_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "19", sign);
			CPositional* second = new CPositional(base, "12", sign);
			CPositional* expected = new CPositional(base, "31", sign);

			auto operation = new CAdd();

			int expectedSign = 0;
			int reachedSign = 0;

			// act
			CPositional* reached = operation->apply(first, second);
			reachedSign = reached->GetSign();

			// assert

			Assert::IsTrue(expectedSign == reachedSign);
			Assert::IsTrue(*expected == *reached);

			delete first;
			delete second;
			delete expected;
			first = nullptr;
			second = nullptr;
			expected = nullptr;
			reached = nullptr;
		}
	};
}