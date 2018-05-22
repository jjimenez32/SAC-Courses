//Jonathan Jimenez
//Assingment 7
//11-18-2015
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
              double model,
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
             void setMake(string ma)
             {
                  make =ma;
             }
             void setLicense(string li)
             {
                  license = li;
             }
             void setColor (string co)
             { 
                  color= co;
             }
             double setModel(double mo)
             {
                 model =mo;
             }
             double setNomin(double no)
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
             double getModel() const
             {
                 return(model);
             }
             double getNomin() const
             {
                 return(noMin);
             }
             void showCar()
             {
                  cout <<"Car Make: " <<getMake()<< endl;
                  cout <<"Car License Number: " <<getLicense()<< endl;
                  cout <<"Car Color: " << getColor()<< endl;
                  cout <<"Car Model: " << getModel() << endl;
             }
};
#endif
