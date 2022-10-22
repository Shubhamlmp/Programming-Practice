#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);
    int i=0,j=0;
    while(i<str1.size() && j<str2.size())
    {
        if(str1[i]-'a'<str2[j]-'a')
        {
            cout<<str1<<endl;
            return 0;
        }
        else if(str1[i]-'a'>str2[j]-'a')
        {
            cout<<str2<<endl;
            return 0;
        }
        i++;
        j++;
    }
    if(i==str1.size())
    {
        cout<<str1;
        return 0;
    }
    else if(j==str2.size())
    {
        cout<<str2;
        return 0;
    }
    return 0;
}
