#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int size=51;
const int numRec=5;

struct Inventory
{
   char detail[size];       //item description
   int    quantity;
   double    wCost,
           rCost;
   int    month,
           day,
           year;
};

void add(Inventory);                                 
void display(Inventory);                              
void change(Inventory);

int main()
{
int choice, record=1;
char again;
  
   Inventory item = {"", 0, 0.0}; //Creating empty structures for members
  
   fstream inventory("items.dat", ios::out|ios::binary);

   //Writing blanks
   for (int count =1;count < numRec;count++)
   {
//cout<<"Writing Blanks Records: "<<count<<endl;
inventory.write(reinterpret_cast<char *>(&item), sizeof(item));
}
  
   do
   {
   cout << fixed << showpoint << setprecision(2);
cout<<"\nInventory Managment"<<endl;

cout << "Please make a selection, 1 through 4." << endl;
cout << "1. Add a new record" << endl;
cout << "2. View an exisitng record" << endl;
cout << "3. Change an exisitng record" << endl;
cout << "4. Exit" << endl;
cout << endl;
cout <<"Enter your choice (1-4): ";
cin >> choice;
  
while(choice < 1 || choice > 4)
  
{
cout << "Invaild selection!" << endl;
cout << "Please enter your choice (1-4) : "<< endl;
cin >> choice;

   }
  
  
switch(choice)
{

       case 1:   cout<< "Record" <<record++<<endl;
add(item);
break;
case 2:   display(item);
break;
case 3:   change(item);
break;
default: cout << "Invalid selection" << endl;
  
}
  
cout<<"\nWould you like to go back to menu?(Y/N): ";
cin>>again;
}while(again=='Y'||again=='y');
  
  
  
inventory.close();


return 0;

}

void add(Inventory item)                                          

{

//Inventory item;
fstream inventory("item.dat",ios::out|ios::binary);

inventory.seekp(sizeof(item), ios::end);

cout<< "\n\nItem description: ";
cin.ignore();
cin.getline(item.detail, size);
  
   cout<<"How many? Quantity: ";
   cin>>item.quantity;
  
   while (item.quantity<0)
   {
       cout<<"Error. Re-Type.\n";
       cout<<"Cannot be less than 0.\n";
       cout<<"How many? Quantity: ";
       cin>>item.quantity;
   }
  
   cout<<"Wholesale cost: $";
   cin>>item.wCost;
  
   while (item.wCost<0)
   {
       cout<<"Cannot be less than 0.\n";
       cout<<"Wholesale cost: $";
       cin>>item.wCost;
   }
  
   cout<<"Retail cost: $";
   cin>>item.rCost;
  
   while (item.rCost<0)
   {
       cout<<"Cannot be less than 0.\n";
       cout<<"Retail cost: $";
       cin>>item.rCost;
   }
  
   cout<<"What is the date added to invetory: \n";
   cout<<"Month: ";
   cin>> item.month;
  
   while (item.month<=0||item.month>12)
   {
       cout<<"Error. Re-Type.\n";
       cout<<"Must be between 1-12.\n";
       cout<<"Month: ";
       cin>> item.month;
   }
  
   cout<<"Day: ";
   cin>>item.day;
   while (item.day<=0||item.day>31)
   {
       cout<<"Error. Re-Type.\n";
       cout<<"Must be between 1-31, depending on the month.\n";
       cout<<"Day: ";
       cin>>item.day;
   }
  
   cout<<"Year: ";
   cin>>item.year;
   while (item.year<1900||item.year>2999)
   {
       cout<<"Error. Re-Type.\n";
       cout<<"Must be between 19xx-2xxx.\n";
       cout<<"Year: ";
       cin>>item.year;
   }
  
   inventory.write(reinterpret_cast<char *>(&item), sizeof(item));
  
   //close the file
   inventory.close();
  
}

void display (Inventory item)

{

//binary input
fstream inventory("item.dat", ios::in|ios::binary);

//inventory.seekg (sizeof(item), ios::beg);
inventory.read(reinterpret_cast<char *>(&item), sizeof(item));

while (!inventory.eof())
{
cout << "Description: " << item.detail << endl;
cout << "Quantity: " << item.quantity << endl;
cout << "Wholesale cost: " << item.wCost << endl;
cout << "Retail price: " << item.rCost << endl;
cout << "Date Added: "<<item.month<<"/"<<item.day<<"/"<<item.year<<endl;
inventory.read(reinterpret_cast<char *>(&item), sizeof(item));
}
//close the file
inventory.close();

}

void change (Inventory item)       //changing record                      

{
int recNum;
  
//binary input
fstream inventory("item.dat", ios::in|ios::out|ios::binary);

// Get the record number of the desired record.
   cout << "Which record do you want to edit? ";
   cin >> recNum;

   // Move to the record and read it.
   inventory.seekg(recNum * sizeof(item), ios::beg);
inventory.read(reinterpret_cast<char *>(&item), sizeof(item));

// Display
cout << "Description: " << item.detail << endl;
cout << "Quantity: " << item.quantity << endl;
cout << "Wholesale cost: " << item.wCost << endl;
cout << "Retail price: " << item.rCost << endl;
cout << "Date Added: "<<item.month<<"/"<<item.day<<"/"<<item.year<<endl;

// Add New Record
cout<< "\n\nItem description: ";
cin.ignore();
cin.getline(item.detail, size);
  
   cout<<"How many? Quantity: ";
   cin>>item.quantity;
  
   while (item.quantity<0)
   {
       cout<<"Error. Re-Type.\n";
       cout<<"Cannot be less than 0.\n";
       cout<<"How many? Quantity: ";
       cin>>item.quantity;
   }
  
   cout<<"Wholesale cost: $";
   cin>>item.wCost;
  
   while (item.wCost<0) //Input for Sales
   {
       cout<<"Cannot be less than 0.\n";
       cout<<"Wholesale cost: $";
       cin>>item.wCost;
   }
  
   cout<<"Retail cost: $";
   cin>>item.rCost;
  
   while (item.rCost<0)
   {
       cout<<"Cannot be less than 0.\n";
       cout<<"Retail cost: $";
       cin>>item.rCost;
   }
  
   cout<<"What is the date added to invetory: \n"; //Input for date
   cout<<"Month: ";
   cin>> item.month;
  
   while (item.month<=0||item.month>12)
   {
       cout<<"Error. Re-Type.\n";
       cout<<"Must be between 1-12.\n";
       cout<<"Month: ";
       cin>> item.month;
   }
  
   cout<<"Day: ";
   cin>>item.day;
   while (item.day<=0||item.day>31)
   {
       cout<<"Error. Re-Type.\n";
       cout<<"Must be between 1-31, depending on the month.\n";
       cout<<"Day: ";
       cin>>item.day;
   }
  
   cout<<"Year: ";
   cin>>item.year;
   while (item.year<1900||item.year>2999)
   {
       cout<<"Error. Re-Type.\n";
       cout<<"Must be between 19xx-2xxx.\n";
       cout<<"Year: ";
       cin>>item.year;
   }


// Move back to the beginning of the this record's position.
   inventory.seekp(recNum * sizeof(item), ios::beg);

   // Write the new record over the current record.
   inventory.write(reinterpret_cast<char *>(&item),
       sizeof(item));

//close the file
inventory.close();

}
