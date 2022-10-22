#include <iostream>  
using namespace std;  
#include <string.h>  
  
int main ()  
{  
    // declare strings  
    const char *str1 = " Welcome to JavaTpoint";  
    const char *str2 = " Welcome to JavaTpoint";  
      
    const char *str3 = " JavaTpoint";  
    const char *str4 = " Javatpoint";  
      
    cout << " String 1: " << str1 << endl;  
    cout << " String 2: " << str2 << endl;  
      
    // use strcmp() function to validate the strings are equal  
    if (strcmp (str1, str2) == 0)  
    {  
        cout << " \n Both strings are equal. " << endl;  
    }  
    else   
        {  
          
        cout << " The strings are not equal. " << endl;  
    }  
          
    cout << " \n String 3: " << str3 << endl;  
    cout << " String 4: " << str4 << endl;  
      
    // use strcmp() function to validate the strings are equal  
    if (strcmp (str3, str4) == 0)  
    {  
        cout << " \n Both strings are equal. " << endl;  
    }     
    else   
        cout << " \n The strings are not equal. ";      
          
return 0;  
}  
