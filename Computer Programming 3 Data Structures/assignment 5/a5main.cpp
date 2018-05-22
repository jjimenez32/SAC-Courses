//Jonathan Jimenez
//Assignment 5
//9-29-2015
#include <iostream>
using namespace std;


//recursion fib prototype
int fibonacci(int, int);
void indent(int);

int main ()
{
    int level = 0;
    int answer;
    int n;
    cout << "Enter levels of fibonacci: " ;
    cin >> n;
    cout << "-----------------" << endl;
    answer = fibonacci(n, level);
    cout << "-----------------" << endl;
    cout << "Final answer:"<<  answer << endl << endl;
    
    


system ("PAUSE");
return 0;
}


int fibonacci(int n, int level)
{
    int n1;
    int n2;
    int answer;
    
    for (int i=0; i< level ; i++)
        cout << "  ";
        
    cout << "Entering Level " << level << endl;
    if (n>1)
    {
       n1 = fibonacci(n-1,
            level +1);
       n2 = fibonacci(n-2,
            level +2);
       answer = n1 + n2;
    }
    else
    {
         answer = 1;
    }
   
    for (int i=0; i< level ; i++)
        cout << "  ";
        
    cout << "Exiting Level " << level << endl;
    return answer;
}

