#include<iostream>
using namespace std;
int main(){
    int nu,rent;
    int a[4]={3,4,5,6};
    cin>>nu;
    int total=0;
    if(1<nu<100){
        rent=nu*a[0];
        cout<<rent<<endl;
    }
    else if(101<nu<200){
        rent=nu*a[1];
        cout<<rent<<endl;
    }
    else if(201<nu<400){
        rent=nu*a[3];
        cout<<rent<<endl;
    }
    else {
        rent=nu*a[4];
        cout<<rent<<endl;
    }
    total=rent;
    cout<<total<<" is the finalized bill"<<endl;
    return 0;

}