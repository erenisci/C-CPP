#include <iostream>

int main(void)
{
	int a, b;
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> a >> b;

	if (a < b)
	{
		a++;
		std::cout << "A = " << a << std::endl
				  << "B = " << b;
	}
	else if (b < a)
	{
		b++;
		std::cout << "A = " << a << std::endl
				  << "B = " << b;
	}
	else
	{
		std::cout << "A = " << a << std::endl
				  << "B = " << b << std::endl
				  << "Result = " << a * b;
	}

	return 0;
}