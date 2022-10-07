#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=i-1;j>0;j--){
            cout<<" ";
        }
        for(j=0;j<2*(n-i+1)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}