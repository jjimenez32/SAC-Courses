#include "stack.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
    Stack S;
    char expression[20];
    int option; 
    
    
    do
    {
        cout << "1. Enter Expression" << endl;
        cout << "2. Show stack" << endl;
        cout << "3. Exit" << endl;
        cin >> option;
        if (option ==1)
        {
          cin >> expression;
          S.check(expression);
        }
        if (option ==2)
        {
          S.show();
        }
        
    }while (option > 0 and option < 3);



system ("PAUSE");
return 0;

}
