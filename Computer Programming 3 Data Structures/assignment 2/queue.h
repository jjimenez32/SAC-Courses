#ifndef QUEUE_H
#define QUEUE_H

class queue{
      
      private:
              int array[25];
              int first;
              int last;
      public:
             queue();//constructor
             void ADD(int );//insertion at rear of array
             void DELETE();//deletion at front of array
             void SHOW();//shows all elements
             void COUNT();// counts number of elements in array
             void CLEAR();// clears number of elements in array
             bool EMPTY();//function to see if list is empty
             bool FULL();//function to see if list is full
};


#endif
