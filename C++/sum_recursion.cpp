#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int main(){
    int a;
    a=sum(5);
    cout<<a<<endl;
    return 0;
}