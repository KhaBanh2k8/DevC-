#include<bits/stdc++.h>
using namespace std;

class Time
{
	protected:
		int hour;
		int min;
		int sec;
	public:
		Time()
		{ hour = 0; min = 0; sec = 0; }
		Time(int h, int m, int s)
		{ hour = h; min = m; sec = s; }
		int getHour() const
		{ return hour; }
		int getMin() const
		{ return min; }
		int getSec() const
		{ return sec; }
};
class MilTime : public Time{
	public:
		MilTime(int hour, int min, int sec) : Time(hour, min, sec)
		{
		}
		string getHour1()
		{
			if(hour == 24) return "0 gio sang ";
			if(hour > 13) return to_string(hour-12) + " gio chieu ";
			return to_string(hour) + " gio sang ";
		}
		int getMin1()
		{
			return min;
		}
		int getSec1()
		{
			return sec;
		}
};
class TimeClock : public MilTime{
	private:
		int h,m;
	public:
		TimeClock(int h, int m, int hour, int min) : MilTime(hour, min,sec)
		{
			this->h = h;
			this->m = m; 
		}
		int ss()
		{
			return hour;
		}
		int getKhoangCachH()
		{
			return abs(hour - h);
		}
		int getKhoangCachM()
		{
			return abs(min - m);
		}
		
};
int main()
{
//	int hour, min, sec;
//	cout << "Nhap gio: "; cin >> hour;
//	cout << "Nhap phut: "; cin >> min;
//	cout << "Nhap giay: "; cin >> sec;
//	while(hour < 0 || hour > 24 || min < 0 || min > 60 || sec < 0 || sec > 60)
//	{
//		cout << "Nhap gio: "; cin >> hour;
//		cout << "Nhap phut: "; cin >> min;
//		cout << "Nhap giay: "; cin >> sec;
//	}
	TimeClock a(9,0,13,20);
	cout << "Khoang cach: " << a.getKhoangCachH() << "h" << a.getKhoangCachM();	
	return 0;
}

