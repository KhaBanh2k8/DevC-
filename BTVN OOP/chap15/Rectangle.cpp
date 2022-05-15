#include "BasicShape.cpp"

class Rectangle : public BasicShape{
	private:
		double width, length;
	public:
		Rectangle(double w, double l) : BasicShape()
		{
			width = w;
			length = l;
		}
		double getWidth()
		{
			return width;
		}
		double getLength()
		{
			return length;
		}
		double calcArea()
		{
			return width * length;
		}
				
};


