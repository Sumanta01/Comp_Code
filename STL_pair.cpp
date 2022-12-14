#include<bits/stdc++.h>
using namespace std;
int main()
{
   // pair<int ,string>p;
   // cout<<p.first<<" "<<p.second<<endl;
    //Another method initialize pair
   // p={23,"sun"};
   // cout<<p.first<<" "<<p.second<<endl;
   // pair<int ,string>&p2=p;
   // p2.first=90687;
  //  cout<<p.first<<" "<<p.second<<endl;
   // Pair of array initialization
   int a[]={1,2,3};
   int b[]={2,3,4};
   pair<int ,int>p_arr[3];
   p_arr[0]={1,2};
   p_arr[1]={2,3};
   p_arr[2]={3,4}; 
   swap(p_arr[0],p_arr[2]);
   for(int i=0;i<3;i++){
    cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
   }
   //user input of pair
   pair<int ,int >p3;
   cin>>p3.first;
   cout<<p3.first<<endl;


    
  return 0;
}