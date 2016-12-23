//Program to reverse number order
#include <iostream>
using namespace std;

//Function prototype
void reverse_digits (int incoming);

//Main function
int main()
{
    int value;
    
    cout << "This program reverses the order of the numbers inputted\n";
    cout << "Please enter a number: ";
    
    //Get number
    cin >> value;
    
    //Call for reverse_digits function
    reverse_digits (value);
  
    return 0;
}

//Function to reverse number order
void reverse_digits (int number)
{
    int remainder;
    int reverse = 0;
    
    while (number != 0)
    {
        remainder = number % 10;  
        reverse = (reverse* 10) + remainder;
        number /= 10;     
    }
    
    //Display
    cout << "The reverse order is " << reverse << endl;
}