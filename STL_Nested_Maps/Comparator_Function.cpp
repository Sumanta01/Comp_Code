#include<bits/stdc++.h>
using namespace std;
// bool cmp_fun(int a ,int b){
//     return a<b;
// }
bool cmp_fun(pair<int ,int >a,pair<int ,int>b){
   if(a.first!=b.first){
        return a.first<b.first;

   }
   return a.second>b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int ,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
   sort(v.begin(),v.end(),cmp_fun);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
  return 0;
}