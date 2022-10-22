#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    map<char,int>mp;
    sort(str.begin(),str.end());
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }
    for(int i=0;i<str.size();i++)
    {
        if(mp[str[i]]!=0)
        {
            cout<<str[i]<<" : "<<mp[str[i]]<<endl;
            mp[str[i]]=0;
        }
    }
    return 0;
}
