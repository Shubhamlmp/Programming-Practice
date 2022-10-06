#include<iostream>
using namespace std;
//making print function 
//using tail recursion in the function (i.e base case , processing,recursive relation)
void print(int n){
    //base case
    if(n==0){
        return ;
    }
   
    cout<<n<<endl;
     //Recursive relation
    print(n-1);
}
int  main(){
    int n;
    //taking input
    cin>>n;
    print(n);
    return 0;
}
