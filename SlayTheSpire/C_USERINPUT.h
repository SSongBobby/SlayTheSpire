#pragma once
#include <iostream>
#include "UI.h"
using namespace std;

class C_USERINPUT
{
	C_USERINPUT() = default;
	C_USERINPUT(const C_USERINPUT&) = delete;
	const C_USERINPUT& operator= (const C_USERINPUT&) = delete;


	void setUserInput(int nInput);
	void getUserInput();

	~C_USERINPUT() {};

private:
	int nUserInput;

};