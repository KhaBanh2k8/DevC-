#include "Employee.cpp"
using namespace std;

class ProductionWorker : public Employee{
	private:
		int ca;
		double luong;
	public:
		int getCa()
		{
			return ca;
		}
		double getLuong()
		{
			return luong;
		}
		void setCa(int c)
		{
			ca = c;
		}
		string getCaLam()
		{
			if(ca == 1) return "NGAY";
			else if(ca == 2)
			{
				luong *= 1.5;
				return "TOI";
			 } 
			else return "Error";
		}
		void setLuong(double l)
		{
			luong = l;
		}
		//
		ProductionWorker(){
		}
		ProductionWorker(int ca, double luong,string t, string ms, string nt) : Employee( t,  ms,  nt)
		{
			this->ca = ca;
			this->luong = luong;
		}
		void in()
		{
			cout << "Ten:       "	<< Employee::getTen() << endl;
			cout << "Ma so:     " << Employee::getMaSo() << endl;
			cout << "Ngay thue: " << Employee::getNgayThue() << endl;
			cout << "Ca:        " << getCaLam() << endl;
			cout << "Luong:     " << luong << endl;
		}	
};

