#include <iostream>
#include "KoffieAutomaat.h"
#include "50Cent.h"
#include "EuroMunt.h"
#include "KoffieMuntje.h"
#include <iostream>
#include <string>

//THIS DOES NOT WORK AND I DONT UNDERSTAND ;-;

int main()
{
	std::string input;
	KoffieAutomaat automaat = KoffieAutomaat();
	VijftigCent vijftigCent = VijftigCent("vijftig cent", 1);
	EuroMunt euro = EuroMunt("euro munt", 2);
	KoffieMuntje koffieMunt = KoffieMuntje("koffie munt", 3);
	std::cout << "Gooi munt in" << std::endl << "Keuze: vijftig cent, euro munt, koffie munt" << std::endl;
	std::getline(std::cin, input);
	if (input.compare("vijftig cent"))
	{
		automaat.detectCoin(euro);
		std::cout << "kies koffie" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("filter koffie"))
		{
			std::cout << "je hebt " << input << " gekregen" << std::endl;
			input = "";
			main();
		}
		else 
		{
			std::cout << "niet aanwezige keuze" << std::endl;
			input = "";
			main();
		}
	}
	else if (input.compare("euro munt"))
	{
		automaat.detectCoin(vijftigCent);
		std::cout << "kies koffie" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("bonen koffie"))
		{
			std::cout << "je hebt " << input << " gekregen" << std::endl;
			input = "";
			main();
		}
		else
		{
			std::cout << "niet aanwezige keuze" << std::endl;
			input = "";
			main();
		}
	}
	else if (input.compare("koffie munt"))
	{
		automaat.detectCoin(koffieMunt);
		std::cout << "kies koffie" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("filter koffie") || input.compare("bonen koffie") || input.compare("capuccino"))
		{
			std::cout << "je hebt " << input << " gekregen" << std::endl;
			input = "";
			main();
		}
		else
		{
			std::cout << "niet aanwezige keuze" << std::endl;
			input = "";
			main();
		}
	}
	else
	{
		std::cout << "niet aanwezige keuze" << std::endl;
		input = "";
		main();
	}
}

