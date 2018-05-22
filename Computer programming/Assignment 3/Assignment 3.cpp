// Jonathan Jimenez
// Assingment #3
// 9-24-2014


#include <iostream>
using namespace std;
int main()
{
    double miles,           //amount of miles driven on a full tank                
           gallons,         //amount of gallons of gas the car can hold                         
           mpg;             //miles per gallon 
  
    cout << "This program calculates the amount of miles per gallon of a car. \n"
         << "Enter amount of gallons of gas the car can hold \n";
    cin >> gallons;
    cout << "Enter amount of miles driven on a full tank \n";
    cin >> miles;
    mpg = miles / gallons;
    cout <<"The amount of miles driven per gallon is "<< mpg << endl;
    
    system("PAUSE");
    return 0;

    
}
