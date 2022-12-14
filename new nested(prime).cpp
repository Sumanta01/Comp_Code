#include<bits/stdc++.h>
using namespace std;
int main()
{
    int beg,end;
 cin>>beg;
 cin>>end;
 for(int i=beg;i<end;i++){
   int count=0;
   for(int j=2;j<i/2;j++){
    if(i%j==0)
     count++;
   }
   if(count==0){
    cout<<i<<" ";
   }
 }
  return 0;
}