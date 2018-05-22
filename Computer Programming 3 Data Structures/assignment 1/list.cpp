#include "list.h"
#include <iostream>
using namespace std;


list:: list()
{
       size = 0;
       position = 0;
}
             
// Function to count the list
void list::COUNT() const
{
        cout << size << endl;
} 
             
             
//Function to Add element at the end of the list
bool list:: ADD(int selection)
{
     if (size <25)
     {
        cout << "Choose number to add: ";
        cin >> selection;
        array[size] = selection;
        size ++;
        return true;
     }
     return false;
}


//Function to insert element in given position
bool list ::INSERT (int selection, int position)
{
     cout <<"Choose position: ";
     cin >> position;
     if (size < 25 and position >= 0 and position <= size)
     {
              cout <<"Choose number to insert here: ";
              cin >> selection;
              for (int i = size ; 1 > (position -1) ; i--)
              	array[i+1] = array[i];
              array[position] = selection;
              size ++;
              return true;
     }
     return false; 
}


//Function to delete element from given position
bool list:: DELETE (int position)
{
     cout <<" Choose position to delete: " << endl;
     cin >> position;  
     if (position >= 0 and position <=size)
     {      
            for (int i = position; i < size ; i++)
            array[i]= array[i+1];
            size--;
            return true;
     }
     return false;
}


//Function to show all elements in list
void list :: SHOW ()
{
     cout << "List:" << endl;
     cout << "----" << endl;
     for (int i= 0; i < size ; i++)
     {
         cout<< array[i] <<" "<< endl;
     }
     cout << "----" << endl;
}


//Function to clear the list of elements
void list::CLEAR()
{
     size = 0;
}
                  
                     
                  
