#include <iostream>
#include <fstream>
#include <string.h>

int main(void)
{
	std::ifstream fp;
	std::string line;
	// use lab-4.cpp to create a .txt file
	fp.open(".txt");

	if (!fp)
	{
		std::cout << "There is no such file!";
	}
	else
	{
		while (!fp.eof())
		{
			getline(fp, line);
			std::cout << line << std::endl;
		}
	}
	fp.close();

	return 0;
}