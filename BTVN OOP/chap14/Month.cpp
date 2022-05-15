#include<bits/stdc++.h>
using namespace std;

string monthOfYear[12] = { "January", "February", "March", "April",
            "May", "June", "July", "August", "September",
            "October", "November", "December" };

int findMonth(string s)
{
	for(int i = 0 ; i < 12 ; i++)
	{
		if(s == monthOfYear[i]) return i;
	}
	return -1;
}

class Month{
	private:
		string name;
		int monthNumber;
	public:
		void setName(string name)
		{
			this->name = name;
		}
		void setMonth(int month)
		{
			if(month >= 1 && month <= 12)
			{
				this->monthNumber = month;
				this->name = monthOfYear[month-1];
			}
			else cout << "Input is false!!\n";
		}
		
		Month();
		Month(int);
		Month(string);
		
		friend istream& operator >> (istream&, Month&);
		friend ostream& operator << (ostream&, Month);
		Month operator ++();
		Month operator ++(int);
		Month operator --();
		Month operator --(int);
		
		string getName()
		{
			return name;
		}
		int getMonth()
		{
			return monthNumber;
		}
		
};
Month::Month()
{
	monthNumber = 1;
	name = "January";
}
Month::Month(int n)
{
	if(n >= 1  && n <= 12)
	{
		monthNumber = n;
		name = monthOfYear[n-1];
	}
	else 
		cout << "Input is false!!\n";
}
Month::Month(string s)
{
	int k = findMonth(s);
	if(k != -1)
	{
		name = s;
		monthNumber = k+1;
	}
	else cout << "Input is false!!\n";
}

istream& operator >> (istream& in, Month &a)
{
	cout << "Nhap ten thang: ";
	in >> a.name;
	int k = findMonth(a.name);
	while(k == -1)
	{
		cout << "Nhap ten thang: ";
		in >> a.name;
	}
	a.monthNumber = k+1;
	return in;	
}
ostream& operator << (ostream& out, Month a)
{
	out << a.name << " " << a.monthNumber << "\n";
	return out;
}

Month Month::operator ++ ()
{
	++monthNumber;
	getMonth() <= 12 ? setMonth(monthNumber) : setMonth(1);
	return *this;
}
Month Month::operator ++ (int)
{
	Month temp = *this;
	monthNumber++;
	getMonth() <= 12 ? setMonth(monthNumber) : setMonth(1);
	return temp;
}
Month Month::operator -- ()
{
	--monthNumber;
	getMonth() >= 1 ? setMonth(monthNumber) : setMonth(12);
	return *this;
}
Month Month::operator -- (int)
{
	Month temp = *this;
	monthNumber--;
	getMonth() >= 1 ? setMonth(monthNumber) : setMonth(12);
	return temp;
}

