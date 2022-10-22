#include <bits/stdc++.h>
using namespace std;

class go{
    public:
        char *x;//due to this pointer shallo copy will occur
        go(){
            cout<<"constructor is called"<<endl;
            x = new char[20];
        }
        void name(char x[7]){
            strcpy(this->x,x);
        }
        void print(){
            cout<<this->x<<endl;
        }
};

int main()
{
    char s[7]="Raghav";
    go a1;
    a1.name(s);
    go a2(a1);//here we are assignng same address to the object
    a1.x[0]= 'G';
    a1.print();
    a2.print();
    return 0;
}
