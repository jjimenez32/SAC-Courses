#ifndef parkingticket_h
#define parkingticket_h
#include <iostream>
#include <string>
using namespace std;

class parkingTicket
{
      private:
              int fine,
                  minutes;
              void calc();
                
      public:
             
             void getTicket(int min)
             {
                  minutes = min;
                  
             }
             int getFine() 
             {
                 int i;
                 if(minutes / 60 <=10)
                 {
                  fine =45;
                 }
                 else
                 {
                  i= minutes -60;
                  fine = (45+30+30 *(i/60));
                 }
             return(fine);
             }
             void showfine()
             {
                  cout <<"time: "<< minutes/60 <<" hours " <<minutes%60 <<
                  "minutes"<< endl;
                  cout <<"Fine: " <<getFine() <<endl;
             }
};
#endif
