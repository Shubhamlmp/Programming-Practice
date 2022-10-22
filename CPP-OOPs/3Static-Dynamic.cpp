#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int rollno;
    public:
        string name;
};

int main()
{
    //static
    Student s1;
    s1.name = "Raghav";
    cout<<s1.name;
    //dynamic
    Student *s2 = new Student;
    s2->name = "Swami";
    cout<<s2->name;

    int value=new int;  		//allocates memory for storing 1 integer
    delete value;          		// deallocates memory taken by value

    int *arr=new int[10];    	//allocates memory for storing 10 int
    delete []arr;              	// deallocates memory occupied by arr

    
    
    return 0;
}