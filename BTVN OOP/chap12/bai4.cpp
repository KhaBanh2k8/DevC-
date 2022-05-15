#include<bits/stdc++.h>
using namespace std;

int main()
{
	string name;	cin >> name;
	ifstream filein;
	filein.open(name);
	if(filein.fail()) exit(0);
	vector<string> v;
	while(!filein.eof())
	{
		string s; getline(filein,s);
		v.push_back(s);
	}
	cout << endl;
	int k = v.size() - 10;
	if(v.size() > 10)
	{
		filein.clear();
		filein.seekg(0,ios::beg);
		cout << "10 dong cuoi cung: \n";
		while(1)
		{
			cout << v[k] << endl;
			k++;
			if(filein.eof())
				cout << "Da doc het file !!!\n";
		}
	}
	else
	{
		for(int i = 0 ; i < v.size() ; i++)
		{
			cout << v[i] << endl;
		}
		cout << "Da doc het file !!!\n";		
	}
	filein.close();
	return 0;
}
