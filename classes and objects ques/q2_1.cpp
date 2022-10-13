// Write a program by creating an 'Employee' class having the following functions and print the final salary.
// 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
// 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
// 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.

#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int salary;

public:
    int hours;
    void getInfo(int s, int h)
    {
        salary = s;
        hours = h;
    }
    int AddSal()
    {
        if (salary <= 500)
        {
            salary = salary + 10;
            return salary;
        }
        else
        {
            return salary;
        }
    }
    int AddWork()
    {
        if (hours >= 6)
        {
            salary = salary + 5;
            return salary;
        }
        else
        {
            return salary;
        }
    }
};
int main()
{
    Employee John;
    John.getInfo(450, 12);
    cout << John.AddWork() << endl;
    cout << John.AddSal() << endl;

    return 0;
}