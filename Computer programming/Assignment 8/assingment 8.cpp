/*Jonathan Jimenez
Assignment #8
11-5-2014 */


#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
   
    double avg=0.0,         // average of the numbers
           amount= 0,       // amount of numbers
           num= 0,          // variable for numbers in file
           sum = 0.0;       // sum of all numbers
    ifstream inFile;    
    
    inFile.open ("random.txt");
    
    if (inFile.fail())
       cout << "file could not be found or has failed to be read.";
    else
    {
        while (inFile >> num)
        {
              amount++;
              sum = (sum + num);
        }
        
        if (amount >0)
           avg= (sum/amount);
        else
            avg= 0.0;
        
        cout << "The number of numbers in the file is " << amount << endl;
        cout << "The sum of all the numbers in the file is " << sum << endl;
        cout << "The average of all the numbers in the file is " << avg << endl;
    }
    
    inFile.close();
    system ("PAUSE");
    return 0;
}
           
