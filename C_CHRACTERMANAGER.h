#pragma once
#include "C_CHRACTER.h"
#include "C_KNIGHT.h"
#include "C_MAGICIAN.h"
#include <iostream>
using namespace std;

class C_CHRACTERMANAGER : C_CHRACTER
{
public:
    C_CHRACTERMANAGER();
    C_CHRACTER* createChracter(int nUserInput);
    void destroyChracter(C_CHRACTER* pPlayer);

    void setPlayerJob(int nInput);
    int getPlayerJob();

private:
    C_KNIGHT* createKnight();
    C_MAGICIAN* createMagician();
    int nPlayerJob;
    
};

