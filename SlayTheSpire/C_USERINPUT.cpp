#include "C_USERINPUT.h"

void C_USERINPUT::setUserInput(int nInput)
{
	nUserInput = nInput;
}

void C_USERINPUT::getUserInput()
{
	cout << "��ȣ�� �Է��ϼ���." << endl;
	cin >> nUserInput;
}
