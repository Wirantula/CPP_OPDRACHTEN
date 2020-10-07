#pragma once
#include <iostream>
#include "Boek.h"

class Bibliotheek
{
	private:
	public:
		Bibliotheek();
		~Bibliotheek();
		Bibliotheek(const Bibliotheek& b);
		Bibliotheek& operator= (const Bibliotheek& b);
		void leenUit(Boek* b);
		void brengTerug(Boek* b);
};