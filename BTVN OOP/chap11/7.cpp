#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define ll long long

int size = 0;

struct CustomerAccounts{
	string ten, diaChi, thanhPho, tieuBang, zip, sdt,ngayThang;
	ll soDu;
};
void NhapThongTin(CustomerAccounts &a)
{
	size++;
	cin.ignore();
	cout << "Nhap ten: " ; getline(cin,a.ten);
	cout << "Nhap dia chi: "; cin >> a.diaChi;
	cout <<"Nhap thanh pho: "; cin >> a.thanhPho;
	cout << "Nhap tieu bang: "; cin >> a.tieuBang;
	cout << "Nhap zip: "; cin >> a.zip;
	cout << "Nhap so dien thoai: "; cin >> a.sdt;
	cout << "Nhap so du tai khoan:"; cin >> a.soDu;
	cout << "Nhap ngay thanh toan cuoi cung: "; cin >> a.ngayThang;

}
void print(CustomerAccounts a)
{
	cout << "Ten:                       " << a.ten << endl;
	cout << "Dia chi:                   " << a.diaChi << endl;
	cout << "Thanh Pho:                 " << a.thanhPho << endl;
	cout << "Tieu bang:                 " << a.tieuBang << endl;
	cout << "Zip:                       " << a.zip << endl;
	cout << "So dien thoai:             " << a.sdt << endl;
	cout << "So du:                     " << a.soDu << endl;
	cout << "Ngay thanh toan cuoi cung: " << a.ngayThang << endl << endl << endl;
}
void Menu()
{
	cout << "1. Nhap vao danh sach tai khoan" << endl;
	cout << "2. Sua doi thong tin tai khoan" << endl;
	cout << "3. Hien thi danh sach tai khoan" << endl;
	cout << "4. Thoat khoi chuong trinh" << endl;
}
int main()
{
	int n = 10;
	CustomerAccounts ca[n];	
	while(1)
	{
		system("cls");
		Menu();
		int nhap; cout << "Lua chon[1-4]: "; cin >> nhap;
		if(nhap >= 1 && nhap <= 4)
		{
			if(nhap == 1)
			{
				for(int i = 0 ; i < n ; i++)
				{
					NhapThongTin(ca[i]);
					cout << "Ban co muon nhap tiep? (Y/N)";
					char x; cin >> x;
					if(x == 'n' || x == 'N')
						break;
				}
			}
			
			else if(nhap == 2)
			{
				int x; cout <<"Nhap vao vi tri muon sua[1-"<<size << "]: "; cin >> x;
				while(x < 1 || x > size)
				{
					cout <<"Nhap vao vi tri muon sua[1-"<<size << "]: "; cin >> x;
				}
				NhapThongTin(ca[x-1]);
				size--;
			}
			
			else if(nhap == 3)
			{
				for(int i = 0 ; i < size ; i++)
				{
					print(ca[i]);
				}
				system("pause");
			}
			else exit(0);
			
		}
		else cout << "Input is false\n";
	}
	return 0;
}

