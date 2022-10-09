#include<iostream>
#include<bits/stdc++>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]]!=0)
        {
            cout<<freq[arr[i]]<<endl;
            freq[arr[i]]=0;
        }
    }
    return 0;
}
