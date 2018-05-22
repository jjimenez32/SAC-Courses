// Jonathan Jimenez
// Assingment #4
// 10-2-2014
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    double grade1,
           grade2,
           grade3,
           grade4,
           grade5,
           average;
           
    cout << "This program calculates the average of five grades \n" <<
            "Enter first grade \n";
    cin >> grade1;
    cout << "Enter second grade \n";
    cin >> grade2;
    cout << "Enter third grade \n";
    cin >> grade3;
    cout << "Enter fourth grade \n";
    cin >> grade4;
    cout << "Enter fifth grade \n";
    cin >> grade5;
    
    average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
    
    cout << setprecision(1) << fixed;
    cout << "The average grade is " << average << endl;
    
    system("PAUSE");
    
    return 0;

}
