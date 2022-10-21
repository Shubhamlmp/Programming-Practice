#include<iostream>
using namespace std;
 
class Test
{
   public:
        Test()
       {
              cout<<"\n Constructor executed";
       }   
       ~Test()
        {
          cout<<"\n Destructor executed";//destructor will deallocated memory
        }
};
int main()
{
    //Static
     Test t;// for static memory destructor will call automatically

    //Dynamic
     Test *t1 = new Test;
     delete t1;// for dynamic memory we have to call destructor manually
       
    return 0;
}