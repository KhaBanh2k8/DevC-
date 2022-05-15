#include "Employee.cpp"

class ShiftSupervisor : public Employee
{
	private:
		double luong,tienThuong;
	public:
		void setLuong(double l)
		{
			luong = l;
		}
		void setTienThuong(double tien)
		{
			tienThuong = tien;
		}
		
		ShiftSupervisor(){
		}
		ShiftSupervisor(double l, double tien, string t, string ms, string nt) : Employee(t, ms, nt)
		{
			this->luong = l;
			this->tienThuong = tien;
		}
		
		
		double getLuong()
		{
			return luong;
		}
		double getTien()
		{
			return tienThuong;
		}
		void in()
		{
			cout << "Ten:         " << Employee::getTen() << endl;
			cout << "Ma so:       " << Employee::getMaSo() << endl;
			cout << "Ngay thue:   " << Employee::getNgayThue() << endl;
			cout << "Luong :      " << luong << endl;
			cout << "Tien thuong: " << tienThuong << endl;
			cout << "-------------------------------------------\n";
		}
		
};

int main()
{
	ShiftSupervisor a(1000,2500,"Tran Van Tien","A43019", "08/03/2003");
	a.in();


	return 0;
}

