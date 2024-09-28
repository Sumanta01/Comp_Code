#include<bits/stdc++.h>
using namespace std;
class Car{
    
    public:
    virtual void start()=0;
    virtual void stop()=0;

};
class Innova:public Car{
    public:
    void start(){
        cout<<"Innova Started"<<endl;
    }
    void stop(){
        cout<<"Innova Stopped"<<endl;
    }

};

int main()

{
    Car *c=new Innova();
    c->start();
    c->stop();
    delete c;

  return 0;
}