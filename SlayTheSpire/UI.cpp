#include "UI.h"
#include <iostream>
using namespace std;

C_UI::C_UI() :
	isPlaying(false),
	nUserInput(0)
{
}

bool C_UI::getIsPlaying()
{
	return C_UI::isPlaying;
}

void C_UI::setIsPlaying(bool isPlaying_)
{
	isPlaying = isPlaying_;
}

int C_UI::getUserInput()
{
	return nUserInput;
}

void C_UI::insertNum()
{
	cout << "번호를 입력하세요." << endl;
	cin >> nUserInput;
}
