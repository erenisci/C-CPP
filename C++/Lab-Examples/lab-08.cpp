#include <iostream>

class Person
{
private:
	std::string name;
	std::string phoneNo;

public:
	void makeAssignment(std::string name, std::string phoneNo);
	void personInfo();
};

void Person::makeAssignment(std::string name, std::string phoneNo)
{
	this->name = name;
	this->phoneNo = phoneNo;
}

void Person::personInfo()
{
	std::cout << " Name: " << this->name << std::endl
			  << " Phone NO: " << this->phoneNo << std::endl;
}

class Lessons
{
private:
	std::string lessonName;
	int lessonCode;
	Person lessonTeacher;

public:
	void addLessonName(std::string lessonName)
	{
		this->lessonName = lessonName;
	}
	void addLessonCode(int lessonCode)
	{
		this->lessonCode = lessonCode;
	}
	void addLessonTeacher(Person lessonTeacher)
	{
		this->lessonTeacher = lessonTeacher;
	}
	void lessonInfo();
};

void Lessons::lessonInfo()
{
	std::cout << "Lesson info:\n"
			  << " Lesson name: " << this->lessonName << std::endl
			  << " Lesson code: " << this->lessonCode << std::endl
			  << std::endl
			  << "Teacher info:\n";
	lessonTeacher.personInfo();
}

int main(void)
{
	Person teacher1;
	teacher1.makeAssignment("Eren", "542 *** ** **");

	Lessons lesson1;
	lesson1.addLessonTeacher(teacher1);
	lesson1.addLessonName("Software");
	lesson1.addLessonCode(3);
	lesson1.lessonInfo();

	return 0;
}