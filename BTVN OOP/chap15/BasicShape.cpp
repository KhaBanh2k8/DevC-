#include<bits/stdc++.h>
using namespace std;
#pragma once

class BasicShape{
	private:
		double area;
	public:
		double getArea()
		{
			return area;
		}
		virtual double calcArea() = 0;
};
