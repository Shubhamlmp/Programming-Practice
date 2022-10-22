#include <bits/stdc++.h>
using namespace std;

class go{
    public:
        int x;
        go(){
            cout<<"constructor is called"<<endl;//default constructor
        }
        go(int a){// parameterised constructor
            x=a;
            cout<<this; //containing address of current obj
        }
        go(go &i){// copy constructor, we use '&' to avoid infinite loop
            x=i.x;
        } 
        void print(){
            cout<<this->x;
        }
};

int main()
{
    go a0;
    go a1(20);
    go a2(a1);
    cout<<a2.x<<endl;
    cout<<&a1<<endl;
    a1.print();
    return 0;
}
