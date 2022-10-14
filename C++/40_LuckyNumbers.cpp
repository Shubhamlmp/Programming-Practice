#include<bits/stdc++.h>
using namespace std;
bool luck(int i){
    int j;
    while(i>0){
        j=i%10;
        i/=10;
        if(j!=4&&   j!=7)
            return false;
    }
    return true;
}

int main(){
    int a,b,i,j=0,k,l;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(luck(i)){
            j=1;
            cout<<i<<" ";
        }
    }
    if(j==0)
        cout<<-1;
    return 0;
}
