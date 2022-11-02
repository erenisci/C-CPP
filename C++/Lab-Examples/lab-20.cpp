#include <iostream>
#include "Header-Files/lab-20-h1.h"

int main(void)
{
	double num;

	std::cout << "Enter a value: ";
	std::cin >> num;

	std::cout << "\nSquare of num: " << squareNum(num) << std::endl
			  << "Division by 5: " << divisionFive(num) << std::endl;

	std::cout << "Square of num / 5: " << divisionFive(squareNum(num));

	return 0;
}