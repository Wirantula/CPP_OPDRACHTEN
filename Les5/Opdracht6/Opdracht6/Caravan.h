#pragma once
#include <iostream>
#include <string>
#include "Koffer.h"

class Caravan
{
	public:
		std::string kleur = "grijs";
		Koffer koffer;
		Caravan();
		Caravan(std::string k);
		virtual ~Caravan();
		Caravan(const Caravan& c);
		Caravan& operator=(const Caravan& c);

		void vulCaravan(Koffer& k);
		void toonInhoud();
};
