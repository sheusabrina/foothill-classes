//Program to compute volume of a cylinder
#include <iostream>
using namespace std;

int main()
{
    //compute volume of cylinder
    double volume, radius, height;
    const double PI=3.14159;
    
    cout << "This program calculates the volume of a cylinder\n";
    
    //Get the radius
    cout << "What is the radius of the cylinder?";
    cin >> radius;
    
    //Get the height
    cout << "What is the height of the cylinder?";
    cin >> height;
    
    //Compute
    volume = PI * radius * radius * height;
    
    //Display 
    cout << "The volume of the cylinder with radius = " << radius << " and height = " << height << " is " << volume << endl;
    
    return 0;
}

