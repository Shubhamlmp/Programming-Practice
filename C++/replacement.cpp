#include<iostream>
using namespace std;
int  main()
{
string string1 = "Let us learn C language";
string string2 = "C++";
cout << "The string before replacement is: "<<string1<<'\n';
string1.replace(13,1,string2);
cout << "The string after replacement is: "<<string1<<'\n';
return 0;
}