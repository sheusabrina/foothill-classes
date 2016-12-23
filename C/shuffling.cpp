//Program to shuffle characters in an array
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num;
    int seed;
    const int SIZE = 11; 
    char characters [SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    int value [SIZE];
    
    cout << "This program shuffles the contents of the array\n";
   
    //Display array
    cout << "Here are the contents of the array: ";
    for (int index = 0; index < SIZE; index++)
    {
        cout << characters[index] << " ";
    }
    cout << endl;
   
    //Get seed value
    cout << "Please enter a seed integer value: ";
    cin >> seed;
    srand (seed);
   
    //Shuffle the elements
    for (int i = 0; i < SIZE; i++)
    {
        bool check;
        int element;
        do 
        {
        element = rand() % 11;
        check = true;
        for (int j = 0; j < i; j++)
            {
                if (element == value [j])
                {
                    check = false; 
                    break;
                }
            }
        } while (!check);
        value[i] = element; 
    }
    
    //Display shuffled array
    cout << "Here are the shuffled contents of the array: ";
    for (int k = 0; k < SIZE; k++)
    {
        num = value[k];
        cout << characters [num] << " ";
    }
    
    cout << endl;
   
    return 0;
}




