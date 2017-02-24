#ifndef cylinder_H
#define cylinder_H 

#include "circle.h"

class cylinder : public circle

{

  public:

         void print() const;

         void setHeight(double h);

         double getHeight();

         double volume();

         double area();

         cylinder();

         cylinder(double h, double x, double y, double r);

 private:

        double height;

};

#endif
