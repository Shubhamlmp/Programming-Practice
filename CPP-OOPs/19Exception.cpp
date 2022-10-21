#include <iostream>
using namespace std;

int main(){
    cout<<"before try"<<endl;
    int a=10;
    int b;
    cout<<"enter no.less than equal to 10 = ";
    cin>>b;
    try{
        cout<<"a/b = ";
        if(b==0){
            throw b;
        }
        float ans = a/b;
        cout<<ans;
    }
    catch(int b){
        cout<<"value is Undefine";
    }
    return 0;
}
//try: Represents a block of code that can throw an exception.
//catch: Represents a block of code that is executed when a particular exception is thrown.
//throw: Used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself.
