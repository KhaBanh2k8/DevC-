#include<bits/stdc++.h>
using namespace std;

class Numbers{
	private:
		int number;
		string lessThan20[20] = { "zero", "one", "two", "three", 
								"four", "five", "six", "seven", 
								"eight", "nine", "ten","eleven", 
								"twelve", "thirteen", "fourteen", "fifteen", 
								"sixteen", "seventeen", "eighteen", "nineteen" };
		string lessThan100[8] = { "twenty", "thirty", "forty", "fifty", 
								"sixty", "seventy", "eighty", "ninety" };
	public:
		Numbers(int number)
		{
			this->number = number;
		}
		void print();
};
void Numbers::print()
{
	if(number < 0 || number > 9999) 
	{
		cout << "Input is false!\n";
		return;
	}
	if(number < 20) cout << lessThan20[number] << endl;
	else if(number >=20 && number <= 99)
	{
		// lay duoc phan hang chuc && hang don vi
		int donVi;
		bool kt = true;
		int index= 0 , cnt = 2;
		while(kt)
		{
			kt = false;
			if(number >= cnt*10)
			{
				cnt++;
				kt = true;			
			}
		}
		donVi = number - (cnt-1)*10;
		cout << lessThan100[cnt-3] << " " << (donVi > 0 ? lessThan20[donVi] : "" )<< endl;
	}
	else if(number >= 100 && number <= 999)
	{
		//lay duong hang tram
		int tram = number/100;
		number %= 100;
		cout << lessThan20[tram] << " hundred ";
		if(number >= 20)
		{
			int donVi;
			bool kt = true;
			int index= 0 , cnt = 2;
			while(kt)
			{
				kt = false;
				if(number >= cnt*10)
				{
					cnt++;
					kt = true;			
				}
			}
			donVi = number - (cnt-1)*10;
			cout << lessThan100[cnt-3] << " " << (donVi > 0 ? lessThan20[donVi] : "" )<< endl;
		}
		else if(number < 20)
		{
			cout << lessThan20[number] << endl;
		}
		
	}
	else if(number >= 1000 && number <= 9999)
	{
		int nghin = number/1000;
		number %= 1000;
		cout << lessThan20[nghin] << " thousand ";
		
		if(number >= 100 && number <= 999)
		{
			int tram = number/100;
			number %= 100;
			cout << lessThan20[tram] << " hundred ";
			if(number >= 20)
			{
				int donVi;
				bool kt = true;
				int index= 0 , cnt = 2;
				while(kt)
				{
					kt = false;
					if(number >= cnt*10)
					{
						cnt++;
						kt = true;			
					}
				}
				donVi = number - (cnt-1)*10;
				cout << lessThan100[cnt-3] << " " << (donVi > 0 ? lessThan20[donVi] : "" )<< endl;
			}
			else if(number < 20)
			{
				cout << lessThan20[number] << endl;
			}
		}
		else if(number >= 20 && number <= 99)
		{
			int donVi;
			bool kt = true;
			int index= 0 , cnt = 2;
			while(kt)
			{
				kt = false;
				if(number >= cnt*10)
				{
					cnt++;
					kt = true;			
				}
			}
			donVi = number - (cnt-1)*10;
			cout << lessThan100[cnt-3] << " " << (donVi > 0 ? lessThan20[donVi] : "" )<< endl;
		}
		else if(number < 20)
		{
			cout << lessThan20[number] << endl;
		}
	}
}


int main()
{
	int n; cin >> n;
	Numbers a(n);
	a.print();

	return 0;
}

