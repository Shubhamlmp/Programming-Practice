#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int rollno;
    public:
        char name;
        double school;
};
//int Student::count=0;

int main()
{
    Student s1;
    Student s2;
    cout<<sizeof(s1)<<endl;// due to padding and greedy alignment size will be 16 not 13 1 + 3(padding) + 8 + 4 = 16 bytes
    return 0;
}

//https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/