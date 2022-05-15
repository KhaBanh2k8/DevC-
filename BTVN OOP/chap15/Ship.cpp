#include<bits/stdc++.h>
using namespace std;
#pragma once

class Ship{
	private:
		string ten;
		int nam;
	public:
		void setTen(string ten)
		{
			this->ten = ten;
		}
		void setNam(int nam)
		{
			this->nam = nam;
		}
		string getTen()
		{
			return ten;
		}
		int getNam()
		{
			return nam;
		}
		Ship(){
		}
		Ship(string t, int n)
		{
			ten = t;
			nam = n;
		}
		virtual void print()
		{
			cout << "Ten con tau: " << ten << endl;
		}
};
