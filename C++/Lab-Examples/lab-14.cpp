#include <iostream>

class Worker
{
protected:
    int salary;
    int idNo;
    int payee;
    int debt;
    int advance = 500;

public:
    virtual int salaryPayment() = 0;
    virtual int advanceWithd() = 0;
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    void setPayment(int advance)
    {
        this->advance = advance;
    }
};

class Engineer : public Worker // abstract
{
};

class SoftwareEngineer : public Engineer // abstract method degil
{
public:
    int advanceWithd()
    {
        return advance;
    }
    int salaryPayment()
    {
        return salary;
    }
};

int main(void)
{
    SoftwareEngineer eren;
    eren.setSalary(5500);

    std::cout << "Advance: " << eren.advanceWithd() << std::endl;
    std::cout << "Salary: " << eren.salaryPayment() << std::endl;

    return 0;
}