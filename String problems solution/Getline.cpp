#include <iostream>  
#include<string.h>  
using namespace std;  
int main()  
{  
string profile; 
std::cout << "Enter your profile :" << std::endl;  
getline(cin,profile,' '); // implementing getline() function with a delimiting character.  
cout<<"\nProfile is :"<<profile;  
} 