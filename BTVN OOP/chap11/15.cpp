#include<bits/stdc++.h>
using namespace std;

struct congNhanTheoGio
{
	double gio, tien;
};
struct congNhanTraLuong
{
	double tienLuongCB, tienThuong;
};
union CongNhan
{
	congNhanTheoGio a;
	congNhanTraLuong b;	
};
void Menu()
{
	cout << "--------- TRA LUONG ----------\n";
	cout << "\t1. Cong nhan theo gio\n";
	cout << "\t2. Cong nhan tra luong\n";
	cout << "Lua chon[1-2]: ";
}
void cnTheoGio(congNhanTheoGio &a)
{
	cout << "Nhap so gio lam viec: "; cin >> a.gio;
	while(a.gio < 0 || a.gio  > 80)
	{
		cout << "Nhap so gio lam viec: "; cin >> a.gio;
	}
	cout << "Nhap so tien mot gio: "; cin >> a.tien;
	while(a.tien < 0)
	{
		cout << "Nhap so tien mot gio: "; cin >> a.tien;
	}
	
	cout << "-->TONG SO LUONG: " << a.gio * a.tien << endl << endl;
	system("pause");
}
void cnTraLuong(congNhanTraLuong &b)
{
	cout << "Nhap so luong co ban: "; cin >> b.tienLuongCB;
	while(b.tienLuongCB < 0)
	{
		cout << "Nhap so luong co ban: "; cin >> b.tienLuongCB;
	}
	cout << "Nhap tien thuong: "; cin >> b.tienThuong;
	while(b.tienThuong < 0)
	{
		cout << "Nhap tien thuong: "; cin >> b.tienThuong;
	}
	cout << "-->TONG TIEN LUONG: " << b.tienThuong + b.tienLuongCB << endl << endl;
	system("pause");
}
int main()
{
	CongNhan cn;
	
	while(1)
	{
		system("cls");
		Menu();
		int nhap; cin >> nhap;
		if(nhap == 1)
		{
			cnTheoGio(cn.a);
		}
		else if(nhap == 2)
		{
			cnTraLuong(cn.b);
		}
	}

	return 0;
}

