#include "stdafx.h"
#include "CppUnitTest.h"
#include "NUtils.h"

#include "DeleteParser.h"
#include <Windows.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZMPO2_2_Tests
{
	TEST_CLASS(TestCCompiler_Compiler)
	{
	public:
		TEST_METHOD(ModulingVectorWithFilterVector_ProperTest1)
		{
			// arrange
			vector<char> inputChain;
			inputChain.push_back('0');
			inputChain.push_back('0');
			inputChain.push_back('0');
			inputChain.push_back('1');

			vector<char> expected;
			expected.push_back('0');
			expected.push_back('0');
			expected.push_back('0');
			expected.push_back('1');

			vector<char> filterChain;
			filterChain.push_back('0');
			filterChain.push_back('1');
			filterChain.push_back('.');

			vector<vector<char>> totalVector;
			totalVector.push_back(inputChain);
			totalVector.push_back(filterChain);

			// act
			CModulator *main = new CDeleteParser();
 			vector<char> reached = main->apply(&totalVector);

			// assert
			bool result = std::equal(
				expected.begin(),
				expected.begin() + expected.size(),
				reached.begin());

			Assert::IsTrue(result);

			// cleanUp
			//delete main;
			main = NULL;
		}

		TEST_METHOD(ModulingVectorWithFilterVector_ProperTest2)
		{
			// arrange
			vector<char> inputChain;
			inputChain.push_back('0');
			inputChain.push_back('2');
			inputChain.push_back('1');
			inputChain.push_back('1');

			vector<char> expected;
			expected.push_back('0');
			expected.push_back('1');
			expected.push_back('1');

			vector<char> filterChain;
			filterChain.push_back('0');
			filterChain.push_back('1');
			filterChain.push_back('.');

			vector<vector<char>> totalVector;
			totalVector.push_back(inputChain);
			totalVector.push_back(filterChain);

			// act
			CModulator *main = new CDeleteParser();
			vector<char> reached = main->apply(&totalVector);

			// assert
			bool result = std::equal(
				expected.begin(),
				expected.begin() + expected.size(),
				reached.begin());

			Assert::IsTrue(result);

			// cleanUp
			delete main;
			main = NULL;
		}

	};
}