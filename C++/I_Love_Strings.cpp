#include <iostream>
using namespace std;

int main() {
  
   int n;
   cin>>n;
   while(n--){
       string s,t;
       cin>>s>>t;
       
       string ans="";
       
       int i=0,j=0;
       int n = s.size();
       int m = t.size();
       
       while(i<n && j<m){
           ans = ans + s[i] + t[j];
           ++i;
           ++j;
       }
       
       for(;i<n;++i)
       ans=ans+s[i];
       
       for(;j<m;++j)
       ans=ans+t[j];
       
       cout<<ans<<"\n";
   }

    return 0;
}