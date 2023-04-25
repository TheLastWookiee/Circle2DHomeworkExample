#ifndef CIRCLE2D_H
#define CIRCLE2D_H


class Circle2D{
//mkaing private vars
private:
double y;
double x;
double radius;

public:
//making const
Circle2D(double _radius, double _x, double _y);
//copy const
Circle2D(const Circle2D & circle);
//destruct
~Circle2D();
//num of circs
static int numberOfCircles;
//get funtions and overlap
static int getNumberOfCircles();
double getx() const;
double gety() const;
double getradius() const;
bool overlaps(const Circle2D& circle);

};
#endif