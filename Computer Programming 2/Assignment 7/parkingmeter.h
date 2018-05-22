//Jonathan Jimenez
//Assingment 7
//11-18-2015
#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include <string>
#include <iostream>


using namespace std;

class parkingMeter
{
      private:
              int minPurchased;
      public:
             parkingMeter()
             {
               minPurchased =0;
             }
             void setmp( int min)
             {
               minPurchased= min;
             }
             int getmp() const
             {
                 return(minPurchased);
             }
             void showMin()
             {
                 cout <<"Minutes Purchased: " <<getmp()<< endl;
             }
};
#endif
