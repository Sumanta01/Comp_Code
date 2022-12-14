/*Given a number N print its Factorial
 Constraints
 1<=N<=100 
 print answer in module m
 where module m=47 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=47;
    long long int fact=1;
   for(int i=2;i<=n;i++){
   fact=(fact*i)%m;
    }
   cout<<fact;
  return 0;
}