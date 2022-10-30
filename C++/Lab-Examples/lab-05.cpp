#include <iostream>
#include <fstream>
#include <string.h>

int main(void)
{
	char writing[255], fileName[255];

	std::cout << "Enter the file name: ";
	std::cin >> fileName;
	strcat(fileName, ".txt");
	std::ofstream fp;

	if (strlen(fileName) - 4 > 3)
	{
		fp.open(fileName);
		std::cout << "What do you want to write?\n";
		std::cin >> writing;
		fp << writing;
		fp.close();
	}
	else
	{
		std::cout << "File name length must be greater than 3!";
	}

	return 0;
}