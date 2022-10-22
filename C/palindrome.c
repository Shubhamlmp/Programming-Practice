#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[] = { "abba" }; //change string to check here
    int l = 0;
    int h = strlen(str) - 1;
 
    while (h > l) {
        if (str[l++] != str[h--]) { //checks if first x char and last x char are the same
            printf("%s is not a palindrome\n", str);
            return 0;//ends the program here
        }
    }
 
    printf("%s is a palindrome\n", str);
 
    return 0;
}