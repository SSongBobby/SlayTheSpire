#pragma once

#include "C_CHRACTERMANAGER.h"
#include "C_KNIGHT.h"
#include "C_MAGICIAN.h"
#include "C_UI_MENU.h"
#include "C_INPUTMANAGER.h"

#define USERINPUT getInputManager()->getUserInput()

class C_GAMEMANAGER
{
public:
    C_GAMEMANAGER() = default;

    void init();        // 초기화
    void gameStart();       // 게임 스타트
    void chooseJob();       // 직업 고르기
    void askNeedExplanation();  // 설명듣기 or 듣지않기

    bool isPlaying = false;


    shared_ptr<C_UI_MENU> getMenu() { return _menu; }
    shared_ptr<C_INPUTMANAGER> getInputManager() { return _userInput; }
    shared_ptr<C_CHRACTERMANAGER> getChracterMng() { return _chracterMng; }
    shared_ptr<C_CHRACTER> getChracter() { return _chracter; }

    ~C_GAMEMANAGER() {};

private:
    shared_ptr<C_UI_MENU> _menu;
    shared_ptr<C_INPUTMANAGER> _userInput;
    shared_ptr<C_CHRACTERMANAGER> _chracterMng;
    shared_ptr<C_CHRACTER> _chracter;

};

