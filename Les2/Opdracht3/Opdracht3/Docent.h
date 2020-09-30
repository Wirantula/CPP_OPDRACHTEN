#pragma once
#include <iostream>
#include <cstdlib>
#include "Persoon.h"

class Docent : public Persoon
{
	private:
		float salaris;
	public:
		Docent(float s, int l, std::string n);
		float getSalaris();
};