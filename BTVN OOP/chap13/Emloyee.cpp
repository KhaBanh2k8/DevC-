#include<bits/stdc++.h>
using namespace std;
class Employee{
	private:
		string name,department,position;
		int idNumber;
	public:
		Employee(string name, string department, string position, int idNumber)
		{
			this->name = name;
			this->department = department;
			this->position = position;
			this->idNumber = idNumber;
		}
		Employee(string name , int idNumber)
		{
			this->name = name;
			this->idNumber = idNumber;
			this->department = this->position = "";
		}
		Employee()
		{
			name = department = position = "";
			idNumber=0;
		}
		void print();
};
void Employee::print()
{
	cout << name << "\t" << idNumber << "\t\t" << department << "\t" << position << endl;
}
