#include<iostream>
#include<vector>
using namespace std;

#define vii vector<int>

int solve(){
    int a,b; cin >> a >> b;
    return a+b;
}

int main(){
    int t=1;
    // cin >> t;
    while(t--){
        cout << solve() << "\n";
    }
    return 0;
}
