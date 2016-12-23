//Program to rotate elements of an array one position to the right
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int array[n] = {10, 20, 30, 40, 50};
    int temp = array[n-1];
    
    //Display original numbers
    cout << "These are the original numbers: ";
    for (int count = 0; count < n; count++)
    {
        cout << array[count] << " ";
    } 
    cout << endl;
    
    //Rotate numbers
    for (int i = n-1; i > 0; i--)
    {
        array[i] = array[i-1];
    }
    array[0] = temp;
    
    //Display rotated numbers
    cout << "These are the rotated numbers: ";
    for (int j = 0; j < n; j++)
    {
        cout << array[j] << " ";
    }
    cout << endl;
    
    return 0;
}


