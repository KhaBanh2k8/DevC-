#include<bits/stdc++.h>
using namespace std;

class MortgagePaymen{
	private:
		double peyment,loan,rate;
		int years;
	public:
		MortgagePaymen()
		{
		}
		MortgagePaymen(double loan, double rate, int years)
		{
			this->loan = loan;
			this->rate = rate;
			this->years =years;			
		}
		double getPeyment()
		{
			double term = pow((1 + rate/12), 12 * years);
			double tu = loan * rate/12 * term;
			double mau = term - 1;
			peyment = tu/mau;
			return peyment;
		}	
		void nhap()
		{
			cout << "Nhap khoan tien vay: ";	cin >> loan;
			while(loan < 0)
			{
				cout << "Nhap khoan tien vay: ";	cin >> loan;
			}
			cout << "Nhap lai suat hang nam(%): ";		cin >> rate;
			rate /= 100;
			cout << "Nhap so luong nam vay: "; 		cin >> years;
		}
		void in()
		{
			cout << "======================\n";
			cout << fixed << setprecision(2);
			cout << "So tien thanh toan hang thang: $" << getPeyment() << endl;
			cout << "TOng so tien tra cho ngan hang: $" << getPeyment() * years * 12 << endl;
		}
};

int main()
{
	MortgagePaymen a;
	a.nhap();
	a.in();


	return 0;
}

