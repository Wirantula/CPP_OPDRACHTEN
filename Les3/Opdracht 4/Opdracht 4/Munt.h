#pragma once
#include <iostream>


class Munt
{
	public:
		std::string naam = "koffie muntje";
		int waarde = 3;
		int getWaarde();
		std::string getName();
};