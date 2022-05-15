#include "FeetInches.cpp"
using namespace std;

class LandTract{
	private:
		FeetInches width,length;
	public:
		
		int getArea()
		{
			int area = (width.getFeet() * 12 + width.getInches()) * (length.getFeet() * 12 + length.getInches());
			return area;
		}
		void nhap()
		{
			cin >> width;
			cout << "--------------\n";			
			cin >> length;
		}
};

int main()
{
	LandTract a[2];
	for(int i = 0 ; i < 2 ; i++)
	{
		cout << "======= #" << i+1 << " ===========\n";
		a[i].nhap();
	}
	cout << endl << endl;
	for(int i = 0 ; i < 2 ; i++)
	{
		cout << "Dien tich #" << i+1 << ": "<< a[i].getArea() << endl;
	}
	if(a[0].getArea() == a[1].getArea())
		cout << "Kich thuoc bang nhau";
	else cout << "Kich thuoc khong bang nhau";


	return 0;
}

