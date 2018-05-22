//Jonathan Jimenez
//Assingment 1
//8-31-2015

#include "list.h"
#include <iostream>
using namespace std;


main()
{
      int selection;
      int position;
      list alist;
      int option;
      
      do 
      {
           cout << "Choose option from menu:"<< endl;
           cout << " 1. ADD" << endl;
           cout << " 2. INSERT" << endl;
           cout << " 3. DELETE" << endl;
           cout << " 4. SHOW" << endl;
           cout << " 5. COUNT" << endl;
           cout << " 6. CLEAR" << endl;
           cout << " 7. EXIT" << endl;
           cout << "Option : ";
           cin >> option;
           if(option == 1)
           {
            alist.ADD(selection);
           }
           else if (option ==2)
           {
            alist.INSERT(selection, position);
           }
           else if (option == 3)
           {
            alist.DELETE(position);
           }
           else if (option == 4)
           {
            alist. SHOW();
           }
           else if( option == 5)
           {
            alist.COUNT();
           }
           else
           {
            alist.CLEAR();
           }
      }while ( option >0 and option <=6);
      
      
system ("PAUSE");
return 0;     
}
     
