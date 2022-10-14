#include <stdio.h>
#include <stdlib.h>
int main(void){
    //The array of integers
    int array1[] = {1, 2, 5, 7, 9, 10, 12};
    int arr_size = sizeof(array1)/sizeof(array1[0]);

    //print even integers
    printf("%d",test(array1, arr_size));
  }   

  //function to check if an integer is even or not 
  int test(int nums[], int arr_size)
         {
            int evens = 0;
            for (int i = 0; i < arr_size; i++)
            {
                //if number is divisible by 2 it is even
                if (nums[i] % 2 == 0) evens++;
            }
            return evens;
      }  