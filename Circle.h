#pragma once
#include "BaseClass.h"
class Circle :
    public BaseClass
{
private:
    int r;
public:
    Circle(int r1) { r = r1; }
    void BaseClass::perimetr() override;
    void BaseClass::ploshad() override;
};

