#include "Student.h"

Student::Student(int sn, int l, std::string n)
{
	studentNummer = sn;
	leeftijd = l;
	naam = n;
}

int Student::getStudentNr()
{
	return studentNummer;
}
