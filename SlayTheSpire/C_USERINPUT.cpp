#include "C_USERINPUT.h"

void C_USERINPUT::setUserInput(int nInput)
{
	nUserInput = nInput;
}

void C_USERINPUT::getUserInput()
{
	cout << "번호를 입력하세요." << endl;
	cin >> nUserInput;
}
