#include<bits/stdc++.h>
using namespace std;
int sum_of_digit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,n2;
    cin>>n>>n2;
   cout<<sum_of_digit(n)+sum_of_digit(n2);

    
  return 0;
}