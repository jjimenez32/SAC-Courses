#include <iostream>
using namespace std;
class circle
{private:
   double radius;    
   const static double pi=3.14159;
public:
   circle()
      {
           radius=0.0;
        }
   circle(double r)
      {
                 setRadius(r);
      }
   void setRadius(double r)
      {
                         radius=r;
      }
   double getRadius()
      {
          return radius;
      }
   double getArea()
      {
          return pi*radius*radius;
      }
   double getDiameter()
      {
          return radius*2;
      }
   double getCircumference()
      { 
          return 2.*pi*radius;
       }
};

int main()
{double r;
cout<<"Enter radius: ";
cin>>r;
circle mycircle(r);  
cout<<"A circle with radius "<<mycircle.getRadius()<<" has an"<<endl;
cout<<"area of: "<<mycircle.getArea()<<endl;
cout<<"diameter of: "<<mycircle.getDiameter()<<endl;
cout<<"circumference of: " << mycircle.getCircumference()<<endl;
system("pause");
return 0;
}
