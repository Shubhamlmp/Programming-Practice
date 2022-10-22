#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    long long sum=0;
    for(int i=0;i<str.size();i++)
    {
        sum=sum+(int)(str[i]-'0');
    }
    cout<<sum<<endl;
    return 0;
}
