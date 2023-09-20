#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        } 
    }
    return true;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
  return 0;
}