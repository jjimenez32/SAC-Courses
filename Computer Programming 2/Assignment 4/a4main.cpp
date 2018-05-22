//Jonathan Jimenez
//Assignment 4
// 10-13-2015
#include <iostream>
#include <string>
using namespace std;

// structure for drink variables
struct Drink
{
       string Dname;
       double Dcost;
       int Dnum;
};

//function prototypes
int getChoice(Drink[]);
void transaction(Drink[], int, double &);



int main()
{
    Drink menu[5] = {{"Cola",.75,20},
                 {"Root Beer",.75,20},
                 {"Lemon-Lime",.80,20},
                 {"Grape Soda",.80,20},
                 {"Cream Soda",.80,20}};
    int choice;
    double total;
    
    while(true)
    {
    choice= getChoice(menu);
            if(choice == 6) break;
            transaction(menu, choice-1, total);
    }
    
    cout << "The total amount earned is $" << total << endl;
    
    system("PAUSE");
    return 0;
}
               
int getChoice(Drink menu[])
{
    int choice;
    for (int count=0; count < 5; count++)
    cout <<(count+1)<< "." << menu[count].Dname << endl;
    cout <<(6) << "." << "Quit" << endl;
    cout << "Please choose a drink ";
    cin >> choice;
    return choice;
}

void transaction(Drink menu[], int choice, double& total)
{
     double money;
     if (menu[choice].Dnum == 0)
     {
        cout <<"There is no more of this drink" << endl;
        return;
     }
     cout <<"Enter amount of money you will pay with" << endl;
     cin >> money;
     
     while (money <0 or money >1)
     {
           cout <<"Error, please an amount higher than 0 or lower than 1"<< endl;
           cin >> money;
     }
     while (menu[choice].Dcost > money)
     {
           cout << "Not enough money. Please enter amount again"<< endl;
           cin >> money;
     }
     if (menu[choice].Dcost < money)
        cout << "Your change is $" << (money - menu[choice].Dcost) << endl;
     menu[choice].Dnum--;
     total += menu[choice].Dcost;
}

