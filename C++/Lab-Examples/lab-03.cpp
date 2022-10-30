#include <iostream>

int main(void)
{
	double a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;

	if (b != 0)
	{
		std::cout << "\nA + B = " << a + b << std::endl
				  << "A - B = " << a - b << std::endl
				  << "B - A = " << b - a << std::endl
				  << "A * B = " << a * b << std::endl
				  << "A / B = " << a / b;
	}
	else
		std::cout << "Error! division by zero!";

	return 0;
}