#include <iostream>

int main(void)
{
	try
	{
		int studentNo;
		std::cout << "Enter a student number: ";
		std::cin >> studentNo;
		if (studentNo < 200000 || studentNo > 200010)
		{
			throw(studentNo);
		}

		int midtermNote;
		std::cout << "Enter a midterm note: ";
		std::cin >> midtermNote;
		if (midtermNote < 0 || midtermNote > 100)
		{
			throw(midtermNote);
		}

		int finalNote;
		std::cout << "Enter a final note: ";
		std::cin >> finalNote;
		if (finalNote < 0 || finalNote > 100)
		{
			throw(finalNote);
		}

		std::cout << "Transaction successful" << std::endl;
	}
	catch (int value)
	{
		std::cout << "Incorrect entry: " << value << std::endl;
	}

	return 0;
}