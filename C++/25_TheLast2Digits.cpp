#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ans = a*b*c*d;
    int ans2 = ans/10;
    
    while(!(ans<10)){
        ans = ans%10;
    }
    while(!(ans2<10)){
        ans2 = ans2%10;
    }
    // cout << ans << " " << ans2 << endl;

    int totl = ans2*10 + ans;

    cout << totl << endl;
}