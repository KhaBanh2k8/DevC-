#include<bits/stdc++.h>
using namespace std;

int cnt = 1;
class Payroll{
	private:
		double salary,hour,totalSalary;
	public:
		void input();
		double getTotalSalary()
		{
			return salary * hour;
		}
};
void Payroll::input()
{
	cout << "=========== #" << cnt << " ===========\n";
	cnt++; 
	cout << "Nhap so gio lam: ";cin >> hour;
	while(hour < 0 || hour > 60)
	{
		cout << "Nhap so gio lam: ";cin >> hour;
	}
	cout << "Nhap so tien luong moi gio lam viec: "; cin >> salary;
}
int main()
{
	Payroll a[7];
	for(int i = 0 ; i < 7 ; i++)
	{
		a[i].input();
	}
	cout << fixed << setprecision(2);
	for(int i = 0 ; i < 7 ; i++)
	{
		cout << "Tien luong cua nhan vien #" << i+1 << ": "<< a[i].getTotalSalary() << endl;
	}
	return 0;
}

