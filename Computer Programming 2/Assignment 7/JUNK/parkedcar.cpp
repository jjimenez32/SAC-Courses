#ifndef parkedcar_h
#define parkedcar_h
#include <iostream>
#include <string>
using namespace std;

class parkedCar
{
      private:
              string make, 
                     license,
                     color;
              int    model,
                     noMin;
      public:
             parkedCar()
             {
               make ="";
               license = "";
               color = "";
               model =0;
               noMin= 0;
             }
             void setMake(string m)
             {
                  make =m;
             }
             void setLicense(string li)
             {
                  license = li;
             }
             void setColor (string co)
             { 
                  color= co;
             }
             int setModel(int mo)
             {
                 model =mo;
             }
             int setNomin(int no)
             {
                 noMin= no;
             }
             string getMake() const
             {
                    return(make);
             }
             string getLicense() const
             {
                    return(license);
             }
             string getColor() const
             {
                    return(color);
             }
             int getModel() const
             {
                 return(model);
             }
             int getNomin() const
             {
                 return(noMin);
             }
             void pctext();
             {
                  cout <<"Car Make: " <<getmake()<< endl;
                  cout <<"Car License Number: " <<getLicense()<< endl;
                  cout <<"Car Color: " << getColor()<< endl;
                  cout <<"Car Model: " << getModel() << endl;
             }
}
#endif
