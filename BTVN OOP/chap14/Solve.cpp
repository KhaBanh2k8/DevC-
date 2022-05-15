#include "TimeOff.cpp"

const int MAX_SICK  = 8;
const int MAX_VAC = 12;

class Solve{
	private:
		int Nmonth;
		TimeOff timeoff;
	public:
		int getMonth()
		{
			return Nmonth;
		}
		
		Solve(TimeOff , int);
		
		void print();
		
		double maxSick(int mon)
		{
			timeoff.setMaxSick(mon * MAX_SICK);
			return timeoff.getMaxSick();
		}
		double maxVac(int mon)
		{
			timeoff.setMaxVacation(mon * MAX_VAC);
			return timeoff.getMaxVacation();
		}
		
		void setMonth(int n)
		{
			Nmonth = n;
		}
};
Solve::Solve(TimeOff t,int month)
{
	Nmonth = month;
	timeoff = t;
}
void Solve::print()
{
	cout << "Ten: " << timeoff.getTen() << endl;
	cout << "Ma: " << timeoff.getMa() << endl;
	cout << "So thang da lam viec: " << getMonth() << endl;
	cout << "So ngay nghi om toi da: " << maxSick(getMonth()) << endl;
	cout << "So ngay nghi phep toi da: " << maxVac(getMonth()) << endl;
}
