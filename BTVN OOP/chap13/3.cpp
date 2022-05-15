#include<bits/stdc++.h>
using namespace std;

class Car{
	private:
		int yearModel,speed;
		string make;
	public:
		int getYearModel()
		{
			return yearModel;
		}
		int getSpeed()
		{
			return speed;
		}
		string getMake()
		{
			return make;
		}
		Car(int, string);
		void accelerate();
		void brake();
};
Car::Car(int yearModel , string make)
{
	this->yearModel = yearModel;
	this->make = make;
	speed = 0;
}
void Car::accelerate()
{
	speed+=5;
}
void Car::brake()
{
	speed -=5;
}
int main()
{
	int year;
	string make;
	cout << "Enter Year Model: "; cin >> year;
	cin.ignore();
	cout << "Enter Make: ";getline(cin,make);
	Car a(year,make);
	
	int k,l;
	k = l = 5;
	while(k--)
	{
		a.accelerate();
		cout << a.getSpeed() << " ";
	}
	cout << endl;
	while(l--)
	{
		a.brake();
		cout << a.getSpeed() << " ";
	}

	return 0;
}

