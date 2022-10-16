#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m1=arr[0];
    int i1=0;
    int i2=0;
    int m2=arr[0];
    for(int i=1;i<n;i++)
    {
        if(m1>arr[i])
        {
            m1=arr[i];
            i1=i;
        }
        else if(m2<arr[i])
        {
            m2=arr[i];
            i2=i;
        }
    }
    arr[i1]=m2;
    arr[i2]=m1;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
