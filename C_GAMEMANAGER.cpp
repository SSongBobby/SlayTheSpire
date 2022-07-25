#include "C_GAMEMANAGER.h"

void C_GAMEMANAGER::init()
{
    _menu = make_shared<C_UI_MENU>();
    _userInput = make_shared<C_INPUTMANAGER>();
    _chracterMng = make_shared<C_CHRACTERMANAGER>();
}

void C_GAMEMANAGER::gameStart()
{
    cout << "게임을 시작합니다..." << endl;

    getMenu()->printStartMenu();

    getInputManager()->setUserInput();

    // UserInput이 'PLAY'라면 isPlaying = true;
    if (USERINPUT == static_cast<int>(E_GAMEPLAY::PLAY))
    {
        isPlaying = true;
        cout << "게임 시작..." << endl;
    }
    else
    {
        isPlaying = false;
        cout << "게임 종료..." << endl;
    }
}

void C_GAMEMANAGER::chooseJob()
{
    cout << endl;
    cout << "직업을 선택하세요." << endl;

    getMenu()->printJobMenu();

    // character의 직업 설정해주기
    getInputManager()->setUserInput();

    if (USERINPUT == static_cast<int>(E_JOB::WARRIOR))
    {
        cout << "전사로 게임을 시작합니다." << endl;
    }
    else if (USERINPUT == static_cast<int>(E_JOB::MAGICIAN))
    {
        cout << "마법사로 게임을 시작합니다." << endl;
    }
    _chracterMng->setPlayerJob(USERINPUT);
    _chracter = make_shared<C_CHRACTER>(getChracterMng()->createChracter(USERINPUT));
}

void C_GAMEMANAGER::askNeedExplanation()
{
    cout << endl;
    cout << "게임 설명을 들으시겠습니까?" << endl;
    cout << "1. 예" << endl;
    cout << "2. 아니오" << endl;

    getInputManager()->setUserInput();

    if (USERINPUT == 1)
    {
        getMenu()->printExplanation();
    }
}
