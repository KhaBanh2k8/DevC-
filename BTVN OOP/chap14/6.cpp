#include "Solve.cpp"

int main()
{
	cout << "Nhap so thang lam viec: "; int m; cin >> m;
	TimeOff a("Tran Van Tien" , "A43019");
	Solve x(a, m);
	x.print();


	return 0;
}

