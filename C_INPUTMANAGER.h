#pragma once
#include <iostream>
using namespace std;

enum class E_GAMEPLAY		// ���� ����, ��������
{
	PLAY = 1,
	EXIT,
	END
};

class C_INPUTMANAGER
{
public:
	C_INPUTMANAGER() = default;

	void setUserInput();
	int getUserInput();
	int nUserInput;

	~C_INPUTMANAGER() {};

private:

};