//Program to change month number to month name
#include <iostream>
using namespace std;

int main()
{
    //Change month number to month name
    int month;
    
    cout << "This program changes a month's number to the month's name.\n";
    cout << "Enter a number from 1 - 12: ";
    
    //Get the month number
    cin >> month;
    
    //Display
    switch (month)
    {
        case 1: cout << "The month number of " << month << " corresponds to January.\n";
                break;
        case 2: cout << "The month number of " << month << " corresponds to February.\n";
                break;
        case 3: cout << "The month number of " << month << " corresponds to March.\n";
                break;
        case 4: cout << "The month number of " << month << " corresponds to April.\n";
                break;
        case 5: cout << "The month number of " << month << " corresponds to May.\n";
                break;
        case 6: cout << "The month number of " << month << " corresponds to June.\n";
                break;
        case 7: cout << "The month number of " << month << " corresponds to July.\n";
                break;
        case 8: cout << "The month number of " << month << " corresponds to August.\n";
                break;
        case 9: cout << "The month number of " << month << " corresponds to September.\n";
                break;
        case 10: cout << "The month number of " << month << " corresponds to October.\n";
                break;
        case 11: cout << "The month number of " << month << " corresponds to November.\n";
                break;
        case 12: cout << "The month number of " << month << " corresponds to December.\n";
                break;
        default : cout << "That is an invalid choice.\n";
    }
    return 0;
}