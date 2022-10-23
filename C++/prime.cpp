#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter a number\n";
    cin>>num;
    i=2;
    while (i<num)
    {
        if(num%i==0)
        {
            cout<<num<<"  is not a prime number";
            break;
        }
        else
        i++;
    }
    if(i==num)
    cout<<num<<"  is a prime number";
    return 0;
}