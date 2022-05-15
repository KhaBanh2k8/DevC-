#include<bits/stdc++.h>
using namespace std;

class Employee{
	private:
		string t,ms,nt;
	public:
		string getTen()
		{
			return t;
		}
		string getMaSo()
		{
			return ms;
		}
		string getNgayThue()
		{
			return nt;
		}
		void setTen(string ten)
		{
			t = ten;
		}
		void setMaSo(string maso)
		{
			ms = maso;
		}
		void setNgayThue(string ngay)
		{
			nt = ngay;
		}
		//
		Employee();
		Employee(string, string, string);
};
Employee::Employee(){
}
Employee::Employee(string t, string ms, string nt)
{
	this->t = t;
	this->ms = ms;
	this->nt = nt;
}
