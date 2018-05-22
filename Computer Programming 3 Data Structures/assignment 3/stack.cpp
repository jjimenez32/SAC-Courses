#include "stack.h"
#include <iostream>
#include <string>
using namespace std;


Stack:: Stack()
{
        int error= 0;
        int index= 0;
        int last = -1;
}

void Stack :: push(char x)
{
     last++;
     stack[last]= x;
}

void Stack :: pop ( char t)
{
     if( t == ')')
     {
         if (stack[last] == '(')
         last--;
     }
     else if (t == '}')
     {
           if (stack[last] == '{')
           last--;
     }
     else if ( t== ']')
     {
          if (stack[last] == '[')
          last--;
     }
}

void Stack :: show ()
{
     if (last == -1)
     {
        cout << "parenthesis balanced" << endl;
     }
     else
     {
         for (int i =0; i <=last; i++)
         cout << stack[i];
     }
     
}

void Stack :: check(char* exp)
{
     int length;
     length = strlen(exp);
     for (index= 0; index < length; index++)
     {
           if ((exp[index] == '(') || (exp[index] == '{') || (exp[index]== '['))
           {
            x = exp[index];
            push (x);
           }
           else if(( exp[index] == ')') || (exp[index] == '}') || (exp[index]== ']'))
           {
             t= exp[index];
             pop(t);
           }
           
     }
     for (int i=0; i< length; i++)
         cout << exp[i] << endl;
}
