#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;


double median(int* , int);
double mode(int *, int);
int *makeArray(int);
void getMovieData(int *, int);
void selectionSort(int* [], int);
double average(int *, int);

int main ()
{

int numstudents;
double average;
int *students;
double median;
double total = 0;


cout << "How many Students were Surveyed?" << endl;
cin >> numstudents ;

while(numstudents <= 0)
{
cout << "invalid Entry \n";
cout << "Enter number of students? \n";
cin >> numstudents;
}

students = new int [numstudents];
cout << "Enter the number of movies each Student watched \n";

for (int count = 0; count < numstudents; count++)
{
cout << " student#" << (count +1 ) << ": " ;
cin >> students[count];
}

for (int count = 0; count < numstudents; count++ )
{
total += students[count];
average = total / numstudents;
}


cout << "Students Watched on Average: " << average <<" Movies"<< endl;


// program pauses when i have the system pause here only
system("Pause");



}
void selectionSort(int *array, int numstudents)
{
int startScan, minIndex, minValue;

for (startScan = 0; startScan < (numstudents - 1); startScan++)
{
minIndex = startScan;
minValue = array[startScan];
for(int index = startScan + 1; index < numstudents; index++)
{
if (array[index] < minValue)
{
minValue = array[index];
minIndex = index;
}
}

array[minIndex] = array[startScan];
array[startScan] = minValue;

}
}
double median( int *students, int numstudents)
{
double median;

if(numstudents % 2 ==0)
{

median= (students[numstudents/2] + students[numstudents/2-1])/2;

cout<< "The median is: "<< median<<endl;

}
else
{
median= students[numstudents] / 2;
cout<< "The median is: "<<median<<endl;
}
system("Pause");

} 
