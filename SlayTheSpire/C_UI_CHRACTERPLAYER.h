#pragma once
#include "C_UI.h"

class C_UI_CHRACTERPLAYER : public C_UI
{
public:

	C_UI_CHRACTERPLAYER();

	virtual void printUI() override;
	virtual void numReaction() override;

	~C_UI_CHRACTERPLAYER();

};