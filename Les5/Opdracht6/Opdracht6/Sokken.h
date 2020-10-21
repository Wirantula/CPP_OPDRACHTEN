#pragma once
#include <iostream>

class Sokken
{
	public:
		Sokken();
		Sokken(std::string k);
		virtual ~Sokken();
		Sokken(const Sokken& s);
		Sokken& operator=(const Sokken& s);
		std::string kleur = "grijs";
};
