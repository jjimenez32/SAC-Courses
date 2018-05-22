#ifndef RSTACK_H
#define RSTACK_H
#include <iostream>
#include <string>
using namespace std;


class rStack
{
      private: 
               string stack;
               int index;
               int last;
      public:
             rStack();
             void push(char pu);
             void pop();
             void show();
             void empty();
             void top();
             string check();
};

#endif
