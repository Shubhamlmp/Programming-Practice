#include<iostream>
#include<vector>
using namespace std;

#define vii vector<int>

int solve(){
    int n;  cin>> n;
    vii vec(n, 0);
    for(int i=0; i<n; i++) cin >> vec[i];
    int cnt =0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(j>0 && i!=j && vec[j]<vec[j-1])
                break;
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int t;  cin >> t;
    while(t--){
        cout << solve() << "\n";
    }
    return 0;
}
