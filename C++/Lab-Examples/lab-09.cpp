#include <iostream>
#include <string.h>

class Person
{
private:
	char name[20];
	char phoneNo[20];

public:
	Person();
	Person(char name[20], char phoneNo[20]);
	~Person()
	{
		std::cout << "Deleted\n\n";
	};
	void personInfo();
};

Person::Person()
{
	strcpy(name, "Unknown");
	strcpy(phoneNo, "Unknown");
}

Person::Person(char name[20], char phoneNo[20])
{
	strcpy(this->name, name);
	strcpy(this->phoneNo, phoneNo);
}

void Person::personInfo()
{
	std::cout << "Name: " << this->name << std::endl
			  << "Phone NO: " << this->phoneNo << std::endl
			  << std::endl;
}

int main(void)
{

	Person *teacher1 = new Person("Eren", "0542 *** ** **");
	teacher1->personInfo();
	delete teacher1;

	Person *teacher2 = new Person("Sude", "0533 *** ** **");
	teacher2->personInfo();

	Person *teacher3 = new Person();
	teacher3->personInfo();

	return 0;
}