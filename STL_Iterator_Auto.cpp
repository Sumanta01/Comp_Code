#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int >v={23,45,67,89};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   for(auto it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
   vector<pair<int ,int>>v_p={{2,3},{5,4},{8,2}};
   for(auto &value:v_p){
    cout<<value.first<<" "<<value.second<<endl;
   }


  return 0;
}