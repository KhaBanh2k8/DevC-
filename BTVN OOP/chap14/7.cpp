#include "Month.cpp"

int main()
{
	Month a;
	cin >> a; cout << a;
	Month b(4);
	cout << b;
	b++; cout << b;
	b--; cout << b;
	Month c("December");
	cout << c;
	++c; cout << c;
	--c; cout << c;

	return 0;
}

