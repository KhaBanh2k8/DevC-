#include "PoliceOfficer.cpp"

class ParkingTicket{
	private:
		int tienPhat;
		int bs;
		ParkedCar car;
		ParkingMeter meter;
		PoliceOfficer police;
	public:
		ParkingTicket(ParkedCar car, ParkingMeter meter, PoliceOfficer police)
		{
			this->car = car;
			this->meter = meter;
			this->police = police;
		}
		void print()
		{
			cout << "--------------------------------------------------\n";
			cout << "THONG TIN XE: " << endl;
			car.print();
			cout << "--------------------------------------------------\n";
			cout << "THONG TIN CANH SAT: " << endl;
			police.print();
			cout << "--------------------------------------------------\n";
			cout << endl;
			
			cout << "Tien Phat trong 1 gio dau tien: $25\n";
			cout << "Tien phat sau 1 gio:            $" << bs << endl;
			cout << "-->Tong tien phat:              $" << tienPhat << endl;
			
		}
		void tinhTien()
		{
			int tongTG = car.getThoiGian() - meter.getThoiGianMua();
			tongTG /= 60;
			tongTG++;
			if(tongTG  == 1)
			{
				tienPhat = 25;
			}
			else 
			{
				tienPhat = 25 + (tongTG-2)*35;
				bs = tienPhat - 25;
				cout << tienPhat << " " << bs << endl;
			}
		}
	
};

