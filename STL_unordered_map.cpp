#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int ,string>&m){
    cout<<m.size()<<endl;
    for(auto u:m){
        cout<<u.first<<" "<<u.second<<endl;
    }
}

int main()
{
    unordered_map<int ,string>m;
    m[5]="tyu";
    m[2]="bgi";
    m[1]="ggt";
    m[4]="rrr";
    m[7]="uyt";
    print(m);


  return 0;
}