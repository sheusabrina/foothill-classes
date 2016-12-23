//Program to print ASCII values of all upper-case letters
#include <iostream>
using namespace std;

int main()
{
    //Find ASCII values of all upper-case letters
    char c = 'A';
      
    cout << "This program prints the ASCII values of all upper-case letters: \n";
    
    //Compute and display
    for (c = 'A'; c <= 'Z'; c++)
    {
        int x = c;
        cout << "The character " << c << " has an ASCII code of " << x << endl;
    }
    
    return 0;
}

