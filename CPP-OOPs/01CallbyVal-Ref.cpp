#include<bits/stdc++.h>
using namespace std;

void swap(int a,int b){
    int temp = a;
    a = b;
    b=a; 
}

void swap2(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a=2,b=3;
    swap(a,b);
    cout<<"After swap using call by value a="<<a<<" b="<<b<<endl;//not change in main function
    int *x = &a,*y=&b;
    swap2(*x,*y);
    cout<<"After swap using call by value a="<<a<<" b="<<b;//value will change in main function
}

//In call by value method, we pass a copy of the parameter is passed to the functions.
//For these copied values a new memory is assigned and changes made to these values do not reflect the variable in the main function.

//In call by reference method, we pass the address of the variable and the address is used to access the actual argument used in the function call.
//So changes made in the parameter alter the passing argument.