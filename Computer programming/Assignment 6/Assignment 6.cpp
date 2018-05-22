//Jonathan Jimenez
//Assignment #6
//10-23-2014
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sales,
           total,
           unitAmount = 0,
           rateA = .20,
           rateB = .30,
           rateC = .40,
           rateD = .50;
           
    cout << "This program calculates the value of a software company's package \n" 
         << "depending on amount ordered.\n";
    cout << setprecision(2) << fixed;
    cout << "Enter the amount for the order \n";
    cin >> sales;
    
    double price = 99,
           originalPrice = price * sales;
    if (sales >= unitAmount && sales <=9)
       total = originalPrice;
    else if (sales >= 10 && sales <= 19)
         total = originalPrice - (rateA * originalPrice);
    else if (sales >= 20 && sales <= 49)
         total = originalPrice - (rateB * originalPrice);
    else if (sales >= 50 && sales <= 99)
         total = originalPrice - (rateC * originalPrice);
    else if (sales >= 100)
         total = originalPrice - (rateD * originalPrice);
    else 
         cout << "You have entered something invalid. Please exit the program \n"
              << "and try again" << endl;
    
    cout << "The total cost for this order is $ " << total << endl;
         
    system ("PAUSE");
    return 0;
    
}
  
