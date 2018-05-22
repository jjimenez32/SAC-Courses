//Jonathan Jimenez
//Assignment 7
//11-18-2015
#include "parkingticket.h"
#include "parkedcar.h"
#include "parkingmeter.h"
#include "policeofficer.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    parkedCar car;
    parkingTicket ticket;
    parkingMeter meter;
    policeOfficer officer;
    string ma,li,co,na,ba;
    double mo,no;
    int min,m;
    
    cout <<"Enter Car Make: ";
    cin >> ma;
    car.setMake(ma);
    cout <<"Enter Car License Number: ";
    cin >> li;
    car.setLicense(li);
    cout <<"Enter Car Color: ";
    cin >> co;
    car.setColor(co);
    cout <<"Enter Car Model: ";
    cin >> mo;
    car.setModel(mo);
    cout <<"Enter Number of Minutes Parked: ";
    cin >> no;
    car.setNomin(no); 
    cout <<"Enter amount of minutes paid: ";
    cin >> min;
    meter.setmp(min);
    cout <<"Enter police officer's name: ";
    cin>> na;
    officer.setName(na);
    cout <<"Enter police officer's badge number: ";
    cin >> ba;
    officer.setBadge(ba);
    cout <<endl<< endl;
    cout <<"Your results: " <<endl;
    car.showCar();
    meter.showMin();
    ticket.setTicket(min);
    ticket.getFine();
    ticket.showfine();
    
    
    
    
system ("PAUSE");
return 0;
}

    
    
