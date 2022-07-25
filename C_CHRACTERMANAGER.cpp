#include "C_CHRACTERMANAGER.h"

C_CHRACTERMANAGER::C_CHRACTERMANAGER() :
    nPlayerJob(static_cast<int>(E_JOB::END))
{
}

C_CHRACTER* C_CHRACTERMANAGER::createChracter(int nUserInput)
{
    setPlayerJob(nUserInput);

    if (nUserInput == static_cast<int>(E_JOB::WARRIOR))
    {
        return (C_CHRACTER*)createKnight();
    }
    else if (nUserInput == static_cast<int>(E_JOB::MAGICIAN))
    {
        return (C_CHRACTER*)createMagician();
    }
    else
    {
        return nullptr;
    }
}

void C_CHRACTERMANAGER::destroyChracter(C_CHRACTER* pPlayer)
{
    delete pPlayer;
}

C_KNIGHT* C_CHRACTERMANAGER::createKnight()
{
    C_KNIGHT* pKnight = new C_KNIGHT();
    pKnight->init();

    return pKnight;
}

C_MAGICIAN* C_CHRACTERMANAGER::createMagician()
{
    C_MAGICIAN* pMagician = new C_MAGICIAN();
    pMagician->init();

    return pMagician;
}

void C_CHRACTERMANAGER::setPlayerJob(int nInput)
{
    nPlayerJob = nInput;
}

int C_CHRACTERMANAGER::getPlayerJob()
{
    return nPlayerJob;
}