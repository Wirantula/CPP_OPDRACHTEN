#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"

int main()
{
	Boek* boek = new Boek(false);
	Bibliotheek* bibliotheek = new Bibliotheek();

	bibliotheek->leenUit(boek);
	bibliotheek->leenUit(boek);
	bibliotheek->brengTerug(boek);
	bibliotheek->brengTerug(boek);

	delete bibliotheek;
	delete boek;
}

