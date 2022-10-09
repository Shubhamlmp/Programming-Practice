#include               <bits/stdc++.h>
#define int long long
using namespace std;


int sum(int arr[], int n) {
        if (n==1){
            return arr[0];
        }
        int sum1=arr[0];
        sum1=sum1+sum(arr+1,n-1);
        return sum1;
    

}

int32_t main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}
