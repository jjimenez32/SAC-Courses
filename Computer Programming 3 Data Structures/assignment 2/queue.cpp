#include "queue.h"
#include <iostream>
using namespace std;
//constructor
queue:: queue()
{
        first = -1;
        last = -1;
}
//function to add element to end of queue
void queue:: ADD(int selection)
{
     if (EMPTY())
     {
        first = last = 0;
     }
     if (FULL())
     {
        return;
     }
     else 
     {
        cout <<"Choose number to add to end of queue: ";
        cin >> selection;
        last = (last+1)% 25;
     }
     array[last]=selection;
}
//function to delete first element in queue
void queue:: DELETE()
{
     if (EMPTY())
     {
        return;
     }
     else if (first == last)
     {
          last = first = -1;
     }
     else
     {
        cout << "Deleting number from front of queue" << endl;
        first = (first+1) %25;
     }
}
//function to count elements in queue
void queue:: COUNT()
{
     int count;
     count = (last +25-first)% 25+1;
     cout <<"amount of numbers in queue: "<< count << endl;
}
//function to show all elements in queue
void queue :: SHOW()
{
     int count;
     count = (last +25-first)% 25+1;
     cout << "Queue:" << endl;
     cout << "----" << endl;
     for (int i=0; i < count ; i++)
     {
         int show;
         show = (first +i) % 25;
         cout << array[show]<< " " << endl;
     }
     cout << "----" << endl;
}
//function to clear elements of queue
void queue :: CLEAR()
{
     first = -1;
     last = -1;
}

//function to see if array is empty
bool queue:: EMPTY()
{
     return (first == -1 and last == -1);
}
//function to see if array is full
bool queue:: FULL()
{
     return (last +1)% 25 == first ? true : false;
}
     

