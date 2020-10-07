#pragma once
#include <iostream>

class Boek
{
	private:
		std::string tekst;
		bool isUitGeleend;
	public:
		Boek(bool u);
		~Boek();
		Boek(const Boek& b);
		Boek& operator= (const Boek& b);
		bool vraagAanwezig();
		void leenDitBoek();
};