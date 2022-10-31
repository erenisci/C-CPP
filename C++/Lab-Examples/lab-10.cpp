#include <iostream>
#include <string.h>

typedef struct
{
	char personName[20];
	char phoneNo[20];
} Temp;

Temp addInfo()
{
	Temp k;

	std::cout << "Person name: ";
	std::cin >> k.personName;

	std::cout << "Phone NO: ";
	std::cin >> k.phoneNo;

	return k;
}

class Person
{
private:
	char name[20];
	char phoneNo[20];

public:
	Person();
	Person(char name[20], char phoneNo[20]);
	void personInfo();
};

Person::Person()
{
	Temp k1 = addInfo();
	strcpy(this->name, k1.personName);
	strcpy(this->phoneNo, k1.phoneNo);
}

Person::Person(char name[20], char phoneNo[20])
{
	strcpy(this->name, name);
	strcpy(this->phoneNo, phoneNo);
}

void Person::personInfo()
{
	std::cout << "\nName: " << this->name << std::endl
			  << "Phone NO: " << this->phoneNo << std::endl;
}

int main(void)
{
	Person teacher;
	teacher.personInfo();

	return 0;
}