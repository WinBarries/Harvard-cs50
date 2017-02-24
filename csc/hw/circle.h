#ifndef circle_H
#define circle_H

class circle

{

  public:

         void print() const;

         void setRadius(double radius);

         void setCenter(double x, double y);

         void getCenter(double& x, double& y);

         double getRadius();

         double area();

         circle();

         circle(double radius, double x, double y);

 private:

         double x;

         double y;

         double radius;

 
};


#endif
