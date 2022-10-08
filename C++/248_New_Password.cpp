#include <bits/stdc++.h>
using namespace std;
/* Explanation 
   To make the length of the password as mentioned in the ques upto the give leangth
   and with distinct letters. 
   
   We can take the first letter to be 'a' and keep on going to the next character until
   the number of distinct char becomes equal to the given size and then again repeat form
   character 'a' so that number of the same distinct char remains same,
   
   For eg if we take input  4 3
   then we have to go form a b c to match the required dinstinct char and again print 'a' 
   int the end . So the answer is "abca";
*/
int main(){
    int length;
    cin>>length;
    int no_of_distinct_char;
    cin>>no_of_distinct_char;
    char k='a'; //starting from a character
    int p=1;
    for(int i=0;i<length;i++){
        cout<<k;
        p++;
        k++;     //increases the char  by one means make a b and b to c and so on.
        if(p==no_of_distinct_char+1){  // if it  becomes equal to the number of distinct char we
            k='a';                     //we will again make it 'a'.
            p=1;
        }
    }
    return 0;
}