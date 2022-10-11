#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;                         //accepting all the values from user
    if(s=='+' && a+b==c){                       //condition for checking if the symbol is + and answer is correct or not
        cout<<"Yes"<<endl;
    }
    else if(s=='+')                            //condition for checking if the symbol is + and ans is false then printing the correct value
        cout<<a+b<<endl;

    if(s=='-' && a-b==c){                      //condition for checking if the symbol is - and answer is correct or not
        cout<<"Yes"<<endl;
    }
    else if(s=='-')                            //condition for checking if the symbol is - and ans is false then printing the correct value
        cout<<a-b<<endl;

    if(s=='*' && a*b==c){                     //condition for checking if the symbol is * and answer is correct or not
        cout<<"Yes"<<endl;
    }
    else if(s=='*')
        cout<<a*b<<endl;                      //condition for checking if the symbol is * and ans is false then printing the correct value
    return 0;
}
