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


