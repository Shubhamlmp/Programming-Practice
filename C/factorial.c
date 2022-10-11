#include <stdio.h>

//function to calculate factorial
int fact(int n)
{
 if(n==0)
 {
   return 1;
 }
 return fact(n-1)*n;
}

int main(void) {
    int num;
    //Enter a integer number to calculate its factorial
    printf("Enter a number: ");
    scanf("%d",&num);

    //calls the function fact() which return the factorial of a number
    printf("%d", fact(num));
    return 0;
}