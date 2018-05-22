#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void sortArray (int [ ], int ) ;
void showArray (int [ ], int ) ;
void dispCount();
int counter = 0;

int main ()
{
const int SIZE = 6;
int values[SIZE] = {7, 2, 3, 8, 9, 1} ;

cout << "The unsorted values are: \n";
showArray (values, SIZE) ;

sortArray (values, SIZE) ;

cout<< "The sorted values are: \n" ;
showArray (values, SIZE) ;

system("PAUSE");
return 0;
}

void sortArray (int array [ ], int SIZE)
{
int temp;
bool swap;

do
{ swap = false;
for (int count = 0 ; count < (SIZE - 1 ) ; count ++)
{
if (array [count] > array [count + 1] )
{
temp = array [count] ;
array [count] = array [count + 1] ;
array [count + 1] = temp ;
swap = true ;
counter++;
dispCount();
}
}
} while (swap) ;
}

void dispCount(){
cout << "The current amount of swaps is " << counter << endl;
}

void showArray (int array [ ], int size)
{
for (int count = 0 ; count < size ; count ++)
cout << array [count] << " " ;
cout << endl ;
} 

