//Header file section
#include <iostream>
#include <fstream>
using namespace std;

// Declaration of InventoryItem structure
struct InventoryItem
{
char desc[51];  //item description
int qty;   //quantity on hand
float wholesale; //wholesale price
float retail;  //retail price
};

//Function Prototypes
int menu();
void AddRecord(fstream &);
void DisplayRecord(fstream &);
void ChangeRecord(fstream &);

int main()
{
int choice;
fstream inventory ("Inventory.dat");
InventoryItem record = {" ", 0, 0.0};

//writing the blank records
for (int count = 0; count < 5; count++)
{
  inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
}

//inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

inventory.close();

inventory.open("Inventory.dat");

do
{
  choice = menu();
  switch (choice)
  {
  case 1: AddRecord(inventory);
   break;
  case 2: DisplayRecord(inventory);
   break;
  case 3: ChangeRecord(inventory);
   break;
  case 4: cout << "Exiting Program...\n\n";
  }
}while (choice != 4);

inventory.close();
return 0;

}

int menu ()
{
int selection;

cout << "What would you like to do?\n";
cout << "1) add a new record to the file\n";
cout << "2) view a record in the file\n";
cout << "3) change a record in the file\n";
cout << "4) Exit Program\n\b";
cout << "Please enter 1, 2, 3, or 4: ";
cin >> selection;

while (selection< 1 || selection > 4)
{
  cout << "Invalid Choice!!\n";
  cin >> selection;
}
return selection;
}

void ChangeRecord(fstream &file)
{
fstream inventory ("Inventory.dat");
InventoryItem record;
long recNum;

// Get the record number of the desired record.
cout << "Which record do you want to edit? ";
cin >> recNum;

// Move to the record and read it.
inventory.seekg(recNum * sizeof(record), ios::beg);
inventory.read(reinterpret_cast<char *>(&record),
             sizeof(record));

// Display the record contents
cout << "Description: ";
cout << record.desc << endl;
cout << "Quantity: ";
cout << record.qty << endl;
cout << "Wholesale Price: ";
cout << record.wholesale << endl;
cout << "Retail Price: ";
cout << record.retail << endl;

// Get the new record data.
cout << "Enter the new data:\n";
cout << "Description: ";
cin.ignore();
cin.getline(record.desc, 31);
cout << "Quantity: ";
cin >> record.qty;
cout << "Wholesale Price: ";
cin >> record.wholesale;
cout << "Retail Price: ";
cin >> record.retail;

// Move back to the beginning of this record's position.
inventory.seekp(recNum * sizeof(record), ios::beg);

// Write the new record over the current record.
inventory.write(reinterpret_cast<char *>(&record),
              sizeof(record));

// Close the file.
inventory.close();
}

void DisplayRecord(fstream &file)
{
fstream inventory ("Inventory.dat", ios::out | ios::binary);
InventoryItem record;
long recNum;

// Get the record number of the desired record.
cout << "Which record would you like to open? ";
cin >> recNum;

// Move to the record and read it.
inventory.seekg(recNum * sizeof(record), ios::beg);
inventory.read(reinterpret_cast<char *>(&record),
             sizeof(record));

// Display the record contents
cout << "Description: ";
cout << record.desc << endl;
cout << "Quantity: ";
cout << record.qty << endl;
cout << "Wholesale Price: ";
cout << record.wholesale << endl;
cout << "Retail Price: ";
cout << record.retail << endl;

//clear any error state
if (file.fail())
  file.clear();

//closing the file
file.close();
}

void AddRecord(fstream &file)
{
cout << "Please enter the information for the new data: \n";

fstream inventory ("Inventory.dat", ios::out | ios::binary);
InventoryItem record;

//Info of the new data
cout << "Description: ";
cin.ignore();
cin.getline(record.desc, 31);
cout << "Quantity: ";
cin >> record.qty;
cout << "Wholesale Price: ";
cin >> record.wholesale;
cout << "Retail Price: ";
cin >> record.retail;

inventory.write(reinterpret_cast<char *>(&record),
              sizeof(record));

//closing the file
file.close();
}
