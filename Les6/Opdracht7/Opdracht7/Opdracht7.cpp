#include <iostream>
#include <fstream>
#include <string>
#include "Reverseru.h"
#include "SwapLineru.h"

int main()
{
	Reverseru reverse;
	SwapLineru swapline;
	reverse = Reverseru();
	reverse.reverse();
	swapline = SwapLineru();
	swapline.swapLines();
	return 0;

}


