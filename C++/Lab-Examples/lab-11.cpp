#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		puts("You must enter at least 3 values!");
	}
	else
	{
		for (int i = 0; i < argc; i++)
		{
			std::cout << argv[i];
			std::cout << argc;
		}
	}

	return 0;
}