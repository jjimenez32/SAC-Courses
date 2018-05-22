//Jonathan Jimenez
//Assingment # 9
//11-12-2014
#include <iostream>
#include <iomanip>
using namespace std;


double calculateRetail (double, double); //prototype

int main()
{
    double whole,       // Item's wholesale cost
           markup,      // Item's markup percentage
           total;       // total cost after markup
           
    
    cout << "Enter item's whole sale price." << endl;
    cin >> whole;
    
    while (whole < 0)
    {
       cout << "Item must be a positive number. Please enter again." << endl;
       cin >> whole;
    }
    
    cout << "Enter item's markup percentage." << endl;
    cin >> markup;
    
    while (markup < 0)
    {
       cout << "Markup percent must be a positive number. Please enter again." << endl;
       cin >> markup;
    }
    
    markup *= 0.01 ;
    
    total = calculateRetail(whole, markup);
    cout << fixed << showpoint << setprecision(2);
    
    cout << "The total price is $" << total << endl;
    
    system("PAUSE");
    return 0;
    
}


double calculateRetail (double num1, double num2)
{
       double solution;
       solution = (num1 * num2) + num1;
       
       return solution;
}
       
