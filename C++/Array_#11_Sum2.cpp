
#include <bits/stdc++.h>
using namespace std;

int main()
{  
   
   int n; // define n
   
   cin >> n; // taking input for n
   
   long long int x; // define x by long long because digit can be very long
   
   cin >> x; // taking input for x
   
   int sum1 = 0; //define sum as sum1
   
   while(x>0) // iterate till x becomes less then or equal to zero
   {
      int temp = x%10; //assigning temp to last digit of x
      x = x/10; //removing last digit from x digit
      sum1 += temp;  //adding last digit temp to sum1  
   }
   
   cout << sum1; // printing total sum of digits
   
   return 0;
}