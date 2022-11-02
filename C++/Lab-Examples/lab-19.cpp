#include <iostream>

namespace eren
{
	int birthday;
	int calculateAge()
	{
		return 2022 - birthday;
	}
}

int main(void)
{
	std::cout << "Enter birthday: ";
	std::cin >> eren::birthday;
	std::cout << "Age: " << eren::calculateAge() << std::endl;

	return 0;
}