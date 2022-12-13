#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::perimetr() {
	cout << "\nPerimetr Circle: " << 2 * 3.14 * r;
}

void Circle::ploshad() {
	cout << "\nPloshad Circle: " << 3.14 * r*r;
}