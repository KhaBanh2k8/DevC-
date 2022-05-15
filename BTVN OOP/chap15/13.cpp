#include "Circle.cpp"
#include "Rectangle.cpp"
using namespace std;

int main()
{
	
	Circle *circle = new Circle(3,4,10);
	Rectangle *rectangle = new Rectangle(5,10);
	
	BasicShape *shapes[2] = {circle,rectangle};
	
	string name[2] = {"Circle", "Rectangle"};
	cout << "Circle: " << endl;
	cout << "X: " << circle->getX() << endl;
	cout << "Y: " << circle->getY() << endl;
	cout << "Radius: " << circle->getRadius() << endl;
	cout << endl;
	cout << "Rectangle: " << endl;
	cout << "Width: " << rectangle->getWidth() << endl;
	cout << "Length: " << rectangle->getLength() << endl << endl;
	
	cout << fixed << setprecision(2);
	for(int i = 0 ; i < 2 ; i++)
	{
		cout << "------------ " << name[i] << "--------------\n";
		cout << "Area: " << shapes[i]->calcArea() << endl;
	}

	delete circle;
	delete rectangle;
	return 0;
}

