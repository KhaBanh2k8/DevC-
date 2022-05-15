#include<bits/stdc++.h>
using namespace std;

class PersonData
{
	private:
		string ho, ten, diaChi, thanhPho, tinh, maBuuDien, soDienThoai;
	public:
		PersonData()
		{
		}
		PersonData(string ho,string ten, string diaChi, string thanhPho, string tinh, string maBuuDien, string soDienThoai)
		{
			this->ho = ho;
			this->ten = ten;
			this->diaChi = diaChi;
			this->thanhPho = thanhPho;
			this->tinh = tinh;
			this->maBuuDien = maBuuDien;
			this->soDienThoai = soDienThoai;
		}
		void print()
		{
			cout << "Ho:              " << ho << endl;
			cout << "Ten:             " << ten << endl;
			cout << "Dia Chi:         " << diaChi << endl;
			cout << "Thanh Pho:       " << thanhPho << endl;
			cout << "Tinh:            " << tinh << endl;
			cout << "Ma Buu Dien:     " << maBuuDien << endl;
			cout << "So Dien Thoai:   " << soDienThoai << endl;
		}
		string getHo()
		{
			return ho;
		}
		string getTen()
		{
			return ten;
		}
		string getDiaChi()
		{
			return diaChi;
		}
		string getThanhPho()
		{
			return thanhPho;
		}
		string getTinh()
		{
			return tinh;
		}
		string getMaBuuDien()
		{
			return maBuuDien;
		}
		string getSoDienThoai()
		{
			return soDienThoai;
		}
};
