#include<bits/stdc++.h>
using namespace std;
int findLargeDigit(long  int n){
    if(n==0){
        return 0;
    }
   int  max_digit=INT_MIN;
   while(n>0){
    int digit=n%10;
    max_digit=max(digit,max_digit);
    n=n/10;
   }
   return max_digit;
}
int main()
{
    int n;
    cin>>n;
    cout<<findLargeDigit(n);
  return 0;
}