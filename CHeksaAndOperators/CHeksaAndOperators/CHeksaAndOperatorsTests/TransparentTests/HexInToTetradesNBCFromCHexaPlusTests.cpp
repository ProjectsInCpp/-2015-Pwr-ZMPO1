#include "stdafx.h"
#include "CppUnitTest.h"
#include "NUtils.h"

#include "HexaInToTetradesNBCAdapter.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZMPO2_2_Tests
{
	TEST_CLASS(TestHexInToTetradesNBCPlus_FromCHexa23)
	{
	public:

		//for (int i = 0; i < inIntSize; i++)
		//{
		//	expectedChain1[i] = new char[tetradeSize];
		//}

		TEST_METHOD(InsertingTooLongValue_TestOfProperAchievingDestiny33)
		{
			//arrange

			int expectedSign = 0;

			char inSize = '3';
			int inIntSize = NUtils::ToEqualsInt(TETRADE_SIZE);
			char *expectedChain1 = new char[inIntSize];
			char *expectedChain2 = new char[inIntSize];
			char *expectedChain3 = new char[inIntSize];

			int tetradeSize = NUtils::ToEqualsInt(TETRADE_SIZE);

			char *inChain1 = new char[NUtils::ToEqualsInt(inSize) + END_SIGN_SIZE];

			inChain1[0] = 'F';
			inChain1[1] = 'A';
			inChain1[2] = '1';
			inChain1[3] = '\0';

			expectedChain1[0] = '1';
			expectedChain1[1] = '1';
			expectedChain1[2] = '1';
			expectedChain1[3] = '1';

			expectedChain2[0] = '1';
			expectedChain2[1] = '0';
			expectedChain2[2] = '1';
			expectedChain2[3] = '0';

			expectedChain3[0] = '0';
			expectedChain3[1] = '0';
			expectedChain3[2] = '0';
			expectedChain3[3] = '1';

			CHexaInToTetradesNBCAdapter *temp
				= new CHexaInToTetradesNBCAdapter(inSize, inChain1);

			//DebugBreak();

			//act

			int reachedSign = temp->GetSign();

			char reachedVal00 = temp->GetBinaryTradeArray(0, 0);
			char reachedVal01 = temp->GetBinaryTradeArray(0, 1);
			char reachedVal02 = temp->GetBinaryTradeArray(0, 2);
			char reachedVal03 = temp->GetBinaryTradeArray(0, 3);

			char reachedVal10 = temp->GetBinaryTradeArray(1, 0);
			char reachedVal11 = temp->GetBinaryTradeArray(1, 1);
			char reachedVal12 = temp->GetBinaryTradeArray(1, 2);
			char reachedVal13 = temp->GetBinaryTradeArray(1, 3);

			char reachedVal20 = temp->GetBinaryTradeArray(2, 0);
			char reachedVal21 = temp->GetBinaryTradeArray(2, 1);
			char reachedVal22 = temp->GetBinaryTradeArray(2, 2);
			char reachedVal23 = temp->GetBinaryTradeArray(2, 3);

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal00);
			Assert::AreEqual(expectedChain1[1], reachedVal01);
			Assert::AreEqual(expectedChain1[2], reachedVal02);
			Assert::AreEqual(expectedChain1[3], reachedVal03);

			Assert::AreEqual(expectedChain2[0], reachedVal10);
			Assert::AreEqual(expectedChain2[1], reachedVal11);
			Assert::AreEqual(expectedChain2[2], reachedVal12);
			Assert::AreEqual(expectedChain2[3], reachedVal13);

			Assert::AreEqual(expectedChain3[0], reachedVal20);
			Assert::AreEqual(expectedChain3[1], reachedVal21);
			Assert::AreEqual(expectedChain3[2], reachedVal22);
			Assert::AreEqual(expectedChain3[3], reachedVal23);

			Assert::AreEqual(expectedSign, reachedSign);

			//cleanUp
			//if (temp)
			temp = 0;

			//if (inChain1)
			//	delete inChain1;

			if (expectedChain1) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain1[i] = NULL;
				}

				expectedChain1 = 0;
			}

			if (expectedChain2) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain2[i] = NULL;
				}

				expectedChain2 = 0;
			}

			if (expectedChain3) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain3[i] = NULL;
				}

				expectedChain3 = 0;
			}
		}

		TEST_METHOD(InsertingTooLongAndOnlyErrors_TestOfProperAchievingDestiny)
		{
			//arrange

			char inSize = '3';
			int inIntSize = NUtils::ToEqualsInt(TETRADE_SIZE);
			char *expectedChain1 = new char[inIntSize];
			char *expectedChain2 = new char[inIntSize];
			char *expectedChain3 = new char[inIntSize];

			int tetradeSize = NUtils::ToEqualsInt(TETRADE_SIZE);

			char *inChain1 = new char[NUtils::ToEqualsInt(inSize) + END_SIGN_SIZE + 1];

			inChain1[0] = 'Z';
			inChain1[1] = 'G';
			inChain1[2] = 'A';
			inChain1[3] = '1';
			inChain1[4] = '\0';

			expectedChain1[0] = '0';
			expectedChain1[1] = '0';
			expectedChain1[2] = '0';
			expectedChain1[3] = '0';

			expectedChain2[0] = '1';
			expectedChain2[1] = '0';
			expectedChain2[2] = '1';
			expectedChain2[3] = '0';

			expectedChain3[0] = '0';
			expectedChain3[1] = '0';
			expectedChain3[2] = '0';
			expectedChain3[3] = '1';

			CHexaInToTetradesNBCAdapter *temp
				= new CHexaInToTetradesNBCAdapter(inSize, inChain1);

			//DebugBreak();

			//act
			char reachedVal00 = temp->GetBinaryTradeArray(0, 0);
			char reachedVal01 = temp->GetBinaryTradeArray(0, 1);
			char reachedVal02 = temp->GetBinaryTradeArray(0, 2);
			char reachedVal03 = temp->GetBinaryTradeArray(0, 3);

			char reachedVal10 = temp->GetBinaryTradeArray(1, 0);
			char reachedVal11 = temp->GetBinaryTradeArray(1, 1);
			char reachedVal12 = temp->GetBinaryTradeArray(1, 2);
			char reachedVal13 = temp->GetBinaryTradeArray(1, 3);

			char reachedVal20 = temp->GetBinaryTradeArray(2, 0);
			char reachedVal21 = temp->GetBinaryTradeArray(2, 1);
			char reachedVal22 = temp->GetBinaryTradeArray(2, 2);
			char reachedVal23 = temp->GetBinaryTradeArray(2, 3);

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal00);
			Assert::AreEqual(expectedChain1[1], reachedVal01);
			Assert::AreEqual(expectedChain1[2], reachedVal02);
			Assert::AreEqual(expectedChain1[3], reachedVal03);

			Assert::AreEqual(expectedChain2[0], reachedVal10);
			Assert::AreEqual(expectedChain2[1], reachedVal11);
			Assert::AreEqual(expectedChain2[2], reachedVal12);
			Assert::AreEqual(expectedChain2[3], reachedVal13);

			Assert::AreEqual(expectedChain3[0], reachedVal20);
			Assert::AreEqual(expectedChain3[1], reachedVal21);
			Assert::AreEqual(expectedChain3[2], reachedVal22);
			Assert::AreEqual(expectedChain3[3], reachedVal23);

			//cleanUp
			//if (temp)
			temp = 0;

			//if (inChain1)
			//	delete inChain1;

			if (expectedChain1) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain1[i] = NULL;
				}

				expectedChain1 = 0;
			}

			if (expectedChain2) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain2[i] = NULL;
				}

				expectedChain2 = 0;
			}

			if (expectedChain3) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain3[i] = NULL;
				}

				expectedChain3 = 0;
			}
		}
		//}

		TEST_METHOD(InsertingTooShortValue_TestOfProperAchievingDestiny)
		{
			char inSize = '3';
			int inIntSize = NUtils::ToEqualsInt(TETRADE_SIZE);
			char *expectedChain1 = new char[inIntSize];
			char *expectedChain2 = new char[inIntSize];
			char *expectedChain3 = new char[inIntSize];

			int tetradeSize = NUtils::ToEqualsInt(TETRADE_SIZE);

			char *inChain1 = new char[2];

			inChain1[0] = 'A';
			inChain1[1] = '1';
			inChain1[2] = '\0';

			expectedChain1[0] = '0';
			expectedChain1[1] = '0';
			expectedChain1[2] = '0';
			expectedChain1[3] = '0';

			expectedChain2[0] = '1';
			expectedChain2[1] = '0';
			expectedChain2[2] = '1';
			expectedChain2[3] = '0';

			expectedChain3[0] = '0';
			expectedChain3[1] = '0';
			expectedChain3[2] = '0';
			expectedChain3[3] = '1';

			CHexaInToTetradesNBCAdapter *temp
				= new CHexaInToTetradesNBCAdapter(inSize, inChain1);

			//DebugBreak();

			//act
			char reachedVal00 = temp->GetBinaryTradeArray(0, 0);
			char reachedVal01 = temp->GetBinaryTradeArray(0, 1);
			char reachedVal02 = temp->GetBinaryTradeArray(0, 2);
			char reachedVal03 = temp->GetBinaryTradeArray(0, 3);

			char reachedVal10 = temp->GetBinaryTradeArray(1, 0);
			char reachedVal11 = temp->GetBinaryTradeArray(1, 1);
			char reachedVal12 = temp->GetBinaryTradeArray(1, 2);
			char reachedVal13 = temp->GetBinaryTradeArray(1, 3);

			char reachedVal20 = temp->GetBinaryTradeArray(2, 0);
			char reachedVal21 = temp->GetBinaryTradeArray(2, 1);
			char reachedVal22 = temp->GetBinaryTradeArray(2, 2);
			char reachedVal23 = temp->GetBinaryTradeArray(2, 3);

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal00);
			Assert::AreEqual(expectedChain1[1], reachedVal01);
			Assert::AreEqual(expectedChain1[2], reachedVal02);
			Assert::AreEqual(expectedChain1[3], reachedVal03);

			Assert::AreEqual(expectedChain2[0], reachedVal10);
			Assert::AreEqual(expectedChain2[1], reachedVal11);
			Assert::AreEqual(expectedChain2[2], reachedVal12);
			Assert::AreEqual(expectedChain2[3], reachedVal13);

			Assert::AreEqual(expectedChain3[0], reachedVal20);
			Assert::AreEqual(expectedChain3[1], reachedVal21);
			Assert::AreEqual(expectedChain3[2], reachedVal22);
			Assert::AreEqual(expectedChain3[3], reachedVal23);

			//cleanUp
			//if (temp)
			temp = 0;

			//if (inChain1)
			//	delete inChain1;

			if (expectedChain1) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain1[i] = NULL;
				}

				expectedChain1 = 0;
			}

			if (expectedChain2) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain2[i] = NULL;
				}

				expectedChain2 = 0;
			}

			if (expectedChain3) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain3[i] = NULL;
				}

				expectedChain3 = 0;
			}
		}
		//}

		TEST_METHOD(InsertingTooShortOnlyErrors_TestOfProperAchievingDestiny)
		{
			char inSize = '3';
			int inIntSize = NUtils::ToEqualsInt(TETRADE_SIZE);
			char *expectedChain1 = new char[inIntSize];
			char *expectedChain2 = new char[inIntSize];
			char *expectedChain3 = new char[inIntSize];

			int tetradeSize = NUtils::ToEqualsInt(TETRADE_SIZE);

			char *inChain1 = new char[2];

			inChain1[0] = 'Z';
			inChain1[1] = 'Y';
			inChain1[2] = '\0';

			expectedChain1[0] = '0';
			expectedChain1[1] = '0';
			expectedChain1[2] = '0';
			expectedChain1[3] = '0';

			expectedChain2[0] = '0';
			expectedChain2[1] = '0';
			expectedChain2[2] = '0';
			expectedChain2[3] = '0';

			expectedChain3[0] = '0';
			expectedChain3[1] = '0';
			expectedChain3[2] = '0';
			expectedChain3[3] = '0';

			CHexaInToTetradesNBCAdapter *temp
				= new CHexaInToTetradesNBCAdapter(inSize, inChain1);

			//DebugBreak();

			//act
			char reachedVal00 = temp->GetBinaryTradeArray(0, 0);
			char reachedVal01 = temp->GetBinaryTradeArray(0, 1);
			char reachedVal02 = temp->GetBinaryTradeArray(0, 2);
			char reachedVal03 = temp->GetBinaryTradeArray(0, 3);

			char reachedVal10 = temp->GetBinaryTradeArray(1, 0);
			char reachedVal11 = temp->GetBinaryTradeArray(1, 1);
			char reachedVal12 = temp->GetBinaryTradeArray(1, 2);
			char reachedVal13 = temp->GetBinaryTradeArray(1, 3);

			char reachedVal20 = temp->GetBinaryTradeArray(2, 0);
			char reachedVal21 = temp->GetBinaryTradeArray(2, 1);
			char reachedVal22 = temp->GetBinaryTradeArray(2, 2);
			char reachedVal23 = temp->GetBinaryTradeArray(2, 3);

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal00);
			Assert::AreEqual(expectedChain1[1], reachedVal01);
			Assert::AreEqual(expectedChain1[2], reachedVal02);
			Assert::AreEqual(expectedChain1[3], reachedVal03);

			Assert::AreEqual(expectedChain2[0], reachedVal10);
			Assert::AreEqual(expectedChain2[1], reachedVal11);
			Assert::AreEqual(expectedChain2[2], reachedVal12);
			Assert::AreEqual(expectedChain2[3], reachedVal13);

			Assert::AreEqual(expectedChain3[0], reachedVal20);
			Assert::AreEqual(expectedChain3[1], reachedVal21);
			Assert::AreEqual(expectedChain3[2], reachedVal22);
			Assert::AreEqual(expectedChain3[3], reachedVal23);

			//cleanUp
			//if (temp)
			temp = 0;

			//if (inChain1)
			//	delete inChain1;

			if (expectedChain1) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain1[i] = NULL;
				}

				expectedChain1 = 0;
			}

			if (expectedChain2) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain2[i] = NULL;
				}

				expectedChain2 = 0;
			}

			if (expectedChain3) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain3[i] = NULL;
				}

				expectedChain3 = 0;
			}
		}

		TEST_METHOD(InsertingEmptyChain_TestOfProperAchievingDestiny)
		{
			//arrange
			char inSize = '3';
			int inIntSize = NUtils::ToEqualsInt(TETRADE_SIZE);
			char *expectedChain1 = new char[inIntSize];
			char *expectedChain2 = new char[inIntSize];
			char *expectedChain3 = new char[inIntSize];

			int tetradeSize = NUtils::ToEqualsInt(TETRADE_SIZE);

			char *inChain1 = new char[0];

			inChain1[0] = '\0';

			expectedChain1[0] = '0';
			expectedChain1[1] = '0';
			expectedChain1[2] = '0';
			expectedChain1[3] = '0';

			expectedChain2[0] = '0';
			expectedChain2[1] = '0';
			expectedChain2[2] = '0';
			expectedChain2[3] = '0';

			expectedChain3[0] = '0';
			expectedChain3[1] = '0';
			expectedChain3[2] = '0';
			expectedChain3[3] = '0';

			CHexaInToTetradesNBCAdapter *temp
				= new CHexaInToTetradesNBCAdapter(inSize, inChain1);

			//DebugBreak();

			//act
			char reachedVal00 = temp->GetBinaryTradeArray(0, 0);
			char reachedVal01 = temp->GetBinaryTradeArray(0, 1);
			char reachedVal02 = temp->GetBinaryTradeArray(0, 2);
			char reachedVal03 = temp->GetBinaryTradeArray(0, 3);

			char reachedVal10 = temp->GetBinaryTradeArray(1, 0);
			char reachedVal11 = temp->GetBinaryTradeArray(1, 1);
			char reachedVal12 = temp->GetBinaryTradeArray(1, 2);
			char reachedVal13 = temp->GetBinaryTradeArray(1, 3);

			char reachedVal20 = temp->GetBinaryTradeArray(2, 0);
			char reachedVal21 = temp->GetBinaryTradeArray(2, 1);
			char reachedVal22 = temp->GetBinaryTradeArray(2, 2);
			char reachedVal23 = temp->GetBinaryTradeArray(2, 3);

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal00);
			Assert::AreEqual(expectedChain1[1], reachedVal01);
			Assert::AreEqual(expectedChain1[2], reachedVal02);
			Assert::AreEqual(expectedChain1[3], reachedVal03);

			Assert::AreEqual(expectedChain2[0], reachedVal10);
			Assert::AreEqual(expectedChain2[1], reachedVal11);
			Assert::AreEqual(expectedChain2[2], reachedVal12);
			Assert::AreEqual(expectedChain2[3], reachedVal13);

			Assert::AreEqual(expectedChain3[0], reachedVal20);
			Assert::AreEqual(expectedChain3[1], reachedVal21);
			Assert::AreEqual(expectedChain3[2], reachedVal22);
			Assert::AreEqual(expectedChain3[3], reachedVal23);

			//cleanUp
			//if (temp)
			temp = 0;

			//if (inChain1)
			//	delete inChain1;

			if (expectedChain1) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain1[i] = NULL;
				}

				expectedChain1 = 0;
			}

			if (expectedChain2) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain2[i] = NULL;
				}

				expectedChain2 = 0;
			}

			if (expectedChain3) {
				for (int i = 0; i < inIntSize; i++)
				{
					expectedChain3[i] = NULL;
				}

				expectedChain3 = 0;
			}
		}
	};
}