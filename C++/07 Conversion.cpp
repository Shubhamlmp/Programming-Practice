#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,s,st;int c=0,n;char ch;
    cin>>str;
    n=str.size();
    for(int i=0;i<n;i++)
    {
        ch=str.at(i);
        if(ch==',')
        {
            str=str.replace(i,1," ");
        }
        else if(islower(ch))
        {
            s=toupper(ch);
            str=str.replace(i,1,s);
        }
        else if(isupper(ch))
        {
            s=tolower(ch);
            str=str.replace(i,1,s);
        }

    }
    cout<<str<<endl;
    return 0;
}