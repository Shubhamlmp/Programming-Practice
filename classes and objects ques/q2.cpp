// Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
};

int main()
{
    Student s1;
    Student s2;

    s1.name = "Sam";
    s2.name = "John";

    cout << s1.name << endl;
    cout << s2.name << endl;

    return 0;
}