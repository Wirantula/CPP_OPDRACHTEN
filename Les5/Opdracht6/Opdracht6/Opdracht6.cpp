#include <iostream>
#include "Caravan.h"
#include "Koffer.h"
#include "Sokken.h"

int main()
{
	Sokken* sokken = new Sokken("groene");
	Koffer* koffer = new Koffer("rode");
	Caravan* caravan = new Caravan("blauwe");
	Caravan gestolenCaravan;

	koffer->vulKoffer(*sokken);
	caravan->vulCaravan(*koffer);
	caravan->toonInhoud();

	std::cout << "Je caravan word gestolen, dit is de gestolen caravan: " << std::endl;
	gestolenCaravan = *caravan;

	gestolenCaravan.toonInhoud();

	delete sokken;
	delete koffer;
	delete caravan;
}

