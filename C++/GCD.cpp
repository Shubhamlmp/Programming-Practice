// solution for 39-GCD
#include <bits/stdc++.h>
using namespace std;

int main() {
 // a,b,c are three integers
  int a, b, c;
  
  cin >> a >> b;

  // swapping variables a and b if b is greater than a.
  if ( b > a) {   
    int temp = b;
   b = a;
    a = temp;
  }
    
  for (int i = 1; i <=  b; ++i) {
    if (a % i == 0 && b % i ==0) {
      c = i;
    }
  }
 // print the GCD 
  cout <<  c;

  return 0;
}
