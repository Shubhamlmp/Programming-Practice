#include<bits/stdc++.h>
using namespace std;
int sod(int a){
    int s=0;
    while(a!=0){
        s+=a%10;
        a/=10;
    }
    return s;
}
int main(){
    int i,j,n;
    int a,b,sum=0;
    cin>>n;
    cin>>a>>b;
    for(i=1;i<=n;i++){
        int temp=sod(i);
        if(temp>=a&&temp<=b){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}