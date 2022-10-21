//They are basically used to achieve the runtime polymorphism and are declared in the base class by using the virtual keyword before the function.
//pointer of parent class can access the object of child class but not vica versa
//used to remove early binding


#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        virtual void show(){
            cout<<"I m base"<<endl;
        }

        void print(){
            cout<<"I m base with early binding"<<endl;
        }
};

class derived: public base{
    public:
        void show(){
            cout<<"I m derived with late binding"<<endl;
        }
        void print(){
            cout<<"I m derived"<<endl;
        }
};

int main(){
    base *p;
    derived d1;
    p = &d1;
    p->print();//early binding happen 
    p->show();// to remove early binding we use virtual function in base class
    return 0;
}
