#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include <string>
#include <iostream>


using namespace std;

class parkingMeter
{
      private:
              double minPurchased;
      public:
             parkingMeter()
             {
               minPurchased =0;
             }
             void setmp( int m)
             {
               minPurchased= m;
             }
             double getmp() const
             {
                 return(minPurchased);
             }
             void text()
             {
                 cout <<"Minutes Purchased: " <<getmp();
             }
};
#endif
