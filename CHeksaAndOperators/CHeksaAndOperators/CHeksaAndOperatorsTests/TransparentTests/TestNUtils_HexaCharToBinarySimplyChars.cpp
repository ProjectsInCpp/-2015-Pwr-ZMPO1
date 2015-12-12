#include "stdafx.h"
#include "CppUnitTest.h"
#include "NUtils.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZMPO2_2_Tests
{
	TEST_CLASS(TestNUtil_HexaCharToSimpyBinaryChars)
	{
	public:

		TEST_METHOD(hexaChar0TobinaryConvertTodecimalAlphabet0000)
		{
			//arrange
			char aInChar = '0';
			char* destinyTable = new char[4];
			char *expectedTable = "0000";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar1TobinaryConvertTodecimalAlphabet0001)
		{
			//arrange
			char aInChar = '1';
			char* destinyTable = new char[4];
			char *expectedTable = "0001";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar2TobinaryConvertTodecimalAlphabet0010)
		{
			//arrange
			char aInChar = '2';
			char* destinyTable = new char[4];
			char *expectedTable = "0010";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar3TobinaryConvertTodecimalAlphabet0011)
		{
			//arrange
			char aInChar = '3';
			char* destinyTable = new char[4];
			char *expectedTable = "0011";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar4TobinaryConvertTodecimalAlphabet0100)
		{
			//arrange
			char aInChar = '4';
			char* destinyTable = new char[4];
			char *expectedTable = "0100";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar5TobinaryConvertTodecimalAlphabet0101)
		{
			//arrange
			char aInChar = '5';
			char* destinyTable = new char[4];
			char *expectedTable = "0101";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar6TobinaryConvertTodecimalAlphabet0110)
		{
			//arrange
			char aInChar = '6';
			char* destinyTable = new char[4];
			char *expectedTable = "0110";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar7TobinaryConvertTodecimalAlphabet0111)
		{
			//arrange
			char aInChar = '7';
			char* destinyTable = new char[4];
			char *expectedTable = "0111";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}
		TEST_METHOD(hexaChar8TobinaryConvertTodecimalAlphabet1000)
		{
			//arrange
			char aInChar = '8';
			char* destinyTable = new char[4];
			char *expectedTable = "1000";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaChar9TobinaryConvertTodecimalAlphabet1001)
		{
			//arrange
			char aInChar = '9';
			char* destinyTable = new char[4];
			char *expectedTable = "1001";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharATobinaryConvertTodecimalAlphabet1010)
		{
			//arrange
			char aInChar = 'A';
			char* destinyTable = new char[4];
			char *expectedTable = "1010";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharBTobinaryConvertTodecimalAlphabet1011)
		{
			//arrange
			char aInChar = 'B';
			char* destinyTable = new char[4];
			char *expectedTable = "1011";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharCTobinaryConvertTodecimalAlphabet1100)
		{
			//arrange
			char aInChar = 'C';
			char* destinyTable = new char[4];
			char *expectedTable = "1100";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharDTobinaryConvertTodecimalAlphabet1101)
		{
			//arrange
			char aInChar = 'D';
			char* destinyTable = new char[4];
			char *expectedTable = "1101";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharETobinaryConvertTodecimalAlphabet1110)
		{
			//arrange
			char aInChar = 'E';
			char* destinyTable = new char[4];
			char *expectedTable = "1110";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}

		TEST_METHOD(hexaCharFTobinaryConvertTodecimalAlphabet1111)
		{
			//arrange
			char aInChar = 'F';
			char* destinyTable = new char[4];
			char *expectedTable = "1111";

			//act
			destinyTable = NUtils::hexaTobinArrUnit(aInChar);

			//assert
			Assert::AreEqual(expectedTable[3], destinyTable[3]);
			Assert::AreEqual(expectedTable[2], destinyTable[2]);
			Assert::AreEqual(expectedTable[1], destinyTable[1]);
			Assert::AreEqual(expectedTable[0], destinyTable[0]);
		}
	};
}