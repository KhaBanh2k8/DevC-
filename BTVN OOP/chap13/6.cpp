#include<bits/stdc++.h>
using namespace std;

class Inventory{
	private:
		int itemNumber, quantity;
		double cost,totalCost;
	public:
		Inventory()
		{
			itemNumber = quantity = cost = totalCost = 0;
		}
		void setItemNumber(int number)
		{
			itemNumber = number;
		}
		void setQuantity(int quan)
		{
			quantity = quan;
		}
		void setCost(double cos)
		{
			cost = cos;
		}
		void setTotalCost(int quan, double cos)
		{
			totalCost = quan*cos;
		}
		int getItemNumber()
		{
			return itemNumber;
		}
		int getQuantity()
		{
			return quantity;
		}
		double getCost()
		{
			return cost;
		}
		double getTotalCost()
		{
			return quantity * cost;
		}
		void nhap();
		void in();
};
void Inventory::nhap()
{
	cout << "Enter item Number: "; cin >> itemNumber;
	cout << "Enter quantity: "; cin >> quantity;
	cout << "Enter cost: "; cin >> cost;
	
}
void Inventory::in()
{
	cout << "-->Total Cost: " << getTotalCost() << endl;
}
int main()
{
	Inventory a;
	a.nhap();
	a.in();


	return 0;
}

