#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,multiset<string>> marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        int marks;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
   auto cur_it=--marks_map.end();
    while(true){
        auto &student=(*cur_it).second;
        int marks=(*cur_it).first;
        for(auto students:student){
            cout<<students<<" "<<marks<<endl; 
        }
        if(cur_it==marks_map.begin())break;
          cur_it--;
        
    }


  return 0;
}