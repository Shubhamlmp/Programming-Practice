#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    string str=str1+str2;
    char temp=str1[0];
    str1[0]=str2[0];
    str2[0]=temp;
    cout<<str1.size()<<" "<<str2.size()<<endl;
    cout<<str<<endl;
    cout<<str1<<" "<<str2<<endl;
    return 0;
}
