#include "Bibliotheek.h"
#include "Boek.h"

Bibliotheek::Bibliotheek()
{

}

Bibliotheek::~Bibliotheek()
{
	std::cout << "destructor called" << std::endl;
}

Bibliotheek::Bibliotheek(const Bibliotheek & b)
{
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek & b)
{
	// TODO: insert return statement here
	return *this;
}

void Bibliotheek::leenUit(Boek* b)
{
	if (b->vraagAanwezig()) 
	{
		std::cout << "Dit boek is al uit geleend" << std::endl;
	}
	else
	{
		b->leenDitBoek();
		std::cout << "Je heb dit boek geleeend" << std::endl;
	}
}

void Bibliotheek::brengTerug(Boek* b)
{
	if (b->vraagAanwezig())
	{
		std::cout << "Je hebt dit boek terug gebracht" << std::endl;
		b->leenDitBoek();
	}
	else
	{
		std::cout << "Je hebt dit boek momenteel niet geleend" << std::endl;
	}
}
