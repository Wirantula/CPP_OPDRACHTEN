// SimonSays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <set>
#include <ctime>

int main(int lastCorrect)
{
	int numbers[40];
	int index = 0;
	int currentCorrect = lastCorrect;
	int input;
	int inputArray[40];
	int correctnums = 0;
	

	for (int index = 0; index < 40; index++)
	{
		srand(time(NULL) * rand() % 500);
		numbers[index] = rand() % 9, 1;
	}

	for (index = 0; index < currentCorrect +1; index++) 
	{
		std::cout << numbers[index];
	}

	std::cout << " " << std::endl;
	std::system("PAUSE");
	std::system("CLS");
	std::cout << "Enter the numbers individually" << std::endl;

	for (int x = 0; x < currentCorrect +1; x++)
	{
		std::cin >> input;
		inputArray[x] = input;
		if (inputArray[x] == numbers[x])
		{
			correctnums += 1;
		}
	}

	for (int v = 0; v < currentCorrect +1; v++)
	{
		if (correctnums >= currentCorrect) {
			currentCorrect = correctnums;
			std::cout << "correct" << std::endl;
			main(currentCorrect);
		}
		else 
		{ 
			std::cout << "incorrect, you lose" << std::endl;
			index = 0;
			main(2); 
		}
		
	}
}

