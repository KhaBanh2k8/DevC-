#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Population{
	private:
		ll ds,s,t;
	public:
		double getBorn()
		{
			return (double)s/ds;
		}
		double getDead()
		{
			return (double)t/ds;
		}
		void nhap();
};
void Population::nhap()
{
	cout << "Nhap dan so: "; cin >> ds;
	cout << "NHap so nguoi sinh ra: " ; cin >> s;
	cout << "Nhap so nguoi da mat: " ; cin >> t;
	while(ds < 1 || s < 0 || t < 0 )
	{
		cout << "Nhap dan so: "; cin >> ds;
		cout << "NHap so nguoi sinh ra: " ; cin >> s;
		cout << "Nhap so nguoi da mat: " ; cin >> t;
	}
}
int main()
{
	Population a;
	a.nhap();
	cout << fixed << setprecision(2);
	cout << "Ti le sinh: " << a.getBorn() << endl;
	cout << "Ti le tu: " << a.getDead() << endl;


	return 0;
}

