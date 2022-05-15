#include<bits/stdc++.h>
using namespace std;



int main()
{
	string name;	// bai1.txt;
	cout << "Nhap ten file muon mo: " ;		cin >> name;

	ifstream filein;
	filein.open(name);
	int k = 10;
	while(k--)
	{
		string s;
		getline(filein,s);
		cout << s << endl;
		if(filein.eof())
		{
			cout << "Da doc het file !!!";
			break;
		}
	}

	filein.close();
	return 0;
}

