#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int luckyNumber[100000]={0} , flag =0;
    luckyNumber[4]=1;
    luckyNumber[7]=1;
    luckyNumber[44]=1;
    luckyNumber[47]=1;
    luckyNumber[74]=1;
    luckyNumber[77]=1;
    luckyNumber[444]=1;
    luckyNumber[447]=1;
    luckyNumber[474]=1;
    luckyNumber[477]=1;
    luckyNumber[774]=1;
    luckyNumber[777]=1;
    luckyNumber[747]=1;
   luckyNumber[744]=1;
   luckyNumber[4747]=1;
   luckyNumber[4444]=1;
   luckyNumber[4447]=1;
   luckyNumber[4474]=1;
   luckyNumber[4477]=1;
   luckyNumber[4777]=1;
   luckyNumber[4744]=1;
   luckyNumber[4774]=1;
   luckyNumber[7474]=1;
   luckyNumber[7777]=1;
   luckyNumber[7774]=1;
   luckyNumber[7747]=1;
   luckyNumber[7744]=1;
   luckyNumber[4477]=1;
   luckyNumber[7444]=1;
   luckyNumber[7477]=1;
   luckyNumber[7447]=1;

 // we took two integer input num1, num2 
   int num1, num2;
   cin>>num1,num2;

  // started a loop fron one integer to another one .... from num1 to num2 
  // then checked the number if it is equal to 1 or not
  // if it's 1 then print or cout the number and increase flag by 1
  // if not then simply print -1 

   for(int i= num1 ;i <=num2;i++){
    if(luckyNumber[i] == 1){
        cout << i << " ";
         flag=1;
    }
   }
   if(flag == 0){
    cout << "-1" << endl;
   }
}
