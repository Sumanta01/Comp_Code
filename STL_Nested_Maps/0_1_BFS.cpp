#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e9+10;
vector<pair<int ,int>>g[N];
vector<int>levl[N];
int n,m;
int bfs(){
  deque<int>q;
  q.push_back(1);
  levl[1]=0;
  while(!q.empty()){
    int cur_v=q.front();
    q.pop_front();

    for(auto child:g[cur_v]){
      int child_v=child.first;
      int wt=child.second;
      if(levl[cur_v]+wt<levl[child_v]){
        levl[child_v]=levl[cur_v]+1;
      
      if(wt==1){
        q.push_back(child_v);
      }
      else{
        q.push_front(child_v);
      }

      }
      
    }

  }
  return levl[n]==INF ? -1:levl[n];

}
int main()
{
cin>>n>>m;
for(int i=0;i<m;i++){
  int x,y;
  cin>>x>>y;
  if(x==y) continue;
  g[x].push_back({y,0});
  g[y].push_back({x,1});

}
cout<<bfs()<<endl;

  return 0;
}
