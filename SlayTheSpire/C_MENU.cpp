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
		cout << "1. 게임시작" << endl;
		cout << "2. 게임종료" << endl;
	}
	else if (getIsPlaying() == true)
	{
		cout << "1. 계속하기" << endl;
		cout << "2. 게임종료" << endl;
	}

}


