#include "PersonData.cpp"

class CustomerData : public PersonData{
	private:
		int id;
		bool check;
	public:
		CustomerData():PersonData()
		{
			id = 0;
			check = false;
		}
		CustomerData(int id, bool check,string ho, string ten, string diaChi, string thanhPho, string tinh, string maBuuDien, string soDienThoai) : PersonData(ho, ten, diaChi, thanhPho, tinh, maBuuDien, soDienThoai)
		{
			this->id = id;
			this->check = check;
		}
		int getId()
		{
			return id;
		}
		string getCheck()
		{
			if(check) return "YES";
			return "NO";
		}
		void print()
		{
			cout << "ID: " << id << endl;
			cout << "Da ton tai trong DS: " << getCheck() << endl;
			PersonData::print();
		}
	
};

