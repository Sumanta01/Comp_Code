#include<bits/stdc++.h>
using namespace std;
class Circle{
    public:
    virtual void draw(){
        cout<<"Drwaing a Circle"<<endl;
    }
};
class Rectangle:public Circle{
    public:
    void draw() override{
        cout<<"Drwaing a Rectangle"<<endl;
    }
};
int main()
{
    Circle* c;
    Circle c2;
    Rectangle r;

    c=&c2;
    c->draw();
    c=&r;
    c->draw();
  return 0;
}