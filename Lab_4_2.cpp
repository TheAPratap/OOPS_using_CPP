/* Define a class Shape whose attributes are radius, length and width. Calculate the perimeter and area of the rectangle and circle.
Make use of public and private access specifiers. Define perimeter function of Circle and Rectangle outside the class and area function of Circle & Rectangle inside the class. */

#include <iostream>
using namespace std;

class shape
{
 public:
 int length;
 int radius;
 int width;
 double areaCircle()
 {
   return 3.14*radius*radius;
   return width*length;
 }
 int areaRec()
 {
   return width*length;

 }

 double perimeterC();
 double perimeterR();
};

double shape::perimeterC()
{
    return (2*(3.14*radius));
}

double shape::perimeterR()
{
  return (2*(length+width));
}

int main()
{
  cout<<"Abhinav Pratap"<<endl<<"A2345920104"<<endl<<"CSE Evening"<<endl;
  shape rectangle,circle;
  circle.radius=5;
  rectangle.length=12;
  rectangle.width=24;
  cout<<circle.areaCircle()<<endl;
  cout<<rectangle.areaRec()<<endl;
  cout<<circle.perimeterC()<<endl;
  cout<<rectangle.perimeterR()<<endl;
  return 0;
}