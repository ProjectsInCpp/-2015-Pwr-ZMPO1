#include "stdafx.h"
#include "CppUnitTest.h"
#include "Alphabet.h"
#include <windows.h>
#include "Add.h"
#include <Positional.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ValuesTests
{
	TEST_CLASS(COperators_Positional_Test)
	{
	public:

		TEST_METHOD(_12_HIGHER_19_BASE10)
		{
			// arrange	
			char base = 'A';
			char sign = '0';
			CPositional* first = new CPositional(base, "12", sign);
			CPositional* second = new CPositional(base, "19", sign);
			CPositional* result = nullptr;

			bool expectedBool = true;
			bool reachedBool = true;

			// act
			reachedBool = first > second;

			// assert

			Assert::IsTrue(expectedBool & reachedBool);
		}

		
	};
}