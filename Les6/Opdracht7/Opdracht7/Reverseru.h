#pragma once
#include <iostream>
#include <fstream>
#include <string>

#define READFILE "E:/GIT/CPP_OPDRACHTEN/CPP_OPDRACHTEN/Les6/Test.txt"
#define WRITEFILE "E:/GIT/CPP_OPDRACHTEN/CPP_OPDRACHTEN/Les6/Test2.txt"

class Reverseru
{
	private:
		int readIndex;
		char ch;
		std::ifstream in_stream;
		std::ofstream out_stream;
	public:
		Reverseru();
		void reverse();
};