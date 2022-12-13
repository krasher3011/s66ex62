#pragma once
#include "BaseClass.h"
class Trapezium :
    public BaseClass
{
private:
    int a;
    int b;
    int h;
public:
    Trapezium(int a1, int b1, int h1) { a = a1; b = b1; h = h1; }
    void BaseClass::perimetr() override;
    void BaseClass::ploshad() override;
};

