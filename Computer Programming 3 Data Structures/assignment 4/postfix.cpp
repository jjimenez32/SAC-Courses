#include "postfix.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;


postfix :: postfix ()
{
        int a = 0;
        int b = 0;
        int answer = 0;
        int index = 0;
        int num = 0;
}


int postfix:: postfixExpression(string exp)
{
     for (index= 0; index< exp.length(); index++)
     {
         if (exp[index] == '.')
            continue;
         
         else if (exp[index] >= '0' and exp[index] <= '9')
         {
              while ((index < exp.length()) and (exp[index] >= '0') and (exp[index] <= '9'))
              {
                    num = exp[index] - '0';
                    index++;
              }
              index--;
              stack.push(num);
         }
         else if ((exp[index] == '+') or (exp[index] == '-') or (exp[index] == '/') or (exp[index] == '*'))
         {
             a = stack.top();
             stack.pop();
             
             b = stack.top();
             stack.pop();
             
             answer = operations(exp[index], b, a);
             stack.push(answer);
         }
     }
     return stack.top();
}

int postfix :: operations (char op , int b, int a)
{
  switch(op)
    {
       case '+':
            return b + a;
            break;
       case '-':
            return b - a;
            break;
       case '/':
            return b / a;
            break;
       case '*':
            return b * a;
            break;
       default: cout << "Error" << endl;
    }	

}


