#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,s,st;int c=0,n;
    cin>>n;
    
    while(n!=0){
        cin>>str;
    if(str.size()<=10)
    {
        cout<<str<<endl;
    }
    else{
    s=str[0];
    st=str[str.size()-1];
    c=0;
    for(int i=0;i<str.size()-2;i++)
    {
        c++;
    }
    cout<<s<<c<<st<<endl;
    }
    n--;
    }
    return 0;
}