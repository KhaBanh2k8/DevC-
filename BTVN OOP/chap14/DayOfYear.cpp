#include<bits/stdc++.h>
using namespace std;

const int NUM_MONTHS = 12;
int daysInYear[NUM_MONTHS] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
int daysInMonth[NUM_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string monthOfYear[NUM_MONTHS] =  { "January", "February", "March", "April", "May", "June", "July",
                                    "August", "September", "October", "November", "December" };

class DayOfYear{
	private:
		int day, index;
		string month;
	public:
		int getDay()
		{
			return day;
		}
		string getMonth()
		{
			return this->month;
		}
		
		DayOfYear();
		DayOfYear(int);
		DayOfYear(int,string);
		
		void print2();
		void input2();
		void print3();
		void input3();
		
		bool monthCheck(string);
		
		DayOfYear operator++();
		DayOfYear operator++(int);
		DayOfYear operator--();
		DayOfYear operator--(int);
		
		void setDay(int day)
		{
			this->day = day;
		}
		void setMonth(string name)
		{
			month = name;
		}
};

DayOfYear::DayOfYear()
{
}
DayOfYear::DayOfYear(int day)
{
	this->day = day;
}
DayOfYear::DayOfYear(int day, string month)
{
	this-> day = day;
	this-> month = month;
}
void DayOfYear::print2()
{
	for(int i = 0 ; i < NUM_MONTHS; i++)
	{
		if(day <= daysInYear[i])
		{
			cout << monthOfYear[i] << " " << day-daysInYear[i-1] << endl;
			break;
		}
	}
}
void DayOfYear::input2()
{
	do
	{
		cout << "Nhap ngay: "; cin >> day;
	}
	while(day < 0 || day > 365);
}

void DayOfYear::print3()
{
	cout << getMonth() << " " << getDay() << endl;
}
void DayOfYear::input3()
{
	cout << "Nhap thang: "; cin >> month;
	cout << "Nhap ngay: "; cin >> day;
	while(monthCheck(month) == false || day < 0 || day > daysInMonth[index])
	{
		cout << "Nhap thang: "; cin >> month;
		cout << "Nhap ngay: "; cin >> day;
	}
}
bool DayOfYear::monthCheck(string name)
{
	for(int i = 0 ; i < NUM_MONTHS ; i++)
	{
		if(name == monthOfYear[i])
		{
			index = i;
			return true;
		}
	}
	return false;
}

DayOfYear DayOfYear::operator ++ ()
{
	if(month == monthOfYear[11] && day == 31)
	{
		index = 0;
		day = 1;
		month = monthOfYear[0];
	}
	else if(day == daysInYear[index])
	{
		day = 1;
		month = monthOfYear[++index];
	}
	else ++day;
	
	return *this;
}
DayOfYear DayOfYear::operator ++ (int)
{
	DayOfYear temp = *this;
	if(month == monthOfYear[11] && day == 31)
	{
		index = 0;
		day = 1;
		month = monthOfYear[0];
	}
	else if(day == daysInYear[index])
	{
		day = 1;
		month = monthOfYear[++index];
	}
	else day++;
	
	return temp;
}
DayOfYear DayOfYear::operator --()
{
	if(day == 1 && month == monthOfYear[0])
	{
		index = 11;
		month = monthOfYear[11];
		day = 31;
	}
	else if(day == 1)
	{
		index--;
		month = monthOfYear[index];
		day = daysInMonth[index];
	}
	else --day;
	return *this;
}
DayOfYear DayOfYear::operator --(int)
{
	DayOfYear temp = *this;
	if(day == 1 && month == monthOfYear[0])
	{
		index = 11;
		month = monthOfYear[11];
		day = 31;
	}
	else if(day == 1)
	{
		index--;
		month = monthOfYear[index];
		day = daysInMonth[index];
	}
	else day--;
	return temp;
}
