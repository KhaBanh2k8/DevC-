#include "ProductionWorker.cpp"

class TeamLeader : public ProductionWorker{
	private:
		double gioToiThieu,gioThamGia,tienThuongThang;
	public:
		TeamLeader(){
		}
		TeamLeader(double a, double b, double c, int ca, double luong,string t, string ms, string nt ) : ProductionWorker(ca, luong, t,  ms,  nt)
		{
			gioToiThieu = a;
			gioThamGia = b;
			tienThuongThang = c;
		}
		double getGioToiThieu()
		{
			return gioToiThieu;
		}
		double getGioThamGia()
		{
			return gioThamGia;
		}
		double getTienThuongThang()
		{
			return tienThuongThang;
		}
		void print()
		{
			ProductionWorker::in();
			cout << "So gio dao tao toi thieu hang thang: " << gioToiThieu << endl;
			cout << "So gio tham gia:                     " << gioThamGia << endl;
			cout << "So tien thuong hang thang:          $" << tienThuongThang << endl;
		}
};

int main()
{
	TeamLeader a(12,6,1000,1,2500,"Tran Van Tien","A43019", "08/03/2003");
	a.print();


	return 0;
}

