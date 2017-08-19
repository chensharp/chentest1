#include "A.h"

A::A(int n)
{
    value=n;
}

A::A(const A& other)
{
    value = other.value;
}


void A::print()
{
    std::cout << value <<std::endl;
}

A::~A()
{
    //dtor
}
