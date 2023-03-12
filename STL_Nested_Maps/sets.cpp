#include<bits/stdc++.h>
using namespace std;
int main()
{
    // map<pair<int ,int >,int >m;
    // pair<int ,int >p1,p2;
    // p1={2,3};
    // p2={3,4};
    // cout<<(p1>p2);
    // map<set<int>,int>m2;
    // set<int>s1={1,2,3};
    // set<int>s2={3,4,5};

    // cout<<(s1<s2);
   
   map<pair<string,string>,vector<int>>m;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    string fn, ln;
    int count;
    cin>>fn>>ln>>count;
   for(int j=0;j<count;j++){
    int x;
    cin>>x;
    m[{fn,ln}].push_back(x);
   }
   }
   for(auto pr:m){
    auto &full_name=pr.first;
    auto &list=pr.second;
    cout<<full_name.first<<" "<<full_name.second<<endl;
    cout<<list.size()<<endl;
    for(auto &element:list){
        cout<<element<<" ";
    }
    cout<<endl;
   }
  
  return 0;
}