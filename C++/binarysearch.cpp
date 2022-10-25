/* what is binary search?
Binary Search Algorithm: The basic steps to perform Binary Search are:

Begin with the mid element of the whole array as a search key.
If the value of the search key is equal to the item then return an index of the search key.
Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
Otherwise, narrow it to the upper half.
Repeatedly check from the second point until the value is found or the interval is empty.


time complexity of binary search is O(log n)

Easiest iterative method to practice binary search
*/



#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int k){
    int s=0;
    int e=n;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid] == k){
            return mid;

        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
       
    }
    return -1;
   

    
}
int main()
{
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<" Enter the elements of array in sorted order"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" Enter the number you want to search :"<<endl;
    int k;
    cin>>k;
    cout<<"the number is present at the index: "<<endl;
    cout<< binarysearch(arr, n, k);
    return 0;
}