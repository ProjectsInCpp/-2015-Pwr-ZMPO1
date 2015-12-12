#include "stdafx.h"
#include "CppUnitTest.h"
#include "NUtils.h"
#include "TetradeNBC.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZMPO2_2_Tests
{
	TEST_CLASS(TransparentTestCNBCTetrade_FromCNBC)
	{
	public:
		// all sizes inputted in chars are abs length of values ( without empty sign )
		// after i do need corrects

		TEST_METHOD(InsertingTooLongValue_TestOfProperAchievingDestiny)
		{
			//arrange

			char inSize = '5';
			char expectedSize = '4';
			char *expectedChain1 = new char[NUtils::ToEqualsInt(expectedSize) + END_SIGN_SIZE];
			char *inChain1 = new char[NUtils::ToEqualsInt(inSize) + END_SIGN_SIZE];

			expectedChain1[0] = '1';
			expectedChain1[1] = '0';
			expectedChain1[2] = '1';
			expectedChain1[3] = '0';
			expectedChain1[4] = '\0';

			inChain1[0] = '1';
			inChain1[1] = '1';
			inChain1[2] = '2';
			inChain1[3] = '1';
			inChain1[4] = '0';
			inChain1[5] = '\0';

			CTetradeNBC *temp = new CTetradeNBC(inChain1);

			//act
			char reachedVal0 = temp->GetVal()[0];
			char reachedVal1 = temp->GetVal()[1];
			char reachedVal2 = temp->GetVal()[2];

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal0);
			Assert::AreEqual(expectedChain1[1], reachedVal1);
			Assert::AreEqual(expectedChain1[2], reachedVal2);

			//cleanUp
			if (temp)
				delete temp;

			if (expectedChain1) {
				for (int i = 0; i < NUtils::ToEqualsInt(expectedSize);i++)
					expectedChain1[i] = NULL;
				expectedChain1 = 0;
			}
		}

		TEST_METHOD(InsertingTooLongAndOnlyErrors_TestOfProperAchievingDestiny)
		{
			//arrange
			char inSize = '6';
			char expectedSize = '4';
			char *expectedChain1 = new char[NUtils::ToEqualsInt(expectedSize) + END_SIGN_SIZE];
			char *inChain1 = new char[NUtils::ToEqualsInt(inSize) + END_SIGN_SIZE];

			expectedChain1[0] = '0';
			expectedChain1[1] = '0';
			expectedChain1[2] = '0';
			expectedChain1[3] = '0';
			expectedChain1[4] = '\0';

			inChain1[0] = '9';
			inChain1[1] = '2';
			inChain1[2] = '3';
			inChain1[3] = '8';
			inChain1[4] = '9';
			inChain1[5] = '0';
			inChain1[6] = '\0';

			CTetradeNBC *temp = new CTetradeNBC(inChain1);

			//act
			char reachedVal0 = temp->GetVal()[0];
			char reachedVal1 = temp->GetVal()[1];
			char reachedVal2 = temp->GetVal()[2];

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal0);
			Assert::AreEqual(expectedChain1[1], reachedVal1);
			Assert::AreEqual(expectedChain1[2], reachedVal2);


			//cleanUp
			if (temp)
				delete temp;

			if (expectedChain1) {
				for (int i = 0; i < NUtils::ToEqualsInt(expectedSize);i++)
					expectedChain1[i] = NULL;
				expectedChain1 = 0;
			}
		}

		TEST_METHOD(InsertingTooShortValue_TestOfProperAchievingDestiny)
		{
			//arrange
			char inSize = '2';
			char expectedSize = '4';
			char *expectedChain1 = new char[NUtils::ToEqualsInt(expectedSize) + END_SIGN_SIZE];
			char *inChain1 = new char[NUtils::ToEqualsInt(inSize) + END_SIGN_SIZE];

			expectedChain1[0] = '0';
			expectedChain1[1] = '0';
			expectedChain1[2] = '0';
			expectedChain1[3] = '1';
			expectedChain1[4] = '\0';

			inChain1[0] = '0';
			inChain1[1] = '1';
			inChain1[2] = '\0';

			CTetradeNBC *temp = new CTetradeNBC(inChain1);

			//act
			char reachedVal0 = temp->GetVal()[0];
			char reachedVal1 = temp->GetVal()[1];
			char reachedVal2 = temp->GetVal()[2];
			char reachedVal3 = temp->GetVal()[3];

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal0);
			Assert::AreEqual(expectedChain1[1], reachedVal1);
			Assert::AreEqual(expectedChain1[2], reachedVal2);
			Assert::AreEqual(expectedChain1[3], reachedVal3);

			//cleanUp
			if (temp)
				delete temp;

			if (expectedChain1) {
				for (int i = 0; i < NUtils::ToEqualsInt(expectedSize);i++)
					expectedChain1[i] = NULL;
				expectedChain1 = 0;
			}
		}

		TEST_METHOD(InsertingTooShortOnlyErrors_TestOfProperAchievingDestiny)
		{
			//arrange

			char inSize = '4';
			char expectedSize = '4';
			char *expectedChain1 = new char[NUtils::ToEqualsInt(expectedSize) + END_SIGN_SIZE];
			char *inChain1 = new char[NUtils::ToEqualsInt(inSize) + END_SIGN_SIZE];

			expectedChain1[0] = '0';
			expectedChain1[1] = '0';
			expectedChain1[2] = '0';
			expectedChain1[3] = '1';
			expectedChain1[4] = '\0';

			inChain1[0] = '0';
			inChain1[1] = '1';
			inChain1[2] = '\0';

			CTetradeNBC *temp = new CTetradeNBC(inChain1);

			//act
			char reachedVal0 = temp->GetVal()[0];
			char reachedVal1 = temp->GetVal()[1];
			char reachedVal2 = temp->GetVal()[2];
			char reachedVal3 = temp->GetVal()[3];
			char reachedVal4 = temp->GetVal()[4];
			char reachedVal5 = temp->GetVal()[5];
			char reachedVal6 = temp->GetVal()[6];

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal0);
			Assert::AreEqual(expectedChain1[1], reachedVal1);
			Assert::AreEqual(expectedChain1[2], reachedVal2);
			Assert::AreEqual(expectedChain1[3], reachedVal3);
			Assert::AreEqual(expectedChain1[4], reachedVal4);
			Assert::AreEqual(expectedChain1[5], reachedVal5);
			Assert::AreEqual(expectedChain1[6], reachedVal6);

			//cleanUp
			if (temp)
				delete temp;

			if (expectedChain1) {
				for (int i = 0; i < NUtils::ToEqualsInt(expectedSize);i++)
					expectedChain1[i] = NULL;
				expectedChain1 = 0;
			}
		}

		TEST_METHOD(InsertingEmptyChain_TestOfProperAchievingDestiny)
		{
			//arrange

			char inSize = '0';
			char expectedSize = '4';
			char *expectedChain1 = new char[NUtils::ToEqualsInt(expectedSize) + END_SIGN_SIZE];
			char *inChain1 = new char[NUtils::ToEqualsInt(inSize) + END_SIGN_SIZE];

			expectedChain1[0] = '0';
			expectedChain1[1] = '0';
			expectedChain1[2] = '0';
			expectedChain1[3] = '0';
			expectedChain1[4] = '\0';

			inChain1[0] = '\0';

			CTetradeNBC *temp = new CTetradeNBC(inChain1);

			//act
			char reachedVal0 = temp->GetVal()[0];
			char reachedVal1 = temp->GetVal()[1];
			char reachedVal2 = temp->GetVal()[2];
			char reachedVal3 = temp->GetVal()[3];
			char reachedVal4 = temp->GetVal()[4];
			char reachedVal5 = temp->GetVal()[5];
			char reachedVal6 = temp->GetVal()[6];

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal0);
			Assert::AreEqual(expectedChain1[1], reachedVal1);
			Assert::AreEqual(expectedChain1[2], reachedVal2);
			Assert::AreEqual(expectedChain1[3], reachedVal3);
			Assert::AreEqual(expectedChain1[4], reachedVal4);
			Assert::AreEqual(expectedChain1[5], reachedVal5);
			Assert::AreEqual(expectedChain1[6], reachedVal6);

			//cleanUp
			if (temp)
				delete temp;

			if (expectedChain1) {
				for (int i = 0; i < NUtils::ToEqualsInt(expectedSize);i++)
					expectedChain1[i] = NULL;
				expectedChain1 = 0;
			}
		}
	};
}