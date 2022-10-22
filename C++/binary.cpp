/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// Function For Binary Search....
int binary_search(int arr[],int x,int low,int high)
{
    while(low <= high)
    {
        // Calculate mid value...
        int mid = (high + low) / 2;

        if(x == arr[mid])
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
    
}
int main()
{
    int n,result,ele;
    int arr[n];

    // Take input from user...
    cout<<"Enter Size of an Array: ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Array Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // Sort array for implementing Binary Search...
    sort(arr,arr+n);

    // Get the Element for searching...
    cout<<"\nEnter Element For Searching: ";
    cin>>ele;

    // Call binary_search()...
    result = binary_search(arr,ele,0,n-1);

    // Print the result...
    if(result == -1)
    {
        cout<<"Sorry, Element Not Present...!"<<endl;
    }
    else
    {
        cout<<ele<<" Found Successfully at index: "<<result;
    }

    return 0;
}