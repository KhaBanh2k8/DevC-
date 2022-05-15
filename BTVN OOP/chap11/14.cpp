#include<bits/stdc++.h>
using namespace std;

int n = 10;
const int MAX = 30;
int SO_BO_PHAN[10] = {10, 5, 15, 21, 7 , 5, 5, 25,18 , 12};
string TEN_BO_PHAN[10] = {"Van", "Vong bi", "Ong lot" , "Khop noi" , "Mat bich",
						"Banh rang", "Vo hop so", "May kep chan khong", "Cap", "Que"};

struct InventoryBins
{
	string ten;
	int soLuong;
};
void KhoiTao(InventoryBins a[])
{
	for(int i = 0 ; i < n ; i++)
	{
		a[i].ten = TEN_BO_PHAN[i];
		a[i].soLuong = SO_BO_PHAN[i];
	}
}
void HienThiDS(InventoryBins a[])
{
	cout << "\tMO TA BO PHAN" << setw(35) << "SO BO PHAN TRONG THUNG\n\n";
	for(int i = 0 ; i < n ; i++)
	{
		cout << "\t" << "#" << i+1 << ". " << setw(20) << left  << a[i].ten;
		cout << setw(13) << right << a[i].soLuong << endl;
	}
	cout << endl;
	cout << "1. Chon 1 thung\n";
	cout << "2. Thoat\n";
	cout << "Lua chon[1-2]: ";
}
void AddParts(InventoryBins a[], int x)
{
	int add;
	cout << "Nhap so luong muon them: ";  cin >> add;
	while(add < 0)
	{
		cout << "Nhap so luong muon them: ";  cin >> add;
	}
	if(add + a[x-1].soLuong > MAX)
	{
		cout << "Da qua gioi han cho phep(add <= 30) !!!\n";
		cout << "Nhap so luong muon them: ";  cin >> add;
		while(add < 0)
		{
			cout << "Nhap so luong muon them: ";  cin >> add;
		}
	}
	a[x-1].soLuong += add;
}
void RemoveParts(InventoryBins a[], int x)
{
	int remove;
	cout << "Nhap so luong muon xoa: "; cin >> remove;
	while(remove < 0)
	{
		cout << "Nhap so luong muon xoa: "; cin >> remove;
	}
	if(a[x-1].soLuong - remove < 0)
	{
		cout << "Khong the xoa !!!\n";
		cout << "Nhap so luong muon xoa: "; cin >> remove;
		while(remove < 0)
		{
			cout << "Nhap so luong muon xoa: "; cin >> remove;
		}
	}
	a[x-1].soLuong -= remove;
}
void solve(InventoryBins a[])
{
	cout << "Nhap thung[1-10]: ";int x; cin >> x;
	cout << "1. Them\n2. Xoa\n";
	cout << "Lua chon[1-2]: "; int nhap; cin >> nhap;
	
	if(nhap == 1)
	{
		AddParts(a,x);
	}
	else if(nhap == 2)
	{
		RemoveParts(a,x);
	}
	else return;
}
int main()
{
	InventoryBins a[10];
	KhoiTao(a);

	while(1)
	{
		system("cls");
		HienThiDS(a);
		int nhap; cin >> nhap;
		if(nhap == 1)
		{
			solve(a);
		}
		else if(nhap == 2)
		{
			break;
		}
	}

	return 0;
}

