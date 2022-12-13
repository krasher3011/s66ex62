#include <iostream>
#include "BaseClass.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezium.h"
using namespace std;
int main()
{
	Rectangle c(5, 7);
	c.perimetr();
	c.ploshad();
	Circle d(7);
	d.perimetr();
	d.ploshad();
	Trapezium e(8, 7, 2);
	e.ploshad();
	e.perimetr();
	/*BaseClass* Base;
	Circle* cir = new Circle(7);
	Rectangle* rect = new Rectangle(5,7);
	Trapezium* trap = new Trapezium(8,7,2);
	Base = cir;
	Base->perimetr();*/
	return 0;
}
