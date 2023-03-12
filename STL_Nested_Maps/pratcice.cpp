#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=v[i];
    if(v[i]!=0)
    cout<<v[i]+1<<" ";
   }
    cout<<endl;
    cout<<sum<<endl;

  return 0;
}