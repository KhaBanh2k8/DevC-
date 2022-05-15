#include <bits/stdc++.h>
using namespace std;

struct Soccer
{
	string ten;
	int soAo, diem;
};

void Input(Soccer a[])
{
	for (int i = 0; i < 12; i++)
	{
		cout << "--------------- #" << i + 1 << "-----------------------\n";
		cout << "Nhap ten cau thu: "; getline(cin,a[i].ten);
		cout << "Nhap so ao: "; cin >> a[i].soAo;
		cout << "Nhap so diem: "; cin >> a[i].diem;
		if (a[i].soAo < 0 || a[i].diem < 0)
		{
			cout << "Nhap so ao: "; cin >> a[i].soAo;
			cout << "Nhap so diem: "; cin >> a[i].diem;
		}
		cin.ignore();
	}
}

int tongDiem(Soccer a[])
{
	int sum = 0;
	for (int i = 0 ; i < 12 ; i++)
		sum += a[i].diem;
	return sum;
}

void diemMax(Soccer a[])
{
	int max = a[0].diem;
	for (int i = 1; i < 12; i++)
	{
		if (max < a[i].diem)
			max = a[i].diem;
	}
	cout << "Nguoi choi dat diem cao nhat: " << endl;
	for (int i = 0; i < 12; i++)
	{
		if (max == a[i].diem)
		{
			cout << "\t+ " << a[i].ten << endl;
		}
	}
	cout << "KET THUC!\n";
}

void Output(Soccer a[])
{
	cout << "So_Ao       Ten";
	cout << setw(15) << right << "Diem_So\n";
	for (int i = 0; i < 12; i++)
	{
		cout << a[i].soAo << setw(15) << right << a[i].ten << setw(15) << right << a[i].diem << endl;
	}
	cout << "-->Tong diem: " << tongDiem(a) << endl;
	diemMax(a);
}

int main()
{
	Soccer soccer[12];
	Input(soccer);
	Output(soccer);
	
	
	return 0;
}
