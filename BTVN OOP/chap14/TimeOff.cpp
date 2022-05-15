#include<bits/stdc++.h>
#include "NumDays.cpp"

class TimeOff{
	private:
		string ten, ma;
		NumDays maxSickDays,sickTaken,
				maxVacation,vacTaken,
				maxUnpaid,
				unpaidTaken;				
	public:
		string getTen()
		{
			return ten;
		}
		string getMa()
		{
			return ma;
		}
		double getMaxSick()
		{
			return maxSickDays.getCong();
		}
		double getSickTaken()
		{
			return sickTaken.getCong();
		}
		double getMaxVacation()
		{
			return maxVacation.getCong();
		}
		double getVacTaken()
		{
			return vacTaken.getCong();
		}
		double getMaxUnpaid()
		{
			return maxUnpaid.getCong();
		}
		double getUnpaidTaken()
		{
			return unpaidTaken.getCong();
		}
		
		void print();
		TimeOff(string,string,double,double,double,double,double,double);
		TimeOff(string, string);
		TimeOff(){}
		void setTen(string ten)
		{
			this->ten = ten;
		}
		void setMa(string ma)
		{
			this->ma = ma;
		}
		void setMaxSick(double a)
		{
			maxSickDays.setGio(a);
		}
		void setSickTaken(double a)
		{
			sickTaken.setGio(a);
		}
		void setMaxVacation(double a)
		{
			maxVacation.setGio(a);
		}
		void setVacTaken(double a)
		{
			vacTaken.setGio(a);
		}
		void setMaxUnpaid(double a)
		{
			maxUnpaid.setGio(a);
		}
		void setUnpaidTaken(double a)
		{
			unpaidTaken.setGio(a);
		}
};

int MAX_PAID = 240;
int cnt = 0;
TimeOff::TimeOff(string ten, string ma, double a, double b, double c, double d, double e, double f)
{
	this->ten = ten;
	this->ma = ma;
	setMaxSick(a);
	setSickTaken(b);
	c <= 240 ? setMaxVacation(c) : setMaxVacation(MAX_PAID);
	setVacTaken(d);
	setMaxUnpaid(e);
	setUnpaidTaken(f);
}
TimeOff::TimeOff(string ten, string ma)
{
	this->ten = ten;
	this-> ma = ma;
}
void TimeOff::print()
{
	cnt++;
	cout << fixed << setprecision(2);
	cout << "========== " << cnt << " ==================\n";
	cout << "Ten:   " << getTen() << endl;
	cout << "Ma:    " << getMa() << endl;
	cout << "--------------------------\n";
	cout << "Max Sick Days:   " << getMaxSick() << endl;
	cout << "Sick Days:       " << getSickTaken() << endl;
	cout << "--------------------------\n";
	cout << "Max Vacation:    " << getMaxVacation() << endl;
	cout << "Vacation Taken:  " << getVacTaken() << endl;
	cout << "--------------------------\n";
	cout << "Max Unpaid:      " << getMaxUnpaid() << endl;
	cout << "Unpaid Taken:    " << getUnpaidTaken() << endl << endl << endl;
}
