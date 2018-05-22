//Jonathan Jimenez
//Assignment #12
//12-4-2014
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, //given variables
           x, x1, x2,//variable answers
           realnum, imaginum;//for complex solutions
    realnum = (-b/(2*a));
    imaginum = sqrt(-(b*b-4*a*c)) / (2*a); //added - to square root so error
                                           // -1.#IND wouldn't happen
    
    cout <<"This program calculates the Quadratic Formula(ax^2+bx+c=0)"<< endl;
    cout <<"using the Quadratic Equation for three given variables"<< endl;
    cout <<"Please enter a:";
    cin >> a;
    cout <<"b:";
    cin >> b; 
    cout <<"c:";
    cin >> c;
    
    while (a== 0) //check so that there would be no division by zero
          {
          cout <<"variable 'a' must be higher or lower than zero" << endl;
          cout <<"please re-enter the three variables" << endl;
          cout <<"a:";
          cin >>a;
          cout <<"b:";
          cin >>b;
          cout <<"c:";
          cin >>c;
          }
     
        
        if ((b*b-4*a*c)==0)
        {
        x = (-b + sqrt(b*b-4*a*c)) / (2*a);
        cout <<"The real solution to the equation" << endl;
        cout << a <<"x^2 +"<< b<<"x + "<<c<< " is "<< x <<endl;
        }
        
        else if ((b*b-4*a*c)>0)
        {
        x1= (-b + sqrt(b*b-4*a*c)) / (2*a);
        x2= (-b - sqrt(b*b-4*a*c)) / (2*a);
        cout <<"The two real solutions to the equation" << endl;
        cout << a <<"x^2+"<< b<<"x+"<<c<< " are "<< endl;
        cout << x1 << " and " << x2<< endl;
        }
        else 
        {
        cout <<"The two complex solutions to the equation" << endl;
        cout << a <<"x^2 +"<< b<<"x + "<<c<< " are "<< endl;
        cout <<realnum << "+"<< imaginum << "i and" << endl;
        cout <<realnum << "-"<< imaginum << "i" << endl;
        }
        
system ("PAUSE");
return 0;
}
