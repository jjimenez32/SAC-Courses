#ifndef STACK_H
#define STACK_H
#include <string>
using namespace std;


class Stack 
{
      private:
              char stack[20];
              int last;
              int error;
              int index;
              int x, t;
      public:
             Stack();
             void push(char);
             void pop(char);
             void show();
             void check(char*);
             

};

#endif
