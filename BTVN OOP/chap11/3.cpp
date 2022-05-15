#include<bits/stdc++.h>
using namespace std;

struct SalesData
{
	string ten;
	double ds1, ds2, ds3, ds4, tongds, dstb;
	SalesData(string t, double a, double b, double c, double d)
	{
		ten = t;
		ds1 = a;
		ds2 = b;
		ds3 = c;
		ds4 = d;
	}
	SalesData()
	{
		
	}
};

void Nhap(SalesData &a)
{
	cout << "=====================================\n";
	cout << "Nhap ten bo phan: ";
	getline(cin, a.ten);
	cout << "Nhap doanh so ban hang quy 1: ";	cin >> a.ds1;
	cout << "Nhap doanh so ban hang quy 2: ";	cin >> a.ds2;
	cout << "Nhap doanh so ban hang quy 3: ";	cin >> a.ds3;
	cout << "Nhap doanh so ban hang quy 4: ";	cin >> a.ds4;
	cin.ignore();
	a.tongds = a.ds1 + a.ds2 + a.ds3 + a.ds4;
	a.dstb = a.tongds / 4;
	cout << "=====================================\n";
}
void print(SalesData a)
{
	cout << "\n=====================================\n";
	cout << "Ten bo phan:          " << setw(30) << left << a.ten << endl;
	cout << "Tong doanh so:        " << setw(30) << left << a.tongds << endl;
	cout << "Doanh so trung binh:  " << setw(30) << left << a.dstb;
	cout << "\n=====================================\n";
}
int main()
{
	SalesData a[4];
	for(int i = 0 ; i < 4 ; i++)
	{
		Nhap(a[i]);
	}
	
	for(SalesData x : a)
	{
		print(x);
	}

	return 0;
}

