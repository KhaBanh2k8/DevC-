#include<bits/stdc++.h>
using namespace std;

int ngayTrongThang[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
string thangTrongNam[12] = {
"January", "February", "March", "April", "May", "June", 
"July", "August", "September", "October", "November", "December"
};

bool namNhuan(int x)
{
	if((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
		return true;
	
	return false;
}
class Date
{
	private:
		int month,day,year;
	public:
		
		void setMonth(int month)
		{
			if(namNhuan(year))
			{
				ngayTrongThang[1] = 29;
			}
			else
			{
				ngayTrongThang[1] = 28;
			}
		}
		void setDay(int d)
		{
			if(d < 1 || d > ngayTrongThang[month-1])
			{
				cout << "Vui long kiem tra lai !!\n";
				exit(0);
			}
			else this->day = d;
		}
		void setYear(int year)
		{
			this->year = year;
		}
				
		void kiemTraNgay1();
		void kiemTraNgay2();
	
		friend istream& operator >> (istream&, Date&);
		friend ostream& operator << (ostream&, Date);
		Date &operator ++();
		Date operator ++(int);
		Date &operator --();
		Date operator --(int);
		
		int getMonth()
		{
			return month;
					}	
		int getDay()
		{
			return day;
				}	
		int getYear()
		{
			return year;
		}
		
			
};
istream& operator >> (istream &in, Date &a)
{
	cout << "Nhap thang: "; in >> a.month;
	cout << "Nhap ngay: "; in >> a.day;
	cout << "Nhap nam: " ; in >> a.year;
	a.setMonth(a.month);
	a.setDay(a.day);
	a.setYear(a.year);
	return in;
}
ostream& operator << (ostream &out, Date a)
{
	out << thangTrongNam[a.month-1] << " " << a.day << ", " << a.year << endl;
	return out;
}
void Date::kiemTraNgay1()
{
	if(month == 12 && day > 31)
	{
		year++;
		day = month = 1;
	}
	else if(day > ngayTrongThang[month-1])
	{
		day = 1;
		month++;
	}
}
void Date::kiemTraNgay2()
{
	if(month == 1 && day < 1)
	{
		month = 12;
		day = 31;
		year--;
	}
	else if(day < 1)
	{
		day = ngayTrongThang[month-2];
		month--;
	}
}

Date &Date::operator ++ ()
{
	++day;
	kiemTraNgay1();
	return *this;
}
Date Date::operator ++ (int)
{
	Date temp = *this;
	day++;
	kiemTraNgay1();
	return temp;
}
Date &Date::operator -- ()
{
	--day;
	kiemTraNgay2();
	return *this;
}
Date Date::operator -- (int)
{
	Date temp = *this;
	day--;
	kiemTraNgay2();
	return temp;
}

int main()
{
	Date a;
	cin >> a;
	cout << a;
	a++; cout << a;
	a--; cout << a;
	++a; cout << a;
	--a; cout << a;
	return 0;
}
