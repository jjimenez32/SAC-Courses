//Jonathan Jimenez
//Assignment 1
//9-3-2015
#include <iostream>
using namespace std;

// Prototypes
    int bubbleSort(long [], int);
    int selectionSort(long [], int);
    void bubbleShow (long [], int);
    void selectionShow (long [], int);
    int counterB=0; //bubble swaps counter variable
    int counterS=0; //selection swaps counter variable

int main()
{
       long bubble[20]={1,3,2,75,32,78,54,23,90,54,44,77,9,21,56,16,19,22,80,100},
       selection [20]= {1,3,2,75,32,78,54,23,90,54,44,77,9,21,56,16,19,22,80,100};
       
       //showing bubble array
       cout <<"The unsorted numbers in the bubble array are"<< endl;
       bubbleShow(bubble, 20);
       cout << endl;
       
       //sorting bubble array
       cout <<"I will now sort the bubble array..."<< endl;
       cout << "The amount of swaps is " << bubbleSort(bubble,20) << endl;
       
       //reshowing bubble array
       cout <<"The sorted numbers in the bubble array are "<< endl;
       bubbleShow(bubble, 20);
       cout << endl;
       
       //Showing selection array
       cout <<"The unsorted numbers in the selection array are"<< endl;
       selectionShow(selection, 20);
       cout <<endl;
       
       //sorting selection array
       cout <<"I will now sort the selection array..."<< endl;
       cout <<"The amount of swaps is "<< selectionSort(selection,20) << endl;
       
       //reshowing selection array
       cout <<"The sorted numbers in the selection array are "<< endl;
       selectionShow(selection, 20);
       cout <<endl;
       
   system("PAUSE");
   return 0;
}

// bubblesort function
int bubbleSort (long array[], int size)
{
    int temp;
    bool swap;
    
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
                counterB++;
             }
         }
    }while (swap);
return(counterB);
}
// selectionsort function
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
               counterS++;
            }
         }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
return(counterS);
}

//show bubblesort function
void bubbleShow(long array[], int size)
{
     for (int count =0; count<size; count++)
         cout << array[count] << " ";
     cout << endl;
}
//show selectionsort function
void selectionShow(long array[], int size)
{
     for (int count =0; count<size; count++)
         cout << array[count] << " ";
     cout << endl;
}

