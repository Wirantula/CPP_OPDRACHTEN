#include "Koffer.h"

Koffer::Koffer()
{
}

Koffer::Koffer(std::string k)
{
	kleur = k;
}

Koffer::~Koffer()
{
}

Koffer::Koffer(const Koffer& k)
{
	if (this == &k) return;
	this->sokken = Sokken(k.sokken.kleur);
}

Koffer& Koffer::operator=(const Koffer& k)
{
	if (this == &k) return *this;
	kleur = k.kleur;
	sokken = Sokken(k.sokken.kleur);
	return *this;
	// TODO: insert return statement here
}

void Koffer::vulKoffer(Sokken& s)
{
	sokken = s;
}
