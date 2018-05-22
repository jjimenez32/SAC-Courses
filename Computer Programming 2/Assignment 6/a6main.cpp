//Jonathan Jimenez
//Assingment 6
// 11-5-2015
#include <iostream>
#include <cmath>
using namespace std;


class circle
{
private:
        double radius;
        static const double pi= 3.14159;
public:
       circle ()//constructor
       {
           radius = 0;
       }
       circle(double rad)//constructor
       {
          setRadius(rad);
       }
       void setRadius(double rad)
       {
          radius= rad;
       }
       double getRadius()
       {
          return radius;
       }
        double getDiameter()
       {
          return (radius * 2);
       }
       double getCircumference()
       {
          return (2 * pi * radius);
       }
       double getArea()
       {
          return (pi * pow(radius,2));
       }
};


int main()
{
    double rad;
    
    cout << "Please enter the circle's radius" << endl;
    cin >> rad;
    circle circleCalc(rad);
    cout <<"Circle's Radius: " << circleCalc.getRadius() << endl;
    cout <<"Circle's Diameter " << circleCalc.getDiameter() << endl;
    cout <<"Circle's Circumference: " << circleCalc.getCircumference() << endl;
    cout <<"Circle's Area: " << circleCalc.getArea() << endl;
    
system ("PAUSE");
return 0;
}

