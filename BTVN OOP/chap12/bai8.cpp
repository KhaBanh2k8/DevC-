#include<bits/stdc++.h>
using namespace std;

void arrayToFile(string name,int *p, int n)
{
	ofstream fileout;
	fileout.open(name, ios::binary);
	for(int i = 0 ; i < n ; i++)
	{
		fileout << *(p+i) << endl;
	}
	fileout.close();
}

void fileToArray(string name, int *p, int n)
{
	ifstream filein;
	filein.open(name, ios::binary);
	for(int i = 0 ; i < n ; i++)
	{
		filein >> *(p+i);
		}	
	
	filein.close();
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	arrayToFile("bai8.txt", a, 10);
	int b[10];
	fileToArray("bai8.txt", b ,10);
	for(int x : b)
	{
		cout << x << " ";
	}
	return 0;
}

