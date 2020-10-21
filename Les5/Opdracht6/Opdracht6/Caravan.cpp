#include "Caravan.h"

Caravan::Caravan()
{
}

Caravan::Caravan(std::string k)
{
	kleur = k;
}

Caravan::~Caravan()
{
}

Caravan::Caravan(const Caravan& c)
{
	if (this == &c) return;
	this->koffer = Koffer(c.koffer.kleur);
}

Caravan& Caravan::operator=(const Caravan& c)
{
	if (this == &c) return *this;
	kleur = c.kleur;
	koffer = Koffer(c.koffer.kleur);
	koffer.sokken = Sokken(c.koffer.sokken.kleur);
	return *this;
	// TODO: insert return statement here
}

void Caravan::vulCaravan(Koffer& k)
{
	koffer = k;
}

void Caravan::toonInhoud()
{
	std::cout << "de " << kleur << " caravan bevat: " << this->koffer.kleur << " koffer met " << this->koffer.sokken.kleur << " sokken" << std::endl;
}
