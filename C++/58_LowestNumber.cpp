
#include <bits/stdc++.h>


using namespace std;


typedef long long ll;

int main() {

  
   


    //To read No of elements in array

    int N;
    cin>>N;


    ll arr[N];


    ll sum=0;

    //Reading Array Elements
    for(int i=0;i<N;i++)
        cin>>arr[i];

   ll min_element=arr[0];  // Assuming 1st element to be smallest and Comparing With Others
   ll pos=1 ;   // 1 based Indexing


   

    // Findig if target Element Exist Or Not
    for(int i=1;i<N;i++)
    {

        if(arr[i]<min_element)
        {   
            //Minimum Element found
            //Update Minimum Element and its Position
           min_element=arr[i];
           pos=i+1;
        }

    }


    
        cout<<min_element<<" "<<pos<<"\n";

    

    return 0;
}
