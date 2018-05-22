//Jonathan Jimenez
//Assingment 7
//11-18-2015
#ifndef parkingticket_h
#define parkingticket_h
#include "parkedcar.h"
#include <iostream>
#include <string>
using namespace std;

class parkingTicket
{
      private:
              int fine,
                  minutes;
                
      public:
             
             void setTicket(int min)
             {
                  minutes = min; 
             }
             int getFine() 
             {
                 if(minutes < 60)
                 {
                  fine =25;
                 }
                 else
                 {
                  minutes= (minutes/60 -1);
                  fine = 25+(minutes*10);
                 }
             return(fine);
             }
             void showfine()
             {
                  cout <<"Fine: $" <<getFine() <<endl;
             }
};
#endif
