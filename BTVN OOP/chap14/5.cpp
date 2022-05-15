#include "TimeOff.cpp"

int main()
{
	TimeOff a[2] = {
		TimeOff("Tran Van Tien","001",200, 30, 255, 86, 40, 10),
        TimeOff("Nguyen Huu Cuong", "002", 164, 10, 20, 50, 40, 10)
		};
	for(TimeOff x : a)
	{
		x.print();
	}

	return 0;
}

