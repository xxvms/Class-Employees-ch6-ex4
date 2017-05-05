// Class-Employees-ch6-ex4.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

class Employee
{
private:
	int employeeNo;
	double babyMoney;
	std::string name;
public:
	Employee (): employeeNo(0), babyMoney(0)
	{}
	void addEmployee()
	{
		std::cout << "Please kindly....." << std::endl;
		std::cout << "Number: ";
		std::cin >> employeeNo;
		std::cout << "Name: ";
		std::cin >> name;
		std::cout << "Katchin!!!: ";
		std::cin >> babyMoney;
	}

	void viewEmployee()
	{
		std::cout << "this are details for your champ!" << std::endl;
		std::cout << "Champ Number: " << employeeNo << std::endl;
		std::cout << "Champ Name: " << name << std::endl;
		std::cout << "Katchin for this champ: " << babyMoney << std::endl;
	}
};

int main()
{
	Employee emp1, emp2, emp3;

	emp1.addEmployee();
	emp2.addEmployee();
	emp3.addEmployee();

	emp1.viewEmployee();
	emp2.viewEmployee();
	emp3.viewEmployee();


	system("pause");
    return 0;
}

