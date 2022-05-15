#include "Emloyee.cpp"

int main()
{
	Employee a("Susan Meyers"  , "Accounting" , "Vice President", 47899);
	Employee b("Mark Jones", "IT", "\tProgrammer", 39119);
	Employee c("JoyRogers", "Manufacturing", "Engineer", 81774);
	cout << "Name\t\tID Number\tDepartment\tPosition\n";
	a.print();
	b.print();
	c.print();


	return 0;
}

