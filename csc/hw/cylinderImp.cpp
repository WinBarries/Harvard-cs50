#include <iostream>
#include "cylinder.h"
#include "circle.h"

using namespace std;

void cylinder::print() const
{
  cout << "height: " << height << endl;
}

void cylinder::setHeight(double h)
{
	height = h;
}


double cylinder::volume()
{
    return circle::area() * height;
}

double cylinder::area()
{
    return  2 * 3.142 * getRadius() *  getRadius() * height;
}

cylinder::cylinder()
{
    height = 0.0;
}

cylinder::cylinder(double h, double r, double x, double y):circle(r, x, y)
{
    setHeight(h);
    setRadius(r);
    setCenter(x, y);
}
