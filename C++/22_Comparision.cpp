#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char s;
    cin>>a>>s>>b;                          //accepting values from the user
    if(a>b && s=='>')                      //checking greater than condition
        cout<<"Right"<<endl;
    else if (a<b && s=='<')                //checking less than condition
        cout<<"Right"<<endl;
    else if(a==b && s=='=')                //checking equal to condition 
        cout<<"Right"<<endl;
    else
        cout<<"Wrong"<<endl;               //if all conditions false then it will print wrong
    return 0;
}
