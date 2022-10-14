// Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
// Name        Year of joining        Address
// Robert        1994        64C- WallsStreat
// Sam        2000        68D- WallsStreat
// John        1999        26B- WallsStreat

#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int salary;
    string address;

public:
    string name;
    int year_of_joining;
    void setsalary(int s)
    {
        salary = s;
    }
    int getsalary()
    {
        return salary;
    }
    void setaddress(string a)
    {
        address = a;
    }
    string getaddress()
    {
        return address;
    }
};
int main()
{
    Employee Robert, Sam, John;
    Robert.name = "Robert";
    Robert.year_of_joining = 1994;
    Robert.setaddress("64C-WallsStreat");

    Sam.name = "Sam";
    Sam.year_of_joining = 2000;
    Sam.setaddress("68D-WallsStreat");

    John.name = "John";
    John.year_of_joining = 1999;
    John.setaddress("26B- WallsStreat");

    cout << "Name"
         << "   "
         << "Year of Joining"
         << "   "
         << "Address" << endl;
    cout << Robert.name << "   " << Robert.year_of_joining << "   " << Robert.getaddress() << endl;
    cout << Sam.name << "   " << Sam.year_of_joining << "   " << Robert.getaddress() << endl;
    cout << John.name << "   " << John.year_of_joining << "   " << John.getaddress() << endl;

    return 0;
}