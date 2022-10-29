#include<iostream>
#include<vector>
using namespace std;

#define vii vector<int>

int solve(){
    int n;  cin>> n;
    char c; cin >> c;
    for(int i=0; i<n; i++)
        cout << c  << " "; 
}

int main(){
    int t;  cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}
