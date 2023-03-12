#include<bits/stdc++.h>
using namespace std;
int gcd(int a ,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int lcm(int a, int b){
    int prod=a*b;
    int hcf=gcd(a,b);
    return prod/hcf;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"Gcd:"<<gcd(a,b)<<endl;
    cout<<"Lcm:"<<lcm(a,b)<<endl;
   // cout<<__gcd(11,76); inbuilt function in c++ of gcd
  return 0;
}