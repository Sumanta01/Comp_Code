#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > v={12,33,44,56,78};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   vector<int>::iterator it=v.begin();
   for( it=v.begin();it!=v.end();it++){
    cout<<*it<<" "; 
   }
  return 0;
}