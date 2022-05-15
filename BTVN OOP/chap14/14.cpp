#include "ParkingTicket.cpp"

int main()
{
	int tg, tgMua;
	cout << "Nhap thoi gian: "; cin >> tg;
	cout << "Nhap thoi gian mua: "; cin >> tgMua;
	ParkedCar car("Porsche", "A4019", "Xanh la cay", "KT2003", tg);
	ParkingMeter meter(tgMua);
	PoliceOfficer police("Tran Van Tien" , "12345");
	ParkingTicket ticket(car,meter,police);

	if(police.kt(car,meter))
	{
		ticket.tinhTien();
		ticket.print();
	}
	else cout << "Thoi gian do xe du thoi han\n";

	return 0;
}

