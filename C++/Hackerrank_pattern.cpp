//Hacker rank pattern printing problem
#include <iostream>
using namespace std;

/*(Enter any number you wish)
if you enter 3 as input then output :
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/
int main()
{
int number;
cout<<"Enter Number :";//enter number for printing pattern
cin>>number;
int size=2*number-1;
int start=0;
int end=size-1;
int temp_array[size][size];
while(number!=0)
{
    for(int i=start;i<=end;i++)
    {
        for(int j=start;j<=end;j++)
        {
            if(i==start || j==start || i==end || j==end)
            {
                temp_array[i][j]=number;
            }
        }
    }
    ++start;
    end--;
    --number;
}
 for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
               cout<<temp_array[i][j]<<" ";
        }
        printf("\n");
    }
}
