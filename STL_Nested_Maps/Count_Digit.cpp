#include<bits/stdc++.h>
using namespace std;
int countDigit(long long int n, int digit){
    int count=0;
    while(n>0){
    if(n%10==digit){
        count++;
    }
    n/=10;
    }
    return count;
}

int main()
{
    long long int n,digit;
    cin>>n;
    cin>>digit;
    int result=countDigit(n,digit);
    cout<<result;
  return 0;
}