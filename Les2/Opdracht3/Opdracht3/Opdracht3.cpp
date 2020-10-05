#include <iostream>
#include "Student.h"
#include "Docent.h"
#include <string>


int main()
{
	Docent docent = Docent(1805.95f, 30, "Edwin");
	Student student = Student(3024422, 20, "Joshua");
	std::cout << "Student Nummer: " << student.getStudentNr() << std::endl;
	std::cout << "Student Naam: " << student.getName() << std::endl;
	std::cout << "Student Leeftijd: " << student.getAge() << std::endl;
	std::cout << "Docent Naam: " << docent.getName() << std::endl;
	std::cout << "Docent Leeftijd: " << docent.getAge() << " Wat Edwin zijn echte leeftijd is zal altijd een mysterie blijven" << std::endl;
	std::cout << "Docent Maand Salaris: " << docent.getSalaris() << " Ook zal Edwin liever een hoger salaris willen" << std::endl;
	return 0;
}


