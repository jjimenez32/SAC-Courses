//Jonathan Jimenez
//3-23-2015
//Assingment 5
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
//structure for inventory
struct inventory
{
       char   description[20];
       double quantity,
              wholeSale,
              retail,
              day,
              month,
              year;
};

const int record= 5;
//Prototypes
void addRecord(fstream &);
void viewRecord(fstream &);
void changeRecord(fstream &);

int main()
{
    fstream invent ("inventory.dat", ios::out|ios::binary);
    inventory data = {"",0,0.0};
    int choice,
        record =1;
    
    for(int count=0; count < record; count++)
    {
            invent.write(reinterpret_cast<char*>(&data), sizeof(data));
    }
    
    invent.open("inventory.txt");
    do
    {
                                 
    cout <<"Menu" << endl;
    cout <<"1. Add record." << endl;
    cout <<"2. View record." << endl;
    cout <<"3. Change record." << endl;
    cout <<"4. Exit." <<endl;
    cout <<"Choose an option:";
    cin >> choice;
  
    while (choice <1 or choice >4)
    {
          cout <<"Please choose an option between 1 and 4" <<endl;
          cin >> choice;
    }
    
     switch (choice)
     {
           case 1:cout <<"Record:" << record++<< endl;
           addRecord(invent);
           break;
           case 2: viewRecord(invent);
           break;
           case 3: changeRecord(invent);
           break;
           case 4: cout << "Program will now exit" <<endl;
     }
    }while(choice !=4);
    invent.close ();

system ("PAUSE");
return 0;
}

void addRecord(fstream &file)
{
     inventory data;
     fstream invent ("inventory.dat", ios::out | ios::binary);
     invent.seekp(sizeof(data), ios::end);
     
     cout << "Decription: ";
     cin.ignore();
     cin.getline(data.description, 20);
     cout <<"Quantity: ";
     cin >> data.quantity;
     while (data.quantity <0)
     {
           cout <<"Quantity can't be less than 0"<<endl;
           cout <<"Please Re-enter: ";
                cin >> data.quantity;
     }
     cout <<"Wholesale Price: ";
     cin >> data.wholeSale;
     while (data.wholeSale <0)
     {
           cout <<"Wholesale cose can't be less than 0"<< endl;
           cout <<"Please Re-enter cost: ";
           cin >> data.wholeSale;
     }
     cout <<"Retail Price: ";
     cin >> data.retail;
     while (data.retail <0)
     {
           cout <<"Retail cose can't be less than 0"<< endl;
           cout <<"Please Re-enter cost: ";
           cin >> data.retail;
     }
     cout <<"Date: Month: ";
     cin >> data.month;
     while (data.month <=0 or data.month >12);
     {
           cout <<"Month is between 1 and 12"<< endl;
           cout <<"Please Re-enter: ";
           cin>> data.month;
     }
     
     cout <<"Day: ";
     cin >> data.day;
     while (data.day <=0 or data.day >31);
     {
           cout <<"Days are between 1 and 31"<< endl;
           cout <<"Please Re-enter: ";
           cin>> data.day;
     }
    
     cout <<"Year: ";
     cin >> data.year;
     while (data.year <2000 or data.year >2015);
     {
           cout <<"Year is between 2000 and 2015"<< endl;
           cout <<"Please Re-enter: ";
           cin>> data.day;
     }
     
     
     invent.write(reinterpret_cast<char*>(&data),sizeof(data));
     file.close();
}
     
void viewRecord(fstream &file)
{
     inventory data;
     fstream invent ("inventory.dat", ios::in | ios::binary);
     int recordChoice;
     
     cout <<"Choose the record you wish to view" << endl;
     cin >> recordChoice;
     //seeking record choice from beginning
     invent.seekg(recordChoice * sizeof(data), ios::beg);
     invent.read(reinterpret_cast<char*>(&data),sizeof(data));
     
     while(!invent.eof())
     {
     cout << "Decription: ";
     cout << data.description<<endl;
     cout << "Quantity: ";
     cout << data.quantity<<endl;
     cout <<"Wholesale Price:";
     cout << data.wholeSale<<endl;
     cout <<"Retail Price: ";
     cout << data.retail<<endl;
     cout <<"Date:"
          << data.month<<"/"
          << data.day<<"/"
          << data.year<< endl;
     invent.read(reinterpret_cast<char*>(&data),sizeof(data));
     }
     
     
     file.close();
}

void changeRecord(fstream &file)
{
     fstream invent ("inventory.dat",ios::in|ios::out|ios::binary);
     inventory data;
     int recordChoice;
     
     cout <<"Choose the record you wish to change" << endl;
     cin >> recordChoice;
     //seeking record choice from beginning
     invent.seekg(recordChoice * sizeof(data), ios::beg);
     invent.read(reinterpret_cast<char*>(&data),sizeof(data));
     
     cout <<"Re-enter the data" << endl;
     cout << "Decription: ";
     cin.ignore();
     cin.getline(data.description, 20);
     cout <<"Quantity: ";
     cin >> data.quantity;
     while (data.quantity <0)
     {
           cout <<"Quantity can't be less than 0"<<endl;
           cout <<"Please Re-enter: ";
                cin >> data.quantity;
     }
   
     cout <<"Wholesale Price: ";
     cin >> data.wholeSale;
     while (data.wholeSale <0)
     {
           cout <<"Wholesale cose can't be less than 0"<< endl;
           cout <<"Please Re-enter cost: ";
           cin >> data.wholeSale;
     }
     
     cout <<"Retail Price: ";
     cin >> data.retail;
     while (data.retail <0)
     {
           cout <<"Retail cose can't be less than 0"<< endl;
           cout <<"Please Re-enter cost: ";
           cin >> data.retail;
     }
     
     cout <<"Date: Month:";
     cin >> data.month;
    
     cout <<"Day:";
     cin >> data.day;
    
     cout <<"Year:";
     cin >> data.year;
     
     
     invent.seekp(recordChoice * sizeof(data), ios::beg);
     invent.write(reinterpret_cast<char*>(&data),sizeof(data));
     
     file.close();
}
     
