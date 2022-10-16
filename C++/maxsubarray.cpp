#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter;
    cin>>counter;
    while(counter--)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            cout<<arr[i]<<" ";
        }
        int i=0;
        int z=0;
        int ma;
        while(true)
        {
            if(z==size-1)
            {
                break;
            }
            if(i==z)
            {
               ma=max(arr[i],arr[i+1]);   
            }
            else{
                ma=max(ma,arr[i+1]);
            }
            cout<<ma<<" ";
            i++;
            if(i==size-1)
            {
                z++;
                i=z;
            }
        }
        cout<<endl;
    }
    return 0;
}
