#include <iostream>
#include "circle.h"

using namespace std;


void circle::print() const
{
	cout << "x: " << x << "y: " << y << endl;
	//cout << "Area: " << area()<< endl;
}

void circle::setRadius(double r)
{
	radius = r;
}

void circle::setCenter(double x1, double y1)
{
	x = x1;
	y = y1;

}

void circle::getCenter(double& x1, double& y1){
	x1 = x;
	y1 = y;
}

double circle::getRadius()
{
	return radius;
}

double circle::area()
{
	return 3.1416 * radius * radius;
}




circle::circle()
{
	x = 0; y = 0; radius = 0;
}

circle::circle(double x1, double y1, double r)
{
	setCenter(x1, y1);
	setRadius(r);

}
