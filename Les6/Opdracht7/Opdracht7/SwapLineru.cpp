#include "SwapLineru.h"

SwapLineru::SwapLineru()
{
	line;
	in_stream1.open(READFILE1);
	in_stream2.open(READFILE2);
	out_stream.open(WRITEFILE);
	if (!in_stream1 || !in_stream2) {
		std::cout << "Probleem bij openen file" << READFILE1 << " of file " << READFILE2 << std::endl;
		exit(1);
	}
}

void SwapLineru::swapLines()
{
	std::noskipws;
	while (!in_stream1.eof() || !in_stream2.eof())
	{
		if (!in_stream1.eof()) 
		{
			std::getline(in_stream1, line);
			out_stream << line << "\n";
		}
		if (!in_stream2.eof())
		{
			std::getline(in_stream2, line);
			out_stream << line << "\n";
		}
	}

	in_stream1.close();
	in_stream2.close();
	out_stream.close();
}
