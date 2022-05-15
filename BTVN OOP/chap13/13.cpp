#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class Coin{
	private:
		string sideUp;
		double x[3];
	public:
		Coin()
		{
			sideUp = "";
			x[0] = 25;
			x[1] = 10;
			x[2] = 5;
		}
		double random()
		{
			return x[rand()%(2-0+1)];
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
// 25 10 10h-35-40
int main()
{
	string r[2] = {"heads" ,"tails"};
	srand(time(NULL));
	
	Coin a;
	double sum = 0;
	while(1)
	{
		string s = r[rand()%(1-0+1)];
		system("cls");
		if(sum == 100)
		{
			cout << "\nCHUC MUNG BAN DA CHIEN THANG !\n";
			break;
		}
		else if(sum > 100)
		{
			cout << "Tong diem : " << sum << endl;
			cout << "\nBan da thua cuoc !\n";
			break;
		}
		cout << "Tong so tien: " << sum << endl;
		double k = a.random();
		cout << "Dong xu hien tai: $" << k << endl;
		a.toss(s);
		if(s == r[0])
		{
			sum += k;
		}
		
		cout << "Nhan phim bat ki de tung dong xu !";
		getch();
		cout << endl;
		cout << "Trang thai: " << a.getSideUp() << endl;
		cout << "Enter de tiep tuc!";
		getch();
		
	}
	

	return 0;
}

