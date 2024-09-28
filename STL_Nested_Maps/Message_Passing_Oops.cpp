#include<bits/stdc++.h>
using namespace std;
class Object{
    public:
    void performance(){
        cout<<"Object is performing certain task"<<endl;
    }
    void interact(Object &objRef){
        cout<<"Object is interacting with another object"<<endl;
        objRef.performance();
    }
};

int main()
{
    Object ob1;
    Object ob2;
    ob1.interact(ob2);

  return 0;
}