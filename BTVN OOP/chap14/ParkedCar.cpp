#include<bits/stdc++.h>
using namespace std;

class ParkedCar{
	private:
		string hangXe, model, mau, ma;
		int tg;
	public:
		ParkedCar(){
		}
		ParkedCar(string h, string model, string mau, string ma, int tg)
		{
			this->hangXe = h;
			this->model = model;
			this->mau = mau;
			this->ma = ma;
			this->tg = tg;
		}
		int getThoiGian()
		{
			return tg;
		}
		void print()
		{
			cout << "Hang xe: " << hangXe << endl;
			cout << "Model: " << model << endl;
			cout << "Mau sac: " << mau << endl;
			cout << "Ma so giay phep: " << ma << endl;
		}
		
};
