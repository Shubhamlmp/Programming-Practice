Program: 

#include <stdio.h>
int gcd();

int gcd(int m[],int l)
{
  int i,pos,j,gcd2,min=m[0];
  for(i=0;i<l;i++)
  {
    if(min>m[i])
    {
        min=m[i];pos=i;
    }
  }
  for (j=0; j<l; j++)
  {
    if((m[j]%min==0))
    {
        gcd2=min;
    }
    else{
        min--;j=0;
    }
  }

  return gcd2;
  
}

void main()
{
    int n,k;
    printf("Enter the number of variables: ");
    scanf("%d", &n);int a[n];
    printf("\nEnter the elements: \n");
    for(k=0;k<n;k++)
    {
      printf("A[%d]: ", (k+1));
      scanf("%d", &a[k]);
    }
    printf("The GCD of the inputed numbers are: %d", gcd(a,n));
}

Output:

Enter the number of variables: 2

Enter the elements: 
A[1]: 6
A[2]: 10
The GCD of the inputed numbers are: 5
