/Two pointers approach
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
        string s;
        cin>>s;
        int i=0,j=s.size()-1;
        
        while(i<=j)
        {
                //Case 1: If s[i] ans s[j] both are '?'
                if(s[i]=='?' && s[j]=='?')
                {
                        s[i]='a';
                        s[j]='a';
                }
                
                //Case 2: If s[i] or s[j] one of them is '?'
                else if(s[i]=='?' || s[j]=='?')
                {
                        if(s[i]=='?')   s[i]=s[j];
                        else    s[j]=s[i];
                }
                
                //Case 3: If s[i] and s[j] both are same
                else if(s[i]==s[j])
                {
                    i++;
                    j--;
                    continue;
                }
                
                //Case 4: If s[i] and s[j] both are different alphabets
                else
                {
                    cout<<-1;
                    return 0;
                }
                i++;
                j--;
        }
        cout<<s;
        return 0;
}
