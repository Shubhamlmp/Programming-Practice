
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

    //Reading Element To be searched
    ll target;
    cin>>target;


    int flag=0; //To find out whether element was in the array or not
    //flag==0 represents not Present

    // Findig if target Element Exist Or Not
    for(int i=0;i<N;i++)
    {

        if(arr[i]==target)
        {   
            //Target Element found
            cout<<i<<"\n";
            flag=1;
            break;
        }

    }


    
    //Target Element Not Found
    if(flag==0)
        cout<<-1<<"\n";

    

    return 0;
}
