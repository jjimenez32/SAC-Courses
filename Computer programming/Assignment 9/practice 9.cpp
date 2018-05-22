#include <iostream>
#include <iomanip> // FOR FORMATING OUTPUT
using namespace std;

int main()
{
double wholeSale;
double markPercent;
double total;

double calculateRetail( double, double); // function prototype



cout << "Enter whole sale price: " << endl;
cin >> wholeSale;

if( wholeSale < 0 ) // Test for negative Numbers
{
cout << "ERROR enter postive number" << endl;
cin >> wholeSale;
}

cout << "Enter Marked percent: " << endl;
cin >> markPercent;


if(markPercent < 0)
{
cout << "ERROR enter postive number" << endl;
cin >> markPercent;
}

markPercent = markPercent * .01; //so 50 converts to .50 %


total = calculateRetail(wholeSale, markPercent); // Function call


cout << fixed << setprecision(2); // used with #include<iomanip>
// fixed so it for all output

cout << "Retail Price is " << total;

system("PAUSE");
return 0;
}




double calculateRetail( double num1, double num2)
{

double answer;// local varible its scope is only in the function

answer = (num1 * num2) + num1;

return answer;

} 
