#pragma once

enum class E_JOB		// Á÷¾÷
{
	WARRIOR = 1,
	MAGICIAN,
	END
};

class C_CHRACTER
{
public:
	C_CHRACTER();
	
	virtual void attack();

	virtual void guard();

	~C_CHRACTER() {};

protected:
	int nOffensePower;
	int nDiffensePower;
	int nMaxHealth;
	int nCurrentHealth;

private:

};