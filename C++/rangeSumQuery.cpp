#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;//initialising n and q
    cin>>n>>q;
    long long int arr[n];//initialising array of size n
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        long long int l,r;//input of lower limit and upper limit ie the range in which the sum is being calculated
        cin>>l>>r;
        long long int sum=0;
        for(int i=l-1;i<r;i++)
        {
            sum=sum+arr[i];
        }
        cout<<sum<<endl;//sum displayed
    }
    return 0;
}
