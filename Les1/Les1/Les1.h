#pragma once
#include <iostream>


class Rooster
{
	public: 
		int maxLessen;
		Vak Vakken[];
		void geefLessenWeer(/*geef de lessen in een overzichtelijk kader weer*/);
};

class Vak 
{
	public:
		Docent vakDocent;
		Leerling aantalLeerlingen[35];
		Lokaal toegewezenLokaal;
		float tijd;
};

class Docent 
{
	public:
		std::string naam;
		std::string schoolMail;
		void geefLes(/*de docent geeft les aan alle leerlingen in het lokaal*/);
		void beoordeelLeerling(/*de docent beoordeeld de opdrachten van de leerlingen*/);
		void leesEnAntwoordSchoolMail(/*de docent leest mailtjes die gestuurd zijn en beantwoord waar nodig*/);
};

class Leerling 
{
	public:
		std::string naam;
		int leerlingNummer;
		int leeftijd;
		std::string schoolMail;
		void volgLes(/*de leerling luisterd aandachtig en werkt mee met de les*/);
		void leesEnAntwoordSchoolMail(/*de leerling leest mailtjes die gestuurd zijn en beantwoord waar nodig*/);
};

class Lokaal 
{
	public:
		int tafels;
		int stoelen;
		int stopContacten;
		int maxLeerlingen;
};

