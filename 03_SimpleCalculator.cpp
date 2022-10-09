#include <iostream>
using namespace std;

int main() {
    float a,b,ans;
    char c;

    cout<<"Enter operation:";   // Taking input
    cin>>c;
    cout<<"Enter numbers:";
    cin>>a>>b;

    if(c=='+') 
        ans = a+b;
    else if(c=='-')
        ans = a-b;
    else if(c=='*')
        ans = a*b;
    else if(c=='/') {
        if(b==0) {
        cout<<"Denominator cannot be zero";   //check if denominator is zero
        return 0;
        }
        ans = a/b;
    }   else {
        cout<<"Invalid operation!";
    }
    cout<<ans;  //giving Output

    return 0;        
}
