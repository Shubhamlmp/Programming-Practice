#include<iostream>

using namespace std;

void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void swap(int arr[],int n)
{
    for(int i=0,j=1;j<n;i++,j++)
    {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++,j++;
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
int arr[10000],n;
cout<<"enter size of arry\n";
cin>>n;

input(arr,n);
swap(arr,n);
print(arr,n);

return 0;
}