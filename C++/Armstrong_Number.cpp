// C++ program to check whether the number is Armstrong or not
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

// 371 = (3*3*3)+(7*7*7)+(1*1*1)    
// where:    
// (3*3*3)=27    
// (7*7*7)=343    
// (1*1*1)=1    
// So:    
// 27+343+1=371   


#include <iostream>  
using namespace std;  
int main()  
{  
    int n,r,sum=0,temp;    
    cout<<"Enter the Number=  ";    
    cin>>n;    
    temp=n;    
    while(n>0) { // loop will run until all digits of number are considered
        r=n%10; // storing the last digit of n in r
        sum=sum+(r*r*r); // calculating the cube and adding in existing sum
        n=n/10; // discarding the last digit one by one as it is taken into the account of sum
    }    
    if(temp==sum)    
        cout<<"Armstrong Number."<<endl;    
    else    
        cout<<"Not Armstrong Number."<<endl;   
    return 0;  
}  
