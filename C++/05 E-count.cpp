#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,s;
    cin>>str;
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        char ch=str.at(i);
        s=ch;
        sum+=stoi(s);
    }
    cout<<sum;
    return 0;
}
