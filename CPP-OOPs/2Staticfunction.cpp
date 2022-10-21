//no need to create object
//no this keywords
//StaticFunction can only access static member
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        static int count;
        Student(){
             count++;
        }
        static void total(){
            cout<<count;
        }
};

int Student::count=0;//this is coompulsory to give memory to variable

int main()
{
    Student s1;
    Student s2;
    Student::total();
    return 0;
}

//static variable and static method occupied only single space memory all its object
//We can overload static methods.-> reason overloading is done in compile time
//We cannot override the static method.-> reason overriding is done in runtime