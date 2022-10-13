#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s, t; // declare two string variables
    cin>>s; //take first string as s
    cin>>t; // take second string as t
    
    // Now we will use size() fucntion of STL to print the sizes of both the strings
    
    cout<<s.size()<<" "<<t.size();
    cout<<endl; // we need to change the line using 'endl' keyword
    cout<<s<<" "<<t; //print the strings as well.
    return 0;
}
