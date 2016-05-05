#include <iostream>
#include "circle.hpp"
using namespace std;

int main()
{
    circle c;
    float a;
    cin >> a;
    c.setRadius(a);
    c.area();
    return 0;
}
