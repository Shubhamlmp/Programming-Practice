#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;//initialising n and m
    cin>>n>>m;
    int arr[n];//creating array of size n
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>freq;//creating map to keep count of the frequency
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;//counting frequecy of each element
    }
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]]!=0)
        {
            cout<<freq[arr[i]]<<endl;//printing frequency of each element once
            freq[arr[i]]=0;//making frquency zero after printing the frequency of the element so that elements are not repeatedly printed 
        }
    }
    return 0;
}
