#include <iostream>
using namespace std;

//Prototypes
double median(int *, int);
int mode(int *, int);
int *makeArray(int);
void getMovieData(int *, int);
void selectionSort(int [], int);
double average(int *, int);

int main()
{
int numStudents,
    *movies,
    array[50];

     {
     cout <<"How many students were surveyed? " << endl;
     cin >> numStudents;

     while(numStudents <=0)
     {
     cout <<"Please enter a number above zero" << endl;
     cin >> numStudents;
     }
     
     movies = new int [numStudents];
     cout << "How many movies did each student watch?"<< endl;

     for (int count=0; count < numStudents; count++)
     {
       cout << "student "<< (count+1) << ": ";
       cin >> movies[count];
     }
     selectionSort(movies, numStudents);
     median(movies, numStudents);
      delete [] movies;
     movies ==0;
     }

system("PAUSE");
return 0;
}

void selectionSort (int array[], int numStudents)
{
    int startScan, 
        minIndex,
        minValue;
    
    for (startScan =0; startScan < (numStudents-1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for(int index = startScan +1; index < numStudents; index++)
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


double median (int *movies,int numStudents)
{
       double median;
       
       if(numStudents % 2 ==0)
       {
            median= (movies[numStudents/2] + movies[numStudents/2-1])/2;
            cout << "the median of the movies watched is "<< median<< endl;
       }
       else
       {
           median= movies[numStudents]/2;
           cout<< "the median of the movies watched is "<< median << endl;
       }
}
