/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// Example of indirect recursion...
void fun1(int n);
void fun2(int n);
// First Function...
void fun1(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun2(n-1);
    }
}

// Second Function...
void fun2(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun1(n/2);
    }
    
}
int main()
{
    int x = 20;
    fun1(x);
    return 0;
}