#include "KoffieAutomaat.h"
#include <iostream>
#include <string>

KoffieAutomaat::KoffieAutomaat()
{
}

void KoffieAutomaat::detectCoin(VijftigCent v)
{
	std::cout << "vijftig cent ingeworpen" << std::endl;
	std::cout << "koffie keuze mogelijkheid: filter koffie" << std::endl;
	return;
}

void KoffieAutomaat::detectCoin(EuroMunt e)
{
	std::cout << "euro munt ingeworpen" << std::endl;
	std::cout << "koffie keuze mogelijkheid: bonen koffie" << std::endl;
	return;
}

void KoffieAutomaat::detectCoin(KoffieMuntje k)
{
	std::cout << "koffie munt ingeworpen" << std::endl;
	std::cout << "koffie keuze mogelijkheid: filter koffie, bonen koffie, cappucino" << std::endl;
	return;
}

