#include<bits/stdc++.h>
using namespace std;

int main()
{
	string name;
	cin >> name;
	ifstream filein;
	filein.open(name);
	
	int k = 24;
	while(k--)
	{
		string s;
		getline(filein,s);
		cout << s << endl;
		if(k == 0)
		{
			system("pause");
			k = 24;
		}
		if(filein.eof())
		{
			cout << "Da doc het file !!!";
			break;
		}
	}
	
	filein.close();
	return 0;
}

