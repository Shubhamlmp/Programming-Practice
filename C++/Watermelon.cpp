#include<bits/stdc++.h>
using namespace std;
 
int main()
{
       int n;
       cin>>n;
       if(n%2==0 && n>2)    //If the number is divided in 2 parts then it should be even
        cout<<"YES";
       else
        cout<<"NO";
       return 0;
}