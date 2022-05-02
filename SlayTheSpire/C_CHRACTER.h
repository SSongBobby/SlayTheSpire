#pragma once

class C_CHRACTER
{
public:
	C_CHRACTER() = default;
	C_CHRACTER(const C_CHRACTER&) = delete;
	const C_CHRACTER& operator= (const C_CHRACTER&) = delete;
	
	virtual void attack();	

	virtual void guard();
	
	
	
	virtual ~C_CHRACTER();

protected:
	int nOffensePower;
	int nDiffensePower;


private:

};