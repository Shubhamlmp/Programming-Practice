#include<iostream>
#include<vector>
using namespace std;


int main(){
    long long  n;
    cin >> n; 
    cout << ((__builtin_popcountll(n)==1) ? "YES" : "NO");
    return 0;
}
