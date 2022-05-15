#include<bits/stdc++.h>
using namespace std;

class temperature{
	private:
		int nhietDo;
	public:
		bool isEthylFreezing()
		{
			return nhietDo <= -173;
		}
		bool isEthylBoiling()
		{
			return nhietDo >= 172;
		}
		bool isOxygenFreezing()
		{
			return nhietDo <= -362;
		}
		bool isOxygenBoiling()
		{
			return nhietDo >= -306;
		}
		bool isWaterFreezing()
		{
			return nhietDo <= 32;
		}
		bool isWaterBoiling()
		{
			return nhietDo >= 212;
		}
		void nhap();
		void in();
};

void temperature::nhap()
{
	cout << "Nhap nhiet do: "; cin >> nhietDo;
}
void temperature::in()
{
	if(isEthylFreezing())
	{
		cout << "Ethyl Alcohol se dong bang\n";
	}
	if(isEthylBoiling())
		cout << "Ethyl Alcohol se soi\n";
	if(isOxygenFreezing())
		cout << "Oxy se dong bang\n";
	if(isOxygenBoiling())
		cout << "Oxy se soi\n";
	if(isWaterFreezing())
		cout << "Nuoc se dong bang\n";
	if(isWaterBoiling())
		cout << "Nuoc se soi\n";
}
int main()
{
	temperature a;
	a.nhap();
	a.in();


	return 0;
}

