
#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,ans,swap,min,j;
    cout<<"enter no of terms"<<endl;
    cin>>n;
    cout<<"enter nos in an array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        swap=a[i];
        a[i]=a[min];
        a[min]=swap;
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i]<<" ";
    }

}
