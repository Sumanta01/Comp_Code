#include<bits/stdc++.h>
using namespace std;

int Exponential_Number(int n, int po){
  if(po==0){
    return 1;
  }
  return n*Exponential_Number(n,po-1);
  
}
int main()
{
  int n,po;
  cin>>n>>po;
  cout<<Exponential_Number(n,po);
  
  return 0;
}