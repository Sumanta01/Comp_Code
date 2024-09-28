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
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }


};
int main()
{
    Employee e;
    e.setId(100);
    e.setName("Rahul");
    cout<<e.getId()<<endl;
    cout<<e.getName()<<endl;
  return 0;
}