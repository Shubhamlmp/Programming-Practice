#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
            a++;
            else b++;
            
        }
        if(n%2==0){
            if(a%2 && b%2)
            cout<<"NO"<<endl;
            else 
            cout<< "YES" << endl;
            
        }
        else{
            cout << "YES" << endl;
        }
    }
}
