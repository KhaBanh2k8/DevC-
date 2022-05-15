#include<bits/stdc++.h>
using namespace std;

class FuelGauge
{
	private:
		int nhienLieu;
	public:
		void setNhienLieu(int nl)
		{
			nhienLieu = nl;
		}
		FuelGauge(){
		}
		FuelGauge(int nl)
		{
			nhienLieu = nl;
		}
		int getNhienLieu()
		{
			return nhienLieu;
		}
		FuelGauge operator ++(int)
		{
			if(nhienLieu < 16)
				nhienLieu++;
			return *this;
		}
		FuelGauge operator --(int)
		{
			if(nhienLieu > 0)
				nhienLieu--;
		}
		
};

class Odometer{
	private:
		int dam;
	public:
		void setDam(int dam)
		{
			this->dam = dam;
		}
		Odometer()
		{
			dam = 0;
		}
		Odometer(int dam)
		{
			this->dam = dam;
		}
		int getDam()
		{
			return dam;
		}
		Odometer operator ++()
		{
			++dam;
			if(dam == 1000000)
				dam = 0;
		}
		void tieuTon(FuelGauge &a)
		{
			if(dam % 24==0)
				a--;
		}
};

int main()
{
	FuelGauge a;
	Odometer odometer;
	int nhienLieu; cout << "Nhap so nhien lieu: ";
	cin >> nhienLieu;
	a.setNhienLieu(nhienLieu);
	cout << "Nhap so nhien lieu mon do them: "; int x; cin >> x;
	while(x--)
	{
		a++;
	}
	cout << "So nhien lieu hien tai: " << a.getNhienLieu() << endl;
	cout << "----------------------------------------------------\n";
	while(3)
	{
		if(a.getNhienLieu() == 0)
		{
			cout << "Nhien lieu da het!!!\n"; break;
		}
		++odometer;
		cout  << "SO dam hien tai: "<< odometer.getDam() << endl;
		odometer.tieuTon(a);
		cout << "Nhien lieu con lai: " << a.getNhienLieu() << endl;
		cout << "----------------------------------------------------\n";
	}
	
	return 0;
}

