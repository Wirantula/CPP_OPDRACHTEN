#pragma once
#include <iostream>
#include "50Cent.h"
#include "EuroMunt.h"
#include "KoffieMuntje.h"


class KoffieAutomaat
{
	private:
		std::string koffiesoort[3] = { "filter koffie", "bonen koffie", "capuccino" };
		std::string input;
	public:
		KoffieAutomaat();
		void detectCoin(VijftigCent v);
		void detectCoin(EuroMunt e);
		void detectCoin(KoffieMuntje k);
};