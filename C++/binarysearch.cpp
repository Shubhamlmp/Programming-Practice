#include<iostream>

using namespace std;

void input(int input[],int size)
{
    cout<<"enter elements of arry in sorted order\n"
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
}

void sort(int arr[]; int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

int main()
{
int arr[1000],n;
cout<<"enter size of arry\n";
cin>>n;
input(arr,n);


return 0;
}