#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the no. to check whether + or -      :  "<<endl;
    cin>>x;

    if(x>0)
    {
        cout<<"+";

    }


    else if(x==0)
    {
        cout<<"The  no. is 0"<<endl;
    }

    else
    {
        cout<<"-";
    }

    

    return 0;
}