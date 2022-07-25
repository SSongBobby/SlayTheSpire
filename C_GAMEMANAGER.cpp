#include "C_GAMEMANAGER.h"

void C_GAMEMANAGER::init()
{
    _menu = make_shared<C_UI_MENU>();
    _userInput = make_shared<C_INPUTMANAGER>();
    _chracterMng = make_shared<C_CHRACTERMANAGER>();
}

void C_GAMEMANAGER::gameStart()
{
    cout << "������ �����մϴ�..." << endl;

    getMenu()->printStartMenu();

    getInputManager()->setUserInput();

    // UserInput�� 'PLAY'��� isPlaying = true;
    if (USERINPUT == static_cast<int>(E_GAMEPLAY::PLAY))
    {
        isPlaying = true;
        cout << "���� ����..." << endl;
    }
    else
    {
        isPlaying = false;
        cout << "���� ����..." << endl;
    }
}

void C_GAMEMANAGER::chooseJob()
{
    cout << endl;
    cout << "������ �����ϼ���." << endl;

    getMenu()->printJobMenu();

    // character�� ���� �������ֱ�
    getInputManager()->setUserInput();

    if (USERINPUT == static_cast<int>(E_JOB::WARRIOR))
    {
        cout << "����� ������ �����մϴ�." << endl;
    }
    else if (USERINPUT == static_cast<int>(E_JOB::MAGICIAN))
    {
        cout << "������� ������ �����մϴ�." << endl;
    }
    _chracterMng->setPlayerJob(USERINPUT);
    _chracter = make_shared<C_CHRACTER>(getChracterMng()->createChracter(USERINPUT));
}

void C_GAMEMANAGER::askNeedExplanation()
{
    cout << endl;
    cout << "���� ������ �����ðڽ��ϱ�?" << endl;
    cout << "1. ��" << endl;
    cout << "2. �ƴϿ�" << endl;

    getInputManager()->setUserInput();

    if (USERINPUT == 1)
    {
        getMenu()->printExplanation();
    }
}
