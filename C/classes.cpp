//Program to display student's data
#include <iostream>
#include <string>
using namespace std;

//Student class declaration
class Student
{
    private:
        string name;
        int idNumber;
        int size;
        int hours;
        string classes [100];
        
    public:
        //Set functions
        Student()        //Default constructor
        {
            hours = 3;
        }
        
        Student(int h)    //Constructor 
        { hours = h; }
        
        void setName(string n)
        { name = n; }
        
        void setID(int id)
        { idNumber = id; }
        
        void setSize(int s)
        { size = s; }
        
        void setClasses(string c[])
        {
            for (int count = 0; count < size; count++)
            {
                classes [count] = c[count];
            }
        }
        
        //Get functions
        string getName() const
        { return name; }
        
        int getID() const
        { return idNumber; }
        
        int getSize() const
        { return size; }
        
        string getClasses () const
         {
            string s = "";
            for (int count = 0; count < size; count++)
            {
                s = s + classes[count] + "   ";
            }
            return s;
        }
        
        //Calulation function
        int totalHours()
        {
            int total = size * hours; 
            return total;
        }
};


//Main function
int main()
{
    //Define 2 Student objects
    Student student1 (5);
    Student student2;
   
    //Store data in student1 object
    student1.setName("Sabrina Sheu");
    student1.setID(53827492);
    student1.setSize(4);
    string c[] = {"Introduction to C++", "Anthropology 1", "Calculus 2", "Creative Writing"};
    student1.setClasses(c);
    
    //Store data in student2 object
    student2.setName("Alexander Bernstein");
    student2.setID(64531987);
    student2.setSize(1);
    string d[] = {"Introduction to C++"};
    student2.setClasses(d);
    
    //Display student1's data
    cout << "Here is the student's data: \n";
    cout << "Name: " << student1.getName() << endl;
    cout << "ID Number: " << student1.getID() << endl;
    cout << "Number of classes: " << student1.getSize() << endl;
    cout << "Registered classes: " << student1.getClasses() << endl;
    cout << "Average number of hours of work per class: 5" << endl;
    cout << "Total average hours of study: " <<student1.totalHours() << endl; 
    
    //Display student2's data
    cout << "Here is the student's data: \n";
    cout << "Name: " << student2.getName() << endl;
    cout << "ID Number: " << student2.getID() << endl;
    cout << "Number of classes: " << student2.getSize() << endl;
    cout << "Registered classes: " << student2.getClasses() << endl;
    cout << "Average number of hours of work per class: 3" << endl;
    cout << "Total average hours of study: " <<student2.totalHours() << endl; 
   
    return 0;
}