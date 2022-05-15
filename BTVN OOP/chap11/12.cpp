#include<bits/stdc++.h>
using namespace std;

struct CourseGrade{
	string name,idnum;
	int *tests;
	double average;
	char grade;
	
	~CourseGrade()
	{
		delete tests;
		tests = NULL;
	}
};
void CapPhatBaiKiemTra(CourseGrade *a, int x, int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		a[i].tests = new int[x];
	}
}
void findGrade(CourseGrade *a, int n)
{
	char GRADE[5] = {'A','B','C','D','E'};
	
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i].average > 90)
			a[i].grade = GRADE[0];
			
		else if(a[i].average > 80)
			a[i].grade = GRADE[1];
			
		else if(a[i].average > 70)
			a[i].grade = GRADE[2];
			
		else if(a[i].average > 60)
			a[i].grade = GRADE[3];
		
		else a[i].grade = GRADE[4];
	}
}
void Nhap(CourseGrade *a, int x, int n)
{
	CapPhatBaiKiemTra(a,x,n);
	
	for(int i = 0 ; i < n ; i++)
	{
		cin.ignore();
		double total = 0;
		cout << "Nhap ten: "; getline(cin,a[i].name);
		cout << "Nhap ID: "; cin >> a[i].idnum;
		for(int j = 0 ; j < x ; j++)
		{
			cout << "Nhap diem #" << j+1 << ": "; cin >> a[i].tests[j];
			while(a[i].tests[j] < 0 || a[i].tests[j] > 100)
			{
				cout << "Nhap diem #" << j+1 << ": "; cin >> a[i].tests[j];
			}
			total += a[i].tests[j];
		}
		cout << endl << endl;
		a[i].average = total/x;
	}
	findGrade(a,n);	
}
void print(CourseGrade *a, int n)
{
	cout << fixed << setprecision(2);
	cout << "\tName" << setw(15) <<  "ID" << setw(15) << "Average" << setw(15) << "Grade\n";
	for(int i = 0 ; i < n ; i++)
	{
		cout << setw(23) << left << a[i].name << a[i].idnum;
		cout << setw(12) << right << a[i].average << setw(14) << a[i].grade << endl;
	}
}

int main()
{
	cout << "Co bao nhieu diem kiem tra?";int x; cin >> x;
	cout << "Co bao nhieu hoc sinh? "; int n ; cin >> n;
	CourseGrade *a;
	a = new CourseGrade[n];
	
	Nhap(a,x,n);
	print(a,n);

	delete[] a;
	return 0;
}

