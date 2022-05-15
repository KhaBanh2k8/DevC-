#include<bits/stdc++.h>
using namespace std;

class Circle{
	private:
		double radius, pi = 3.14159;
	public:
		Circle()
		{
			radius = 0;
		}
		Circle(double r)
		{
			radius = r;
		}
		void setRadius(double r)
		{
			radius = r;
		}
		double getRadius()
		{
			return radius;
		}
		double getArea()
		{
			return pi * pow(radius,2);
		}
		double getDiameter()
		{
			return radius * 2;
		}
		double getCircumference()
		{
			return 2 * pi * radius;
		}

};

int main()
{
	int r; cout << "NHap ban kinh: " ; cin >> r;
	while(r < 0)
	{
		cout << "NHap ban kinh: " ; cin >> r;
	}
	Circle a(r);
	cout << fixed << setprecision(2);
	cout << "Dien tich: " << a.getArea() << endl;
	cout << "Duong kinh: " << a.getDiameter() << endl;
	cout << "Chu vi: " << a.getCircumference() << endl;


	return 0;
}

