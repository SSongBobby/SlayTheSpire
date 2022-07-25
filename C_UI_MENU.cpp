#include "C_UI_MENU.h"
#include <iostream>
using namespace std;

void C_UI_MENU::printStartMenu()
{
	cout << "1. 게임시작" << endl;
	cout << "2. 게임종료" << endl;
}

void C_UI_MENU::printJobMenu()
{
	cout << "1. 전사" << endl;
	cout << "2. 마법사" << endl;
}

void C_UI_MENU::printExplanation()
{
	cout << endl;
	cout << "[게임 설명]" << endl;
	cout << endl;
	cout << "9개의 방을 통과하여 마지막 보스를 깨면 승리하는 게임입니다." << endl;
	cout << endl;
	cout << "방의 종류는 다음과 같습니다." << endl;
	cout << endl;
	cout << "---------------------------------------" << endl;
	cout << "몬스터 방 : 랜덤한 숫자의 몬스터가 등장합니다. 일반 보상을 획득할 수 있습니다." << endl;
	cout << "엘리트 몬스터 방 : 강한 엘리트 몬스터가 등장합니다. 희귀 보상을 획득할 수 있습니다." << endl;
	cout << "??? 방 : ???" << endl;
	cout << "상점 방 : 보유한 골드로 포션 또는 일반/희귀 보상을 획득할 수 있습니다." << endl;
	cout << "모닥불 방 : 강화 또는 휴식 중 하나를 선택할 수 있습니다." << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;
	cout << "보상을 적절히 획득하여 보스를 물리치세요!" << endl;
}
