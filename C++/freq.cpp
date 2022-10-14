#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;//initialising n and m
    cin>>n>>m;
    int arr[m+1]={0};//creating array of size n
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(arr[num]==0)
        {
            arr[num]=1;
        }
        else
        {
            arr[num]=arr[num]+1;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<arr[i]<<endl;//printing frequecy of each element
    }
    return 0;
}
