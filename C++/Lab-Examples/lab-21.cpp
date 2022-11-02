#include <iostream>

int factorial(int value)
{
	int product = 1;

	for (int i = 1; i <= value; i++)
	{
		product *= i;
	}

	return product;
}

int squareNum(int value)
{
	return value * value;
}

namespace Ostim
{
	int sqrNum(int value)
	{
		return squareNum(value);
	}

	int fct(int value)
	{
		return factorial(value);
	}
}

int main(void)
{
	int num;

	std::cout << "Enter a value: ";
	std::cin >> num;
	std::cout << "Square: " << Ostim::sqrNum(num) << std::endl
			  << "Factorial: " << Ostim::fct(num) << std::endl;

	return 0;
}