#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c == '>' && a>b){
        cout<<"Right"<<endl;
        return 0;
    }if(c == '<' && a<b){
        cout<<"Right"<<endl;
        return 0;
    }if(c == '=' && a==b){
        cout<<"Right"<<endl;
        return 0;
    }
    cout<<"Wrong"<<endl;
    return 0 ;
}
