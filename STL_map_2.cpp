#include<bits/stdc++.h>
using namespace std;
void print(map<int ,string>&m){
    cout<<m.size()<<endl;
    for(auto &p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
int main()
{
    map<int ,string>m;
    m[1]="dfy";
    m[3]="gdi";
    m[4]="bgr";
    m[5]="ijn";
   // print(m);
    auto it=m.find(7);
    m.erase(it);
    // m.clear();
   /// m.erase(3);
    // if(it==m.end()){
    //     cout<<"No value"<<endl;
    // }
    // else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
   print(m);
  return 0;
}