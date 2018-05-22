// Jonathan Jimenez
// Assignment #10
// 11-21-2014
#include <iostream>
#include <iomanip>
using namespace std;

double iCharges(double, double, double, double);
double oCharges(double, double);
int main()
{
    char  option;
    double days,
           mCharges,
           sCharges,
           rate;
    
    cout << "Was the patient admitted as an in-patient or an out-patient?"<<endl
         << "For in-patient enter the letter I"<<endl
         << "For out-patient enter the letter O"<<endl;
         cin >> option;
         
         switch(option)
         {
               case 'I' :
               case 'i' :
                    cout <<"Enter the number of days in the hospital: ";
                    cin >> days;
                    while(days < 0)
                    {
                     cout <<"Enter number of days above zero: ";
                     cin >>days;
                    }
                    
                    cout <<"Enter the daily rate: ";
                    cin >> rate;
                    while(rate < 0)
                    {
                     cout <<"Enter daily rate above zero: ";
                     cin >>rate;
                    }
                    
                    cout <<"Enter hospital medication charges: $";
                    cin >> mCharges;
                    while(mCharges < 0)
                    {
                     cout <<"Enter hospital medication charges above zero: $";
                     cin >>mCharges;
                    }
                    
                    cout <<"Enter charges for hospital services: $";
                    cin >>sCharges;
                    while(sCharges < 0)
                    {
                     cout <<"Enter charges for hospital services above zero: $";
                     cin >>sCharges;
                    }
                    cout << fixed << showpoint << setprecision(2);
                    cout <<"The total charges are $"
                    << iCharges(days,rate,mCharges,sCharges) << endl;
                    break;
         
             case 'O' :
             case 'o' :
                    cout <<"Enter hospital medication charges: $";
                    cin >> mCharges;
                    while(mCharges < 0)
                    {
                     cout <<"Enter hospital medication charges above zero: $";
                     cin >>mCharges;
                    }
                    
                    cout <<"Enter charges for hospital services: $";
                    cin >>sCharges;
                    while(sCharges < 0)
                    {
                     cout <<"Enter charges for hospital services above zero: $";
                     cin >>sCharges;
                    }
                    cout << fixed << showpoint << setprecision(2);
                    cout <<"The total charges are $"
                    << oCharges(mCharges,sCharges) << endl;
                    break;
         }
         
         system ("PAUSE");
         return 0;
}
         
         double iCharges(double days, double rate, double mCharges, double sCharges)
                {
                return ((rate*days) + mCharges + sCharges);
                }
         double oCharges(double mCharges,double sCharges)
                {
                return (mCharges + sCharges);
                }
