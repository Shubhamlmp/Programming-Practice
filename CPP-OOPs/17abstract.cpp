#include<iostream>
using namespace std;
 
class Base
{
   int x;
public:
    Base(){
        cout<<"i am abstract class"<<endl;
    }
    virtual void fun() = 0;
    int getX() { return x; }
};

// This class inherits from Base and implements fun()
class Derived: public Base
{
    int y;
public:
    void fun() { 
        cout << "fun() called"; 
    }
};

int main(void)
{
    Derived d;
    d.fun();
    return 0;
}

//A class is called an abstract class whose objects can never be created. Such a class exists as a parent for the derived classes. 
//We can make a class abstract by placing a pure virtual function in the class.