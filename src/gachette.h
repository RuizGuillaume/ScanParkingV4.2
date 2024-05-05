#pragma once
#include <iostream>
#include <wiringPi.h>

class Gachette
{
private:
	int portGachette;
	bool gachettePression;
	
	
public:
	Gachette();
	~Gachette();
	bool errorCheck();
	void surveillerGachette();
};
