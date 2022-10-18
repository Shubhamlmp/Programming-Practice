#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int size,sizesub;
    cin>>size>>sizesub;
    long long int arr[size],arrsub[sizesub];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<sizesub;i++)
    {
        cin>>arrsub[i];
    }
    int z=0;
    int counter=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==arrsub[z])
        {
            counter++;
            z++;
        }
    }    
    if(counter==sizesub)
    {
        cout<<"YES"<<endl;
        return 0;
    }            
    else{
        cout<<"NO"<<endl;
    }                    
    return 0;                                                                                    
}
