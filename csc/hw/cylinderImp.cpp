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
    height = 2;
}

//cylinder::cylinder(double h, double x, double y, double r):circle(x, y, r)
//{
  //  	if (h >= 0)
	//    height = h;



//}
