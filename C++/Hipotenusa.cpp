#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int a, b;
    cin>>a>>b;
    int soma = pow(a,2)+ pow(b,2);
    int result = sqrt(soma);
    cout<<result<<endl;
    return 0;
}
