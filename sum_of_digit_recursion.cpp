#include<bits/stdc++.h>
using namespace std;
int sum_of_digit(int n){
    if(n==0){
        return 0;
    }
    return sum_of_digit(n/10 )+ (n%10);
}
int main()
{
    int n;
    cin>>n;
    cout<<sum_of_digit(n);
  return 0;
}