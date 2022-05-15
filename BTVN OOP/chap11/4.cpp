#include <iostream>
using namespace std;

const int MONTHS = 12;
string monthsName[MONTHS] = {  "JANUARY" ,  "FEBRUARY" ,  "MARCH" ,
								"APRIL" ,   "MAY" ,      "JUNE" ,
								"JULY" ,    "AUGUST" ,   "SEPTEMBER" ,
								"OCTOBER" , "NOVEMBER" , "DECEMBER"  };
// chi so cua ten thang co nhiet do cao nhat va thap nhat
int k, l;

struct Weather {
	double tlMua, ndCao, ndThap, ndTb;
};
struct Solve {
	double muaTBthang, tongMua, ndMax, ndMin, ndTB;
};

void findMax(Weather a[], Solve& b)
{
	b.ndMax = a[0].ndCao;

	for (int i = 1; i < MONTHS; i++)
	{
		if (b.ndMax < a[i].ndCao)
		{
			b.ndMax = a[i].ndCao;
			k = i;
		}
	}
}
void findMin(Weather a[], Solve& b)
{
	b.ndMin = a[0].ndThap;

	for (int i = 1; i < MONTHS; i++)
	{
		if (b.ndMin > a[i].ndCao)
		{
			b.ndMin = a[i].ndCao;
			l = i;
		}	
	}
}

// nhap du lieu dau vao
void Input(Weather a[])
{
	for (int i = 0; i < MONTHS; i++)
	{
		cout << "------------------- " << monthsName[i] << "-----------------------\n";
		cout << "Nhap tong luong mua: "; cin >> a[i].tlMua;
		cout << "Nhap nhiet do cao: "; cin >> a[i].ndCao;
		cout << "Nhap nhiet do thap: "; cin >> a[i].ndThap;
		while (a[i].ndCao < a[i].ndThap || a[i].ndCao < -73 || a[i].ndCao > 60 || a[i].ndThap < -73 || a[i].ndThap > 60)
		{
			cout << "Nhap nhiet do cao: "; cin >> a[i].ndCao;
			cout << "Nhap nhiet do thap: "; cin >> a[i].ndThap;
		}
	}
}

// tinh toan du lieu
void Xu_Li(Weather a[], Solve& b)
{
	findMax(a, b);
	findMin(a, b);

	for (int i = 0; i < MONTHS; i++)
	{
		b.tongMua += a[i].tlMua;
		double x = (a[i].ndCao + a[i].ndThap)/2;
		b.ndTB += x / 12;
	}
	b.muaTBthang = b.tongMua / 12;
}
void Output(Solve b)
{
	cout << endl << endl;
	cout << "-----------------------------------------------------------------------\n";
	cout << "Luong mua trung binh hang thang: " << b.muaTBthang << endl;
	cout << "Tong luong mua trong nam: " << b.tongMua << endl;
	cout << "Nhiet do cao nhat: " << monthsName[k] << "-" << b.ndMax << endl;
	cout << "Nhiet do thap nhat: " << monthsName[l] << "-" << b.ndMin << endl;
	cout << "Nhiet do trung binh trong 12 thang: " << b.ndTB << endl;

}
int main()
{
	Weather a[12];
	Solve b;
	Input(a);
	Xu_Li(a, b);
	Output(b);

	return 0;
}


