#ifndef POSTFIX_H
#define POSTFIX_H
#include <iostream>
#include <string>
#include <stack>
using namespace std;


class postfix 
{
      private:
              stack <int> stack;
              int a;
              int b;
              int answer;
              int index;
              int num;
      public:
              postfix();
              int postfixExpression(string);
              int operations(char, int, int);
             
};

#endif
