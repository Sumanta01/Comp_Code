#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int >v={1,2,3,4};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<pair<int ,int >>v_p={{2,1},{4,5},{7,3}};
    vector<pair<int ,int >>::iterator it;
    for( it=v_p.begin();it!=v_p.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<"============================"<<endl;
    for(it=v_p.begin();it!=v_p.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
   
  return 0;
}