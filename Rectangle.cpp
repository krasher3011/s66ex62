#include "Rectangle.h"
#include <iostream>
using namespace std;
void Rectangle::perimetr() {
	cout <<"\nRectangle perimetr: "<< (a + b) * 2;
}

void Rectangle::ploshad() {
	cout <<"\nRectangle ploshad:"<< a * b;
}