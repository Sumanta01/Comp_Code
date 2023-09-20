#include<bits/stdc++.h>
using namespace std;
class Complex{
    private: 
    float real;
    float img;
    public:
    Complex(float real,float img){
        this->real=real;
        this->img=img;
    }
    Complex(){}
    void display(){
        cout<<"real : "<<real<<endl;
        cout<<"img : "<<img<<endl;

    }
    Complex operator+(Complex c){
        return  Complex(real+c.real,img+c.img);
    }
    Complex operator-(Complex c){
        return  Complex(real-c.real,img-c.img);
    }
};
int main()
{
    Complex a(2,3);
    Complex b(4,5);
    Complex c=a+b;
    Complex d=a-b;
    c.display();
    d.display();
  return 0;
}