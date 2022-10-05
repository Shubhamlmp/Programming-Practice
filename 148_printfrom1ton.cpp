#include<iostream>
using namespace std;
//making print function 
//using head recursion in the function (i.e base case , recursive relation , processing)
void print(int n){
    //base case
    if(n==0){
        return ;
    }
    //Recursive relation
    print(n-1);
    cout<<n<<endl;
}
int  main(){
    int n;
    //taking input
    cin>>n;
    print(n);
    return 0;
}
