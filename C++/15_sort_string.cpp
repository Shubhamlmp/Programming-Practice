#include<bits/stdc++.h>
//adding reqiured library
using namespace std;

int main()
{
    int n;
    cin>>n;
    //take integer input n which is the size of string S.
	  string S;
    cin>>S;
    //take a string input S.
    char temp;
    //Declare a temporary variable for swapping the characters

    //use bubble sort to arrange the string in a definite order

    // Use a nested for loop to compare the characters and traverse through the string

    for (int i = 0; i < n; i++){

      for (int j = 0; j < n - 1; j++){
        if (S[j] > S[j + 1]){ 
          
          //if j has larger ascii value than the next,

          //swapping the prev and next characters

          temp = S[j];
          S[j] = S[j + 1];
          S[j + 1] = temp;
        }
      }
    }
  
  //Continue swapping until both the iterations are complete and the outer loop’s condition evaluates to false.
  //Hence, the string is sorted.
	
cout << S;

//Print String after sorting it.
	return 0;
}
