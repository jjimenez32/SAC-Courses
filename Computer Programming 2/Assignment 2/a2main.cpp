//Jonathan Jimenez
//Assignment 2
//9-16-2015
#include <iostream>
using namespace std;

//prototypes
double median(int *, int);
int mode(int *, int);
int *makeArray(int);
void getMovieData(int *, int);
void selectionSort(int [], int);
double average(int *, int);

int main()
{
    int *array,
        mod,//mode variable
        students; // student amount variable
    double avg,//average variable
           medi;//median variable
    
    cout << "How many students were surveyed?"<< endl;
    cin >> students;
    while(students <=0)
     {
     cout <<"Please enter a number above zero" << endl;
     cin >> students;
     }
     array = new int[students];
     getMovieData(array, students);
     selectionSort(array,students);
     medi = median(array, students);
     avg= average(array, students);
     mod= mode(array, students);
     
     cout <<"The median is "<< medi<< endl;
     cout <<"The average is "<< avg << endl;
     cout <<"The mode is " << mod << endl;
     
     
     
     delete [] array;
     array ==0;
     
system("PAUSE");
return 0;
}

//getting specific data from amount of students
void getMovieData(int *array, int students)
{
     cout << "How many movies did each student watch this month?"<< endl;

     for (int count=0; count < students; count++)
     {
       cout << "student "<< (count+1) << ": ";
       cin >> array[count];
     }
}
//sort array function
void selectionSort (int array[], int students)
{
    int startScan, 
        minIndex,
        minValue;
    
    for (startScan =0; startScan < (students-1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for(int index = startScan +1; index < students; index++)
        {
         if(array[index] < minValue)
            {
               minValue = array[index];
               minIndex = index;
            }
         }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}
//calculating the median
double median (int *array,int students)
{
       double med;
       if (students %2==0)
          return ((array[students/2-1]+array[students/2])/2);
       else
          return array[students/2];
}
//calculating the average
double average( int *array, int students)
{
       int sum=0;
       for (int count=0; count< students; count++)
       {
           sum+= array[count];
       }
return (double) sum/students;
}
//calculating the mode
int mode(int *array,int students)
{
    int value;
    int narray[1000];
    int max= -1;
    for (int count=0; count< 1000; count ++)
    {
        narray[count]=-1;
    }
    for (int count=0; count <students; count++)
    {
        narray[array[count]]++;
        if(narray[array[count]]> max)
        {
            max= narray[array[count]];
            value= array[count];
        }
    }
return value;  
}
