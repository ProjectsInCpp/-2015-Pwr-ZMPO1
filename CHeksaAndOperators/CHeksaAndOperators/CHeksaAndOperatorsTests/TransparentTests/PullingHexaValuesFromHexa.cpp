#include "stdafx.h"
#include "CppUnitTest.h"
#include "NUtils.h"

#include "Heksa.h"
#include "HexaInToTetradesNBCAdapter.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZMPO2_2_Tests
{
	TEST_CLASS(PullingHexaValuesFromHexaTests)
	{
	public:
		TEST_METHOD(InsertingTooShortValue_TestOfProperAchievingDestiny)
		{
			int expectedSign = 1;
			char inSize = '3';
			int inIntSize = NUtils::ToEqualsInt(TETRADE_SIZE);
			char *expectedChain1 = new char[inIntSize];

			int tetradeSize = NUtils::ToEqualsInt(TETRADE_SIZE);

			char *inChain1 = new char[2 + MINUS_SIGN_SIZE + END_LINE_SIGN];

			inChain1[0] = '-';
			inChain1[1] = 'A';
			inChain1[2] = '1';
			inChain1[3] = '\0';

			expectedChain1[0] = '0';
			expectedChain1[1] = 'A';
			expectedChain1[2] = '1';
			expectedChain1[3] = '\0';

			CHeksa *temp
				= new CHeksa(inSize, inChain1);

			//DebugBreak();

			//act
			int reachedSign = temp->GetSign();
			char reachedVal00 = temp->GetHexaArray()[0];
			char reachedVal01 = temp->GetHexaArray()[1];
			char reachedVal02 = temp->GetHexaArray()[2];
			char reachedVal03 = temp->GetHexaArray()[3];

			//assert
			Assert::AreEqual(expectedChain1[0], reachedVal00);
			Assert::AreEqual(expectedChain1[1], reachedVal01);
			Assert::AreEqual(expectedChain1[2], reachedVal02);
			//Assert::AreEqual(expectedChain1[3], reachedVal03);

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
		}

		//TEST_METHOD(GetSize_TestOfReturningAmountOfTetrades)
		//{
		//	int expectedSign = 1;
		//	char inSize = '3';
		//	int inIntSize = NUtils::ToEqualsInt(TETRADE_SIZE);
		//	int expectedSize = 3;
		//	char *expectedChain1 = new char[inIntSize];

		//	int tetradeSize = NUtils::ToEqualsInt(TETRADE_SIZE);

		//	char *inChain1 = new char[2 + MINUS_SIGN_SIZE + END_LINE_SIGN];

		//	inChain1[0] = '-';
		//	inChain1[1] = 'A';
		//	inChain1[2] = '1';
		//	inChain1[3] = '\0';

		//	expectedChain1[0] = '0';
		//	expectedChain1[1] = 'A';
		//	expectedChain1[2] = '1';
		//	expectedChain1[3] = '\0';

		//	CHeksa *temp
		//		= new CHeksa(inSize, inChain1);

		//	//act
		//	int reachedSize = temp->GetLength();

		//	Assert::AreEqual(expectedSize, reachedSize);

		//	//cleanUp
		//	//if (temp)
		//	temp = 0;

		//	//if (inChain1)
		//	//	delete inChain1;

		//	if (expectedChain1) {
		//		for (int i = 0; i < inIntSize; i++)
		//		{
		//			expectedChain1[i] = NULL;
		//		}

		//		expectedChain1 = 0;
		//	}
		//}
	};
}