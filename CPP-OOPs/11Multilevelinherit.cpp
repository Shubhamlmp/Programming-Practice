#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    Animal(){
        cout<<"I am base class"<<endl;
    }
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {
    public:
        Dog(){
            cout<<"I am dog"<<endl;
        }
};

class GermanShepherd: public Dog {
    public:
        GermanShepherd(){
            cout<<"I m german dog"<<endl;
        }

};

int main() {

    GermanShepherd g;
    g.speak();
    return 0;
}