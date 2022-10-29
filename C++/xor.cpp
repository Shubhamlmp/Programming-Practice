#include<iostream>
#include<vector>
using namespace std;


int main(){
    long long a, b, q;
    cin >> a >> b >> q;
    if(q==1)    cout << a;
    else if(q==2)   cout <<b;
    else{
        vector<int> vec(q+2, 0);
        vec[1] = a, vec[2] =b;
        for(int i=3; i<=q; i++){
            vec[i] = vec[i-1]^vec[i-2];
        }
        cout << vec[q];
    }

    
    return 0;
}
