// recursive implementation of Knapsack problem .
  
#include<bits/stdc++.h>
using namespace std;
// A utility function that returns
// maximum of two integers
int max(int a,int b){
	return (a>b)?a:b;
}
// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapsack(int w, int wt[],int val[],int n){
  // Base Case
	if(n==0||w==0){
		return 0;
	}
   // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
	if(wt[n-1]>w){
		return knapsack(w,wt,val,n-1);
     // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
	}
	else
		return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
 
    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
}
// Driver code
int main(void){
	int val[]={60,100,120};
	int wt[]={40,20,30};
	int W=50;
	int n=sizeof(val)/sizeof(val[0]);
	cout<<knapsack(W,wt,val,n)<<endl;
}
