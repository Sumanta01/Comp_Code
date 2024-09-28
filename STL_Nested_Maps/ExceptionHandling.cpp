#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try{
        if(b==0){
            throw "Division by zero is not possible";
        }
        else{
            cout<<a/b<<endl;
        }
    }catch(const char *e){
        cout<<e<<endl;
    }
    
  return 0;
}