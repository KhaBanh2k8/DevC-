#include<bits/stdc++.h>
using namespace std;

class TestScores{
	private:
		double s1,s2,s3;
	public:
		void setScore1(double s1)
		{
			this->s1 = s1;
		}
		void setScore2(double s2)
		{
			this->s2 = s2;
		}
		void setScore3(double s3)
		{
			this->s3 = s3;
		}
		double getScore1()
		{
			return s1;
		}
		double getScore2()
		{
			return s2;
		}
		double getScore3()
		{
			return s3;
		}
		TestScores(double,double,double);
		double Average();
};
TestScores::TestScores(double a, double b , double c)
{
	s1 = a;
	s2 = b;
	s3 = c;
}
double TestScores::Average()
{
	return (s1 + s2 + s3) / 3;
}
int main()
{
	cout << "Nhap lan luot 3 diem: ";double a,b,c; cin >> a >> b >> c;
	TestScores s(a,b,c);
	cout << "-->Diem trung binh: " << fixed << setprecision(2) <<  s.Average() << endl;


	return 0;
}

