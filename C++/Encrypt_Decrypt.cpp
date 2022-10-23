#include<bits/stdc++.h>
using namespace std;
int main()
{
    
 int t;
 cin>>t;
     while(t--)
     {
       int n,i,j;
       cin>>n;
       string s;
       cin>>s;
       for(i=0;i<s.length();i++)
       {
            if(s[i]=='.')
            cout<<" ";
            else if(s[i]>=97 && s[i]<=122) 
            {
                
                if(n<=25)
                {
                    if((s[i]+n)>122)
                    s[i]=s[i]-26;
                    cout<<(char)(s[i]+n);
                }
                else
                {
                    while((s[i]+n)>122)
                    s[i]=s[i]-26;
                    cout<<(char)(s[i]-32+n);
                }
            }
            
          else if(s[i]>=65 && s[i]<=90) 
            {
                
                if(n<=25)
                {
                    if((s[i]+n)>90)
                    s[i]=s[i]-26;
                    cout<<(char)(s[i]+n);
                }
                else
                {
                    while((s[i]+n)>90)
                    s[i]=s[i]-26;
                    cout<<(char)(s[i]+32+n);
                }
            }  
       }
       cout<<endl;
     }
}
