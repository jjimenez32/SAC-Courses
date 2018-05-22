// Jonathan Jimenez
// Assignment #5
// 10-9-2014

#include <iostream>
using namespace std;

int main()

{
    double num1, num2;
    
    
    cout << "This program states which of two number is larger,\n"
         << "and the other smaller.\n"
         << "Enter first number \n";
    cin >> num1;
    cout << "Enter second number \n";
    cin >> num2;
    
    if ( num1 > num2 )
       cout << num1 <<" is the larger number and " << num2 
            << " is the smaller one\n";
    else if ( num2 > num1 )
       cout << num2 <<" is the larger number and " << num1
            << " is the smaller one\n";
    else if (num1 == num2 )
       cout << num1 <<" is equal to " << num2 <<endl;
    else
       cout << "You have entered something ivalid please exit the program \n"
            << "and try again\n";
       
    system("PAUSE");
    return 0;
}
