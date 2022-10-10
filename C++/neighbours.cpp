#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int i,j;//taking the position of x and y
    cin>>i>>j;
    i=i-1;
    j=j-1;
    //making x and y accoring to index of the array
    bool c1=false,c2=false,c3=false,c4=false,c5=false,c6=false,c7=false,c8=false;//initialising first the condition of all the neightbours false and the checking one by one each
    if(arr[i-1][j]=='x')//for upwards
    {
        c1=true;
    }
    if(arr[i+1][j]=='x')//for downwards
    {
        c2=true;
    }
    if(arr[i][j-1]=='x')//for left
    {
        c3=true;
    }
    if(arr[i][j+1]=='x')//for right
    {
        c4=true;
    }
    if(arr[i-1][j+1]=='x')//for corner upright
    {
        c5=true;
    }
    if(arr[i-1][j-1]=='x')//for corner upleft
    {
        c6=true;
    }
    if(arr[i+1][j-1]=='x')//for corner downleft
    {
        c7=true;
    }
    if(arr[i+1][j+1]=='x')//for downright
    {
        c8=true;
    }
    if(i==0)//cornercase for i==0
    {
        c1=true;
        c6=true;
        if(j==0)//cornercase j==0
        {
            c3=true;
        }
        c5=true;
        if(j==m-1)//for cornercase j==m-1
        {
            c4=true;
        }
    }
    if(i==n-1)//for cornercase i==n-1
    {
        c2==true;
        c7=true;
        c8=true;
        if(j==0)//for cornercase j==0
        {
            c3=true;
        }
        if(j==m-1)//for cornercase j==m-1
        {
            c4=true;
        }
    }
    if(c1 && c2 && c3 && c4 && c5 && c6 && c7 && c8)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
