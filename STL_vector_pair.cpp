#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<pair<int ,int >>&v){
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main()
{
    vector<pair<int ,int>>v;
    print_vector(v);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    print_vector(v);
  return 0;
}