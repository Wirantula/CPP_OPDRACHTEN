#pragma once
#include <iostream>
#include <cstdlib>
#include "Persoon.h"

class Student : public Persoon 
{
	private:
		int studentNummer;
	public:
		Student(int sn, int l, std::string n);
		int getStudentNr();
};