#include<bits/stdc++.h>
using namespace std;

class Date{
	private:
		int month,day,year;
	public:
		void input();
		void print();
};
void Date::input()
{
	cout << "Month: "; cin >> month;
	cout << "Day: "; cin >> day;
	cout << "Year: "; cin >> year;
	while(month < 1 || month > 12 || day > 31 || day < 1)
	{
		cout << "Month: "; cin >> month;
		cout << "Day: "; cin >> day;
		cout << "Year: "; cin >> year;
	}
}
void Date::print()
{
	cout << "Ngay " << day << " Thang " << month << ", " << year << endl;
}
