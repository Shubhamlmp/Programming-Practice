//getter and setters
#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int rollno;
    public:
        string name;
        static int count;
        Student(){
             count++;
        }
        void getRollno(){
            cout<<rollno<<endl;
        }
        void setRollno(int x){
            rollno = x;
        }
        void setname(int r,string s){
            if(r = 12){//kind of password
                name =  s;
            }
        }
        void total(){
            cout<<count;
        }
};
int Student::count=0;

int main()
{
    Student s1;
    Student s2;
    s1.setRollno(12);
    s1.getRollno();
    s1.setname(12,"Raghav");
    cout<<s1.name<<endl;
    s2.setRollno(13);
    s2.setname(12,"Swami");
    cout<<s2.name<<endl;
    s1.total();
    return 0;
}