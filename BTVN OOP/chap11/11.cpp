#include<bits/stdc++.h>
using namespace std;
// so ngan sach
int n = 10;

struct MonthlyBudget{
	int budget[10];
};
void Nhap(MonthlyBudget &a, string ten[])
{
	cout << "++++++++++++ CHI PHI +++++++++++++++\n";
	for(int i = 0 ; i < n ; i++)
	{
		cout << "Nhap " << ten[i] << ": ";
		cin >> a.budget[i];
	}
}
void solve(MonthlyBudget a, int chiPhi[], string ten[])
{
	//danh sach
	vector<string> tren, bang, duoi;
	// so sanh tong chi tieu
	int tongTieu, tongMax;
	tongTieu = tongMax = 0;
	for(int i = 0 ; i < n ;i++)
	{
		if(a.budget[i] < chiPhi[i])
			duoi.push_back(ten[i]);
		
		else if(a.budget[i] > chiPhi[i])
			tren.push_back(ten[i]);
			
		else bang.push_back(ten[i]);
		
		tongTieu += a.budget[i];
		tongMax += chiPhi[i];
	}
	cout << endl;
	cout << "Nhung chi tieu vuot qua ngan sach: " << endl;
	for(int i = 0 ; i < tren.size() ; i++)
		cout << tren[i] << endl;
		
	cout << endl; cout << "Nhung chi tieu duoi muc ngan sach: " << endl;
	for(int i = 0 ; i < duoi.size() ; i++)
		cout << duoi[i] << endl;
		
	cout << endl; cout << "Nhung chi tieu vua du ngan sach: " << endl;
	for(string x : bang)
		cout << x << endl;
	cout << endl;
	
	if(tongTieu > tongMax)
		cout << "Tong so tien da vuot qua ngan sach";
	else if(tongTieu < tongMax)
		cout << "Tong so tien da o duoi ngan sach";
	else cout << "Tong so tien du dinh chinh xac";
}
int main()
{
	MonthlyBudget budget;
	int chiPhi[n] = {500, 150, 65, 50, 250, 30, 100, 150, 75, 50};
	string tenChiPhi[n] = {
		"Nha o", "Tien ich", "Chi phi Ho gia dinh", "Van chuyen", "Thuc an",
		"Y te", "Bao hiem", "Giai tri", "Quan ao", "Dieu khoan khac"	};
	
	Nhap(budget, tenChiPhi);	
	solve(budget, chiPhi, tenChiPhi);

	return 0;
}

