#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
  // here we are storing the last digit of the array
	int l=arr[n-1];
	
	cout<<l<<" ";
  // after printing last digit we again run a loop from 1st index to 2nd last digit
	for(int i=0; i<n-1; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
