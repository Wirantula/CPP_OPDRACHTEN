#include "Reverseru.h"

Reverseru::Reverseru()
{
	ch;
	readIndex;
	in_stream.open(READFILE);
	out_stream.open(WRITEFILE, std::ios::ate);
	if (!in_stream) {
		std::cout << "Probleem bij openen file" << READFILE << std::endl;
		exit(1);
	}
}

void Reverseru::reverse()
{


	in_stream.seekg(0, std::ios::end);
	readIndex = in_stream.tellg();
	readIndex--;

	while (readIndex >= 0)
	{
		std::noskipws;
		in_stream.seekg(readIndex);
		in_stream.get(ch);
		out_stream.put(ch);
		readIndex--;
	}

	in_stream.close();
	out_stream.close();
}
