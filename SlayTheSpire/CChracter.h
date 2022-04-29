#pragma once

class C_Chracter
{
public:
	C_Chracter() = default;
	C_Chracter(const C_Chracter&) = delete;
	const C_Chracter& operator= (const C_Chracter&) = delete;
	
	virtual void attack();	

	virtual void guard();
	
	
	
	virtual ~C_Chracter();

protected:
	int nOffensePower;
	int nDiffensePower;


private:

};