#include<bits/stdc++.h>
using namespace std;

class RetailItem{
	private:
		string description;
		int unitsOnHand;
		double price;
	public:
		RetailItem(string, int, double);
		void print();
		string getDescription()
		{
			return description;
		}
		int getUnitsOnHand()
		{
			return unitsOnHand;
		}
		double getPrice()
		{
			return price;
			}	
};
RetailItem::RetailItem(string description, int unitsOnHand,double price)
{
	this->description = description;
	this->unitsOnHand = unitsOnHand;
	this->price = price;
}
void RetailItem::print()
{
	cout << "\t";
	cout << setw(20) << left << description << right << unitsOnHand << setw(16) << right << price << endl;
	
}
int main()
{
	RetailItem a("Jacket",12,59.95);
	RetailItem b("Designer Jeans" , 40 , 34.95);
	RetailItem c("Shirt", 20, 24.95);
	
	cout << "\t\tDescription\tUnit On Hand \t Price\n";
	cout << "Item #1 ";
	a.print();
	cout << "Item #2 ";
	b.print();
	cout << "Item #3 ";
	c.print();

	return 0;
}

