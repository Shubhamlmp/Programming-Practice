#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            mp[arr[i][j]]++;
        }
    }
    int num;
    cin>>num;
    if(mp[num]>0)
    {
        cout<<"will not take number"<<endl;
    }
    else{
        cout<<"will take number"<<endl;
    }
    return 0;
}
