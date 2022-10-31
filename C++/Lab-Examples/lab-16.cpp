#include <iostream>

class Person
{
private:
	std::string personName;
	int personMoney;

public:
	void addPerson(std::string personName, int personMoney);
	void personInfo();
	Person operator+(Person k);
};

void Person::addPerson(std::string personName, int personMoney)
{
	this->personName = personName;
	this->personMoney = personMoney;
}

void Person::personInfo()
{
	std::cout << "Person name: " << this->personName << std::endl
			  << "Person money: " << this->personMoney << std::endl
			  << std::endl;
}

Person Person::operator+(Person k)
{
	Person temp;
	temp.personName = this->personName + ", " + k.personName;
	temp.personMoney = this->personMoney + k.personMoney;
	return temp;
}

int main(void)
{
	Person p1, p2, p3;

	p1.addPerson("Eren", 31);
	p1.personInfo();

	p2.addPerson("Sude", 69);
	p2.personInfo();

	p3 = p1 + p2;
	p3.personInfo();

	return 0;
}