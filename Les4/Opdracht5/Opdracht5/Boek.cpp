#include "Boek.h"

Boek::Boek(bool u)
{
	isUitGeleend = u;
}

Boek::~Boek()
{
	std::cout << "destructor called" << std::endl;
}

Boek::Boek(const Boek & b)
{
}

Boek & Boek::operator=(const Boek & b)
{
	// TODO: insert return statement here
	return *this;
}

bool Boek::vraagAanwezig()
{
	return isUitGeleend;
}

void Boek::leenDitBoek()
{
	isUitGeleend = !isUitGeleend;
}
