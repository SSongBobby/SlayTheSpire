#pragma once
#include "C_UI.h"
#include "C_USERINPUT.h"

class C_UI_MENU : public C_UI
{
public:
	C_UI_MENU();

	virtual void printUI() override;

	virtual void numReaction() override;

private:

};