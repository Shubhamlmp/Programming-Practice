#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"enter two numbers\n";
    cin>>a>>b;
    i=b;
    while (i>0)
    {
        if((b%i==0)&&(a%i==0))
        {
            cout<<i<<" is gretest common divisor of "<<a<<" and "<<b;
            break;
        }
        i--;
    }
    return 0;
    
}