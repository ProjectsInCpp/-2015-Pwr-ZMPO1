#pragma once
#include "Alphabet.h"
#include "Init.h"
#include "FunctionalClass.h"
#include "Perform.h"
#include "CleanUp.h"

class CTemplateMethodBool
{
private:
	bool _isDone;
	CFunctionalClass* _pInit;
	CFunctionalClass* _pPerform;
	CFunctionalClass* _pCleanUp;

protected:
	void Done()
	{
		_isDone = true;
	}

public:	

	CAlphabet Run(vector<vector<char>>* aValue)
	{
		_pInit->apply(aValue);

		do
		{
			_pPerform->apply(aValue);
		} while (!_isDone);

		_pCleanUp->apply(aValue);
	}

	CTemplateMethodBool(CInit *pInit, CPerform *pPerform, CCleanUp* pCleanUp)
	{
		_pInit = pInit;
		_pPerform = pPerform;
		_pCleanUp = pCleanUp;
	}
};

