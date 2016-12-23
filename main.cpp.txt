//Program to double elements in an array
#include <iostream>
using namespace std;

//Function prototype
void aFunction(int arr[], int length);

//Defining function aFunction
void aFunction(int array[], int size)
{
    //Doubling and displaying values
    cout << "These are the doubled values: ";
    for (int i = 0; i < size; i++)
    {
        int another[size];
        another[i] = array[i] * 2;
        cout << another[i] << " ";
    }
    cout << endl;
}

//Main function
int main()
{
   //code block 
   return 0;
}

