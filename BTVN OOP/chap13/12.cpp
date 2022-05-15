#include<bits/stdc++.h>
using namespace std;

class Coin{
	private:
		string sideUp;
	public:
		Coin(string s)
		{
			sideUp = s;
		}
		void toss(string s)
		{
			sideUp = s;
		}
		string getSideUp()
		{
			return sideUp;
		}
};

int main()
{
	string r[2] = {"heads" ,"tails"};
	srand(time(NULL));
	string s = r[rand()%(1-0+1)];
	Coin a(s);
	int k = 0, j = 0;
	cout << "Initial state: " << a.getSideUp() << endl;
	cout << "Start: " << endl;
	for(int i = 0 ; i < 20 ; i++)
	{
		string x = r[rand()%(1-0+1)];
		a.toss(x);
		cout << "#" << i+1 << ": " << a.getSideUp() << endl;
		if(x == r[0])k++;
		else j++;
	}
	cout << "End!\n";
	cout << "Heads : " << k << endl;
	cout << "Tails : " << j << endl;

	return 0;
}

