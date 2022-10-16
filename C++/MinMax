#include <iostream>
using namespace std;
int main (){
   int n , min=1000000,max=-1000000, min_pos,max_pos;
   cin>>n ;
   int arr[n];
   for ( int i = 0 ; i<n ; i++){
    cin>>arr[i];
    if(arr[i]<min)
    {
        min = arr[i];
        min_pos = i ;
    }
    if(arr[i]> max)
    {
        max = arr[i];
        max_pos = i ;
    }
   }
   int temp;
    temp = arr[min_pos];
    arr[min_pos] = arr[max_pos];
    arr[max_pos] = temp;
    for ( int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
