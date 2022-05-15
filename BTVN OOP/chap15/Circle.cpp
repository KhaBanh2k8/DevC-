#include "BasicShape.cpp"

class Circle : public BasicShape{
	private:
		double centerX, centerY;
		double radius;
	public:
		Circle(double x, double y , double r) : BasicShape()
		{
			centerX = x;
			centerY = y;
			radius = r;
		}
		Circle():BasicShape(){
		}
		double getX()
		{
			return centerX;
		}
		double getY()
		{
			return centerY;
		}
		double getRadius()
		{
			return radius;
		}
		double calcArea()
		{
			return 3.14 * pow(radius,2);
		}
};


