#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\\';i++)
    {
        cout<<str[i];
    }
    return 0;
}
