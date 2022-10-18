#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
int main()
{
     int n;
     cin>>n;
     int arr[n];
     int count=0;
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     int result=0;
     for(int i=0;i<n;i++)
     {
        if(arr[i]%2!=0)
        {
            cout<<0<<endl;
            return 0;
        }
        int count=0;
        while(arr[i]%2==0)
        {
            count++;
            arr[i]=arr[i]/2;
        }
        if(i==0 || result>count)
        {
            result=count;
        }
     }
     cout<<result<<endl;
     return 0;
}
