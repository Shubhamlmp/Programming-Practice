#include <iostream>
using namespace std;
static int count=0;
int Partition(int a[],int low,int high)
{  
    int i=low+1,j=high;
    int pivot=a[low];
    do
    {
    while(a[i]<=pivot)
    {
        i++;
        count++;
    }
    while(a[j]>pivot)
    {
        j--;
         count++;
    }
    if(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
         count++;
    }
     count++;
    }while(i<j);
    count++;
    int temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void Quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=Partition(a,low,high);
        Quicksort(a,low,mid-1);
        Quicksort(a,mid+1,high);
    }
}
int main() {
   int n;
   cout<<"Enter number of players:";
   cin>>n;
   int a[n],low=0,high=n-1;
   cout<<"Enter the player's rating:";
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   //a[i]=rand()%100;
   }
   Quicksort(a,low,high);
   cout<<"Team1:\n";
   for(int i=0;i<n/2;i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<"\nTeam2:\n";
   for(int i=n/2;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<"\nNo of comparisons:"<<count;
    return 0;
}