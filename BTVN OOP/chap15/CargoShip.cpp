#include "Ship.cpp"

class CargoShip : public Ship{
	private:
		int tan;
	public:
		void setTan(int t)
		{
			tan = t;
		}
		int getTan()
		{
			return tan;
		}
		CargoShip():Ship(){
		}
		CargoShip(int tan, string ten, int nam) : Ship(ten, nam)
		{
			this-> tan = tan;
		}
		
		void print()
		{
			Ship::print();
			cout <<"So hang cho duoc: " << tan << "(tan)\n";
		}
		
};


