#include<bits/stdc++.h>
using namespace std;

class DivSales{
	private:
		double soLieu[4];
		static double tongDt;
	public:
		
		void NhapSoLieu(double sl1, double sl2, double sl3, double sl4)
		{
			soLieu[0] = sl1;
			soLieu[1] = sl2;
			soLieu[2] = sl3;
			soLieu[3] = sl4;
			for(int i = 0 ; i < 4 ; i++)
			{
				tongDt += soLieu[i];
			}
		}
		
		double solve(int inx)
		{
			return soLieu[inx];
		}
		double getTongDt()
		{
			return tongDt;
		}		
};
double DivSales::tongDt = 0;

int main()
{
	DivSales a[6];
	double ds[4];	
	for(int i = 0 ; i < 6 ; i++)
	{
		cout << "------------ " << i + 1 << "----------------\n";
		for(int i = 0 ; i < 4 ; i++)
		{
			cout << "Nhap doanh so ban hang trong quy " << i+1 << ": ";
			cin >> ds[i];
			if(ds[i] <= 0)
			{
				cout << "Nhap doanh so ban hang trong quy " << i+1 << ": ";
				cin >> ds[i];
			}
		}
		a[i].NhapSoLieu(ds[0], ds[1], ds[2], ds[3]);
	}
	cout << fixed << setprecision(1);
	for(int i = 0 ; i < 6 ; i++)
	{
		cout << "================ #" << i+1  << "================\n";
		for(int f = 0 ; f < 4 ; f++)
		{
			cout << "Doanh thu quy " << f+1 << ": ";
			cout << a[i].solve(f) << endl;
		}
	}
	cout << "-->Tong doanh so: " << a[0].getTongDt() << endl;
	return 0;
}

