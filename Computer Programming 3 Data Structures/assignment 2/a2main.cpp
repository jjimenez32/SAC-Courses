//Jonathan Jimenez
//Assignment 2
//9-7-2015
#include "queue.h"
#include <iostream>
using namespace std;


main (){

     queue Q;
     int option;
     int selection; 
     
     do
     {
       cout << "Choose an option from menu:" << endl;
       cout << "1. ADD" << endl;
       cout << "2. DELETE" << endl;
       cout << "3. SHOW" << endl;
       cout << "4. COUNT" << endl;
       cout << "5. CLEAR" << endl; 
       cout << "6. EXIT" << endl;
       cin >>option;
       
       if (option == 1)
       {
          Q.ADD(selection);
       }
        if (option == 2)
       {
          Q.DELETE();
       }
       if (option ==3)
       {
          Q.SHOW();
       }
       if (option == 4)
       {
         Q.COUNT();
       }
       if (option ==5)
       {
         Q.CLEAR();
       }
      
     }while (option >0 and option <= 5);
     
     
system ("PAUSE");
return 0;
}
