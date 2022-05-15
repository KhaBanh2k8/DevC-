#include "CustomerData.cpp"


int main()
{
	CustomerData a(123,true,"Tran","Tien","Dong Cuong","Yen Lac","Vinh Phuc", "12345","0999999999999");
	CustomerData b(789,false,"Nguyen","Minh","Lung Thuong","Tam Hong","Vinh Phuc", "67890","0555555555555");
	a.print();
	cout << "-------------------------------------------------------\n";
	b.print();
	

	return 0;
}

