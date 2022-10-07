#include <iostream>
using namespace std;
// Function for demonstration
void letsreplace(string str1, string str2, string str3, string str4)
{
// The first 8 characters will be replaced starting from 30 position
str1.replace(30, 8, str2);
cout << str1 << endl;
// Thestr four will have a string appended at the beginning
str4.replace(5, 0, " Hey, how are you ");
cout << str4 << endl;
// It will start replacing at the beginning and end
str4.replace(5, 5, str3, 0, 11);
cout << str4 << endl;
// It will repalce 1 character at 14 and append exclamation after it
str4.replace(14, 1, 3, '!');
cout << str4 << endl;
}
// Main code
int main()
{
string str1 = "This is an example of replace function in C++";
string str2 = "Example";
string str3 = "Xebia ";
string str4 = "Hello Xebia !";
letsreplace(str1, str2, str3, str4);
return 0;
}