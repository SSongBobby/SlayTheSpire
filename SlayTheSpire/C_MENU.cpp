#include "C_MENU.h"
#include <iostream>
using namespace std;

C_MENU::C_MENU()
{
	nUserInput = 0;
}

void C_MENU::printUI()
{
	if (getIsPlaying() == false)
	{
		cout << "1. ���ӽ���" << endl;
		cout << "2. ��������" << endl;
	}
	else if (getIsPlaying() == true)
	{
		cout << "1. ����ϱ�" << endl;
		cout << "2. ��������" << endl;
	}

}

void C_MENU::numReaction()
{
	if (nUserInput == 1)
	{
		cout << "������ �����մϴ�." << endl;
		setIsPlaying(true);
	}
	else if (nUserInput == 2)
	{
		cout << "������ �����մϴ�." << endl;
	}
	else
	{
		cout << "�ٽ� �Է��ϼ���." << endl;
		insertNum();
	}
}


