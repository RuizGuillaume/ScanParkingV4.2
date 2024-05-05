#include "gachette.h"


Gachette::Gachette()
{
	wiringPiSetup();
	
	portGachette = 29; // configuration du port GPIO d'ecoute du signal gachette
	gachettePression = 0;

	pinMode(portGachette, INPUT);

}

Gachette::~Gachette()
{
	
}

bool Gachette::errorCheck()
{
	if (wiringPiSetup() < 0) 
	{
		std::cout << "setup wiring pi failed" << std::endl;
		return 1;
	}
}

void Gachette::surveillerGachette()
{
	
	while(1)
	{
		if (digitalRead(portGachette) == LOW && gachettePression == 0)
		{
			std::cout << "Pression gachette" << std::endl;
			gachettePression = 1;
			break;
		}
		
		if (digitalRead(portGachette) == HIGH)
		{
			gachettePression = 0;
		}
		delay(20);
	}
}

