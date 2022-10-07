#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int a;
        cin >> a;
        string str;
        string st="";
        cin >> str;
        for(int i=0; i<a; i+=2){
            if(str[i]==0 && str[i+1]==0){
                st="A";
            }
            else if(str[i]==0 && str[i+1]==1){
                st="T";
            }
            else if(str[i]==1 && str[i+1]==0){
                st="C";
            }
            else if(str[i]==1 && str[i+1]==1){
                st="G";
            }
            cout << st;
        }
        cout <<endl;
	// your code goes here
	
}
return 0;
}