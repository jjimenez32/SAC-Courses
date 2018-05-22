// Jonathan Jimenez
// Assingment #10
// 11-26-2014
#include<iostream>
using namespace std;

int main()
{
    const int size=10;
    int numbers[size],
        smallest,
        largest,
        count;
   
    for (count = 0; count < size; count++)
    {
        cout << "Enter number " << (count +1) << ": ";
        cin >> numbers[count];
    }
    
    smallest = numbers[0];
    largest = numbers[0];
    
    for (count = 1; count < 10; count++)
    {
        if (smallest > numbers[count])
        {
           smallest = numbers[count];
        }
        else if (largest < numbers[count])
        {
             largest = numbers[count];
        }
    }
    cout << "The smallest number is " << smallest << endl;
    cout << "The largest number is " << largest << endl;

system ("PAUSE");
return 0;
}


        
