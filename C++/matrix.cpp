#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int i=0,j=0;
    int ms=0,sc=0;
    while(i<n && j<n)
    {
         ms=ms+arr[i][j];
         i++;
         j++;
    }
    i=0,j=n-1;
    while(i<n && j>=0)
    {
        sc=sc+arr[i][j];
        i++;
        j--;
    }
    int ans=abs(ms-sc);
    cout<<ans<<endl;
    return 0;
}
