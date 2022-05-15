#include "Ship.cpp"


class CruiseShip : public Ship{
	private:
		int maxKhach;
	public:
		void setMaxKhach(int m)
		{
			maxKhach = m;
		}
		int getMaxKhach()
		{
			return maxKhach;
		}
		CruiseShip():Ship(){
		}
		CruiseShip(int m, string ten, int nam) : Ship(ten, nam)
		{
			maxKhach = m;
		}
		void print()
		{
			Ship::print();
			cout << "So hanh khach: " << maxKhach << endl;
		}
		
};
