#include<iostream>

using namespace std;

void input(int input[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
}

void print(int print[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<print[i];
    }
}

int unique(int arr[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
int arr[1000],n;
cout<<"enter size of arry\n";
cin>>n;

input(arr,n);
cout<<unique(arr,n);
return 0;
}