#include "GradedActivity.cpp"

const int NGUPHAP = 30, CHINHTA = 20, DODAI= 20, NOIDUNG = 30;
int diem = 0;

class Essay : public GradedActivity{
	private:
		int nguPhap, chinhTa, doDai, noiDung;
	public:
		Essay() : GradedActivity(){}
		
		int getNguPhap()
		{
			return nguPhap;
		}
		int getChinhTa()
		{
			return chinhTa;
		}
		int getDoDai()
		{
			return doDai;
		}
		int getNoiDung()
		{
			return noiDung;
		}
		
		void nhap()
		{
			cout << "========= NHAP DIEM ==========\n";
			cout << "Ngu Phap: "; cin >> nguPhap;
			cout << "Chinh Ta: "; cin >> chinhTa;
			cout << "Do Dai: "; cin >> doDai;
			cout << "Noi Dung: "; cin >> noiDung;
			while(nguPhap > NGUPHAP || chinhTa > CHINHTA || doDai > DODAI || noiDung > NOIDUNG)
			{
				cout << "========= NHAP DIEM ==========\n";
				cout << "Ngu Phap:  "; cin >> nguPhap;
				cout << "Chinh Ta:  "; cin >> chinhTa;
				cout << "Do Dai:    "; cin >> doDai;
				cout << "Noi Dung:  "; cin >> noiDung;	
			}
			diem += nguPhap + chinhTa + doDai + noiDung;
			GradedActivity::setScore(diem);
		}
		void in()
		{
			cout << "-->Tong diem: " << diem << "/100\n";
			cout << "Xep loai:     " << GradedActivity::getLetterGrade() << endl;
		}
};


int main()
{
	Essay a;
	a.nhap();
	a.in();


	return 0;
}

