#include "CustomerData.cpp"

// kiem tra xem da mua hang > 1 hay chua ?
set<string> se;

class PreferredCustomer : public CustomerData{
	private:
		int diem;
		int chietKhau;
	public:
		PreferredCustomer() : CustomerData(){}
		PreferredCustomer(int diem, int id, bool check,string ho, string ten, string diaChi, string thanhPho, string tinh, string maBuuDien, string soDienThoai) : CustomerData( id,check,ho,ten,diaChi,thanhPho,tinh,maBuuDien,soDienThoai)
		{
			this->diem = diem;
		}
		
		void solve()
		{
			if(diem >= 2000)
				chietKhau = 10;
			else if(diem >= 1500)
				chietKhau = 7;
			else if(diem >= 1000)
				chietKhau = 6;
			else if(diem >= 500)
				chietKhau = 5;
			else chietKhau = 0;
		}
		
		void print()
		{
			CustomerData::print();
			cout << "Diem tich luy:   " << diem << endl;
			cout << "Chieu khau:      ";
			string s = PersonData::getHo() + " " + PersonData::getTen();
			
			if(se.find(s) == se.end())
			{
				se.insert(s);
				cout << "KHONG CO !!!" << endl;
			}
			else
			{
				solve();
				cout << chietKhau << "%" << endl;
			}
			cout << "-------------------------------------\n";
		}
		
};

int main()
{
	int score1, score2;
	cin >> score1 >> score2;
	PreferredCustomer a(score1,123,true,"Tran","Tien","Dong Cuong","Yen Lac","Vinh Phuc", "12345","0999999999999");
	PreferredCustomer b(score2,789,false,"Nguyen","Minh","Lung Thuong","Tam Hong","Vinh Phuc", "67890","0555555555555");
	a.print();
	a.print();
	
//	PreferredCustomer c(score1,123,true,"Tran","Tien","Dong Cuong","Yen Lac","Vinh Phuc", "12345","0999999999999");
//	PreferredCustomer d(score2,789,false,"Nguyen","Minh","Lung Thuong","Tam Hong","Vinh Phuc", "67890","0555555555555");
	b.print();
	b.print();
	return 0;
}

