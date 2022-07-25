#include "C_GAMEMANAGER.h"
using namespace std;

int main()
{
    C_CHRACTERMANAGER cMng;
    unique_ptr<C_GAMEMANAGER> pGame(new C_GAMEMANAGER());

    pGame->init();
    pGame->gameStart();

    if (pGame->isPlaying == true)
    {
        pGame->chooseJob();
        pGame->askNeedExplanation();
    }
}