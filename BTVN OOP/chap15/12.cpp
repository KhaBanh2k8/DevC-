#include "CruiseShip.cpp"
#include "CargoShip.cpp"


int main()
{
	Ship **ships = new Ship *[2];
	ships[0] = new CruiseShip(1000,"Titanic",2003);
	ships[1] = new CargoShip(999,"JingKing", 2010);
	
	for(int i = 0 ; i < 2 ; i++)
	{
		ships[i]->print();
		cout << endl;
	}


	return 0;
}

