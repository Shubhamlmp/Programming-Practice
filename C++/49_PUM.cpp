#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j=1,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(;j%4!=0;j++){
            cout<<j<<" ";
        }
        if(j%4==0)cout<<"PUM\n";
        j++;
    }
    return 0;
}