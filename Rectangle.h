#pragma once
#include "BaseClass.h"
class Rectangle :
    public BaseClass
{
private:
    int a;
    int b;
public:
    Rectangle(int a1, int b1) {
        a = a1;
        b = b1;
    }
    void BaseClass::perimetr() override;
    void BaseClass::ploshad() override;
};

