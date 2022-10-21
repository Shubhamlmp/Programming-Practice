#include<iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    public:
    Animal(){
        cout<<"I am Animal class"<<endl;
    }
    void bark() {
        cout << "Barking " << endl;
    }
    void walk(){
        cout<<"Animal is walking"<<endl;
    }
};

class Human {
    public:
    string color;

    public:
    Human(){
        cout<<"I am Human"<<endl;
    }
    void speak() {
        cout << "Speaking " << endl;
    }
     void walk(){
        cout<<"human is walking"<<endl;
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human {
    public:
        Hybrid(){
            cout<<"I am human and animal"<<endl;
        }
};


int main() {

    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    obj1.Human::walk();//::use to implement same function of a perticular class


    return 0;
}