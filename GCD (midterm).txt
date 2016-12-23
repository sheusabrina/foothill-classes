//Program to find GCD of any two given integers
#include <iostream>
using namespace std;

int main()
{
    //Find GCD of two numbers
    int number1, number2, gcd;
    
    cout << "This program finds the greatest common divisor (GCD) of any two given integers\n";
    cout << "Please enter the first number: ";
    
    //Get the first number
    cin >> number1;
    
    //Checking if input is valid
    while (number1 < 0)
    {
        cout << "Please enter a positive number: ";
        cin >> number1;
    }
    
    cout << "Please enter the second number: ";
    
    //Get the second number
    cin >> number2;
    
    //Checking if input is valid
    while (number2 < 0)
    {
        cout << "Please enter a positive number: ";
        cin >> number2;
    }
    
    //Compute
    for (int i = 1; i <= number1 && i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            gcd = i;
        }
    }
    
    //Display
    cout << "The GCD of " << number1 << " and " <<number2<< " is " << gcd << endl;
    
    return 0;
}

