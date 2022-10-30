#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n ; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++)
	cin >> vec[i];
    vector<int> next(n);
    for(int i=0; i<n; i++)
	cin >> next[i];
    copy (next.begin(), next.end(), back_inserter(vec));
    for(int i=0; i<2*n; i++){
	cout << next[i] << " ";	
    }
    return 0;
}
