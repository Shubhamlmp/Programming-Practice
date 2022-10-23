#include<iostream>
using namespace std;


int main() {
    
    int n,i,j,a;
    cin>>n;
    a=n/2+1;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<a-i+1;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    int b=n-a;
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<2*(b-i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}