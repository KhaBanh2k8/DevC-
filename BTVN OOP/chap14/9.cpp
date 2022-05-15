#include "FeetInches.cpp"

int main()
{
	int t; cin >> t;
	FeetInches a, b;
	int i = 1;
	while(t--)
	{
		cout <<"=========== " << i  <<" ===========\n";
		cin >> a;
		i++;
		cout <<"=========== " << i << " ===========\n";
		cin >> b;
		i++;
		if(a >= b) cout << "a >= b" << endl;
		else cout << "a < b" << endl;
		
		if(a <= b) cout << "a <= b" << endl;
		else cout << "a > b" << endl;
		
		if(a != b) cout << "a != b" << endl;
		else cout << "a == b" << endl;
		
		cout << a << b;
	}


	return 0;
}

