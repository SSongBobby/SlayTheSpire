#include <iostream>
#include "C_MENU.h"
#include "CChracter.h"
using namespace std;

int main()
{
    C_UI* pUI = new C_UI_MENU();
    
     pUI->printUI();
     pUI->insertNum();
     pUI->numReaction();
    // 시작 
    // menu 프린트
    // 입력받음
}
