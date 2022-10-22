/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

// How to create 2D array...
int main()
{
    // first way...
    int a[3][4] = {
        {1,2,3,4},
        {4,5,6,7},
        {8,9,19,4}
    };
    cout<<a[2][3]<<"\n";   //Print 4



// second way...
    int *b[3];
    // b[0] = (int *)malloc(4*sizeof(int));

    b[0] = new int(4);
    b[1] = new int(4);
    b[2] = new int(4);

     for(int i=0;i<3;i++)
     {
        for(int j=0;j<4;j++)
        {
            b[i][j] = (i+j) + 1;
        }
     }
    cout<<"Array B is:\n ";
    for(int i=0;i<3;i++)
     {
        for(int j=0;j<4;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
     }


    //  third way...
    int** c     //double pointer...

    // c = (int **)malloc(3*sizeof(int));
    c = new int*[3]
    c[0] = new int[4];
    c[1] = new int[4];
    c[2] = new int[4];
    for(int i=0;i<3;i++)
     {
        for(int j=0;j<4;j++)
        {
            c[i][j] = (i+j) + 2;
        }
     }

     cout<<"Array C is:\n ";
    for(int i=0;i<3;i++)
     {
        for(int j=0;j<4;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
     }

    return 0;
}