#include "rstack.h"
#include <iostream>
#include <string>
using namespace std;

rStack:: rStack()
{
   index=0;
   last= 0;
}

void rStack :: push(char pu )
{
     last ++;
     stack[last] = pu;
}

void rStack :: pop (char po)
{
     stack[last] = po;
     last --;
}

void rStack :: top()
{
     
