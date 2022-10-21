#include<bits/stdc++.h> // Use the C++ STL.
using namespace std;
int main(){
    string s;
    cin>>s; // take input
    map<char, int> mp;
    for(auto i: s)
        mp[i]++; //count frequencies using map
    for(auto i: mp)
        cout<<i.first<<" : "<<i.second<<endl; // display required output
    return 0;
}
