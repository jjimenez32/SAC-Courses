//Jonathan Jimenez
//1-27-2015
//Assignment 1
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Prototypes
    int bubbleSort(long [], int);
    int selectionSort(long [], int);
    void bubbleShow (long [], int);
    void selectionShow (long [], int);
    int counter;
    int counters;

int main()
{
   long bubble[20]={1,3,2,75,32,78,54,23,90,54,44,77,9,23,56,16,19,22,80,100},
       selection [20]= {1,3,2,75,32,78,54,23,90,54,44,77,9,23,56,16,19,22,80,100},
       bubbleswaps,
       selectionswaps;
       
       //showing bubble array
       cout <<"The unsorted numbers in the bubble array are"<< endl;
       bubbleShow(bubble, 20);
       cout << endl;
       
       //sorting bubble array
       bubbleswaps = bubbleSort(bubble, 20);
       
       //reshowing bubble array
       cout <<"The sorted numbers in the bubble array are"<< bubbleswaps<< endl;
       bubbleShow(bubble, 20);
       cout << endl;
       
       //Showing selection array
       cout <<"The unsorted numbers in the selection array are"<< endl;
       selectionShow(selection, 20);
       cout <<endl;
       
       //sorting selection array
       selectionswaps = selectionSort(selection,20);
       
       //reshowing selection array
       cout <<"The sorted numbers in the selection array are"<< selectionswaps << endl;
       selectionShow(selection, 20);
       cout <<endl;
       
   system("PAUSE");
   return 0;
}

int bubbleSort (long array[], int size)
{
    int temp;
    int swap=1;
    
    do
    {
         swap=false;
         
         for (int count = 0; count <(size-1); count++)
         {
             if (array[count] > array[count +1])
             {
                temp= array[count];
                array[count] = array[count +1];
                array[count +1] = temp;
                swap = true;
                counter++;
             }
         }
    }while (swap);
return(counter);
}


int selectionSort (long array[], int size)
{
    int startScan, 
        minIndex,
        minValue;
    
    for (startScan =0; startScan < (size-1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for(int index = startScan +1; index < size; index++)
        {
         if(array[index] < minValue)
            {
               minValue = array[index];
               minIndex = index;
               counters++;
            }
         }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
return(counters);
}

//show functions
void bubbleShow(long array[], int size)
{
     for (int count =0; count<size; count++)
         cout << array[count] << " ";
     cout << endl;
}

void selectionShow(long array[], int size)
{
     for (int count =0; count<size; count++)
         cout << array[count] << " ";
     cout << endl;
}

