//Jonathan Jimenez
//Assignment 3
//2-25-2015
#include <iostream>
#include <string>
using namespace std;
//prototype
string toMorse(char);

const int num=40;// amount of characters in each array
string morse[num] = {" ","--..--",".-.-.-","..--..","-----",".----","..---","...--","....-",
     ".....","-....","--...","---..","----.",".-","-...","-.-.","-..",".","..-.","--.","....",
     "..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--",
     "-..-","-.--","--.."};
char letters[num] = {' ', ',', '.', '?', '0', '1', '2', '3', '4', '5', 
     '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 
     'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 
     'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

main ()
{
     string word, //variable to hold word/letter put in
            mors; //variable to hold toMorse function value
     int count=0;
     
     cout <<"Please enter a letter, word, or number to be translated to morse code"<< endl;
     getline(cin,word);
     
     
     while (count < word.size())
     {
           mors = toMorse(toupper(word[count]));
           cout << mors << endl;
           count++;
     }
     
     system ("PAUSE");
     return 0;
}
//toMorse function to find same word/letter in morse array
string toMorse (char i)
{
       int count=0;
       string val;
       
       while (count < num and i != letters[count])
       {
             count++;
       }
        
       val = morse[count];

return val;
}
