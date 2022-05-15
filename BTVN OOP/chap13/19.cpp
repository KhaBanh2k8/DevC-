#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int score[2];

class Question{
	private:
		string cauHoi,tl1,tl2,tl3,tl4,dapAn;
	public:
		Question()
		{}
		Question(string a, string b, string c, string d, string e, string f)
		{
			cauHoi = a;
			tl1 = b;
			tl2 = c;
			tl3 = d;
			tl4 = e;
			dapAn = f;
		}
		string getTraLoi1()
		{
			return tl1;
		}
		string getTraLoi2()
		{
			return tl2;
		}
		string getTraLoi3()
		{
			return tl3;
		}
		string getTraLoi4()
		{
			return tl4;
		}
		string getCauHoi()
		{
			return cauHoi;
		}
		string getDapAn()
		{
			return dapAn;
		}
};

void Nhap_Ten_Nguoi_Choi(string player[])
{
	for(int i = 0 ; i < 2 ; i++)
	{
		cout << "Enter player name #" << i+1 << ": ";
		getline(cin,player[i]);
	}
}

int main()
{
	//https://thuthuat.taimienphi.vn/nhung-cau-do-vui-meo-33499n.aspx
	Question a[10] = {Question("Lich nao dai nhat ?", "Lich lam", "Lich su", "Lich rach", "Linh lich", "Lich su"),
		Question("con duong dai nhat la con duong nao ?", "Duong xa", "Duong ngot", "Duong doi", "Duong di", "Duong doi"),
		Question("Cai gi den khi ban mua no, do khi dung no va xam xit khi vut no di ?", "Than", "Da", "Gach", "Xe", "Than"),
		Question("Con gi dap thi song, khong dap thi chet ?", "Con ga", "Con nguoi", "Con lon", "Con tim", "Con tim"),
		Question("Co gi dai nhat ?", "Huu cao co", "Co xua", "Co lanh", "Co lon", "Co xua"),
		Question("2 con vit di truoc 2 con vit, 2 con vit di sau 2 con vit, 2 con vit di giua 2 con vit. Hoi co may con vit ?", "2", "3", "4", "6", "4"),
		Question("Quan rong nhat la quan gi ?", "Quan coc", "Quan dao", "Quan rach", "Quan doi", "Quan dao"),
		Question("Xa dong nhat la xa nao ?", "Xa hoi", "Xa doan", "Xa xa", "Xa meo", "Xa hoi"),
		Question("Con gi dau de minh oc ?", "Con cho", "Con meo", "Con lon", "Con doc", "Con doc"),
		Question("Cai gi chat khong dut, but khong roi, phoi khong kho, dot khong chay ?", "Lua", "Ao", "Nuoc", "Con cho'", "Nuoc")
	};

	string player[2];
	int index = 0;
	int cauhoi = 0;
	Nhap_Ten_Nguoi_Choi(player);
	
	while(1)
	{
		system("cls");
		if(cauhoi == 9)
		{
			if(score[0] > score[1])
			{
				cout << "PLAYER " << player[0] << " DA GIANH CHIEN THANG !!!\n";
				break;
			}
			else if(score[0] < score[1])
			{
				cout << "PLAYER " << player[1] << " DA GIANH CHIEN THANG !!!\n";
				break;
			}
			else
			{
				cout << "2 NGUOI CHOI HOA NHAU !!! \n";
				break;
			}
		}
		cout << "\n+-----------------------------------------+\n";
		cout << "CAU HOI : " << a[cauhoi].getCauHoi() << endl;
		cout << "1. " << a[cauhoi].getTraLoi1() << endl;
		cout << "2. " << a[cauhoi].getTraLoi2() << endl;
		cout << "3. " << a[cauhoi].getTraLoi3() << endl;
		cout << "4. " << a[cauhoi].getTraLoi4() << endl;
		cout << endl;
		cout << "SO DIEM : " << score[index] << endl;
		cout << "TEN NGUOI CHOI : " << player[index] << endl;
		int da;
		cout << "-Dap an lua chon: ";
		cin >> da;
		if(da == 1)
		{
			if(a[cauhoi].getTraLoi1() == a[cauhoi].getDapAn())
			{
				cauhoi++;
				score[index] += 100;
			}
			else
			{
				index++;
				if(index == 2) index = 0;
			}
		}
		else if(da == 2)
		{
			if(a[cauhoi].getTraLoi2() == a[cauhoi].getDapAn())
			{
				cauhoi++;
				score[index] += 100;
			}
			else
			{
				index++;
				if(index == 2) index = 0;
			}
		}
		else if(da == 3)
		{
			if(a[cauhoi].getTraLoi3() == a[cauhoi].getDapAn())
			{
				cauhoi++;
				score[index] += 100;
			}
			else
			{
				index++;
				if(index == 2) index = 0;
			}
		}
		else if(da == 4)
		{
			if(a[cauhoi].getTraLoi4() == a[cauhoi].getDapAn())
			{
				cauhoi++;
				score[index] += 100;
			}
			else
			{
				index++;
				if(index == 2) index = 0;
			}
		}
		else
		{
			cout << "Vui long nhap lai\n";
			system("pause");
		}
	}
	
	return 0;
}

