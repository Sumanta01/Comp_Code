#include<bits/stdc++.h>
using namespace std;
class Employee{
        
        private:
        int id;
        string name;
        
        public:
        void setId(int Empid){
            id=Empid;
        }
        void setName(string Empname){
            name=Empname;
        }

        void display(){
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
        }

};
int main()
{
   Employee emp;
   emp.setId(330);
   emp.setName("Smith");
   emp.display();
  return 0;
}