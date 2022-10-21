#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        static int count;
        Student(){
             count++;
        }
        void total(){
            cout<<count;
        }
};
int Student::count=0;//this is compulsory to give memory to variable

int main()
{
    void *ptr; 
    char *str;
    p=str;                // no error 
    str=p;                // error because of type mismatch
//We can assign a pointer of any type to a void pointer but the reverse is not true unless you typecast it as
    str = (char*) p;
    
    Student s1;
    Student s2;
    s2.total();
    return 0;
}

//A void pointer is a pointer which is having no datatype associated with it. It can hold addresses of any type