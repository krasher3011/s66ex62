#include "Trapezium.h"
#include <iostream>
using namespace std;

void Trapezium::ploshad() {
	cout << "\nTrapezium ploshad: " << h * (a + b) / 2;
}

void Trapezium::perimetr() {
	cout << "\nTrapezium perimetr: " << (a + b) / 2;
}