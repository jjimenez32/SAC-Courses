//Jonathan Jimenez
//Assignment 4
//9-21-2015
#include "postfix.h"
#include <iostream>
#include <string> 
#include <stack>
using namespace std;


int main ()
{
    string expression;
    postfix pf;
    int final;
    int option;
    do
    {
        cout << "1. Enter Expression" << endl;
        cout << "2. Exit. " << endl;
        cout << "Option: ";
        cin >> option;
        if (option == 1)
        {
         cout << endl;
         cout << "Enter postfix expression with a '.' separating each digit: " << endl;
         cin >> expression;
         final = pf.postfixExpression(expression);
         cout <<"Answer: " << final << endl;
         cout << endl;
         
        }
    }while (option >0 and option <2);
 
 

return 0;    
}
