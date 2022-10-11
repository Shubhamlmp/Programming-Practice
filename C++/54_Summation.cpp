
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


    // Findig Sum of Elements
    for(int i=0;i<N;i++)
    {

        sum+=arr[i];

    }

    //abs(num) return positive value of that num
    cout<<abs(sum)<<"\n";



    return 0;
}
