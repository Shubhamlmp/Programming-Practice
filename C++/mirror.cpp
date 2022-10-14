#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t>>n;//initialising n and t(no of test case)
    while(t--)
    {
        int arr[n];//creating array of size n
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        //reversing the array rather making its mirror image
        //printing the array in reverse
        for(int i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
