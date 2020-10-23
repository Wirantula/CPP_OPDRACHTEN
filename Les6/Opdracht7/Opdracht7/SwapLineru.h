#pragma once
#include <iostream>
#include <fstream>
#include <string>

#define READFILE1 "E:/GIT/CPP_OPDRACHTEN/CPP_OPDRACHTEN/Les6/Test3.txt"
#define READFILE2 "E:/GIT/CPP_OPDRACHTEN/CPP_OPDRACHTEN/Les6/Test4.txt"
#define WRITEFILE "E:/GIT/CPP_OPDRACHTEN/CPP_OPDRACHTEN/Les6/Test5.txt"

class SwapLineru
{
	private:
		std::string line;
		std::ifstream in_stream1;
		std::ifstream in_stream2;
		std::ofstream out_stream;
	public:
		SwapLineru();
		void swapLines();

};