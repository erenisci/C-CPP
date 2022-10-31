#include <iostream>

class Human
{
public:
    int height;
    int weight;
    char *address;

    int eat()
    {
        weight++;
        return weight;
    }
};

class Worker : public Human
{
public:
    int salary;

    int raise(int x)
    {
        salary += x;
        return salary;
    }
};

int main(void)
{
    Human eren;
    Worker sude;

    eren.height = 180;
    std::cout << eren.height << std::endl;

    sude.salary = 5000;
    sude.height = 170;
    sude.weight = 65;
    std::cout << "Weight = " << sude.weight << std::endl
              << "Salary = " << sude.salary << std::endl;
    std::cout << std::endl;

    sude.raise(500);
    sude.eat();
    std::cout << "Weight = " << sude.weight << std::endl
              << "Salary = " << sude.salary << std::endl;

    return 0;
}