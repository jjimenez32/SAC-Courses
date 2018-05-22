#ifndef policeofficer_m
#define policeofficer_m
#include "parkingticket.h"
#include <iostream>
#include <string>
using namespace std;

class policeOfficer
{
      private:
              string name,
                     badgeNumber;
      public:
             policeOfficer()
             {
               name = "";
               badgeNumber= ""; 
             }
             void setName(string na)
             {
                  name = na;
             }
             void setBadge(string ba)
             {
                  badgeNumber= ba;
             }
             string getName() const
             {
                    return(name);
             }
             string getBadge() const
             {
                    return(badgeNumber);
             }
             
