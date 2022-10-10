#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;//initialising n and t(no of test case)
    while(t--)
    {
        int arr[n];//creating array of size n
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int j=n-1,i=0;
        //reversing the array rather making its mirror image
        while(i<=j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        //printing the array
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
