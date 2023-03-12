#include<bits/stdc++.h>
using namespace std;
int square(int n){
    return n*n;
}
int main()
{
 int n1,n2;
 cin>>n1>>n2;
 if(n1>n2){
  int temp=n1;
  n1=n2;
  n2=temp;
 }
 for(int i=n1;i<n2;i++){
        cout<<square(i)<<" ";
 }
 cout<<endl;
  return 0;
}