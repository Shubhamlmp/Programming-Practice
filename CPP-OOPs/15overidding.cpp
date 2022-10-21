//In object-oriented programming, polymorphism (from the Greek meaning "having multiple forms") is the characteristic of being able to assign a different meaning or usage to something in different contexts
//fxn overidding is runtime polymorpism
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        A(){
            cout<<"constructor of parent"<<endl;
        }
        void print(){
            cout<<"i am base class"<<endl;
        }
};
class B : public A{
    public:
        B(){
            cout<<"constructor of child"<<endl;
        }
        void print(){
            cout<<"i m derived class"<<endl;
        }
};

int main(){
    A a;
    B b;
    a.print();
    b.print();
}