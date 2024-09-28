#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n){
    string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return;
    }
    sayDigit(n/10);
    cout<<s[n%10]<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    sayDigit(n);
  return 0;
}