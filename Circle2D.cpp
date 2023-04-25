#include "Circle2D.h"
#include <math.h>
//default
Circle2D::Circle2D(double radius, double x, double y){
  radius=0;
  x=0;
  y=0;
  numberOfCircles++;
}
//copy const
Circle2D::Circle2D(const Circle2D &circle){
  x=circle.x;
  y=circle.y;
 radius=circle.radius;
  numberOfCircles++;
}
//destructor
Circle2D::~Circle2D(){
  numberOfCircles--;
}


//get functions
double Circle2D::getx() const{
  return x;
}
double Circle2D::gety() const{
  return y;
}
double Circle2D::getradius() const{
  return radius;
}
//logic for overlap
bool Circle2D::overlaps(const Circle2D& circle){
  double d = sqrt((x-circle.x)*(x-circle.x)+(y-circle.y) * (y-circle.y));
  return d < (radius + circle.radius);
  
  }
//get circles
int Circle2D::getNumberOfCircles(){
  return numberOfCircles;
}
