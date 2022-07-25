#include "C_INPUTMANAGER.h"

void C_INPUTMANAGER::setUserInput()
{
	cout << endl;
	cout << "번호를 입력하세요." << endl;
	cin >> nUserInput;
}

int C_INPUTMANAGER::getUserInput()
{
	return nUserInput;
}
