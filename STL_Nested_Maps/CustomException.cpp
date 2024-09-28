#include<bits/stdc++.h>
using namespace std;
class CustomException:public exception{
    public:
    const char *what() const noexcept override{
        return "Custom Exception age is not valid !";
    }
    
};
int main()
{
    int age;
    cin>>age;
    try{
        if(age<=18){
            throw CustomException();
        }
        else{
            cout<<"Age is valid"<<endl;
        }
    }catch(const CustomException &e){
        cout<<e.what()<<endl;
    }
  return 0;
}