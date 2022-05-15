#include<bits/stdc++.h>
using namespace std;

class Person{
	private:
		string name,address,phoneNumber;
		int age;
	public:
		void setName(string name)
		{
			this->name = name;
		}
		void setAddress(string address)
		{
			this->address = address;
		}
		void setPhoneNumber(string phoneNumber)
		{
			this->phoneNumber = phoneNumber;
		}
		void setAge(int age)
		{
			this->age = age;
		}
		string getName()
		{
			return name;
		}
		string getAddress()
		{
			return address;
		}
		string getPhoneNumber()
		{
			return phoneNumber;
		}
		int getAge()
		{
			return age;
		}
};

int main()
{
	Person a[3];
	for(int i = 0 ; i < 3; i++)
	{
		string name,add,number;
		int age;
		cout <<"======== " << i+1 << "==========\n";
		
		cout << "Nhap ten: "; getline(cin,name);
		cout << "Nhap dia chi: "; getline(cin,add);
		cout << "Nhap so dien thoai: "; cin >> number;
		cout << "Nhap tuoi: "; cin >> age;
		cin.ignore();
		a[i].setName(name);
		a[i].setAddress(add);
		a[i].setPhoneNumber(number);
		a[i].setAge(age);
	}
	for(int i = 0 ; i < 3 ; i++)
	{
		cout << a[i].getName() << " " << a[i].getAddress() << " "
		<< a[i].getPhoneNumber() << " " << a[i].getAge() << endl;
	}

	return 0;
}

