#pragma once
#include <iostream>
#include <string>
#include "Sokken.h"

class Koffer
{
	public:
		Koffer();

		Sokken sokken;
		Koffer(std::string k);
		virtual ~Koffer();
		Koffer(const Koffer& k);
		Koffer& operator=(const Koffer& k);
		std::string kleur = "grijs";
		void vulKoffer(Sokken& s);
};