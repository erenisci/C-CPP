#include <iostream>
#include "Header-Files/lab-22-h1.h"
#include "Header-Files/lab-22-h2.h"

int main(void)
{
	int num;

	std::cout << "Enter a value: ";
	std::cin >> num;
	external = num;

	additionTen();
	std::cout << "External: " << external << std::endl;

	return 0;
}