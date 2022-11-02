#include <iostream>

class Student
{
private:
	int studentNo = -1;
	int age = -1;
	int midtermNote = -1;
	int finalNote = -1;

public:
	Student();
	Student(int studentNo, int age);
	Student(int studentNo, int age, int midtermNote, int finalNote);
	void fullAssign(int studentNo, int age, int midtermNote, int finalNote);
	void partialAssign(int midtermNote, int finalNote);
	void StudentInfo();
};

Student::Student()
{
	std::cout << "Empty constructor method!" << std::endl;
}

Student::Student(int studentNo, int age)
{
	std::cout << "Partial constructor method!" << std::endl;
	this->studentNo = studentNo;
	this->age = age;
}

Student::Student(int studentNo, int age, int midtermNote, int finalNote)
{
	std::cout << "Full constructor method!" << std::endl;
	this->studentNo = studentNo;
	this->age = age;
	this->midtermNote = midtermNote;
	this->finalNote = finalNote;
}

void Student::fullAssign(int studentNo, int age, int midtermNote, int finalNote)
{
	if (this->studentNo == -1)
	{
		std::cout << "Full Assignment!" << std::endl;
		this->studentNo = studentNo;
		this->age = age;
		this->midtermNote = midtermNote;
		this->finalNote = finalNote;
	}
}

void Student::partialAssign(int midtermNote, int finalNote)
{
	if (this->midtermNote == -1)
	{
		std::cout << "Partial Assignment!" << std::endl;
		this->midtermNote = midtermNote;
		this->finalNote = finalNote;
	}
}

void Student::StudentInfo()
{
	std::cout << "Student NO: " << studentNo << std::endl
			  << "Age: " << age << std::endl
			  << "Midterm note: " << midtermNote << std::endl
			  << "Final note: " << finalNote << std::endl;
}

int main(void)
{
	Student s1;
	s1.fullAssign(210205061, 21, 100, 70);
	s1.StudentInfo();

	std::cout << "\n\n";

	Student s2(210205027, 19);
	s2.partialAssign(90, 50);
	s2.StudentInfo();

	std::cout << "\n\n";

	Student *s3 = new Student(210205061, 31);
	s3->StudentInfo();

	std::cout << "\n\n";

	s3->fullAssign(210205061, 20, 30, 60);
	s3->StudentInfo();

	return 0;
}