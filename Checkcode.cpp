#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    string code;
    cin>>code;
    if(num1+num2+1!=code.size())
    {
        cout<<"No"<<endl;
        return 0;
    }
    if (code[num1]!='-')
    {
        cout<<"No"<<endl;
        return 0;
    }
    int counter=0;
    for(int i=0;i<code.size();i++)
    {
       if(code[i]>=48 && code[i]<=57 && i!=num1)
       {
        counter++;
       } 
    }
    if(counter==num1+num2)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
