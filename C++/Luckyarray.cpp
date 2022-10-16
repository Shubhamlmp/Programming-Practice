#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    int m=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        m=min(m,arr[i]);
    }
    if(mp[m]%2!=0)
    {
       cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
    return 0;
}
