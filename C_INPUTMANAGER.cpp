#include "C_INPUTMANAGER.h"

void C_INPUTMANAGER::setUserInput()
{
	cout << endl;
	cout << "��ȣ�� �Է��ϼ���." << endl;
	cin >> nUserInput;
}

int C_INPUTMANAGER::getUserInput()
{
	return nUserInput;
}
