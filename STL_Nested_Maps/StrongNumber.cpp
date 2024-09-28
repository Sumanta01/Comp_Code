#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n<2){
        return 1;
    }

    return n*factorial(n-1);
}
bool findStrongNumber(int n){
    int sum_fact=0;
    int temp=n;
    while(n>0){
        int rem=n%10;
        sum_fact+=factorial(rem);
        n/=10;
    }
    return temp==sum_fact;
}

int main()
{
    int n;
    cin>>n;
    cout<<boolalpha<<findStrongNumber(n)<<endl;
    
  return 0;
}