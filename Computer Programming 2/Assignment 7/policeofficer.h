//Jonathan Jimenez
//Assingment 7
//11-18-2015
#ifndef policeofficer_h
#define policeofficer_h
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
             void showOfficer()
             {
                  cout <<"Officer Name: "<< getName()<< endl;
                  cout <<"Officer Badge Number: "<< getBadge()<< endl;
             }
};
#endif
