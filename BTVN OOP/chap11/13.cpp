#include<bits/stdc++.h>
using namespace std;

int n = 5;
int soLuongBanDau = 20;
double GIA[5] = {0.75, 0.75, 0.75, 0.8, 0.8};
string TEN[5] = {"Cola", "Bia goc", "Chanh-chanh", "Soda nho", "Soda kem"};

struct DrinkMachine
{
	string ten;
	double gia;
	int soLuong;
};
void KhoiTao(DrinkMachine a[])
{
	for(int i = 0 ; i < n ; i++)
	{
		a[i].ten = TEN[i];
		a[i].gia = GIA[i];
		a[i].soLuong = soLuongBanDau;
	}
	
}
void Menu()
{
	cout << "\tTEN THUC UONG" << setw(12) << "GIA" << setw(28) << "SO LUONG TRONG MAY" << endl << endl;
	for(int i = 0 ; i < n ; i++)
	{
		cout << "\t#" << i+1<<". " << setw(17) << left << TEN[i];
		cout << setw(5) << GIA[i];
		cout << setw(15) << right << soLuongBanDau << endl;
	}
	cout << endl << "1. Mua do uong\n";
	cout << "2. Thoat\n";
	cout << "Lua chon[1-2]: ";
}
int main()
{
	DrinkMachine a[n];
	KhoiTao(a);
	
	double total = 0;
	while(1)
	{
		system("cls");
		Menu();
		int nhap; cin >> nhap;
		
		if(nhap == 1)
		{
			double tien, tienThua;
			cout << "Hay nhap so tien(0$ - 1$): "; cin >> tien;
			while(tien <= 0 || tien > 1)
			{
				cout << "Hay nhap so tien(0$ - 1$): "; cin >> tien;
			}
			cout << "Ban muon mua gi(1-5) ?"; int x; cin >> x;
			if(a[x-1].soLuong > 0)
			{
				if(a[x-1].gia > tien)
				{
					cout << "Khong du tien !!\n";
				}
				else
				{
					tienThua = tien - a[x-1].gia;
					a[x-1].soLuong--;
					total += a[x-1].gia;
					cout << "--Tien con thua: " << tienThua << endl;
				}
			}
			else cout << "Da het hang! Vui long chon thuc uong khac ?\n";
			
			system("pause");
		}
		else if(nhap == 2)
		{
			cout << "--Tong so tien ma may kiem duoc: $" << total << endl;
			exit(0);
		}
	}
	return 0;
}

