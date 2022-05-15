#include<bits/stdc++.h>
using namespace std;

struct MovieData
{
	string title,director;
	int runningTime, yearReleased;
	
	MovieData(string t, string d, int r, int y)
	{
		title = t;
		director = d;
		runningTime = r;
		yearReleased = y;
	}
};
void display(MovieData a)
{
	cout << "Title            " << setw(15) << left << a.title << endl;
	cout << "Director         " << setw(15) << left<< a.director << endl;
	cout << "Running Time     " << setw(15) << left<< a.runningTime << endl;
	cout << "Year Released    " << setw(15) << left<< a.yearReleased << endl;
	cout << "===============================\n";
}
int main()
{
	MovieData a("The gioi dong vat", "Tran Van Tien",230, 2010);
	MovieData b("Sieu nhan gao", "Nguyen Van Minh",420, 2018);
	
	display(a);
	display(b);

	return 0;
}

