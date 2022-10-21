//A friend class can access both private and protected members of the class in which it has been declared as friend.
#include<bits/stdc++.h>
using namespace std;

class Student{
    int usn;
    public:
        friend void write(Student &s);
        friend int iknow(Student &s){
            return s.usn;
        }
};
//int Student::usn =0;

void write(Student &s){//we have to pass the reference in friend function
    cout<<"write usn"<<endl;
    cin>>s.usn;
}

int main(){
    Student s;
    write(s);
    int tell = iknow(s);
    cout<<tell;
    return 0;
}