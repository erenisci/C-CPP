#include <iostream>

class Student
{
private:
	int studentNo;
	int notes;

public:
	void addStudentNo(int studentNo);
	void addNote(int notes);
	void noteInfo();
	void studentNoInfo();
};

void Student::addStudentNo(int studentNo)
{
	this->studentNo = studentNo;
}

void Student::addNote(int notes)
{
	this->notes = notes;
}

void Student::noteInfo()
{
	std::cout << "Note: " << this->notes << std::endl;
}

void Student::studentNoInfo()
{
	std::cout << "Student NO: " << this->studentNo << std::endl;
}

int main(void)
{
	Student std1;

	std1.addStudentNo(210205061);
	std1.addNote(100);
	std1.noteInfo();
	std1.studentNoInfo();

	return 0;
}