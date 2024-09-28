#include<bits/stdc++.h>
using namespace std;
int Count_Number(int n){
  
  if(n==0){
    return 0;
  }
  return 1+Count_Number(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<Count_Number(n);
  return 0;
}