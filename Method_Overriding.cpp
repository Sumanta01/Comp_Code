#include<bits/stdc++.h>
using namespace std;
class A{
    public:
     virtual void fun(){
        cout<<"Base Class"<<endl;
     }
};
class B:public A{
    public:
    void fun(){
        cout<<"Derived Class"<<endl;
    }
};
int main()
{
     A *a=new B();
     a->fun();
    // a->fun(32,55,43);
   A *b=new A();
   b->fun();

    
  return 0;
}