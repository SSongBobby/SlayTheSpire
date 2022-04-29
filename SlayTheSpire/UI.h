#pragma once

class C_UI
{
public:
	C_UI();
	C_UI(const C_UI&) = delete;
	const C_UI operator= (const C_UI&) = delete;

	virtual void printUI() = 0;

	virtual ~C_UI() {};

	bool getIsPlaying();
	void setIsPlaying(bool isPlaying_);
	int getUserInput();

	int nUserInput;

private:
	bool isPlaying;
};
