#include "ParkedCar.cpp"
#include "ParkingMeter.cpp"

class PoliceOfficer{
	private:
		string ten, soHieu;
	public:
		PoliceOfficer(){
		}
		PoliceOfficer (string ten, string so)
		{
			this->ten = ten;
			this->soHieu = so;
		}
		bool kt(ParkedCar car, ParkingMeter meter)
		{
			return car.getThoiGian() > meter.getThoiGianMua();
		}
		void print()
		{
			cout << "Ten: " << ten << endl;
			cout << "So hieu: " << soHieu << endl;
		}
};
