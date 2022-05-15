#include<bits/stdc++.h>
using namespace std;

class NumberArray{
	private:
		int *p;
		int n;
	public:
		NumberArray(int n)
		{
			this->n = n;
			p = new int[n];
		}
		~NumberArray()
		{
			delete[] p;
		}
		void luuTru(int value ,int index)
		{
			p[index] = value;
		}
		int lay(int index)
		{
			return p[index];
		}
		int findMax()
		{
			int max = p[0];
			for(int i = 1 ; i < n; i++)
			{
				if(max < p[i]) max = p[i];
			}
			return max;
		}
		int findMin()
		{
			int min = p[0];
			for(int i = 1 ; i < n ; i++)
			{
				if(min > p[i]) min = p[i];
			}
			return min;
		}
		double average()
		{
			double sum = 0 ;
			for(int i = 0 ; i < n ; i++)
			{
				sum += p[i];
			}
			sum /= n;
			return sum;
		}
};

int main()
{
	int n;
	cout << "Nhap kich thuoc: " ; cin >> n;
	NumberArray a(n);
	for(int i = 0 ;i < n ; i++)
	{
		int x; cout << "Nhap #" << i << ": "; cin >> x;
		a.luuTru(x,i);
	}
	int k;
	cout << "-----------------------------\n";
	cout << "Nhap chi so can lay: "; cin >> k; 
	cout << "Gia tri: " << a.lay(k) << endl;
	cout << "-----------------------------\n";
	cout << "Gia tri max : " << a.findMax() << endl;
	cout << "-----------------------------\n";
	cout << "Gia tri min : " << a.findMin() << endl;

	return 0;
}

