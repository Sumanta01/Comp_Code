#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,count=0;
  cin>>n; 
  for(int i=2;i<n;i++){
    if(n%i==0)
       count++;
  }

  if(count==0){
    cout<<"Prime number"<<endl;
  }
  else{
    cout<<"Not prime number"<<endl;
  }



  return 0;
}