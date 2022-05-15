#include<iostream>
#include<math.h>
using namespace std;

class NumDays
{
	private:
		double gio;
	public:
		NumDays(double gio)
		{
			this->gio = gio;
		}
		NumDays()
		{
		}
		void nhap();
		void in();
		void setGio(double gio)
		{
			this->gio = gio;
		}
		double getGio()
		{
			return gio;
		}
		double getCong()
		{
			return gio/8;
		}
		NumDays operator + (NumDays a);
		NumDays operator - (NumDays a);
		NumDays operator ++()
		{
			++gio;
			return *this;
		}
		NumDays operator ++(int)
		{
			gio++;
			return *this;
		}
		NumDays& operator --()
		{
			this->gio = this->gio - 1;
			setGio(this->gio);
			return *this;
		}
		NumDays operator --(int)
		{
			NumDays a = *this;
			a.gio = this->gio - 1;
			setGio(a.gio);
			return a;
		}
		
};

NumDays NumDays::operator +(NumDays a)
{
	NumDays t;
	t.gio = this->gio + a.gio;
	return t;
 } 
NumDays NumDays::operator - (NumDays a)
{
	NumDays t;
	t.gio = this->gio - a.gio;
	if(t.gio < 0) t.gio *= -1;
	return t;
}
void NumDays::nhap()
{
	cout << "Nhap gio: "; cin >> gio;
}
void NumDays::in()
{
	cout << "-->So Gio: " << getGio() << endl;
	cout << "-->Ngay Cong: " << getCong() << endl;
}

