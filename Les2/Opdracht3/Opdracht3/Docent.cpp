#include "Docent.h"

Docent::Docent(float s, int l, std::string n)
{
	salaris = s;
	leeftijd = l;
	naam = n;
}

float Docent::getSalaris()
{
	return salaris;
}
