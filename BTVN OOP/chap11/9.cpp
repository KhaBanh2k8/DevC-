#include<bits/stdc++.h>
using namespace std;

int size = 0;

struct Bureau{
	string ten,sdt,chuDe;
	double phi;
};

void Nhap(Bureau &a)
{
	size++;
	cin.ignore();
	cout << "Nhap ten: "; getline(cin,a.ten);
	cout << "Nhap So dien thoai: "; cin >> a.sdt;
	cout << "Nhap Chu de: " ; cin >> a.chuDe;
	cout << "Nhap phi bat buoc: "; cin >> a.phi;
}
void print(Bureau a)
{
	cout << "Ten:            " << a.ten << endl;
	cout << "So dien thoai:  " << a.sdt << endl;
	cout << "Chu de:         " << a.chuDe << endl;
	cout << "Phi bat buoc:   " << a.phi;
	while(a.phi < 0)
	{
		cout << "Phi bat buoc: " << a.phi;
	}
	cout << "\n\n\n";
}
void Menu()
{
	cout << "1. Nhap thong tin" << endl;
	cout << "2. Thay doi thong tin" << endl;
	cout << "3. Hien thi tat ca thong tin" << endl;
	cout << "4. Thoat" << endl;
	cout << "Lua chon[1-4]: ";
}

int main()
{
	int n = 10;
	Bureau a[n];
	while(1)
	{
		int nhap;
		system("cls");
		Menu();
		cin >> nhap;
		if(nhap == 1)
		{
			for(int i = 0 ; i < n ; i++)
				{
					Nhap(a[i]);
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
			Nhap(a[x-1]);
			size--;
		}
		else if(nhap == 3)
		{
			for(int i = 0 ; i < size ; i++)
			{
				print(a[i]);
			}
			system("pause");
		}
		else if(nhap == 4) exit(0);
		
	}


	return 0;
}

