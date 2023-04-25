#include <iostream>
#include "Circle2D.h"
int Circle2D::numberOfCircles=0;
int main() {
  
Circle2D* pCir1= new Circle2D(2,2,5.5);
Circle2D cir2(-6,-3,1.5);

  //find num of objects in total
std::cout<<"Number of objects is "<<cir2.getNumberOfCircles() << std::endl;
  //find total of of objects with cir2 in cir3
  Circle2D cir3(cir2);
std::cout<<"Number of objects is "<< cir3.getNumberOfCircles()<< std::endl;
  //if pCir1 overlaps cir2
std::cout<<"pCir1 overlaps cir2 = "<<pCir1->overlaps(cir2) << std::endl;
  //if cir3 overlaps cir2
std::cout<<"cir3 overlaps cir2 = "<<cir3.overlaps(cir2) << std::endl;
delete pCir1;
  //num of obj
std::cout<<"Number of objects is "<< cir3.getNumberOfCircles() << std::endl;
  return 0;
}