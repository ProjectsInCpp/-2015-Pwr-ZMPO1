#include "stdafx.h"
#include "Alphabet.h"

CAlphabet::CAlphabet(vector<char> *acceptedValues, char aLength, char *aVal)
{
	this->acceptedValues = new vector<char>();
	this->acceptedValues = acceptedValues;
	this->length = NUtils::ToEqualsInt(aLength) + END_SIGN_SIZE;
	this->val = new char[this->length];
	this->sign = 0;
	this->val = filterWrongCharsWithVector(this->length, aVal);
	aVal = NULL;
}

char* CAlphabet::filterWrongCharsWithVector(int length, char *aInTable)
{
	char *outTable = NULL;

	if (aInTable[0] != END_LINE_SIGN)
	{
		this->sign = filterSign(aInTable);

		std::vector<char> vTab(aInTable, aInTable + strlen(aInTable) + 1);
		std::vector<char> vOutTab;

		int idxOfEmpty = find(vTab.begin(), vTab.end(), END_LINE_SIGN) - vTab.begin();

		if (idxOfEmpty == vTab.size()) vTab.push_back('\0');

		vOutTab.resize(vTab.size());

		vector<char> buffProperValues(*this->acceptedValues);

		std::transform(
			vTab.begin(),
			vTab.end(),
			vOutTab.begin(), [&buffProperValues](char aVal) {

			char retVal = PROPER_SIGN_0;
			vector<char> copyOfVec(buffProperValues);

			while (!copyOfVec.empty()) {

				char tempPoped = copyOfVec.back();
				if (aVal == tempPoped) retVal = tempPoped;
				copyOfVec.pop_back();
			}

			return retVal;
		});

		// removing urgent values
		char aGet = vOutTab.back();
		while (aGet != '\0') {
			vOutTab.pop_back();
			aGet = vOutTab.back();
		}

		outTable = new char[length - END_SIGN_SIZE];
		memset(outTable, NEUTRAL_ADD_SIGN, length - END_SIGN_SIZE);

		for (int j = vOutTab.size() - 1, i = length - END_SIGN_SIZE - 1;i > -1 && j > -1;j--, i--)
		{
			if (vOutTab[j] == '\0') --j;
			outTable[i] = vOutTab[j];
		}

		outTable[length - END_SIGN_SIZE] = END_LINE_SIGN;
	}
	else
	{
		outTable = new char[length - END_SIGN_SIZE];
		memset(outTable, NEUTRAL_ADD_SIGN, length - END_SIGN_SIZE);
		outTable[length - END_SIGN_SIZE] = END_LINE_SIGN;
	}

	return outTable;
}
char* CAlphabet::GetVal()
{
	return this->val;
}

CAlphabet::~CAlphabet()
{
	if (this->val) {
		for (int i = 0; i < this->length; i++)
		{
			this->val[i] = NULL;
		}
		this->val = 0;
	}

	if (this->acceptedValues) {
		this->acceptedValues = 0;
	}
}

int CAlphabet::GetLength()
{
	return this->length;
}

#pragma region ***************** TO EXTRACT ************************

int CAlphabet::filterSign(char *aInTable)
{
	int outSign = 0;
	int stringLength = strlen(aInTable);

	std::vector<char> vTab(aInTable, aInTable + strlen(aInTable) + 1);

	int idxOfMinus = find(vTab.begin(), vTab.end(), MINUS_SIGN) - vTab.begin();

	if (idxOfMinus != stringLength && idxOfMinus == 0)
	{
		outSign = 1;
	}

	return outSign;
}

int CAlphabet::GetSign()
{
	return this->sign;
}

#pragma endregion
