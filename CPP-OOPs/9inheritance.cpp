//https://www.programiz.com/cpp-programming/public-protected-private-inheritance
#include<iostream>
using namespace std;

class Human {

    public:
    int height;// instance Variable:- 
    int weight;  // Instance variables are those variables that are accessible by all the methods in the class. 
    int age;
    Human(){
        cout<<"i am base class "<<endl;
    }

    public:
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {//local variable like w -> Local variables are those variables present within a block, function, or constructor and can be accessed only inside them.
        this->weight = w;
    }
};

class Male: public Human {

    public:
    string color;
    Male(int age){
        this->age = age;
        cout<<"i am child class"<<endl;
    }
    void sleep() {
        cout << "Male Sleeping" << endl;
    }

    int getHeight() {
        return this->height;
    }

};



int main() {

    // Male m1;
    // cout << m1.height << endl;



///*
    Male object1(18);
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    //cout << object1.color << endl;
    //object1.setWeight(84);
    //cout << object1.weight << endl;
    object1.sleep();
    //*/

    return 0;
}