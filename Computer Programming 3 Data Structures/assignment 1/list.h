#ifndef LIST_H
#define LIST_H


class list 
{
      protected: 
               int array[25];
               int size;    
               int position;
               int selection;            
      public:
             list();
             void COUNT() const;// Function to count the list
             bool ADD(int ); //Function to Add element at the end of the list
             bool INSERT (int , int);//Function to insert element in given position
             bool DELETE (int );//Function to delete element from given position
             void SHOW ();//Function to show all elements in list
             void CLEAR();//Function to clear the list of elements
                     
};

#endif
