//Jonathan Jimenez
//Assignment #7
//10-31-2014
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
    string names,
           first,  
           last;
    ifstream infile;
    
    cout << "Please enter between 1 and 25 student names in a file titled: \n"
         << " studentlineup.txt \n";
        
    system ("pause");
    
    infile.open ("studentlineup.txt");
    
    if (infile)
    {
       infile >> first;
       
       while (infile >> names)
       {
             if (names <= first)
             {
                first = names;
             }
             else if (names >= last)
             {
                last = names;
             }
       }
    }
    infile.close();
    
    cout << "The first student in line is " << first << endl;
    cout << "The last student in line is " << last << endl;
    
    system ("pause");
    
return 0;
}
