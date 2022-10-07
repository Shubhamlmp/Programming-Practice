#include <bits/stdc++.h>
using     namespace     std;

long long power(long long a, long long b, int mod)
{   long long result = 1;
    while(b) {
        if(b%2) result=(result*a)%mod;    
        a=(a*a)%mod;
        b/=2;
    }
    return result;
}

int main() 
{
    int a = 20, b = 2000000;
    int mod = 1e9+7;
    cout<<power(a,b,mod);
    return 0;
}