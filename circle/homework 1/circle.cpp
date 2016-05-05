#include "circle.hpp"
#include <iostream>
using namespace std;
#define Pi 3.14

void circle::setRadius(float _r)
{
    r = _r;
}

void circle::area()
{
    s = Pi * r * r;
    cout << s <<endl;
}

