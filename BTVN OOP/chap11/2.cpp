#include<bits/stdc++.h>
using namespace std;

struct MovieData
{
	string title,director;
	int runningTime, yearReleased;
	double chiPhi,doanhThu;
	
	MovieData(string t, string d, int r, int y, double ch, double doanh)
	{
		title = t;
		director = d;
		runningTime = r;
		yearReleased = y;
		chiPhi = ch;
		doanhThu = doanh;
	}
};
void display(MovieData a)
{
	cout << "Title            " << setw(15) << left << a.title << endl;
	cout << "Director         " << setw(15) << left<< a.director << endl;
	cout << "Running Time     " << setw(15) << left<< a.runningTime << endl;
	cout << "Year Released    " << setw(15) << left<< a.yearReleased << endl;
	if(a.doanhThu >= a.chiPhi)
	{
	cout << "Doanh thu        $" << setw(15) << left << a.doanhThu - a.chiPhi << endl;
	}
	else
	{
	cout << "Thua lo          $" << setw(15) << left << a.chiPhi - a.doanhThu << endl;
	}
	cout << "===============================\n";
}
int main()
{
	MovieData a("The gioi dong vat", "Tran Van Tien",230, 2010,1000,3500);
	MovieData b("Sieu nhan gao", "Nguyen Van Minh",420, 2018,5000, 2000);
	
	display(a);
	display(b);

	return 0;
}

