#include <iostream>

int main(void)
{
    int number;

    std::cout << "How many cars do you have? ";
    std::cin >> number;
    std::string *PCars = new std::string[number];

    for (int i = 0; i < number; i++)
    {
        std::cout << "Enter car #" << i + 1 << " : ";
        std::cin >> PCars[i];
    }

    std::cout << "\nHere is your garage!\n";
    std::cout << "-------------\n";

    for (int i = 0; i < number; i++)
    {
        std::cout << "Parking spot #" << i + 1 << " : " << PCars[i] << std::endl;
    }

    return 0;
}