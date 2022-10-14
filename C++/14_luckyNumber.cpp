/*
firstly we will define all the possible cases between 1 to 1000000 .
then we will take two integer input of num1 and num2 .
then possibly create an for loop and run the loop from num1 to num2 
then for every value of i check the condition  "luckyNumber[i] == 1"
if true then cout/print i.
and raise the  value of flag ==1 .
else if flag == 0 , then return -1 ;

hence solved .
*/


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

   int num1, num2;
   cin>>num1 >> num2;
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


// happy coding :)
