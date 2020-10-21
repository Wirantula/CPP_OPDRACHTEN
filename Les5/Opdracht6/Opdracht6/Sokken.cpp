#include "Sokken.h"

Sokken::Sokken()
{
}

Sokken::Sokken(std::string k)
{
	kleur = k;
}

Sokken::~Sokken()
{
}

Sokken::Sokken(const Sokken& s)
{
	if (this == &s) return;
}

Sokken& Sokken::operator=(const Sokken& s)
{
	kleur = s.kleur;
	return *this;
	// TODO: insert return statement here
}
