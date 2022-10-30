#include<iostream>
#include<vector>
using namespace std;


int main(){
    int a, b, x; 
    cin >> a >> b >> x;
    int sum =0;
    for(int i=a; i<=b; i++)
	if(i%x==0)
	    sum+=(i);
    cout << sum;
    return 0;
}
