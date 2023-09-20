#include<bits/stdc++.h>
using namespace std;

void FizzBuzz(int n){
    for (int i=1;i<=n;i++){
        string ans="";
        if (i%3==0){
            ans+="Fizz";
        }
        if (i%5==0){
            ans+="Buzz";
        }
        if(i%7==0){
            ans+="Bazz";
       }
       if (ans==""){
         ans=to_string(i);
       }
       cout<<ans<<endl;

    }
}


int main()
{
    int n;
    cin>>n;
    FizzBuzz(n);
  return 0;
}